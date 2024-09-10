--Добавление записей в таблицу test_v2
DO $$
DECLARE
    i INT;
BEGIN
    FOR i IN 1..10000 LOOP
        
        -- Вставляем новую запись
        INSERT INTO test_v2 (id, test_project_id, test_project_version_id, state, user_id, create_date, start_date, end_date, user_email, test_mode, test_settings_location, update_date, team_id)
        VALUES (8236+i, 2539+i, 3598+i, 'FAILED', 1903+i, NOW(), '2024-08-29 11:12:06.416', '2024-08-29 11:14:19.035','psbfdo@group2.ru' , 'TEST', 'boomq/teams/13/tests/18532/settings/settings.yml', NOW(), 15);
    END LOOP;
END $$;

delete from test_v2 where id between 8237 and 18236;

-- Добавление записей в таблицу test_result_files_data
DO $$
DECLARE
    i INT;
BEGIN
    FOR i IN 1..10000 LOOP
        -- Вставляем новую запись
        INSERT INTO test_result_files_data (test_id, result_files_folder, result_files_state)
        VALUES (8236+i, 'boomq/teams/13/tests/18532/result_files/', 'FINISHED' );
    END LOOP;
END $$;

--Удаление записей из таблицы test_result_files_data 
delete from test_result_files_data where test_id between 8237 and 18236;


--Добавление записей в таблицу test_result_sla_data
DO $$
DECLARE
    i INT;
BEGIN
    FOR i IN 1..10000 LOOP
        -- Вставляем новую запись
        INSERT INTO test_result_sla_data (test_id, test_result_sla_state)
        VALUES (8236+i, 'UNDEFINED' );
    END LOOP;
END $$;

delete from test_result_sla_data where test_id between 8237 and 18236;

--Добавление записей в таблицу test_result_charts_data
DO $$
DECLARE
    i INT;
BEGIN
    FOR i IN 1..10000 LOOP
        -- Вставляем новую запись
        INSERT INTO test_result_charts_data (test_id, users_chart_svg)
        VALUES (8236+i, '<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:jfreesvg="http://www.jfree.org/jfreesvg/svg" width="150" height="75" text-rendering="auto" shape-rendering="auto">
<defs><clipPath id="_859752679873050clip-0"><path d="M 0 0 L 150 0 L 150 75 L 0 75 L 0 0 Z "/></clipPath>
<clipPath id="_859752679873050clip-1"><path d="M 25 8 L 25 53 L 138 53 L 138 8 Z "/></clipPath>
</defs>
<rect x="0" y="0" width="150" height="75" style="fill: rgb(255,255,255); fill-opacity: 1.0" clip-path="url(#_859752679873050clip-0)"/><rect x="25" y="8" width="113" height="45" style="fill: rgb(255,255,255); fill-opacity: 1.0" clip-path="url(#_859752679873050clip-0)"/><g ><text x="7" y="69.11" style="fill: rgb(0,0,0); fill-opacity: 1.0; font-family: sans-serif; font-size: 8px;" clip-path="url(#_859752679873050clip-0)">00:00:00</text></g><g ><text x="109.73" y="69.11" style="fill: rgb(0,0,0); fill-opacity: 1.0; font-family: sans-serif; font-size: 8px;" clip-path="url(#_859752679873050clip-0)">00:02:10</text></g><g ><text x="10" y="56.11" style="fill: rgb(0,0,0); fill-opacity: 1.0; font-family: sans-serif; font-size: 8px;" clip-path="url(#_859752679873050clip-0)">0</text></g><g ><text x="10" y="13.26" style="fill: rgb(0,0,0); fill-opacity: 1.0; font-family: sans-serif; font-size: 8px;" clip-path="url(#_859752679873050clip-0)">1</text></g><g style="stroke-width: 2.0;stroke: rgb(73,137,214);stroke-opacity: 1.0;stroke-linecap: square;shape-rendering:geometricPrecision;; fill: none" clip-path="url(#_859752679873050clip-1)"><path d="M 25 53 L 32.9 53 L 40.8 53 L 48.71 53 L 56.61 53 L 64.51 53 L 72.41 53 L 80.31 10.14 L 88.22 10.14 L 96.12 10.14 L 104.02 10.14 L 111.92 10.14 L 119.83 10.14 L 127.73 53"/></g></svg>' );
    END LOOP;
END $$;



