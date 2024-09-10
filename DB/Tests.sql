--Добавление записей в test_project
DO $$
DECLARE
    i INT;
BEGIN
    FOR i IN 0..9999 LOOP
        INSERT INTO test_project (
            id, 
            last_modified, 
            project_name, 
            team_id, 
            created_by_user_id, 
            updated_by_user_id, 
            created_on
        )
        VALUES (
            2540 + i,  -- id, начиная с 2539
            NOW(),  -- last_modified - текущее время
            'Group2_' || (2540 + i),  -- случайное имя проекта
            15,  -- team_id фиксированное значение 15
            1903 + i,  -- created_by_user_id, начиная с 1903
            1903 + i,  -- updated_by_user_id такое же, как created_by_user_id
            NOW() - (RANDOM() * (90 * INTERVAL '1 day'))  -- случайная дата в пределах последних 90 дней
        );
    END LOOP;
END $$;


delete from test_project where id between 2539 and 12538;
commit;
select max(id) from project_version;

--Добавление записей в project_version
DO $$
DECLARE
    i INT;
    project_id INT;
    proj_created_on TIMESTAMP;  -- Изменили имя переменной
BEGIN
    FOR i IN 0..9999 LOOP
        -- Получаем test_project_id и created_on из test_project
        SELECT id, created_on INTO project_id, proj_created_on  -- Изменили имя переменной здесь
        FROM test_project
        WHERE id >= 2540
        ORDER BY id
        OFFSET i LIMIT 1;

        INSERT INTO project_version (
            id, 
            created_on, 
            location, 
            test_project_id, 
            test_type, 
            content_format, 
            request_count, 
            total_duration, 
            version_number, 
            created_by_user_id, 
            content_model_version
        )
        VALUES (
            3599 + i,  -- id, начиная с 3599
            proj_created_on,  -- Используем переменную proj_created_on
            'boomq/teams/13/projects/2525/v_3588.yaml',  -- обновленный путь
            project_id,  -- test_project_id из таблицы test_project
            'STABLE',  -- test_type - фиксированное значение
            'YAML',  -- content_format - фиксированное значение
            1,  -- request_count - фиксированное значение
            60,  -- total_duration - фиксированное значение
            1,  -- version_number - фиксированное значение
            1903 + i,  -- created_by_user_id, начиная с 1903
            'V_1_0_0'  -- content_model_version - фиксированное значение
        );
    END LOOP;
END $$;



delete from project_version where id between 3599 and 13598;
