Action()
{
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Accept-Language", 
		"ru");

	web_url("dev-boomq.pflb.ru", 
		"URL=http://dev-boomq.pflb.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	//web_custom_request("cloud_config_observers.json", 
		//"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		//"Method=HEAD", 
		//"TargetFrame=", 
		//"Resource=0", 
		//"RecContentType=application/json", 
		//"Referer=", 
		//"Snapshot=t4.inf", 
		//"Mode=HTML", 
		//LAST);

	lr_start_transaction("UC07_TR01_Authorization");

	web_add_auto_header("Accept-Language", 
		"ru");
	
	web_set_max_html_param_len("1000");
	
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
		"Snapshot=t5.inf", 
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
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/logo_white.0cea18e85c9a77e55bb91f7a1a608eea.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);
	
	web_reg_save_param_json(
		"ParamName=userid",
		"QueryString=$.id",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);

	web_add_auto_header("Authorization",
		"Bearer {token}");

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	web_set_max_html_param_len("2000");
	
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
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header(" Content-Type",
		"application/json");

	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"{user}\",\"id\":{userid},\"language\":\"EN\",\"notificationEnabled\":true}", 
		LAST);

	web_url("13", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/{team_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("UC07_TR01_Authorization",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC07_TR02_Tests");
	
	web_add_auto_header("Authorization",
		"Bearer {token2}");

	web_url("label", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
	
//	web_reg_save_param_json(
//		"ParamName=All_projectId",
//		"QueryString=$..projectId",
//		"SelectAll=Yes",
//		SEARCH_FILTERS,
//		LAST);

	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&page=0&size=9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	//lr_save_string(lr_paramarr_random("All_projectId"), "Random_project");

	lr_end_transaction("UC07_TR02_Tests",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC07_TR03_SelectTest");
	
	web_reg_save_param_json(
		"ParamName=projectName",
		"QueryString=$.projectName",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);

//	web_reg_save_param_json(
//		"ParamName=All_versions",
//		"QueryString=$..version..id",
//		"SelectAll=Yes",
//		SEARCH_FILTERS,
//		LAST);

	web_url("{Random_project}", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
	
//	lr_save_string(lr_paramarr_random("All_versions"), "Random_version");
	
	web_reg_save_param_json(
		"ParamName=location",
		"QueryString=$..location",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);

	web_url("{Random_version}", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}/version/{version_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}/version/{version_id}/downloadLink", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/minio/boomq/{location}?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240828/us-east-1/s3/aws4_request&X-Amz-Date=20240828T112238Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=cc1a7e2019fdf1abceab9ba02be5da6e956b1c311e960fe411383010c1f601b2", "Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", ENDITEM, 
		LAST);

	lr_end_transaction("UC07_TR03_SelectTest",LR_AUTO);

	lr_start_transaction("UC07_TR04_RunTest");
	
//	web_reg_save_param_json(
//		"ParamName=Run",
//		"QueryString=$.id",
//		"SelectAll=No",
//		SEARCH_FILTERS,
//		LAST);
//
//	web_add_header(" Content-Type",
//		"application/json");

//	web_custom_request("{Random_project}_2", 
//		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}", 
//		"Method=PUT", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
//		"Snapshot=t20.inf", 
//		"Mode=HTML", 
//		"BodyBinary={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"{projectName}\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[2]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"2ca4ebce-4bd8-437e-9a6b-2a2cd00427fb\",\"label\":\"New group 1\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\"typeDisplayName\":\""
//		"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"48997\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"77.50.236.215\",\"headers\":{\"Content-Type\":\"application/json\"},\"queryParameters\":[],\"body\":\"{\\\\\"message\\\\\":\\\\\""
//		"\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82 2\\\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://77.50.236.215:48997/api/kafka/message\",\"id\":\"27ffd458-6ee5-4cdd-a126-36bfae3f429a\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"},{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\""
//		"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"48997\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"77.50.236.215\",\"headers\":{\"Content-Type\":\"application/json\"},\"queryParameters\":[],\"body\":\"{\\\\\"message\\\\\":\\\\\"""\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82 2\\\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://77.50.236.215:48997/api/kafka/message\",\"id\":\"028c6e89-b866-4b3b-bbcc-15038cfa7d7f\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}"
//		"],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 1\",\"id\":\"a00619d7-f025-43df-9929-22c2c017297f\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\"runTearDownAfterShutdown\":true,\"configurationElements"
//		"\":[{\"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":\"4a5844aa-b9c6-4d42-afe0-925ff01e770e\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"846a3869-09ed-4935-bffa-4b593f6824de\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\"label\":\"Http request defaults\",\"type\":\""
//		"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"632c9f51-cd22-4048-8d17-be34a1d1ed12\",\"connectTimeout\":60000,\"responseTimeout\":120000,\"saveResponseAsMd5Hash\":null}],\"loadProfile\":{\"usersPerStep\":1,\"rampDownMs\":60000,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":60000,\"stepLengthMs\":3600000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_57437e5c-5473-48fd-bc60-608282becbe3\",\"id\":\""
//		"57437e5c-5473-48fd-bc60-608282becbe3\",\"durationMs\":8000,\"enabled\":true}]},\"slaGroupList\":[],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"settingsId\":null,\"totalDuration\":{duration}}", 
//		LAST);
	
	web_reg_save_param_json(
		"ParamName=StopId",
		"QueryString=$.id",
		"SelectAll=No",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{project_id}", 
		"Snapshot=t21.inf", 
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
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("label_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);
	
	//web_reg_save_param_json(
		//"ParamName=createDate",
		//"QueryString=$.createDate",
		//SEARCH_FILTERS,
		//LAST);

	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=INITIALIZATION,WAITING,RUNNING,TEST_STOPPING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
		

	web_url("test_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&page=0&size=7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC07_TR04_RunTest",LR_AUTO);
	
	lr_think_time(60);

	lr_start_transaction("UC07_TR05_TestDetails");
	
	web_reg_save_param_json(
		"ParamName=state",
		"QueryString=$..state",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_json(
		"ParamName=displayState",
		"QueryString=$..displayState",
		SEARCH_FILTERS,
		LAST);

	web_url("18689", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{StopId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{StopId}", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/message.09d91ef8f7769e72000af31b00da82e2.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{StopId}", ENDITEM, 
		LAST);
	
	if (strcmp(lr_eval_string("{state}"),"RUNNING") != 0 && strcmp(lr_eval_string("{displayState}"),"RUNNING") != 0) {
        lr_error_message("Test isn't running");
		lr_end_transaction("UC07_TR05_TestDetails",LR_FAIL);
		return 1;
    }

	web_url("25349_3", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{project_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{StopId}", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/time.0a39ea6cf097a189ea08f0e8e59fe026.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{StopId}", ENDITEM, 
		"Url=/static/media/load.287cb7234e668cd66173833db04886bf.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{StopId}", ENDITEM, 
		LAST);

	web_url("testMetric", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={StopId}&testStartDate=2024-08-29T20:54:25.578Z&testEndDate=2024-08-29T21:56:25.578Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{StopId}", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	

	web_url("auth", 
		"URL=https://dev-boomq.pflb.ru/grafana-srv/auth?testId={StopId}&testStartTime=2024-08-29T20:54:25.578Z&testEndTime=2024-08-29T21:56:25.578Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{project_id}/{StopId}", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);
	

	lr_end_transaction("UC07_TR05_TestDetails",LR_AUTO);

	lr_think_time(60);

	lr_start_transaction("UC07_TR06_StopTest");

	web_custom_request("stop", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{StopId}/stop", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("test_4", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=INITIALIZATION,WAITING,RUNNING,TEST_STOPPING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("test_5", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&page=0&size=7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC07_TR06_StopTest",LR_AUTO);

	return 0;
}