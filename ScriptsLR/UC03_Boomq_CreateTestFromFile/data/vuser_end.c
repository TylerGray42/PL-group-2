vuser_end()
{

	lr_start_transaction("Login");

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

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=nataalex223@gmail.com", ENDITEM, 
		"Name=password", "Value=Hs,sytn1", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
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

	web_url("13", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("boomq_auth="
		"eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc19ub3RpZmljYXRlZCI6ZmFsc2UsInVzZXJfaWQiOjE4NzEsInVzZXJfbmFtZSI6Im5hdGFhbGV4MjIzQGdtYWlsLmNvbSIsInNjb3BlIjpbInRydXN0IiwicmVhZCIsIndyaXRlIl0sInRlYW1fbWVtYmVyIjoie1wiaWRcIjoxOTQ4LFwidGVhbUlkXCI6MTMsXCJ1c2VySWRcIjoxODcxLFwiZW1haWxcIjpcIm5hdGFhbGV4MjIzQGdtYWlsLmNvbVwiLFwidXNlckRpc3BsYXlOYW1lXCI6XCLQndCw0YLQsNC70LjRj1wiLFwicGVybWlzc2lvbkxpc3RcIjpbXCJSVU5cIixcIlZJRVdcIixcIkVESVRcIixcIkFETUlOXCIsXCJNQU5BR0VfVVNFUlNfSU5fT1JHXCJdLFwiaW52aXRhdGlvblN0YXR1c1wiOlwiQUNDR"
		"VBURURcIixcImludml0ZVVybFwiOm51bGwsXCJleHBpcmVkQXRcIjpudWxsLFwiY3JlYXRlQXRcIjpcIjIwMjQtMDgtMTlUMTM6MTk6NDIuNTA1WlwiLFwidXBkYXRlZEF0XCI6XCIyMDI0LTA4LTE5VDEzOjE5OjQ4Ljk3MFpcIn0iLCJ1c2VyX2xhbmd1YWdlIjoiUlUiLCJ0ZWFtX2lkIjoxMywiZXhwIjoxNzI0OTkyMDkyLCJhdXRob3JpdGllcyI6WyJST0xFX1VTRVIiXSwianRpIjoiMjRlNmVmYTgtNThlNi00YzNkLWJlMGItNzNiZjljYzRlYjQ2IiwiY2xpZW50X2lkIjoiY2xpZW50In0.nImae6r1EsYlWwb_vitJMMXBOmVKEWBS3U9C68yEOxiTgzpwwnGH2mRMcHyUwMGIiDEMN5joE4lf6Ax0cuFPJi1KGILY8T3bUhIAaF2E4qYpvFrMhglLxWb1bZ6yRCxxuUt"
		"KEZSGItxWSeBAHvCioofHevaKcZt6tvigjqLsMbBn2QRLx_BPy57vRTct4Vhh0Uctng36JxcuA-4Zs4kDSrBETyHN7pt8-VPkgV7Y25Ln_TpVeJnYYRF6RCeICjeXnFHFSGu1smx_JCB15JnXre0RWiLy3tDWEdUcbMg3jITTFchQHgkFyxIC7lxilz0x-4I6XB1X1lCGkBjV4IeoBQ; DOMAIN=dev-boomq.pflb.ru");

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

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

	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"nataalex223@gmail.com\",\"id\":1871,\"language\":\"EN\",\"notificationEnabled\":false}", 
		LAST);

	web_url("13_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("NewTest");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	lr_think_time(16);

	web_submit_data("project", 
		"Action=https://dev-boomq.pflb.ru/project-srv/project?testProjectName=untitled_test_19:34", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=jmx", "Value=boomq.jmx", "File=Yes", ENDITEM, 
		LAST);

	web_url("25337", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25337", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25337", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("25863", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25337/version/25863", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25337", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25337/version/25863/downloadLink", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25337", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/minio/boomq/boomq/teams/13/projects/25337/v_25863.yaml?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240829/us-east-1/s3/aws4_request&X-Amz-Date=20240829T163426Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=d50d74b1d50c879cb41bfb31495c07df6d4d615b3f72e70633c0b4b0440d3841", "Referer=https://dev-boomq.pflb.ru/account/tests/25337", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	lr_think_time(20);

	web_custom_request("testInfo", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25337", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"untitled_test_19:34\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        "
		"status: NOT_COUNTED\\n        toDate: 3610\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/13/projects/25337/imported_jmx/base_jmx_v_25863.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 54587789-4323-4b0e-b244-ed220d2c27dd\\n    type: ULTIMATE\\n    name"
		": jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: d17c145e-96d4-410e-aac9-97b661f3df0f\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Post Request\\n            method: POST\\n            params: {}\\n            headers:\\n         "
		"     Content-Type: application/json\\n            body: '{\\\"message\\\":\\\"this is jmeter\\\"}'\\n            timerList: []\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 54460bb9-e520-460e-b035-78e5f04a2b8c\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Get Request\\n            method: GET\\n            params: {}\\n            headers:\\n              Content-Type: application/"
		"json\\n            body: ''\\n            timerList: []\\n        name: Transaction Controller\\n    resourceConfiguration:\\n      testRunnerIds:\\n        - 2\\n    steps:\\n      - name: '-887548345'\\n        initDelaySec: 0\\n        startupTimeSec: 5\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 5\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3610}", 
		LAST);

	web_custom_request("25337_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25337", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25337", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"untitled_test_19:34\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        "
		"status: NOT_COUNTED\\n        toDate: 3610\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/13/projects/25337/imported_jmx/base_jmx_v_25863.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 54587789-4323-4b0e-b244-ed220d2c27dd\\n    type: ULTIMATE\\n    name"
		": jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: d17c145e-96d4-410e-aac9-97b661f3df0f\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Post Request\\n            method: POST\\n            params: {}\\n            headers:\\n         "
		"     Content-Type: application/json\\n            body: '{\\\"message\\\":\\\"this is jmeter\\\"}'\\n            timerList: []\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 54460bb9-e520-460e-b035-78e5f04a2b8c\\n            url: 'http://77.50.236.215:48997/api/kafka/message'\\n            name: HTTP Get Request\\n            method: GET\\n            params: {}\\n            headers:\\n              Content-Type: application/"
		"json\\n            body: ''\\n            timerList: []\\n        name: Transaction Controller\\n    resourceConfiguration:\\n      testRunnerIds:\\n        - 2\\n    steps:\\n      - name: '-887548345'\\n        initDelaySec: 0\\n        startupTimeSec: 5\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 5\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3610}", 
		LAST);

	lr_end_transaction("NewTest",LR_AUTO);

	return 0;
}