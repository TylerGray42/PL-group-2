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

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("TR01_Aurhorization");

	web_add_auto_header("Accept-Language", 
		"ru");

	lr_think_time(13);

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=ko_lesya@mail.ru", ENDITEM, 
		"Name=password", "Value=Hs,sytn1", ENDITEM, 
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

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
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

	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"ko_lesya@mail.ru\",\"id\":1875,\"language\":\"EN\",\"notificationEnabled\":true}", 
		LAST);

	web_url("13", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/13", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("TR01_Aurhorization",LR_AUTO);

	lr_think_time(18);

	lr_start_transaction("TR02_Tests");

	web_url("label", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&page=0&size=9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("TR02_Tests",LR_AUTO);

	lr_think_time(24);

	lr_start_transaction("TR03_SelectTest");

	web_url("25112", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25112", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25112", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("25313", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25112/version/25313", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25112", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25112/version/25313/downloadLink", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25112", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/minio/boomq/boomq/teams/13/projects/25112/v_25313.yaml?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240828/us-east-1/s3/aws4_request&X-Amz-Date=20240828T112238Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=cc1a7e2019fdf1abceab9ba02be5da6e956b1c311e960fe411383010c1f601b2", "Referer=https://dev-boomq.pflb.ru/account/tests/25112", ENDITEM, 
		LAST);

	lr_end_transaction("TR03_SelectTest",LR_AUTO);

	lr_start_transaction("TR04_Next");

	lr_end_transaction("TR04_Next",LR_AUTO);

	lr_start_transaction("TR05_Settings");

	lr_end_transaction("TR05_Settings",LR_AUTO);

	lr_start_transaction("TR06_Comment");

	lr_end_transaction("TR06_Comment",LR_AUTO);

	lr_start_transaction("TR07_RunTest");

	web_custom_request("25112_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25112", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25112", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"BodyBinary={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"test_00-21-17\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[2]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"2ca4ebce-4bd8-437e-9a6b-2a2cd00427fb\",\"label\":\"New group 1\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\"typeDisplayName\":\""
		"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/send\",\"port\":\"8082\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"{\\\\\"message\\\\\":\\\\\""
		"\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82 2\\\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8082/api/kafka/send\",\"id\":\"27ffd458-6ee5-4cdd-a126-36bfae3f429a\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"},{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\""
		"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"8082\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8082/api/kafka/message\",\"id\":\"028c6e89-b866-4b3b-bbcc-15038cfa7d7f\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}"
		"],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 1\",\"id\":\"a00619d7-f025-43df-9929-22c2c017297f\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\"runTearDownAfterShutdown\":true,\"configurationElements"
		"\":[{\"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":\"4a5844aa-b9c6-4d42-afe0-925ff01e770e\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"846a3869-09ed-4935-bffa-4b593f6824de\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\"label\":\"Http request defaults\",\"type\":\""
		"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"632c9f51-cd22-4048-8d17-be34a1d1ed12\",\"connectTimeout\":60000,\"responseTimeout\":120000,\"saveResponseAsMd5Hash\":null}],\"loadProfile\":{\"usersPerStep\":1,\"rampDownMs\":60000,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":60000,\"stepLengthMs\":3600000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_57437e5c-5473-48fd-bc60-608282becbe3\",\"id\":\""
		"57437e5c-5473-48fd-bc60-608282becbe3\",\"durationMs\":8000,\"enabled\":true}]},\"slaGroupList\":[],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"settingsId\":null,\"totalDuration\":3720}", 
		LAST);

	web_custom_request("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25112", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"Prtyfu\",\"labelSet\":[],\"projectId\":\"25112\",\"projectVersionId\":25326,\"testMode\":\"TEST\",\"testProjectId\":\"25112\",\"testProjectVersionId\":25326}", 
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

	lr_end_transaction("TR07_RunTest",LR_AUTO);

	lr_think_time(26);

	lr_start_transaction("TR08_StopTest");

	web_custom_request("stop", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/18379/stop", 
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

	lr_end_transaction("TR08_StopTest",LR_AUTO);

	lr_start_transaction("TR09_LogOut");

	lr_end_transaction("TR09_LogOut",LR_AUTO);

	return 0;
}