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

	lr_start_transaction("UC05_TR01_Authorization");

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
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
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
	
	web_add_auto_header("Authorization",
		"Bearer {authorization}");
	
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
	
	web_reg_save_param_json(
		"ParamName=team_id",
		"QueryString=$.content[0].id",
		SEARCH_FILTERS,
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("authorization2",
		"LB=uthorization: ",
		"RB=\r\n",
		LAST);
	
	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_auto_header("Authorization",
		"Bearer {authorization2}");

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC05_TR01_Authorization",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC05_TR02_Trending");

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

	lr_end_transaction("UC05_TR02_Trending",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC05_TR03_Add_New_Trend_Report");
	

	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	
	web_url("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&size=999999&projectId={project_id}&state=FINISHED,FAILED,CANCELED", 
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
		"Body={\"projectId\":{project_id},\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[{test_id_1},{test_id_2}]}]}", 
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
		"Body={\"projectId\":{project_id},\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[{test_id_1},{test_id_2}]}],\"chartProfileList\":[],\"tableProfileList\":[]}", 
		LAST);

	lr_end_transaction("UC05_TR03_Add_New_Trend_Report",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("UC05_TR04_Trend_Report_Items");

	web_custom_request("previewReport_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":{project_id},\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}]}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[{test_id_1},{test_id_2}]}]}", 
		LAST);

	web_custom_request("previewReport_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":{project_id},\"chartProfileList\":[],\"tableProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\"}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[{test_id_1},{test_id_2}]}]}", 
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
		"Body={\"projectId\":{project_id},\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[{test_id_1},{test_id_2}]}],\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":null,\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\",\""
		"orderInReport\":1}]}", 
		LAST);

	lr_end_transaction("UC05_TR04_Trend_Report_Items",LR_AUTO);

	lr_start_transaction("UC05_TR05_Save_Trend_Report");
	
	lr_save_datetime("%H-%M-%S", DATE_NOW, "current_time");

	web_reg_save_param_json(
		"ParamName=report_id",
		"QueryString=$..id",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("slaReportProfile_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"TrendReport-{current_time}\",\"projectId\":{project_id},\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":null,\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":30,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\",\"orderInReport\":1}],\"testFilterExpressionList\":[{\"type\""
		":\"TEST_ID_EXPRESSION\",\"testIdList\":[{test_id_1},{test_id_2}]}]}", 
		LAST);

	lr_end_transaction("UC05_TR05_Save_Trend_Report",LR_AUTO);

	return 0;
}