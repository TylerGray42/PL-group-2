Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Google Chrome\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("main.64a4c65b.css", 
		"URL=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://dev-boomq.pflb.ru/", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	lr_start_transaction("UC02_TR01_Authorization");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Client-Date", 
		"2024-08-29T15:51:40.108Z");
	
	web_set_max_html_param_len("4500");
	
	web_reg_save_param("authorization",
		"LB=uthorization: ",
		"RB=\r\n",
		LAST);

	web_submit_data("login_2", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={User}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("Authorization",
		"Bearer {authorization}");
	
	web_reg_save_param_json(
		"ParamName=user_id",
		"QueryString=$.id",
		SEARCH_FILTERS,
		LAST);
	
	web_url("user_3", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_json(
		"ParamName=team_id",
		"QueryString=$.content[0].id",
		SEARCH_FILTERS,
		LAST);

	
	web_url("team_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("authorization",
		"LB=uthorization: ",
		"RB=\r\n",
		LAST);

	web_url("teamContext_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId={team_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_auto_header("Authorization",
		"Bearer {authorization}");

	web_url("testRunner_2", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC02_TR01_Authorization",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC02_TR02_New_Test");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Google Chrome\";v=\"128\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");
	
	lr_save_datetime("%H-%M-%S", DATE_NOW, "current_time");

	web_custom_request("project_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"testInApp_{current_time}\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[2]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"fc807cc5-c42b-4fe6-8dfe-519a43f44711\",\"label\":\"This is Thread\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\"typeDisplayName\""
		":\"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"48997\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"77.50.236.215\",\"headers\":{\"Content-Type\":\"application/json\"},\"queryParameters\""
		":[],\"body\":\"{\\\"message\\\": \\\"This is message\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"http://77.50.236.215:48997/api/kafka/message\",\"id\":\"1d53ef34-017d-4cf2-978c-00525ed2076e\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"},{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\""
		"method\":\"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"48997\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"77.50.236.215\",\"headers\":{\"Content-Type\":\"application/json\"},\"queryParameters\":[],\"body\":\"\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"http://77.50.236.215:48997/api/kafka/message\",\"id\":\"d93e8354-15c6-475c-947b-341e912ddb7e\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\""
		"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 1\",\"id\":\"8b9e4211-dce0-477c-91a7-0e0085e4af7e\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\""
		"runTearDownAfterShutdown\":true,\"configurationElements\":[{\"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":\"0f805cc3-ac68-4ab7-85a9-0eed8f2d66e3\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"33cdddc2-2936-4812-817c-93508422fa89\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\""
		"label\":\"Http request defaults\",\"type\":\"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"2f9710f1-b87f-4ec7-a07e-da73d8d15aab\",\"connectTimeout\":60000,\"responseTimeout\":120000}],\"loadProfile\":{\"usersPerStep\":1,\"rampDownMs\":60000,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":60000,\"stepLengthMs\":3600000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_b37e299d-ae65-4020-aa93-ad887f7bb719\",\"id\":\""
		"b37e299d-ae65-4020-aa93-ad887f7bb719\",\"durationMs\":8000,\"enabled\":true}]},\"slaGroupList\":[{\"type\":\"GENERAL_TEST_SLA\",\"targetType\":\"TEST\",\"slaList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"operation\":\"LESS_EQUALS\",\"status\":\"NOT_COUNTED\",\"toDate\":3720,\"value\":\"3\"}]}],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"totalDuration\":3720}", 
		EXTRARES, 
		"Url=../static/media/check.9725c0396328bae9471b624111fc14ca.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("UC02_TR02_New_Test",LR_AUTO);



	return 0;
}
