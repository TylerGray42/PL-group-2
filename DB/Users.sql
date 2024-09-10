select max(USER_ID) from boomq_user;
insert into boomq_user(user_id, email, password, enabled, display_name) values (1902, 'group2@mail.ru', '{bcrypt}$2a$10$cppoa4W4U3aG/pWyiACXvOLXMJQBs4qp6TaHGlB.EJTA8BucZK206','TRUE', 'group2users');
select * from BOOMQ_USER where USER_ID=1902;
update boomq_user
set language = 'RU', enable_notification = 'true', create_date = NOW() + (RANDOM() * (365 * INTERVAL '1 day')) 
where USER_ID = 1902;

CREATE OR REPLACE FUNCTION generate_random_string(length INT)
RETURNS TEXT AS $$
DECLARE
    chars TEXT := 'abcdefghijklmnopqrstuvwxyz';
    result TEXT := '';
    i INT;
BEGIN
    FOR i IN 1..length LOOP
        result := result || substr(chars, (random() * (length(chars) - 1 + 1))::int + 1, 1);
    END LOOP;
    RETURN result;
END;
$$ LANGUAGE plpgsql;


--Заполнение таблицы boomq_user 
CREATE OR REPLACE FUNCTION fill_users()
RETURNS VOID AS $$
DECLARE
    i INT;
    random_string TEXT;
    unique_email TEXT;
BEGIN
    FOR i IN 1903..11902 LOOP
        -- Генерация случайной строки длиной 6 английских букв
        random_string := generate_random_string(6);
        
        -- Создание уникального email
        unique_email := random_string || '@group2.ru'; 

        INSERT INTO boomq_user (user_id, email, password, language, enable_notification, create_date, enabled, display_name)
        VALUES (
            i,
            unique_email, 
            '{bcrypt}$2a$10$cppoa4W4U3aG/pWyiACXvOLXMJQBs4qp6TaHGlB.EJTA8BucZK206',
            CASE WHEN (i % 2) = 0 THEN 'RU' ELSE 'EN' END,
            TRUE,
            NOW() - (RANDOM() * (365 * INTERVAL '1 day')),
            TRUE,
            i || 'usergroup2'  
        );
    END LOOP;
END;
$$ LANGUAGE plpgsql;

SELECT fill_users();
select * from BOOMQ_USER where USER_ID BETWEEN 1902 AND 11902;
commit;
rollback;
delete from boomq_user where user_id between 1903 and 11902;
select max(user_id) from boomq_user;

select max(id) from team_member;

--Добавление записей в таблицу team_member
CREATE OR REPLACE FUNCTION fill_team_member()
RETURNS VOID AS $$
DECLARE
    i INT;
    current_user_id INT;
    permissions JSONB := to_jsonb(ARRAY['RUN', 'VIEW', 'EDIT', 'ADMIN', 'MANAGE_USERS_IN_ORG']);  -- Преобразуем массив в JSONB
BEGIN
    FOR i IN 0..9999 LOOP
        SELECT user_id
        INTO current_user_id
        FROM (SELECT user_id FROM boomq_user ORDER BY user_id OFFSET 1893 + i LIMIT 1) AS temp;

        INSERT INTO team_member (id, user_id, team_id, invitation_status, permission_list, created_at, updated_at)
        VALUES (
            1976 + i,  
            current_user_id, 
            15, 
            'ACCEPTED',  
            permissions,  -- permission_list (в формате JSONB)
            NOW() - (RANDOM() * (365 * INTERVAL '1 day')),  
            NOW() - (RANDOM() * (365 * INTERVAL '1 day'))   
        );
    END LOOP;
END;
$$ LANGUAGE plpgsql;


SELECT fill_team_member();
delete from team_member where id between 1976 and 11975;
commit;


--Заполнение таблицы authority
DO $$
BEGIN
    FOR i IN 0..9999 LOOP
        INSERT INTO authority (authority_id, authority, user_id)
        VALUES (1902 + i, 'ROLE_USER', 1902 + i);
    END LOOP;
END $$;

--Добавление отдельной группы для сгенерированных пользователей
insert into team(id, team_name, created_at, updated_at)
values (15, 'Group2BOT', NOW(), NOW());
