Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("authorize", 
		"URL=https://dev-boomq.pflb.ru/authorize", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/js/main.cddf1824.js", ENDITEM, 
		"Url=/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", ENDITEM, 
		"Url=/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", ENDITEM, 
		"Url=/favicon.png", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/128.0.0.0 Safari/537.36 Edg/128.0.0.0\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":\"419d13dd-2a05-402a-96be-7d501e93db92\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEFf9xd0B3FWJLExo07XtxfngAHlhrnYw161qPkj0JzLlQgzLk2BZp/Tp3PuBpgDB67apJkX2nP7Rhb7+HeaQE3wQBv+TPCCDP+hhFs3ZbPW3OEQ/"
		"pAVfucNHz8IKsAySNreBFXJzTaZZ7ar2H8Ih7cf9uZhTIagKoUXK9lSAlTQW0GXk6o5QPKB/V6gNs7CRuUR1K1MCUwGQnhR/QgdrxUaIwA4tn82pwEO0U8gi7j/AnkPERk6ZWFK+UrzmtkNfmsxCS6KP0J32qnXaSuWXaHYh3L2Z75S4XPb3D9mRe/84VTqsqAKT2WK2cdhAK43/xYraHgE=&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.22631.4037.ni_release\",\"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\""
		"128.0.2739.42 (Official build) \"},\"client\":{\"version\":\"281483724324866\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,"
		"\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://dev-boomq.pflb.ru/authorize\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"d01ede20-9907-4f70-a225-368123209c85\",\"synchronous\":false}", 
		LAST);

	web_url("128.0.2739.42", 
		"URL=https://config.edge.skype.com/config/v1/Edge/128.0.2739.42?clientId=-3181880309565117548&agents=EdgeFirstRun%2CEdgeFirstRunConfig&osname=win&client=edge&channel=stable&scpfre=0&osarch=x86_64&osver=10.0.22631&wu=1&devicefamily=desktop&uma=1&sessionid=483&mngd=0&installdate=1622974563&edu=0&bphint=2&soobedate=1622974562&fg=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Edge-User-Anid", 
		"39978A300F926ACA38EECE85FFFFFFFF");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"128.0.2739.42");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiItMzE4MTg4MDMwOTU2NTExNzU0OCIsIjUiOiIiLCI2Ijoic3RhYmxlIiwiNyI6IjIwNzQ0NjkyMDM5NjkiLCI5IjoiZGVza3RvcCJ9");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&osver=10.0.22631&devicefamily=desktop&installdate=1622974563&clientversion=128.0.2739.42&experimentationmode=2&scpguard=0&scpfull=0&scpver=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"filter\":{\"version\":\"128.0.2739.42\"}}", 
		LAST);

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"39978A300F926ACA38EECE85FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("128.0.2739.42_2", 
		"URL=https://config.edge.skype.com/config/v1/Edge/128.0.2739.42?clientId=-3181880309565117548&agents=Edge%2CEdgeConfig%2CEdgeServices%2CEdgeFirstRun%2CEdgeFirstRunConfig&osname=win&client=edge&channel=stable&scpfre=0&osarch=x86_64&osver=10.0.22631&wu=1&devicefamily=desktop&uma=1&sessionid=483&mngd=0&installdate=1622974563&edu=0&bphint=2&soobedate=1622974562&fg=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AFS-CV", 
		"879281777347137280.1");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22631; app=Microsoft Edge; appVer=128.0.2739.42; appChannel=stable");

	web_custom_request("subscriptions", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/subscriptions", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"channelurl\":\"ecm:Tt8SQBqsOpGJDbhR4yxeA9TuqiL+mGeMLKoY5I2jqMLOMJEsLDLiF4TaoRPJWJvYO77xQi2WbgHVEWcyjw9wOwbkeB2NoTiXjH+jWcvlrrpkCFFXJp2beXHgXeAY0eFNcHQZjhfWlT54xNLdhXBeI5AIa5LYwTx8snOy2svLb9kap+9TaWn7dnzjVTKMeQMq\",\"deviceId\":\"chr:lleMp6aJGZ2vRbMHqsGegw==\",\"publisherFilters\":[{\"activityTypes\":[64,65,66,67,70,71,72,75,77,79,82,103,104,106,109,112,113,115],\"application\":\"edge.activity.windows.com\",\"notificationType\":\"notificationOnly\",\"platform\":\"host\"}]}", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_cookie("ANON=A=39978A300F926ACA38EECE85FFFFFFFF&E=1d02&W=1; DOMAIN=www.bing.com");

	web_add_cookie("PPLState=1; DOMAIN=www.bing.com");

	web_add_cookie("KievRPSSecAuth=FACSBBRaTOJILtFsMkpLVWSG6AN6C/svRwNmAAAEgAAACIaFIioQOK+0UASn/nVb9fLN1njMZ9ZFtidRLrWOuDFLmZ8o35aoigKO+WUcWrrVgfz4S1f9rq072vGWyPW8pNOWghu2sK5S9Dkcw5bxruOkUNwnZ/dwbgrL5V/IUWILFiq2cVQmO+WrkCWRVLbCKNXku8aR7826F4zp1iV2A8SoqL3Z+v2WJDIENOKjYSNW7D22v4wk/bI7y0HVxPfGaVOS6bduEiyZ9UqRehvtZ7RX3K+oOHbCeODDU3cC4+PmMKpgKo8qgMn1mRbS0Q39O7CKvGJuyUaE6wv/v6nuUsNNr1yFVMAiVAQJq/"
		"EpEVr66fgOM8K8moG8Guz97HqYjESageiZU7nIyNkM98mI5TPs9QICkJ2f6fdsr3CQr98xvbmcF64C5bEGRmhd7Dvr1Xn1ozwQiVqCknxIK8oop2l1ueaMg9gzCAWYMuMj1Miez7bapo7VYfsM/0AJJ72Mddpp/Ib0v42JMKQtPH1TiOoGnikf/jyJRxEVavVZA23Qkgb+3IgUQoGJuyY8ecVzdT0CThVY9Yeq6NzKPXqUv48ApDaE1WhYuhQYiA9D4y39MWOfCc5oaS3C+zIqPztuS2gnf4zP66wD9Ocb7NHDUYfIprcc3t9lZjzscx7FDQ6o8rGr2AghazSg9MaU4zHDyir71LzWaFCaQrU1LKRGJyR9gIbaI9zP3YtPXlzZw/qUQk2CxYK+E5yhlxCz82fIfW987c0tGwiCeNmT1BiicayuVM0/"
		"Ou3rnL5HTBP03rxWESuFrAVPlymhJkv9MRh6xSJ3YD9ZSRRX45ScETrasnZVXf8XGUhIhteeX0kk+CpBgMToi98ZDTV2j8YuHz6RE3Dn8xTVEEm2MWIKvHLxJTP+6EQnTlIxj9t+0jpoGtRQt+9mGeCOfqouU9HNmGlokMf4uQaVYWRsq5yjqIcMOK8yAbgCpjptopShGH4NY8rpzMsEKndgj6apy6WuFK7nQ9MSq15nVNxTkI3jhyQVxFxUMv1KVjEivRZiWKlLYXG+6dzj9bbCXY9i/t9bMZqnfKha7JBeYPuSEx/+f8k2DcEZoFKmyCo7OyS/5LfTLVM1W1it0eswMqXY/t9N0Gu/xvoiLiPM4l5j+h/jXDjPRpgrcDz1xfzqTfjS5yiur4Ol1hQyKNslzvQAcEbcg8p58HcwRmHTzPG93zl4xBfxhpjN7bMnfbDSaIFuZIQlxiGqAXCKqD90PgsCQY+xf3ti6uFrCKrqzvC2B0juF3"
		"+pAr42liiKvDaf1dFBcJIUxr7TUVFs/K6KCv95I6z9E7gpm5arcljrC7BLbPxPP8Ne2bHi2SfV8+I3ZH9d44vsLfD6949g3rbNdIzddd/OkTd4ypZd33gxR6tp55BYll9us+BJ9ANepnu3oAnJKrAp5dNfhGwkEQX1/EiTiY1fWPjNhqRt0Yq2TrYAjaTkC905ZjTGNFbZsvqAj1bJt8Y+iMvqlutxElQMjAZDN9MUAJOXKXUBSbMHajXnQqldoCi7iEQX; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20210620&T=1700348675000; DOMAIN=www.bing.com");

	web_add_cookie("MUID=37B2D2ECCA4A663236C9C66BCB6267A6; DOMAIN=www.bing.com");

	web_add_cookie("MUIDB=37B2D2ECCA4A663236C9C66BCB6267A6; DOMAIN=www.bing.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=ru&SRCHLANGV2=ru&BRW=XW&BRH=M&CW=1872&CH=958&DPR=1&UTC=180&DM=0&EXLTT=17&HV=1700349041&WTS=63835945475&SW=1920&SH=1080&PV=15.0.0&PRVCW=881&PRVCH=929&SCW=1857&SCH=3394&IG=C2D4784AEEC2439BB690BCD8FEE2EC93; DOMAIN=www.bing.com");

	web_add_cookie("USRLOC=HS=1&CLOC=LAT=55.77155634706466|LON=37.49104280437394|A=733.4464586120832|TS=240807012317|SRC=W&BID=MjQwODA3MDQyMzE2XzY3YWZhYTNkMmI1OTBjOTEyYTUxNzRiMDY1MWY1NjNmY2ZjZmM1MDRkMWU5MWRhZWI4MDBhMWYwYzI1MTgwMmY=; DOMAIN=www.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=4BFBD9DEC4724631A72D30E484E2094C&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("_U=1BbORm2Tox5z_fY_077sP6rxg89xPrEz575udGAytoQ3B7CKDVW1jYgyh0NPCGU7esqLJx9KnJmL1uBkMh1Vjl_dIuqjSb1NpkU4OWDQl3LcE5eFsDqkUO-nZA9U52zogJHQ7KAE9qK0AANmHtS_a45zC69wVf0NuY8sdoUDxw2CQp0X1pVE4gwOgO0Aukt3mv-tbvjpF6zEtd9kZBPVQDj3VUQTYHcn5iGRAu-1tQpDf_hIcJz8NDP7fWVAhmo6V; DOMAIN=www.bing.com");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"128.0.2739.42");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAgALBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAA/xtUr4ASMoUztszoNuiWBkn6GqovbKfXqEFR+i2poZSLZRtRjzCUHcSVK3npSPCSnt6c2L7oI6SVb85tMZ8phKm3RQGWGkZVJrpj109U4C4sRU2rG7bekYa/I9eWQLtIktvGNULmvpI6XLxtsC2aBxkhAi7mYmfHQc4oU4zS4wEGYAABDmJQnK29NkjIpEMwUThaxOIAKiU+/xHnK1llqvuqeOE3oHzAn3LOczs2+u/ofBChax8s0P0sn9VOYhACX+W2pkPNWhlUbBVgNNC0y3K85befNZnLc7K+glG5w37Uy8k9RVL3Qz8IZHjR0A5jLItqyXzI0xZmHV37aNS/lcQdDFu3Xfe9RkW8Y8huRedTfFVYTR6sOsXilSDPBRSQLDyluzsResWD4NIDZhAnIX/g6jHTlSis8gh0AbEFCA+oQR+Y/OoTyOkkuZz/sjpl4/"
		"CM7kyJHiQAQs/PcyOkkcepclTZK2inuwvMtNBRC6EgAASFawGT7GI4NO8nrc9WpziUE0INXVrfwI6jiaD6QLSvsomunoIk3qmACw0g13TXC5mNq7EuFaWF/Rxq9IuuOgt0eueix46G2T0UdHdQoyuldRbcZO3DC8Li5ncEox6ekuayDTDcdtbvsPYC21z1FdA2aSU5o+WdKOL2ylF7/1l4QLJN5t5YLRvHmLrfjDCA8t6BNIkeE86QV9JE4Zbg/oPc6pi4xKXGi7EKvjW/GamOj9pQyRuMO3lx1S1gM/rlur4PJnHHDzVZvwyTbV9umnEGqCRXhCEPsoWwAU2mLWHHykoBH3XukIxhm2HECYxBfYjou63GoS3xSqwGotSboN4G6VffoGjsdPFX6d6v3zl2xN57NoKztV8E0CKmjCuLO/p/yapKWvfqhVru4mdwUddYkJw3WRsGClcNnVma2je0MtJbR9XQI=&p=");

	web_url("signin", 
		"URL=https://www.bing.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("128.0.2739.42_3", 
		"URL=https://config.edge.skype.com/config/v1/Edge/128.0.2739.42?clientId=-3181880309565117548&agents=EdgeRuntime%2CEdgeRuntimeConfig%2CEdgeDomainActions&osname=win&client=edge&channel=stable&scpfre=0&osarch=x86_64&osver=10.0.22631&wu=1&devicefamily=desktop&uma=1&sessionid=483&mngd=0&installdate=1622974563&edu=0&bphint=2&soobedate=1622974562&fg=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_clck=1ea745h%7C2%7Cfgt%7C1%7C1268; DOMAIN=copilot.microsoft.com");

	web_add_cookie("_uetvid=e3baf29010e711ee916edb6de638dd48; DOMAIN=copilot.microsoft.com");

	web_add_cookie("MUID=006E177420CA6F9F2FF003F321C26EFC; DOMAIN=copilot.microsoft.com");

	web_add_cookie("MUIDB=006E177420CA6F9F2FF003F321C26EFC; DOMAIN=copilot.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=copilot.microsoft.com");

	web_add_cookie("USRLOC=HS=1; DOMAIN=copilot.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=copilot.microsoft.com");

	web_add_cookie("SRCHUID=V=2&GUID=E6738B7157D945BF9B4397D3D7FB8879&dmnchg=1; DOMAIN=copilot.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20240522; DOMAIN=copilot.microsoft.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=ru; DOMAIN=copilot.microsoft.com");

	web_add_cookie("ANON=A=39978A300F926ACA38EECE85FFFFFFFF; DOMAIN=copilot.microsoft.com");

	web_add_cookie("_U=1wDigZHii5LUTjCM6MM9oxnv5SFcO6P1Dq-v3pBhOybHMa1QRn3EQO2p3bPiYs9lImZlI5dL4xOnTJ9TXM5IKBvSLWY9bCG5Qfl57odPL5-Zs8EBLdJpqBnzKU-MesbsTWiDiApboAStleMVK1vdYcSNkuwAR-x_YeLpi2XQmVuxU6eGk8RxCDvobA5i71HGiXt0R4VmSvZx6QiKSvYTVNhpG0wkDG9CjFxJ6qrKpLgjJFFmSD93iOU7ABooAaevt; DOMAIN=copilot.microsoft.com");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"128.0.2739.42");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAqyMBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAGBH0xhFdXNo09wgUCuCpyb1SlEiYsdndDq06aomwbP+NVhScQjHiSBQVk4NGvxip8u42uQS9k+LkkHqsrUWr4A/+x/vtRWwZ+bt2lwwZK5UEDONy6UW/mP0M55d6WlpgcyLDFbWhBfWYuWDY16wVLNsdw/+woNmrTpCUZYdyw4EEGYAABDO01m+JJIEwLKoONu6hy/IIALj0Uzu228kSWuApripd9ZMgKwK/pTEFy05QTY82a5f1WfXOfsh8+UyrO67Tgt1Nb4al+pVKIXZtylZlnHEhqfXr7CPiLlTcY8D2g+zEeQmTlerWRayXblZBbeUbS6s/6OUqrwwuXdZbEIQOB7d82EqrfWG6+rbXkck9ZwVKvqKgr0ETzpGmzp1qb/0pi98qxKHEWIXjSkGpDq/FykZeZyBM+7obuIPVfCCgIYX9FGEy4BrTBIGBoK0IoW8+"
		"qxtUP0HzMx574CVIUApwRGOH2bf/PuLNGKLjeCcaYkHyA5FMWUsfDWW2qWvBStVLocx4gs2LYc7lxfWLF1gFsfv7g0Lsx9cUeU1Lc5OHDrdUl2DO26T0A0GsIzVRh+se4F+vG1Ea5l5l6gV5N0MXtvuzbl0RCgs9ojh+ui+CINittoylN3yqhl1MAain2QIpDIqySSthlCsdIzvZiMO9rWiN1QTy7QNxLFR1otknqA4xjlD+5ZB0tMsecDntYYBYZV48pDiMsEisnkgBdhgGNcS7iGheF8KYEuuKz6yGzBXLWkZaHGZhPqZVS1folH5E/lL/TUw9Jvct5/hPeeG9ilqcQjlKVh9sc9zEkONXB0QTVzk+5XYnW0xA+6ySh3DXyVtpT07uZA3Z662mftnW1rP2asZVzSsSCC39+G3HNzTSHpNdBUSIpF5vLN0b5IrNfmYt5WLz9pTrxfmm2vLkh4+wpMQXQI=&p=");

	web_url("signin_2", 
		"URL=https://copilot.microsoft.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	web_add_header("X-AFS-CV", 
		"b6PoB0fg8wz8bFYZ6Ue5/l");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22631; app=Microsoft Edge; appVer=128.0.2739.42; appChannel=stable; appInstallationId=-3181880309565117548; region=RU;");

	web_add_header("X-Client-Data", 
		"COqOywE=");

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=lleMp6aJGZ2vRbMHqsGegw%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18lleMp6aJGZ2vRbMHqsGegw==\\x10c\\x18\\x02*\\xED\\x04\\x12\\x02\\x10\\x00\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08+\\xA1D\\x95\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t"
		"\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA9\\xF0O\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xBFG\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08\\xA8\\xB1\\xB6\\x8E\\x91\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionRJ\n\\x02\\x08\\x05\n"
		"\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00(\\x88\\x81\\x02(\\xC6\\xA6\\x02(\\xB1\\xE6\\x02(\\xCD\\xBE\\x02(\\xF7\\xF7\\x02(\\x9F\\xEF\\x05(\\xEB\\x95\t(\\xFC\\xDE$(\\xC9\\x8B)(\\xA1\\xDD'(\\xD0\\xAF:(\\xF1\\xBFG(\\xB5\\xDAD(\\x81\\xF5\\x02Z\\x05\n\\x03106b\ndummytokenj\\x02\\x10\\x01r\\x1Cchr:lleMp6aJGZ2vRbMHqsGegw==", 
		LAST);

	web_url("8066415539964960608", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/8066415539964960608", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=https://dev-boomq.pflb.ru/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	web_custom_request("rewardsUserInfo_2", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"39978A300F926ACA38EECE85FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"9/4CDynaJ8MgDGOXjYRs7j");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=128.0.2739.42&lang=ru&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingsettings", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ANON=; DOMAIN=www.bing.com");

	web_add_cookie("_RwBf=; DOMAIN=www.bing.com");

	web_url("shoppingsettings_2", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"128.0.2739.42");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("blocklist", 
		"URL=https://edge.microsoft.com/abusiveadblocking/api/v1/blocklist", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AnchorMailbox", 
		"CID:87b516458b911f6b");

	web_url("V1Profile", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("regionalAndLanguageSettings", 
		"URL=https://graph.microsoft.com/beta/me/settings/regionalAndLanguageSettings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AnchorMailbox", 
		"CID:87b516458b911f6b");

	web_url("V1Profile_2", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("1 Войти в систему");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"128.0.2739.42");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,ohckeflnhegojcjlcpbfpciadgikcohk,oankkpibpaokgecfckkdkgaoafllipag,kpfehajjjbbcifeehjgfgnabifknmdad,fppmbhmldokgmleojlplaaodlkibgikh,ndikpojcjlepofdkaaldkinkjbeeebkl,fgbafbciocncjfbbonhocjaohoknlaco,jbfaflocpnkhbgcijpkiafdpbjkedane,ojblfafjmiikbkepnnolpgbbhejhlcim,ahmaebgpfccdhgidjaidaoojjcijckba,ebkkldgijmkljgglkajkjgedfnigiakk,plbmmhnabegcabfbcejohgjpkamkddhn,mkcgfaeepibomfapiapjaceihcojnphg,llmidpclgepbgbgoecnhcmgfhmfplfao,omnckhpgfmaoelhddliebabpgblmmnjp,"
		"jcmcegpcehdchljeldgmmfbgcpnmgedo,lkkdlcloifjinapabfonaibjijloebfb,lfmeghnikdkbonehgjihjebgioakijgn,hjaimielcgmceiphgjjfddlgjklfpdei,cllppcmmlnkggcmljjfigkcigaajjmid,mpicjakjneaggahlnmbojhjpnileolnb,alpjnmnfbgfkmmpcfpejmmoebdndedno,pbdgbpmpeenomngainidcjmopnklimmf,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"6463");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-128.0.2739.42");

	lr_think_time(27);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=7:9Qn9ynW1a52hrGYJOGjckTucIOojwqwBsCWVbYsTv08&cup2hreq=3ff58799398caf51e1d9f2b56e184d6aff644d8a118926430d0a798548c840be", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.96\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.96\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.96,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.67\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.67\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.67,\"AppVersion\":\""
		"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.15\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.15\",\"AppMajorVersion\":\"128\",\""
		"AppRollout\":0.15,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.99\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.99\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.99,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.99\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.99\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.99,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.98\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.C4B45940980DE267593E38FC3BCEE9ABB1886239DB94D11C879120F684187BD2\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.98\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.98,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"10.34.0.54\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.5C7C275233B4FF5CFE02CEF51D4DFBF9DB7DB95E0D3CCB350BF390265C30C364\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.11\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.11,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"2024.8.24.2\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.26\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.26\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.26,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"1.0.0.26\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.78\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.78\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.78,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.86\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.86\",\"AppMajorVersion\":\"128"
		"\",\"AppRollout\":0.86,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.98\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.98\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.98,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.13\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.45FA9CECAB846038B3F0C0CC93D6F8BAFA15D0DF5FB2BF74FD25000AC9C4F477\"}]},\"ping\":{\"r\""
		":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.13\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.13,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"3039\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.01\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.01\",\"AppMajorVersion\":\"128"
		"\",\"AppRollout\":0.01,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.13\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3BCBB63547DC6FBD2B5BEBBE604287D324CD3E3EE79688822D3BF118897FBD14\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.13\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.13,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"2.0.7271.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.47,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.AB49E0C3C37ED291A405834ABAB3E229EE36E32B2095B217554E98A0E66ABF89\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.85,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"1.20240826.1.0\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.99\",\"enabled\":true,\"installdate\""
		":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.395055309C45C064C8948487D60004518D4BE5DB333B04A27DD55168137E8EB9\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.99\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.99,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"4.0.3.1\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.01\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.FA7FB5E439557E5D03F731D0899F8436F63778E56BDE8F82A668009A8310DFC9\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.01\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.01,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"2.0.0.10\"},{\"appid\":\""
		"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.58\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.58\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.58,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\""
		"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.14\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A9CF1FBD5170F5681A378ADB0C8B2D8856DB3103508F2C974291ED5FC49FAFD8\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.14\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.14,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\""
		":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"127.18067.18047.69\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.02\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.FCECBD70F33BE7D7204A0CFF661F0C43BACB3EC8864118B9F1E47DB6AD9476FE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.02\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.02,\"AppVersion\":\"128.0.2739.42\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"4.0.1.2\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.58\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3912AE3B63A3E8EE555D67078FBBDDCC8B8441A2EA309A96030A8239637C1476\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.58\",\"AppMajorVersion\":\"128\",\""
		"AppRollout\":0.58,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"13.0.0.0\"},{\"appid\":\"pbdgbpmpeenomngainidcjmopnklimmf\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.29\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.23FC730190D1A473D9EAAC658B317FAA605E66C27AA397D910AF9F66B312DE0E\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.29\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.29,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"0.0.0.30\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.73\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.E583C98FA018D5B458BB78AC778B01472BF5DBD1472F16DAA6EB9F46B55D73B1\"}]"
		"},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.73\",\"AppMajorVersion\":\"128\",\"AppRollout\":0.73,\"AppVersion\":\"128.0.2739.42\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.15\"},\"updatecheck\":{},\"version\":\"2024.6.20.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\""
		"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4037\"},\"prodversion\":\"128.0.2739.42\",\"protocol\":\"3.1\",\"requestid\":\"{3290ea6b-567f-45b7-a6af-834cef7e0423}\",\"sessionid\":\"{f45de088-426f-49bc-ba2b-251861548745}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.195.15\"},\"updaterversion\":\"128.0.2739.42\"}}", 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-26T13:05:38.279Z");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=ravil.yunusov.94@gmail.com", ENDITEM, 
		"Name=password", "Value=Hs,sytn1", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_url("config.json_2", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=13", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("-4776165001487966812", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/-4776165001487966812", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dev-boomq.pflb.ru/static/media/ru.4cd05270ae7e3662e152f7c201b429f1.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("1 Войти в систему",LR_AUTO);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"Body={\"email\":\"ravil.yunusov.94@gmail.com\",\"id\":1873,\"language\":\"RU\",\"notificationEnabled\":false}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"128.0.2739.42");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_auto_header("X-Microsoft-Update-Service-Cohort", 
		"6463");

	lr_think_time(6);

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"event\":[{\"download_time_ms\":84412,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":12,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"2024.8.26.1\",\"previousversion\":\"2024.8.24.2\",\"total\":0,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"ec73faaa-6821-4f15-9c66-6aff444ed468?P1=1725281367&P2=404&P3=2&P4=bN1pwJ8tMhhsAbNMP4gPzvhzkUiUQOoeXZG8Ro6MGdqi3KenPiPvTXdevK0vjN0KiXUPkZoREaBIlhOz2nXyIA%3d%3d\"},{\"errorcat\":1,\"errorcode\":12,\"eventresult\":0,\"eventtype\":3,\"nextfp\":\"1.F4BD3E42A90FE5729C841577D696AB83E2B8D6056C33159BCE7AF62108F37497\",\"nextversion\":\"2024.8.26.1\",\"previousfp\":\"1.5C7C275233B4FF5CFE02CEF51D4DFBF9DB7DB95E0D3CCB350BF390265C30C364\",\"previousversion\":\"2024.8.24.2\"}],\"installdate\":-1,\"lang\":\"ru\","
		"\"packages\":{\"package\":[{\"fp\":\"1.5C7C275233B4FF5CFE02CEF51D4DFBF9DB7DB95E0D3CCB350BF390265C30C364\"}]},\"version\":\"2024.8.24.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4037\"},\"prodversion\":\"128.0.2739.42\",\"protocol\":\"3.1\",\"requestid\":\""
		"{e1a41684-2770-4c27-9ee9-62c57383a0cf}\",\"sessionid\":\"{f45de088-426f-49bc-ba2b-251861548745}\",\"updaterversion\":\"128.0.2739.42\"}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"event\":[{\"download_time_ms\":4012,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":12,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"309.55738.1.0\",\"previousversion\":\"1.20240826.1.0\",\"total\":0,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/"
		"files/087c052d-2d1c-4c24-9226-26ea74392e49?P1=1725264009&P2=404&P3=2&P4=QjEhlYQC29THET6j1wCQn6fPG%2fUoJ1ucDtgQawmF7EOReOK6CRL7IvizRZmehoFelMb71uP7fohtU5WeBWK9oA%3d%3d\"},{\"errorcat\":1,\"errorcode\":12,\"eventresult\":0,\"eventtype\":3,\"nextfp\":\"1.AB49E0C3C37ED291A405834ABAB3E229EE36E32B2095B217554E98A0E66ABF89\",\"nextversion\":\"309.55738.1.0\",\"previousfp\":\"1.AB49E0C3C37ED291A405834ABAB3E229EE36E32B2095B217554E98A0E66ABF89\",\"previousversion\":\"1.20240826.1.0\"}],\"installdate\":-1,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.AB49E0C3C37ED291A405834ABAB3E229EE36E32B2095B217554E98A0E66ABF89\"}]},\"version\":\"1.20240826.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4037\"},\"prodversion\":\"128.0.2739.42\",\"protocol\":\"3.1\",\""
		"requestid\":\"{39ec0bb5-1e5c-45d9-9d54-82ebc076e458}\",\"sessionid\":\"{f45de088-426f-49bc-ba2b-251861548745}\",\"updaterversion\":\"128.0.2739.42\"}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("update_4", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.01\",\"enabled\":true,\"event\":[{\"download_time_ms\":4018,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":12,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"2.0.0.14\",\"previousversion\":\"2.0.0.10\",\"total\":0,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"8f2381c2-652d-48a2-86f6-19cb7757f5dc?P1=1724902196&P2=404&P3=2&P4=SGvrIq5aleE8ze3hdTp%2f%2byrGFLem8tcDWN6KqBrZsuvLg1xGVmHEJzxOHlXQsxZtKYoiZ51vFPCBra%2fVSRc1fw%3d%3d\"},{\"errorcat\":1,\"errorcode\":12,\"eventresult\":0,\"eventtype\":3,\"nextfp\":\"1.FA7FB5E439557E5D03F731D0899F8436F63778E56BDE8F82A668009A8310DFC9\",\"nextversion\":\"2.0.0.14\",\"previousfp\":\"1.FA7FB5E439557E5D03F731D0899F8436F63778E56BDE8F82A668009A8310DFC9\",\"previousversion\":\"2.0.0.10\"}],\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.FA7FB5E439557E5D03F731D0899F8436F63778E56BDE8F82A668009A8310DFC9\"}]},\"version\":\"2.0.0.10\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4037\"},\"prodversion\":\"128.0.2739.42\",\"protocol\":\"3.1\",\"requestid\":\""
		"{311831c7-8e01-4ece-915d-9e890751dce1}\",\"sessionid\":\"{f45de088-426f-49bc-ba2b-251861548745}\",\"updaterversion\":\"128.0.2739.42\"}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("update_5", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.73\",\"enabled\":true,\"event\":[{\"download_time_ms\":4052,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":12,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"2024.6.26.0\",\"previousversion\":\"2024.6.20.0\",\"total\":0,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"1ff6cf43-43ae-4172-a24b-2647debd83ff?P1=1724902198&P2=404&P3=2&P4=XC37JbZ0R99e1u11PC9FUikcaS6wBnPDtMAvA0KjhKwfUt6ubkTQr86UZHZK6h6vDwGBS9orbBElOZ3NSckrjw%3d%3d\"},{\"errorcat\":1,\"errorcode\":12,\"eventresult\":0,\"eventtype\":3,\"nextfp\":\"1.E583C98FA018D5B458BB78AC778B01472BF5DBD1472F16DAA6EB9F46B55D73B1\",\"nextversion\":\"2024.6.26.0\",\"previousfp\":\"1.E583C98FA018D5B458BB78AC778B01472BF5DBD1472F16DAA6EB9F46B55D73B1\",\"previousversion\":\"2024.6.20.0\"}],\"installdate\":-1,\"lang\":\"ru\","
		"\"packages\":{\"package\":[{\"fp\":\"1.E583C98FA018D5B458BB78AC778B01472BF5DBD1472F16DAA6EB9F46B55D73B1\"}]},\"version\":\"2024.6.20.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4037\"},\"prodversion\":\"128.0.2739.42\",\"protocol\":\"3.1\",\"requestid\":\""
		"{1bfe1501-2510-4800-adf6-6d1db20f8cd4}\",\"sessionid\":\"{f45de088-426f-49bc-ba2b-251861548745}\",\"updaterversion\":\"128.0.2739.42\"}}", 
		LAST);

	lr_start_transaction("2 Перейти в раздел “Новый тест”");

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_revert_auto_header("X-Microsoft-Update-Service-Cohort");

	lr_think_time(73);

	web_url("3820137214914388177", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/3820137214914388177", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/extensionrevocation/v1/threatListUpdates_fetch?req=ChcKBm1zZWRnZRINMTI4LjAuMjczOS40MhobCAEQCBoNMTcyNDY0OTY1NDE0MSIEIAEgAigEIgIIAQ==&ct=application/x-protobuf&key=d414dd4f9db345fa8003e32adc81b362", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("2 Перейти в раздел “Новый тест”",LR_AUTO);

	lr_think_time(30);

	lr_start_transaction("3 Создать Thread группу и выбрать генератор нагрузки");

	web_url("245672370506512239", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/245672370506512239", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(39);

	web_url("-6500415174606298601", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/-6500415174606298601", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(68);

	web_url("-1586226973087756765", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/-1586226973087756765", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_url("7685131721364954048", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/7685131721364954048", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(83);

	web_url("-6770916577216515732", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/-6770916577216515732", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"untitled_test_16:07\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[2]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"2ca4ebce-4bd8-437e-9a6b-2a2cd00427fb\",\"label\":\"New group 1\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\""
		"typeDisplayName\":\"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/send\",\"port\":\"8082\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"{\\\\\""
		"message\\\\\":\\\\\"\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82 2\\\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8082/api/kafka/send\",\"id\":\"27ffd458-6ee5-4cdd-a126-36bfae3f429a\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"},{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\""
		":false,\"method\":\"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"8082\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8082/api/kafka/message\",\"id\":\"028c6e89-b866-4b3b-bbcc-15038cfa7d7f\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\""
		"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 1\",\"id\":\"a00619d7-f025-43df-9929-22c2c017297f\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\""
		"runTearDownAfterShutdown\":true,\"configurationElements\":[{\"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":\"4a5844aa-b9c6-4d42-afe0-925ff01e770e\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"846a3869-09ed-4935-bffa-4b593f6824de\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\""
		"label\":\"Http request defaults\",\"type\":\"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"632c9f51-cd22-4048-8d17-be34a1d1ed12\",\"connectTimeout\":60000,\"responseTimeout\":120000}],\"loadProfile\":{\"usersPerStep\":10,\"rampDownMs\":60000,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":60000,\"stepLengthMs\":600000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_57437e5c-5473-48fd-bc60-608282becbe3\",\"id\":\""
		"57437e5c-5473-48fd-bc60-608282becbe3\",\"durationMs\":8000,\"enabled\":true}]},\"slaGroupList\":[],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"totalDuration\":720}", 
		EXTRARES, 
		"Url=../static/media/check.9725c0396328bae9471b624111fc14ca.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("3 Создать Thread группу и выбрать генератор нагрузки",LR_AUTO);

	lr_start_transaction("Настроить профиль нагрузки");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(28);

	web_url("2282498426288845501", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/2282498426288845501", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(36);

	web_url("-758488594576476886", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-5404104625039984836/-758488594576476886", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("15045", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/15045", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"BodyBinary={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"untitled_test_16:07\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[2]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"2ca4ebce-4bd8-437e-9a6b-2a2cd00427fb\",\"label\":\"New group 1\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\""
		"typeDisplayName\":\"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/send\",\"port\":\"8082\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"{\\\\\""
		"message\\\\\":\\\\\"\\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82 2\\\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8082/api/kafka/send\",\"id\":\"27ffd458-6ee5-4cdd-a126-36bfae3f429a\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"},{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\""
		":false,\"method\":\"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/message\",\"port\":\"8082\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8082/api/kafka/message\",\"id\":\"028c6e89-b866-4b3b-bbcc-15038cfa7d7f\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\""
		"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 1\",\"id\":\"a00619d7-f025-43df-9929-22c2c017297f\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\""
		"runTearDownAfterShutdown\":true,\"configurationElements\":[{\"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":\"90322afd-46f7-498f-9435-16934cca0d21\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"0dab04db-6f12-4aef-8b8a-d3853b9c82cc\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\""
		"label\":\"Http request defaults\",\"type\":\"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"55d04aa1-ec91-4a05-9aba-f1ed3c9d7dc2\",\"connectTimeout\":60000,\"responseTimeout\":120000}],\"loadProfile\":{\"usersPerStep\":5,\"rampDownMs\":60000,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":60000,\"stepLengthMs\":300000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_f6ee0221-feea-40a8-9f98-77a419e72887\",\"id\":\""
		"f6ee0221-feea-40a8-9f98-77a419e72887\",\"durationMs\":8000,\"enabled\":true}]},\"slaGroupList\":[{\"type\":\"GENERAL_TEST_SLA\",\"targetType\":\"TEST\",\"slaList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"operation\":\"LESS_EQUALS\",\"status\":\"NOT_COUNTED\",\"toDate\":\"30\",\"value\":\"3\"}]}],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"totalDuration\":420}", 
		LAST);

	lr_end_transaction("Настроить профиль нагрузки",LR_AUTO);

	return 0;
}
