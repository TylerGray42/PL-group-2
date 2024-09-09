Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Not/A)Brand\";v=\"8\", \"Chromium\";v=\"126\", \"Google Chrome\";v=\"126\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("dev-boomq.pflb.ru", 
		"URL=https://dev-boomq.pflb.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Login");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-26T21:03:26.840Z");

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=nataalex223@gmail.com", ENDITEM, 
		"Name=password", "Value=Hs,sytn1", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"nataalex223@gmail.com\",\"id\":1871,\"language\":\"EN\",\"notificationEnabled\":false}", 
		LAST);

	web_url("13", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("ReportsPage");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("search", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pagination\":{\"pageNumber\":0,\"pageSize\":9},\"sort\":[{\"field\":\"CREATED_AT\",\"direction\":\"DESC\"}]}", 
		LAST);

	lr_end_transaction("ReportsPage",LR_AUTO);

	lr_think_time(9);

	lr_start_transaction("AddNewReport");

	web_url("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=FINISHED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("previewChart", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/previewChart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"d9f8c819-c5b3-49fa-9663-6c2df04e445d\",\"name\":\"report-chart-d9f8c819-c5b3-49fa-9663-6c2df04e445d-serie-83893823-5e68-40a7-9ce9-5dff2d3a73fe\",\"series\":[{\"aggregationInterval\":10,\"aggregationIntervalTimeUnit\":\"SECOND\",\"id\":\"83893823-5e68-40a7-9ce9-5dff2d3a73fe\",\"datasets\":[{\"points\":[]}],\"displayProps\":{\"axisUnit\":\"VUSER\",\"color\":\"#1d1d1d\",\"unit\":\"VUSER\"},\"testId\":18268,\"type\":\"VUSERS\",\"vuserType\":\"ACTUAL\"}],\"testFilters\":[{\"testId\""
		":18268}]}", 
		LAST);

	lr_think_time(32);

	web_custom_request("previewTable", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/previewTable", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"00466a4e-c4b2-4235-bc8e-a099826d62ae\",\"type\":\"TEST_SLA_TABLE\",\"name\":\"SLA by test, Test id: 18268\",\"testFilters\":[{\"testId\":18268}],\"columns\":[{\"id\":\"a51626d2-b0f9-488d-b93e-4c71f024dcf7\",\"displaySlaRestrictionType\":true,\"type\":\"SLA_DATA\",\"name\":\"SLA type\"},{\"id\":\"3f34f139-ba91-4b7e-abe6-be642b371ae0\",\"displayTimePeriod\":true,\"type\":\"SLA_DATA\",\"name\":\"Time period\"},{\"id\":\"142c0f5f-4b89-424a-9cbb-dc78af9474e0\",\"displayOperation\":true,"
		"\"type\":\"SLA_DATA\",\"name\":\"Condition\"},{\"id\":\"e5adb274-18d2-481a-a757-ab98e3da3a51\",\"displayValue\":true,\"type\":\"SLA_DATA\",\"name\":\"Value\"},{\"id\":\"ca85f11f-ca6f-4f7f-8fa5-ec9cb04ee21c\",\"testId\":18268,\"type\":\"SLA_RESULT\",\"name\":\"Result\"},{\"id\":\"38598e78-07e2-45b8-857a-0d3f4c731072\",\"diffTargetType\":\"SLA_VALUE\",\"diffValueType\":\"ABSOLUTE\",\"testId\":18268,\"type\":\"SLA_DIFF\",\"name\":\"Delta\"},{\"id\":\"1626cce5-3168-4986-880d-104aad862fae\",\""
		"diffTargetType\":\"SLA_VALUE\",\"diffValueType\":\"RELATIVE\",\"testId\":18268,\"type\":\"SLA_DIFF\",\"name\":\"Delta, %\"}]}", 
		LAST);

	lr_think_time(13);

	web_custom_request("report", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		body_variable_1, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("1160", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/1160", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/1160", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("content", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/1160/content", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/1160", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=FINISHED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/1160", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("search_2", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pagination\":{\"pageNumber\":0,\"pageSize\":9},\"sort\":[{\"field\":\"CREATED_AT\",\"direction\":\"DESC\"}]}", 
		LAST);

	lr_end_transaction("AddNewReport",LR_AUTO);

	return 0;
}