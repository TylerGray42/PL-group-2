Action()
{
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"ru");

	web_url("dev-boomq.pflb.ru", 
		"URL=http://dev-boomq.pflb.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dev-boomq.pflb.ru/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	lr_start_transaction("UC04_TR01_Authorization");
	

	//web_url("ip", 
		//"URL=https://worldtimeapi.org/api/ip", 
		//"TargetFrame=", 
		//"Resource=0", 
		//"RecContentType=application/json", 
		//"Referer=https://dev-boomq.pflb.ru/", 
		//"Snapshot=t12.inf", 
		//"Mode=HTML", 
		//LAST);
	
	web_set_max_html_param_len("2000");
	
	web_reg_save_param("token",
		"LB=authorization: ",
		"RB=\r\n",
		LAST);

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={user}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/logo_white.0cea18e85c9a77e55bb91f7a1a608eea.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_auto_header("Authorization",
		"Bearer {token}");

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param_json(
		"ParamName=team_id",
		"QueryString=$..id",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);
	
	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("token2",
		"LB=authorization: ",
		"RB=\r\n",
		LAST);

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId={team_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Content-Type",
		"application/json");

	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"{user}\",\"id\":1875,\"language\":\"EN\",\"notificationEnabled\":true}", 
		LAST);
	
	web_add_auto_header("Authorization",
		"Bearer {token2}");

	web_url("{team_id}", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/{team_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("UC04_TR01_Authorization",LR_AUTO);

	lr_start_transaction("UC04_TR02_Tests");

	web_url("label", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);
	
	//web_reg_save_param_json(
		//"ParamName=All_projects",
		//"QueryString=$..projectId",
		//"SelectAll=Yes",
		//SEARCH_FILTERS,
		//LAST);
	
	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&page=0&size=9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);
	
	//lr_save_string(lr_paramarr_random("All_projects"), "Random_project");

	lr_end_transaction("UC04_TR02_Tests",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC04_TR03_Select_Test");
	
	//web_reg_save_param_json(
		//"ParamName=All_versions",
		//"QueryString=$..version..id",
		//"SelectAll=Yes",
		//SEARCH_FILTERS,
		//LAST);
	
	web_url("15005", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	
	//lr_save_string(lr_paramarr_random("All_versions"), "Random_version");
	
	web_reg_save_param_json(
		"ParamName=location",
		"QueryString=$.location",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);

	web_url("15043", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}/version/{version_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}/version/{version_id}/downloadLink", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url={location}?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240826/us-east-1/s3/aws4_request&X-Amz-Date=20240826T123301Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=bf1639b41549a35345282fd0a41770fc9f6884edd46e0a4ef9f28b25f6da5245", "Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", ENDITEM, 
		LAST);

	lr_end_transaction("UC04_TR03_Select_Test",LR_AUTO);

	lr_think_time(5);


	lr_start_transaction("UC04_TR04_Run_test");
	
	web_reg_save_param_json(
		"ParamName=createDate",
		"QueryString=$..createDate",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_json(
		"ParamName=Run",
		"QueryString=$..id",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);

	web_add_header("Content-Type",
		"application/json");
		
	web_custom_request("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"{comment}\",\"labelSet\":[],\"projectId\":\"{project_id}\",\"projectVersionId\":{version_id},\"testMode\":\"TEST\",\"testProjectId\":\"{project_id}\",\"testProjectVersionId\":{version_id}}", 
		LAST);

	web_url("project_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("label_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	//web_reg_save_param_json(
		//"ParamName=endDate",
		//"QueryString=$.content[1].endDate",
		//"SelectAll=Yes",
		//SEARCH_FILTERS,
		//LAST);
	
	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=INITIALIZATION,WAITING,RUNNING,TEST_STOPPING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("test_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&page=0&size=7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("15005_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/load.287cb7234e668cd66173833db04886bf.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", ENDITEM, 
		"Url=/static/media/message.09d91ef8f7769e72000af31b00da82e2.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", ENDITEM, 
		LAST);

	lr_end_transaction("UC04_TR04_Run_test",LR_AUTO);

	lr_think_time(60);

	lr_start_transaction("UC04_TR05_Test_details");
	

	web_reg_save_param_json(
		"ParamName=state",
		"QueryString=$.state",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_json(
		"ParamName=displayState",
		"QueryString=$.displayState",
		SEARCH_FILTERS,
		LAST);
	
	web_url("18268", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{Run}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/time.0a39ea6cf097a189ea08f0e8e59fe026.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", ENDITEM, 
		LAST);
	
	if (strcmp(lr_eval_string("{state}"),"RUNNING") != 0 && strcmp(lr_eval_string("{displayState}"),"RUNNING") != 0) {
        lr_error_message("Test isn't running");
		lr_end_transaction("UC04_TR05_Test_details",LR_FAIL);
		return 1;
    }

	web_url("testMetric", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={Run}&testStartDate={createDate}&testEndDate=2024-08-29T20:46:46.290Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_json(
		"ParamName=URL",
		"QueryString=$.redirectUrl",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);

	
	web_url("auth", 
		"URL=https://dev-boomq.pflb.ru/grafana-srv/auth?testId={Run}&testStartTime=2024-08-26T12:34:30.611Z&testEndTime=2024-08-26T13:36:30.611Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("18268_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{Run}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testMetric_2", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={Run}&testStartDate={createDate}&testEndDate=2024-08-29T20:46:46.290Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TR05_Test_details",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("UC04_TR06_Detailed_stats");

	web_url("18268_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{Run}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testMetric_3", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={Run}&testStartDate={createDate}&testEndDate=2024-08-29T20:46:46.290Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);


	web_add_cookie("grafana_session_expiry=1724676292; DOMAIN=dev-boomq.pflb.ru");

	web_add_cookie("grafana_session=eb01bc73068377d013fb2153aa1044d7; DOMAIN=dev-boomq.pflb.ru");

	web_url("common-dashboard-tdb-13", 
		"URL=https://dev-boomq.pflb.ru{URL}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/grafana/public/build/runtime.592ab1f875d183fcac07.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/1537.caf8c5d1430033307ef5.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/147.73fef960675c84aa9a84.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/fonts/inter/UcC73FwrK3iLTeHuS_fvQtMwCp50KnMa1ZL7.woff2", "Referer=https://dev-boomq.pflb.ru/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", ENDITEM, 
		"Url=/grafana/public/build/app.5134ec4fafe46667d3cf.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/1486.9f5c58b5413b0650af69.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/img/grafana_icon.svg", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/226.e8901bdbabf874bc7825.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/7424.afad9d5bcb701f31d890.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/3633.acef4a1394f4c10cf087.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/1189.846540cbca3eb55c18a1.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=/grafana/public/build/AngularApp.cd93fabea0d7a3dbc811.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		LAST);

	web_custom_request("frontend-metrics", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/frontend-metrics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://dev-boomq.pflb.ru{URL}", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"events\":[{\"name\":\"frontend_plugins_preload_ms\",\"value\":0},{\"name\":\"frontend_app_init_ms\",\"value\":98.10000000149012}]}", 
		LAST);

	web_url("18268_4", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{Run}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testMetric_4", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={Run}18268&testStartDate={createDate}&testEndDate=2024-08-29T20:46:46.290Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../grafana/public/build/8695.c23c9961ab344f38b174.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/7307.bfc948b550f554e75772.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/53.59d9e34c172df910b888.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/9427.1e65164569048326187c.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/9734.6ba2e09bcb9d7c025793.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/3258.e6e94bbe4d45fc9db086.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/1863.dad1afc1743ccbc4ec18.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=https://dev-boomq.pflb.ru/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", ENDITEM, 
		"Url=../grafana/public/img/fav32.png", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/3312.48d5fac3b02144f52e9a.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/3069.c3a514d280a9f89eecde.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		"Url=../grafana/public/build/DashboardPage.47d249f8c940b079c4b5.js", "Referer=https://dev-boomq.pflb.ru{URL}", ENDITEM, 
		LAST);

	web_url("ca51acaf-9803-4ad8-b507-923b152a1ca9", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/dashboards/uid/ca51acaf-9803-4ad8-b507-923b152a1ca9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/grafana/public/build/postgresPlugin.5dbf50fe15160919cf74.js", "Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", ENDITEM, 
		"Url=/grafana/public/build/5216.565cbd1aa042f890edf2.js", "Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", ENDITEM, 
		LAST);

	web_custom_request("query", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"testId\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(test_id) from jmeter_metrics.sample_metric where $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_2", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_3", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_4", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_5", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		EXTRARES, 
		"Url=/grafana/public/build/grafanaPlugin.aee8494db4c836362107.js", "Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", ENDITEM, 
		LAST);

	web_custom_request("query_6", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ100", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  start_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"start_date\\\")\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":1528}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_7", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ101", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  end_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"end_date\\\")\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":1528}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_url("orgs", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/user/orgs", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/search?limit=5&type=dash-db&dashboardUID=ca51acaf-9803-4ad8-b507-923b152a1ca9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("query_8", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q100", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\""
		"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_9", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q101", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_error_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\""
		"1724675670611\",\"to\":\"1724679390611\"}", 
		EXTRARES, 
		"Url=/grafana/avatar/d60e3d7f0a3074f7f30c517366d6c0f1", "Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", ENDITEM, 
		LAST);

	web_url("annotations", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/annotations?from=1724675670611&to=1724679390611&limit=100&matchAny=false&dashboardUID=ca51acaf-9803-4ad8-b507-923b152a1ca9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("query_10", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q102", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(received_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\"1724675670611\",\""
		"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_11", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q103", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(sent_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\"1724675670611\",\"to\":"
		"\"1724679390611\"}", 
		LAST);

	web_custom_request("query_12", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q104", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"QUERY\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\\"error\\\".sum::decimal / \\\"all\\\".sum\\r\\nFROM\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not "
		"is_transaction) as \\\"all\\\",\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_error_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not is_transaction) as \\\"error\\\";\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\""
		"1724679390611\"}", 
		LAST);

	web_custom_request("query_13", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493},{\"refId\":\"RPS\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"rps\\\",\\n  \\\"metric\\\"\\nFROM (\\n  SELECT\\n    "
		"time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"rps\\\",\\n    concat('RPS ', test_id) AS \\\"metric\\\"\\n  FROM jmeter_metrics.sample_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction \\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\""
		"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_14", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q106", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, at.test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493},{\"refId\":\"Errors per second\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"err_ps\\\",\\n  \\\"metric\\\"\\nFROM "
		"(\\n  SELECT\\n    time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"err_ps\\\",\\n    concat('Errors / s ', test_id) as \\\"metric\\\"\\n  FROM jmeter_metrics.sample_error_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction\\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":13,\""
		"intervalMs\":10000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_15", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q107", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_16", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_17", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"testId\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(test_id) from jmeter_metrics.sample_metric where $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_18", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_19", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_20", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_21", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_22", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_23", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_24", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_25", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  end_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"end_date\\\")\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":1528}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_26", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ104", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  start_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"start_date\\\")\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":1528}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_url("annotations_2", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/annotations?from=1724675670611&to=1724679390611&limit=100&matchAny=false&dashboardUID=ca51acaf-9803-4ad8-b507-923b152a1ca9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("query_27", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q108", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\""
		"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_28", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q109", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_error_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\""
		"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_29", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q110", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(received_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\"1724675670611\",\""
		"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_30", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q111", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(sent_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\"1724675670611\",\"to\":"
		"\"1724679390611\"}", 
		LAST);

	web_custom_request("query_31", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q112", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"QUERY\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\\"error\\\".sum::decimal / \\\"all\\\".sum\\r\\nFROM\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not "
		"is_transaction) as \\\"all\\\",\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_error_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not is_transaction) as \\\"error\\\";\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\""
		"1724679390611\"}", 
		LAST);

	web_custom_request("query_32", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q113", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493},{\"refId\":\"RPS\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"rps\\\",\\n  \\\"metric\\\"\\nFROM (\\n  SELECT\\n    "
		"time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"rps\\\",\\n    concat('RPS ', test_id) AS \\\"metric\\\"\\n  FROM jmeter_metrics.sample_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction \\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\""
		"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_33", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q114", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, at.test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493},{\"refId\":\"Errors per second\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"err_ps\\\",\\n  \\\"metric\\\"\\nFROM "
		"(\\n  SELECT\\n    time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"err_ps\\\",\\n    concat('Errors / s ', test_id) as \\\"metric\\\"\\n  FROM jmeter_metrics.sample_error_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction\\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":13,\""
		"intervalMs\":10000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_34", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q115", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("frontend-metrics_2", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/frontend-metrics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"events\":[{\"name\":\"frontend_boot_first_paint_time_seconds\",\"value\":1.215},{\"name\":\"frontend_boot_load_time_seconds\",\"value\":23.444},{\"name\":\"frontend_boot_js_done_time_seconds\",\"value\":2.131},{\"name\":\"frontend_boot_css_time_seconds\",\"value\":0.667}]}", 
		LAST);

	web_custom_request("query_35", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_36", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_37", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_38", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_url("18268_5", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{Run}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("query_39", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"testId\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(test_id) from jmeter_metrics.sample_metric where $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_40", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_41", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_42", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('{Run}') OR test_id in ('{Run}')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_url("testMetric_5", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={Run}&testStartDate={createDate}&testEndDate=2024-08-29T20:46:46.290Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{Run}", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("query_43", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1724675670611\",\"to\":\"1724679390611\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('{Run}') OR test_id in ('{Run}')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_url("annotations_3", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/annotations?from=1724675670611&to=1724679390611&limit=100&matchAny=false&dashboardUID=ca51acaf-9803-4ad8-b507-923b152a1ca9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("query_44", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ107", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  start_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"start_date\\\")\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":1528}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_45", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ108", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  end_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"end_date\\\")\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":1528}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_46", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q116", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\""
		"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_47", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q117", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_error_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\""
		"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_48", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q121", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493},{\"refId\":\"RPS\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"rps\\\",\\n  \\\"metric\\\"\\nFROM (\\n  SELECT\\n    "
		"time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"rps\\\",\\n    concat('RPS ', test_id) AS \\\"metric\\\"\\n  FROM jmeter_metrics.sample_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction \\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\""
		"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_49", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q119", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(sent_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\"1724675670611\",\"to\":"
		"\"1724679390611\"}", 
		LAST);

	web_custom_request("query_50", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q118", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT\\n  sum(received_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":243}],\"from\":\"1724675670611\",\""
		"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_51", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q120", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}18268&orgId=14", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"QUERY\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\\"error\\\".sum::decimal / \\\"all\\\".sum\\r\\nFROM\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not "
		"is_transaction) as \\\"all\\\",\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_error_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not is_transaction) as \\\"error\\\";\",\"format\":\"table\",\"datasourceId\":13,\"intervalMs\":60000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\""
		"1724679390611\"}", 
		LAST);

	web_custom_request("query_52", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q122", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, at.test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493},{\"refId\":\"Errors per second\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"err_ps\\\",\\n  \\\"metric\\\"\\nFROM "
		"(\\n  SELECT\\n    time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"err_ps\\\",\\n    concat('Errors / s ', test_id) as \\\"metric\\\"\\n  FROM jmeter_metrics.sample_error_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('{Run}') OR test_id in ('{Run}')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction\\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":13,\""
		"intervalMs\":10000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	web_custom_request("query_53", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q123", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru{URL}&orgId=14", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"bc7e142d-d1db-4a7e-9a59-f922fbe1d91b\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('{Run}') "
		"OR test_id in ('{Run}')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":13,\"intervalMs\":10000,\"maxDataPoints\":493}],\"from\":\"1724675670611\",\"to\":\"1724679390611\"}", 
		LAST);

	lr_end_transaction("UC04_TR06_Detailed_stats",LR_AUTO);
	
	return 0;
}