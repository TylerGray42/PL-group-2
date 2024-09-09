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
		"2024-08-28T12:26:01.459Z");

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

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("13", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("boomq_auth="
		"eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc19ub3RpZmljYXRlZCI6ZmFsc2UsInVzZXJfaWQiOjE4NzEsInVzZXJfbmFtZSI6Im5hdGFhbGV4MjIzQGdtYWlsLmNvbSIsInNjb3BlIjpbInRydXN0IiwicmVhZCIsIndyaXRlIl0sInRlYW1fbWVtYmVyIjoie1wiaWRcIjoxOTQ4LFwidGVhbUlkXCI6MTMsXCJ1c2VySWRcIjoxODcxLFwiZW1haWxcIjpcIm5hdGFhbGV4MjIzQGdtYWlsLmNvbVwiLFwidXNlckRpc3BsYXlOYW1lXCI6XCLQndCw0YLQsNC70LjRj1wiLFwicGVybWlzc2lvbkxpc3RcIjpbXCJSVU5cIixcIlZJRVdcIixcIkVESVRcIixcIkFETUlOXCIsXCJNQU5BR0VfVVNFUlNfSU5fT1JHXCJdLFwiaW52aXRhdGlvblN0YXR1c1wiOlwiQUNDR"
		"VBURURcIixcImludml0ZVVybFwiOm51bGwsXCJleHBpcmVkQXRcIjpudWxsLFwiY3JlYXRlQXRcIjpcIjIwMjQtMDgtMTlUMTM6MTk6NDIuNTA1WlwiLFwidXBkYXRlZEF0XCI6XCIyMDI0LTA4LTE5VDEzOjE5OjQ4Ljk3MFpcIn0iLCJ1c2VyX2xhbmd1YWdlIjoiRU4iLCJ0ZWFtX2lkIjoxMywiZXhwIjoxNzI0ODkxMDgwLCJhdXRob3JpdGllcyI6WyJST0xFX1VTRVIiXSwianRpIjoiZmI2YWQyMzEtOTA2ZS00YjE3LTk0NmEtNTQyMDdiNjU0OGMyIiwiY2xpZW50X2lkIjoiY2xpZW50In0.UuSjUooaOm3SASDEikUR0xePLPjnheOLlxt1VpQN1nOj4A-RrGfznTMMprNWsmzkbQsdXJrgCgnXEVcQOVsH0fcVvstezsqivLfghgH6ghSyJl7OI0IGMr1wLXULjMM9Nfv"
		"Zej1WibWrjgBgS2IQGq70Enc4x9PvRogBVFTSxc4YJoKAIa9Dk2n9xd5Fs3WKa0iNSDkXVFz9X1NGcIBMwN_smFIB_ntQCgbqVog2nOMs9LQf-ycXeAFwX1FuV0nXp0XgPhJadt1hnPVRmfUV_9nRE7WgJ1K-En0Gpw0DMk1yGkJkJssNAD1pE8F2It_eqs8KU-7C77UcfPn_yFDBVw; DOMAIN=dev-boomq.pflb.ru");

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("TrendingPage");

	web_url("slaReportProfile", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../static/media/arrow_down.6be88730f13ef3a159f4ef4438670da1.svg", "Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", ENDITEM, 
		"Url=../static/media/arrow.659530470e6be7b696f0d3d15a3179f5.svg", "Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", ENDITEM, 
		LAST);

	lr_end_transaction("TrendingPage",LR_AUTO);

	lr_start_transaction("AddNewTrendReport");

	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&size=999999&projectId=15045&state=FINISHED,FAILED,CANCELED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("slaTypeList", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/slaTypeList", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15045,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18389,18378]}]}", 
		LAST);

	web_custom_request("previewReport", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15045,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18389,18378]}],\"chartProfileList\":[],\"tableProfileList\":[]}", 
		LAST);

	lr_end_transaction("AddNewTrendReport",LR_AUTO);

	lr_think_time(9);

	lr_start_transaction("TrendReportItems");

	web_custom_request("previewReport_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15045,\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}]}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18389,18378]}]}", 
		LAST);

	lr_think_time(18);

	web_custom_request("previewReport_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15045,\"chartProfileList\":[],\"tableProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\"}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18389,18378]}]}", 
		LAST);

	web_custom_request("previewReport_4", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15045,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18389,18378]}],\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":null,\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\",\""
		"orderInReport\":1}]}", 
		LAST);

	lr_end_transaction("TrendReportItems",LR_AUTO);

	lr_start_transaction("SaveTrendReport");

	web_custom_request("slaReportProfile_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"untitled_profile_15:25\",\"projectId\":15045,\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":null,\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\",\"orderInReport\":1}],\"testFilterExpressionList\":[{\"type\""
		":\"TEST_ID_EXPRESSION\",\"testIdList\":[18389,18378]}]}", 
		LAST);

	lr_end_transaction("SaveTrendReport",LR_AUTO);

	web_revert_auto_header("Origin");

	lr_think_time(6);

	web_url("slaReportProfile_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}