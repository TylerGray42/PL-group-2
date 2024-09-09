vuser_end()
{

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

	web_url("main.cddf1824.js", 
		"URL=https://dev-boomq.pflb.ru/static/js/main.cddf1824.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://dev-boomq.pflb.ru/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("main.cddf1824.js_2", 
		"URL=https://dev-boomq.pflb.ru/static/js/main.cddf1824.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://dev-boomq.pflb.ru/", 
		"Snapshot=t53.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("main.64a4c65b.css_2", 
		"URL=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://dev-boomq.pflb.ru/", 
		"Snapshot=t54.inf", 
		LAST);

	lr_start_transaction("Login");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Client-Date", 
		"2024-08-29T15:51:40.108Z");

	lr_think_time(8);

	web_submit_data("login_2", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=nataalex223@gmail.com", ENDITEM, 
		"Name=password", "Value=Hs,sytn1", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
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

	web_url("team_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("boomq_auth="
		"eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc19ub3RpZmljYXRlZCI6ZmFsc2UsInVzZXJfaWQiOjE4NzEsInVzZXJfbmFtZSI6Im5hdGFhbGV4MjIzQGdtYWlsLmNvbSIsInNjb3BlIjpbInRydXN0IiwicmVhZCIsIndyaXRlIl0sInRlYW1fbWVtYmVyIjoie1wiaWRcIjoxOTQ4LFwidGVhbUlkXCI6MTMsXCJ1c2VySWRcIjoxODcxLFwiZW1haWxcIjpcIm5hdGFhbGV4MjIzQGdtYWlsLmNvbVwiLFwidXNlckRpc3BsYXlOYW1lXCI6XCLQndCw0YLQsNC70LjRj1wiLFwicGVybWlzc2lvbkxpc3RcIjpbXCJSVU5cIixcIlZJRVdcIixcIkVESVRcIixcIkFETUlOXCIsXCJNQU5BR0VfVVNFUlNfSU5fT1JHXCJdLFwiaW52aXRhdGlvblN0YXR1c1wiOlwiQUNDR"
		"VBURURcIixcImludml0ZVVybFwiOm51bGwsXCJleHBpcmVkQXRcIjpudWxsLFwiY3JlYXRlQXRcIjpcIjIwMjQtMDgtMTlUMTM6MTk6NDIuNTA1WlwiLFwidXBkYXRlZEF0XCI6XCIyMDI0LTA4LTE5VDEzOjE5OjQ4Ljk3MFpcIn0iLCJ1c2VyX2xhbmd1YWdlIjoiUlUiLCJ0ZWFtX2lkIjoxMywiZXhwIjoxNzI0OTg5NzIwLCJhdXRob3JpdGllcyI6WyJST0xFX1VTRVIiXSwianRpIjoiMWU2OGVmNTQtN2Y4Yi00MmI5LTlhMDAtY2JkZTQ0NDYyZDE1IiwiY2xpZW50X2lkIjoiY2xpZW50In0.hAZ9wUt_CygkD_uf9SpXWzLwCe9xmU3cNBkAbEat4B7X-zs__nsmmnftVaGuIK2y-r47RUvKskUCOJ22iHo4VTDd4C-HPOXebsWBcOT_vs2xOxMcEtGxPTbkbdJ1ACEzqb_"
		"r78KC1TTAWPIytxmjKd4izLVVdePL1cCyRHmxaKeBFq1hfVX6kJCrp2LpAG-wmuCbI3ug-2zGWya5DWRbYAuWbXlhGDregM7_Dp8BVkPbNeoP9OPNU4xiPrdz40IWtRCaq2nt8CnkXxgFcjoBMsMMpATRArioHyKhqq-xa6C3aPZLagKmdOKGdaYLAiB6NX1G3EnaxOS2sw9PlOxcEQ; DOMAIN=dev-boomq.pflb.ru");

	web_url("teamContext_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner_2", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("NewTest");

	lr_end_transaction("NewTest",LR_AUTO);

	lr_start_transaction("SaveTest");

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

	web_custom_request("project_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"untitled_test_18:51\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[2]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"fc807cc5-c42b-4fe6-8dfe-519a43f44711\",\"label\":\"This is Thread\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\"typeDisplayName\""
		":\"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"48997\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"77.50.236.215\",\"headers\":{\"Content-Type\":\"application/json\"},\"queryParameters\""
		":[],\"body\":\"{\\\"message\\\": \\\"This is message\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://77.50.236.215:48997/api/kafka/message\",\"id\":\"1d53ef34-017d-4cf2-978c-00525ed2076e\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"},{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\""
		"method\":\"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"48997\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"77.50.236.215\",\"headers\":{\"Content-Type\":\"application/json\"},\"queryParameters\":[],\"body\":\"\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://77.50.236.215:48997/api/kafka/message\",\"id\":\"d93e8354-15c6-475c-947b-341e912ddb7e\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\""
		"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 1\",\"id\":\"8b9e4211-dce0-477c-91a7-0e0085e4af7e\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\""
		"runTearDownAfterShutdown\":true,\"configurationElements\":[{\"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":\"0f805cc3-ac68-4ab7-85a9-0eed8f2d66e3\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"33cdddc2-2936-4812-817c-93508422fa89\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\""
		"label\":\"Http request defaults\",\"type\":\"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"2f9710f1-b87f-4ec7-a07e-da73d8d15aab\",\"connectTimeout\":60000,\"responseTimeout\":120000}],\"loadProfile\":{\"usersPerStep\":1,\"rampDownMs\":60000,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":60000,\"stepLengthMs\":3600000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_b37e299d-ae65-4020-aa93-ad887f7bb719\",\"id\":\""
		"b37e299d-ae65-4020-aa93-ad887f7bb719\",\"durationMs\":8000,\"enabled\":true}]},\"slaGroupList\":[{\"type\":\"GENERAL_TEST_SLA\",\"targetType\":\"TEST\",\"slaList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"operation\":\"LESS_EQUALS\",\"status\":\"NOT_COUNTED\",\"toDate\":3720,\"value\":\"3\"}]}],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"totalDuration\":3720}", 
		EXTRARES, 
		"Url=../static/media/check.9725c0396328bae9471b624111fc14ca.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("SaveTest",LR_AUTO);

	return 0;
}