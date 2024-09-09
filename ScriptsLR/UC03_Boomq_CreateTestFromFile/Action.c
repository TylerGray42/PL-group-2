Action()
{

	lr_start_transaction("UC03_TR01_Authorization");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-29T16:34:00.889Z");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Google Chrome\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_set_max_html_param_len("4500");
	
	web_reg_save_param("authorization",
		"LB=uthorization: ",
		"RB=\r\n",
		LAST);

	
	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={user}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);
	
	web_add_auto_header("Authorization",
		"Bearer {authorization}");

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param_json(
		"ParamName=user_id",
		"QueryString=$.id",
		SEARCH_FILTERS,
		LAST);

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t48.inf", 
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
	
	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId={team_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_auto_header("Authorization",
		"Bearer {authorization}");

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");
	
	web_add_header("Content-Type",
		"application/json");

	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"{user}\",\"id\":{user_id},\"language\":\"EN\",\"notificationEnabled\":false}", 
		LAST);

	lr_end_transaction("UC03_TR01_Authorization",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC03_TR02_New_Test");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");
	
	lr_save_datetime("%H-%M-%S", DATE_NOW, "current_time");
	
	web_reg_save_param_json(
		"ParamName=test_id",
		"QueryString=$.id",
		SEARCH_FILTERS,
		LAST);

	web_submit_data("project", 
		"Action=https://dev-boomq.pflb.ru/project-srv/project?testProjectName=TestFromJMX_{current_time}", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=jmx", "Value=boomq.jmx", "File=Yes", ENDITEM, 
		LAST);

	web_reg_save_param_json(
		"ParamName=version_id",
		"QueryString=$.version..id",
		SEARCH_FILTERS,
		LAST);
	
	web_url("{test_id}", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{test_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{test_id}", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);
	

	web_url("25863", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{test_id}/version/{version_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{test_id}", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{test_id}/version/{version_id}/downloadLink", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{test_id}", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/minio/boomq/boomq/teams/13/projects/25337/v_25863.yaml?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240829/us-east-1/s3/aws4_request&X-Amz-Date=20240829T163426Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=d50d74b1d50c879cb41bfb31495c07df6d4d615b3f72e70633c0b4b0440d3841", "Referer=https://dev-boomq.pflb.ru/account/tests/25337", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("testInfo", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{test_id}", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"TestFromJMX_{current_time}\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        "
		"status: NOT_COUNTED\\n        toDate: 3610\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/13/projects/25337/imported_jmx/base_jmx_v_25863.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 54587789-4323-4b0e-b244-ed220d2c27dd\\n    type: ULTIMATE\\n    name"
		": jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: d17c145e-96d4-410e-aac9-97b661f3df0f\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Post Request\\n            method: POST\\n            params: {}\\n            headers:\\n         "
		"     Content-Type: application/json\\n            body: '{\\\"message\\\":\\\"this is jmeter\\\"}'\\n            timerList: []\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 54460bb9-e520-460e-b035-78e5f04a2b8c\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Get Request\\n            method: GET\\n            params: {}\\n            headers:\\n              Content-Type: application/"
		"json\\n            body: ''\\n            timerList: []\\n        name: Transaction Controller\\n    resourceConfiguration:\\n      testRunnerIds:\\n        - 2\\n    steps:\\n      - name: '-887548345'\\n        initDelaySec: 0\\n        startupTimeSec: 5\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 5\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3610}", 
		LAST);

	web_add_header("Content-Type",
		"application/json");
	
	web_custom_request("25337_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{test_id}", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{test_id}", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"TestFromJMX_{current_time}\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        "
		"status: NOT_COUNTED\\n        toDate: 3610\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/13/projects/25337/imported_jmx/base_jmx_v_25863.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 54587789-4323-4b0e-b244-ed220d2c27dd\\n    type: ULTIMATE\\n    name"
		": jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: d17c145e-96d4-410e-aac9-97b661f3df0f\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Post Request\\n            method: POST\\n            params: {}\\n            headers:\\n         "
		"     Content-Type: application/json\\n            body: '{\\\"message\\\":\\\"this is jmeter\\\"}'\\n            timerList: []\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 54460bb9-e520-460e-b035-78e5f04a2b8c\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Get Request\\n            method: GET\\n            params: {}\\n            headers:\\n              Content-Type: application/"
		"json\\n            body: ''\\n            timerList: []\\n        name: Transaction Controller\\n    resourceConfiguration:\\n      testRunnerIds:\\n        - 2\\n    steps:\\n      - name: '-887548345'\\n        initDelaySec: 0\\n        startupTimeSec: 5\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 5\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3610}", 
		LAST);

	lr_end_transaction("UC03_TR02_New_Test",LR_AUTO);


	return 0;
}