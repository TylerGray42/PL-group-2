#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Action()
{
	int i;
    char rnd1[13], email[13];
    srand(time(NULL));

    for (i = 0; i < 12; ++i) {
        rnd1[i] = 97 + rand() % ((122 - 97) + 1);
    }

    sprintf(email, "%c%c%c%c%c%c%c%c%c%c%c", rnd1[0], rnd1[1], rnd1[2], rnd1[3], rnd1[4], rnd1[5], rnd1[6], rnd1[7], rnd1[8], rnd1[9], rnd1[10], rnd1[11]);
    email[12] ='\0';
    
    lr_save_string(lr_eval_string(email), "email");


	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Priority", 
		"u=0, i");

	web_add_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dev-boomq.pflb.ru", 
		"URL=https://dev-boomq.pflb.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_url("dev-boomq.pflb.ru_2", 
		"URL=http://dev-boomq.pflb.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dev-boomq.pflb.ru/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", "Referer=https://dev-boomq.pflb.ru/", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	lr_start_transaction("UC01_TR01_Authorization");

	web_revert_auto_header("Priority");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-29T20:25:00.836Z");
	
	
	web_set_max_html_param_len("4500");

	
	web_reg_save_param("auth_token",
		"LB=uthorization: ",
		"RB=\r\n",
		LAST);

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);
	
	web_add_auto_header("Authorization",
		"Bearer {auth_token}");

	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param_json(
		"ParamName=user_id",
		"QueryString=$..id",
		SEARCH_FILTERS,
		LAST);

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("auth_token",
		"LB=uthorization: ",
		"RB=\r\n",
		LAST);

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_auto_header("Authorization",
		"Bearer {auth_token}");

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t10.inf", 
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
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"{username}\",\"id\":{user_id},\"language\":\"EN\",\"notificationEnabled\":false}", 
		LAST);

	web_url("13", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TR01_Authorization",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC01_TR02_Group");

	web_add_auto_header("Priority", 
		"u=0");
	
	web_reg_save_param_json(
		"ParamName=team_id",
		"QueryString=$..id",
		SEARCH_FILTERS,
		LAST);

	web_url("team_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?page=0&size=5", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("13_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/{team_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/{team_id}", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

//	web_url("teamMember", 
//		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=13&page=0&size=3", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://dev-boomq.pflb.ru/account/teams/13", 
//		"Snapshot=t15.inf", 
//		"Mode=HTML", 
//		LAST);

	lr_end_transaction("UC01_TR02_Group",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC01_TR03_Add_New_Team_Member");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_header("Priority", 
		"u=0");
	
	web_reg_save_param_json(
		"ParamName=new_user_id",
		"QueryString=$..userId",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_json(
		"ParamName=id",
		"QueryString=$..id",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("teamMember_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=13", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/13", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"email\":\"{email}@email.email\",\"permissionList\":[\"ADMIN\",\"VIEW\",\"EDIT\",\"RUN\",\"MANAGE_USERS_IN_ORG\"],\"userDisplayName\":\"{email}\"}]", 
		LAST);

	lr_end_transaction("UC01_TR03_Add_New_Team_Member",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC01_TR04_Copy_Link");

	web_add_auto_header("Priority", 
		"u=0");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	
	web_reg_save_param_json(
		"ParamName=reg_url",
		"QueryString=$..inviteUrl",
		SEARCH_FILTERS,
		LAST);
	
	web_add_header("Content-Type",
		"application/json");

	web_custom_request("teamMember_5", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=13", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/13", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"Body=[{\"email\":\"{email}@email.email\",\"id\":{id},\"permissionList\":[\"RUN\",\"VIEW\",\"EDIT\",\"ADMIN\",\"MANAGE_USERS_IN_ORG\"],\"teamId\":\"{team_id}\",\"userDisplayName\":\"{email}\",\"userId\":{new_user_id},\"updateInviteExpiration\":true}]", 
		LAST);

	lr_end_transaction("UC01_TR04_Copy_Link",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("UC01_TR05_New_Password");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Priority", 
		"u=0, i");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_remove_auto_header("Authorization",
		LAST);
	
	web_reg_save_param("auth_token",
		"LB=ookie: boomq_auth\=",
		"RB=; Path",
		LAST);

	web_url("{reg_url}", 
		"URL=https://dev-boomq.pflb.ru{reg_url}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=0");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	web_add_auto_header("Authorization",
		"Bearer {auth_token}");

	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/change-password", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/change-password", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");
	
	web_add_header("Content-Type",
		"application/json");

	web_custom_request("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/change-password", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body={\"password\":\"{password}\"}", 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account", ENDITEM, 
		LAST);

	web_revert_auto_header("Priority");

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TR05_New_Password",LR_AUTO);
	
	return 0;
}