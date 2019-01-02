dummy()
{

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t136.inf", 
		LAST);

	lr_think_time(4);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t137.inf", 
		LAST);

	lr_think_time(4);

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("success.txt_4", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("success.txt_5", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t140.inf", 
		LAST);

	lr_think_time(15);

	web_url("success.txt_6", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t141.inf", 
		LAST);

	lr_think_time(9);

	web_url("success.txt_7", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t142.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Log in to the portal", 
		LAST);

	web_add_cookie("BIGipServerSITSAPP-UAT-HTTP.app~SITSAPP-UAT-HTTP_pool=1092754092.36895.0000; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("BIGipServerSharedIIS-UAT=757209772.20480.0000; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("siw_lgn", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/index_files/modernizr.js", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Medium.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/img/banner-bg.svg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/css/uoa-ipp.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/index_files/all.js?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/framework.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/framework-ie.css?v=930.1", ENDITEM, 
		"Url=../images/working.gif", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254265271" failed during recording. Server response : 404*/

	lr_start_transaction("login");

	web_add_cookie("EVISIONLOGINLANG=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONLOGINHTV=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONID_TEST=COOKIE_TEST; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_reg_find("Text=User Redirect", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(34);

	web_submit_data("SIW_LGN", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SCREEN_WIDTH.DUMMY.MENSYS.1", "Value=1600", ENDITEM, 
		"Name=SCREEN_HEIGHT.DUMMY.MENSYS.1", "Value=900", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=RUNTIME.DUMMY.MENSYS.1", "Value=2018121914174382%1B86BACF9411E9FCB98253A622FF6FE6A43246A679F8E2B7B0874CCDF5872DE912D7428000DD6381619CDAAB69AD700684F9A5415209B6F58C65B7470EC6ED521A%1B13CA558B91274420AB076AFCB24D74B3%1BNONE", ENDITEM, 
		"Name=PARS.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=MUA_CODE.DUMMY.MENSYS.1", "Value=AUTUSR1", ENDITEM, 
		"Name=PASSWORD.DUMMY.MENSYS.1", "Value=Qwerty12345", ENDITEM, 
		"Name=BP101.DUMMY_B.MENSYS.1", "Value=Log in", ENDITEM, 
		EXTRARES, 
		"Url=../fonts/glyphicons-halflings-regular.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/sv.css", ENDITEM, 
		LAST);

	web_add_cookie("EVISIONID=0F14B06025E54BBFB096C2CC0FA94BEC; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_link("here", 
		"Text=here", 
		"Snapshot=t145.inf", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254321620" failed during recording. Server response : 404*/

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("navigate to awards portal");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(30);

	web_submit_data("siw_dmu.timeout", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?3FBE1C99205E4434p9A9WUIwpx5Xj-7SN6lPKx6ZKGLn1LF2vFi8vFZUYhiQCME918nhvk3okGjxC0Jj3xqg_aBUzhkKT_Nz8zvA3IYTcCSsDfEbgO-8z8dEYoE", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=B9B8C186A6224992Fxa49zssgYJnKsWrNf4ScDG98UnJS8whCM7Zz1FDemFHscB-WXjlyzzwTIPM4dB-z1d8ysFvkZQLcMOSle2-fKyrXzCmABoo", ENDITEM, 
		LAST);

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("siw_portal.url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?3FBE1C99205E4434p9A9WUIwpx5Xj-7SN6lPKx6ZKGLn1LF2vFi8vFZUYhiQCME918nhvk3okGjxC0Jj3xqg_aBUzhkKT_Nz8zvA3IYTcCSsDfEbgO-8z8dEYoE", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254354427" failed during recording. Server response : 404*/

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

	web_submit_data("SIW_INTRAY.getintray", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=5BB02629847940AAsnHL46J82_Ln2nlPVlwET0LMFBiuWa_GCI75f0HQLqdEcUn3xDTw70wOKfThduoD801Rq_hWuX1HP5b4zGFtCcU-5oackHal4sOnzZpms5O8AW5jXzaqCfRyjxMNlt2k66HvXQRmAKZJShCJokGrOmvhRdAYkLBEMvnU3Fe2nQYZRt2E4VwQHzYZ9jC3r5rS", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=606D4074-7EF5-4801-A210-92A173E61E08", ENDITEM, 
		"Name=DIVID", "Value=div3301944E-1ED7-4344-898E-523470599BEB", ENDITEM, 
		EXTRARES, 
		"Url=../images/emailred.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", ENDITEM, 
		"Url=../images/emailunr.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", ENDITEM, 
		LAST);

	web_revert_auto_header("DNT");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("DNT", 
		"1");

	lr_think_time(21);

	web_submit_data("siw_dmu.timeout_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=C2139C8B8A0B49D7AASCYmXIsv5YO0SrYgjCRlDMkhzTKgrR8mVDW1MNfiMO8GbT71ZiMZXDYwhnUsmr7r7pWWNVDPua1HwwkWdyoHVPKy4t-3rz", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("navigate to awards portal",LR_AUTO);

	lr_start_transaction("search for competition");

	web_reg_find("Text=Search for Competition", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?92BD90DC85AD41A9lwUE3vZo7rso5T5eDicBaNBfv61AEA2fUyw6E6_hxwok4hXctugHynTD0o6zQGJDR49onnx8VrV0SbY3689mer4OQhFHTQu5VyAdFHjth-a0XbNR6qNd1SFRQZuftNDAKwe-lFF63ORcvTXEfoTzzHoq0tHZkOw2L8JiYnTL1VRVsxKg6Td2DccUdVkPZMeybiAzVTtDBVDwEWfZtU941FcjpnboCqGUzpeYuRkCaug", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?92BD90DC85AD41A9lwUE3vZo7rso5T5eDicBaNBfv61AEA2fUyw6E6_hxwok4hXctugHynTD0o6zQGJDR49onnx8VrV0SbY3689mer4OQhFHTQu5VyAdFHjth-a0XbNR6qNd1SFRQZuftNDAKwe-lFF63ORcvTXEfoTzzHoq0tHZkOw2L8JiYnTL1VRVsxKg6Td2DccUdVkPZMeybiAzVTtDBVDwEWfZtU941FcjpnboCqGUzpeYuRkCaug", ENDITEM, 
		"Url=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?92BD90DC85AD41A9lwUE3vZo7rso5T5eDicBaNBfv61AEA2fUyw6E6_hxwok4hXctugHynTD0o6zQGJDR49onnx8VrV0SbY3689mer4OQhFHTQu5VyAdFHjth-a0XbNR6qNd1SFRQZuftNDAKwe-lFF63ORcvTXEfoTzzHoq0tHZkOw2L8JiYnTL1VRVsxKg6Td2DccUdVkPZMeybiAzVTtDBVDwEWfZtU941FcjpnboCqGUzpeYuRkCaug", ENDITEM, 
		"Url=../plugins/css/chosen/chosen-sprite@2x.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254426037" failed during recording. Server response : 404*/

	web_reg_find("Text=Search for Competition", 
		LAST);

	web_submit_form("SIW_TTQ", 
		"Snapshot=t151.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Search", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254443047" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(21);

	web_submit_data("siw_dmu.timeout_3", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=4BBEC326C7D74389xBIuXXRHp-Ypj8v81N0DPYjKar03K4cEEIz74-CvLKGaq7BvgBY2DtV_U6urAz3HwGXUiC83n1ACayKyj9-LZTiqLyLeM-ee", ENDITEM, 
		LAST);

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("SIW_TTQ_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=S8ubErgTUT7KJxHrml4ixRL1rqmrqZuOdyuZo0uLTQ8=;new;;", ENDITEM, 
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841359750", ENDITEM, 
		"Name=SEQN.DUMMY.MENSYS.1", "Value=2", ENDITEM, 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=4DAA753D82E142D8RAMuGS_qHOHtOVLlH_fERrx2vFYN7N2LlLHRirMbbmIxV4498dmcV7iOFsJTHYT_rMbewJssxa92wBxYDwYarw", ENDITEM, 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=5051DF18B772087FC3565E67043E5C502401C3867D02A50DC6934A3615DF9C6848811751BFCD06B7CF15E29446C086CB326795C13D4955E7E3610B6C73F54014", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=02mnOVDko+c10Q0XgfX3cRIP+46FKuo9maOLuYVKjsE=;mod;E005D931;DhJDR1NBV0RfQ01QXzAxAyJDMQ==", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=2018/19", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Back", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.10", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.11", "Value=", ENDITEM, 
		"Name=#.TTQ.MENSYS.1", "Value=XOQAD4X0ZfbMdwiDOMm8HMh21GfrNHuJnxIybNXgO10=;mod;EE3CDF27;BTJDOTAwDhJDR1NBV0RfQ01QXzAxAyJDMQ==", ENDITEM, 
		"Name=#.TTQ.MENSYS.2", "Value=HkAQab23NEtAd5ZLE4aWufeKngPp/ZXF9kpbZIb5sJA=;mod;05FE6565;AzJDMQ4SQ0dTQVdEX0NNUF8wMQMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.3", "Value=AOBo5TdZsEJWqoxYtofTel3V89pytbFyqlbAN7CMUrk=;mod;C623B65E;AzJDMg4SQ0dTQVdEX0NNUF8wMQMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.4", "Value=9GobFND9cfVdqAyB6uSHLXJtFlmb/0GBT16gqR2vKr0=;mod;158D2636;AzJDMw4SQ0dTQVdEX0NNUF8wMQMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.5", "Value=/XeT56RicmeZSbMe5JU+zka8DDgw+3omQ+6rUr5+w1A=;mod;A5532A26;BDJDOTAOEkNHU0FXRF9DTVBfMDEDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.6", "Value=uivf+rHTqhN228ZFUwq7EouBlXBd0MvaE9erehJ27Iw=;mod;275F3B0F;AzJDNA4SQ0dTQVdEX0NNUF8wMQMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.7", "Value=Xc41cZA2QHk/NssQqIpH45xtz2OLACompE+ZUlIAFCY=;mod;DBA4C75C;BDJDNTAOEkNHU0FXRF9DTVBfMDEDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.8", "Value=zED98Q7lJ7+PZzJz45+2R+yDdkl4b0KdqbSxATahkzE=;mod;05786E19;BDJDNTEOEkNHU0FXRF9DTVBfMDEDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.9", "Value=y/+YuPgdrlBYqtt4/3zrCC578yB3aho9bDecsw3lq0k=;mod;51C0E2CD;BDJDNTIOEkNHU0FXRF9DTVBfMDEDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.10", "Value=jAoKBS7L5TMedDLLJoKynoTJ8fRIhYGPubSQafdHvZ4=;mod;8332E2AA;BDJDNTMOEkNHU0FXRF9DTVBfMDEDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.11", "Value=IXcUw9IJmBD0sEiiQbJr6CiiPLOE2zn6aKLPYVEB7B8=;mod;9C36C73F;BDJDOTEOEkNHU0FXRF9DTVBfMDEDIkMx", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=02mnOVDko+c10Q0XgfX3cRIP+46FKuo9maOLuYVKjsE=;mod;E005D931;DhJDR1NBV0RfQ01QXzAxAyJDMQ==", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254480975" failed during recording. Server response : 404*/

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=56BF2CB68DFA41ACIt_FkrqzsTwYpt0xuYJyMJBjo8bKrWjwxHsx507heDAzmfAARIiCFzrsM6kmL3pPr1Lw7C3LWVZTjRQAy8pYlLhhlmd8BwHwxau3Krbsi0XjyGEz8fRQ7l8kcXas8gTo01feCMQhasmNIsU6fOpOFD_gAx2AyWznI_3kyXUONkhNPNcJQJ0GVl31FroVqIEl", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=272470C6-1A96-4AA2-B9CE-3107F55EB171", ENDITEM, 
		"Name=DIVID", "Value=divC6832610-50F0-40CF-BB23-846713EFD765", ENDITEM, 
		LAST);

	lr_end_transaction("search for competition",LR_AUTO);

	lr_think_time(30);

	web_submit_data("siw_dmu.timeout_4", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=F2A60A23A16D45F3Qp6kGR1NyrWJWnZ8lEOKpJoVY7BKT6ZhIdRuvq6bueI647K4IuYOHlXTKPnTIuwT5JniWnXxF0NEpLJnGBEx0Ddgjdga9bBe", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("search for awards");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Search for Award", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("SIW_YMHD.start_url_2", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38649AB677C74885jl41dBLXusiqwrR7zE_9hnN3RuV0ktGlWxOwvyHCkFyDhNaVnCsSE74d9LstHFi8HZNkEUQNxH7qvBoVKsbUPwpEHxLtbrFIdenYhY8823Jh8BumyIVkGoFnXIiCEmrQ5GGLSF6T764RQ1R5IAEE_Dae1y6eyK1jFjlmmE_P6wq2G7ZB7YjU2v6ZUaUN5dOYTeOn5KcH4Jo23Dljc8gms8_PmQgDbVDQbJTcQwJRkdY", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254528498" failed during recording. Server response : 404*/

	web_reg_find("Text=Search for Award", 
		LAST);

	lr_think_time(20);

	web_submit_form("SIW_TTQ_3", 
		"Snapshot=t157.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=Search", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254549592" failed during recording. Server response : 404*/

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	lr_think_time(12);

	web_submit_form("SIW_TTQ_4", 
		"Snapshot=t158.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.12", "Value=Back", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254576511" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_3", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", ENDITEM, 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", ENDITEM, 
		LAST);

	lr_end_transaction("search for awards",LR_AUTO);

	lr_think_time(28);

	web_submit_data("siw_dmu.timeout_5", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=E823AA977E9748835Pm3yNOfgoPoO7zIasDEgjicPq78uSsS9Grg82shfqCtTEMqaqtdT9DbrF2w1K5KCdH52CyMyUrGVmeQgRGy38nS44s4YFl5", ENDITEM, 
		LAST);

	lr_start_transaction("manage financial accounts");

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Manage Financial Accounts", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(33);

	web_url("SIW_DMX.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX.start_url?8543968D5E194E67zkboOu5ekUg0Uwk6_FiAvpOPu9FQt73ijD4IC6999xKtP3QkAjd3AGH_-3NTRZEwT0DFAzFQnUiSvc740gLQ5TDCncb2wRop49_5acnVZkGErrTz_OIYuP4dGnDGO6z2VUtUFH5IfmXqNXqATVeUMaTAWpr9cZkrQzYNcHBmtzZM-3IriWqSzLaeW03KtWxxQGyrdl9u_fFSkSuGxT7-3hfu9OEiY7-mDbAfah8w4kq1D6oZOB_PDp2SPvjwm04hAWIxZIY5wTplHCWX7HfoYUqh0svE9WMk0_5jqUuDfro", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../css/siw_dmx_lite.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX.start_url?8543968D5E194E67zkboOu5ekUg0Uwk6_FiAvpOPu9FQt73ijD4IC6999xKtP3QkAjd3AGH_-3NTRZEwT0DFAzFQnUiSvc740gLQ5TDCncb2wRop49_5acnVZkGErrTz_OIYuP4dGnDGO6z2VUtUFH5IfmXqNXqATVeUMaTAWpr9cZkrQzYNcHBmtzZM-3IriWqSzLaeW03KtWxxQGyrdl9u_fFSkSuGxT7-3hfu9OEiY7-mDbAfah8w4kq1D6oZOB_PDp2SPvjwm04hAWIxZIY5wTplHCWX7HfoYUqh0svE9WMk0_5jqUuDfro", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254640436" failed during recording. Server response : 404*/

	web_reg_find("Text=Manage Financial Accounts", 
		LAST);

	web_submit_form("SIW_DMX_LITE", 
		"Snapshot=t162.inf", 
		ITEMDATA, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.2-1", "Value=", ENDITEM, 
		"Name=retrieve.DUMMY_OPTIONS.MENSYS.1", "Value=Search", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254647978" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254576512" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(15);

	web_submit_data("siw_dmu.timeout_6", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX_LITE", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=551DA1366F3F42E7k3uo_lzQEieshIaKx-__abzz0CbJsXMiNk4lVKi8vZCD0XmAeq30zRDe_pod5nI55roZkIlXl91TE0D7d_CuM2yiT_MU66sd", ENDITEM, 
		LAST);

	web_reg_find("Text=Manage Financial Accounts", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_submit_data("SIW_DMX_LITE_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX_LITE", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX_LITE", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=FC25E36497A44FADoWIkX7yepfJD3A27M7r9x1XwEHv7eiftq0oUMKhLMG2107XUgaXOT9fgauCXJOso51UWJkZGSMd6u3gclbAw8E20oK9BapzyBulo5svMSTA", ENDITEM, 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.1", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-1", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-1", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-1", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-1", "Value=Vega Grad Schp1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-1", "Value=E5133", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-1", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-1", "Value=51000", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-1", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-1", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-1", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-1", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-1", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-1", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-1", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-1", "Value=51300", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-1", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-1", "Value=001SF", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-1", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-1", "Value=000036126", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-1", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-1", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-1", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-1", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-1", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.2", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-2", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-2", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-2", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-2", "Value=Barns B Memorial Schp", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-2", "Value=E5192", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-2", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-2", "Value=51000", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-2", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-2", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-2", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-2", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-2", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-2", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-2", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-2", "Value=51300", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-2", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-2", "Value=002SF", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-2", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-2", "Value=000120120", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-2", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-2", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-2", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-2", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-2", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.3", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-3", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-3", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-3", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-3", "Value=Thomas Farrell Greenhalgh Mem Schp", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-3", "Value=E5217", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-3", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-3", "Value=51000", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-3", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-3", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-3", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-3", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-3", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-3", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-3", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-3", "Value=51300", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-3", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-3", "Value=003SF", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-3", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-3", "Value=000036380", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-3", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-3", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-3", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-3", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-3", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.4", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-4", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-4", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-4", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-4", "Value=TD Bank Health Science Student Awards", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-4", "Value=E7036", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-4", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-4", "Value=510000", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-4", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-4", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-4", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-4", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-4", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-4", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-4", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-4", "Value=51300", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-4", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-4", "Value=004SF", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-4", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-4", "Value=000068939", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-4", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-4", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-4", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-4", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-4", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.5", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-5", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-5", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-5", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-5", "Value=Helen DeSilva Buchanan Grad Schp", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-5", "Value=E5648", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-5", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-5", "Value=510000", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-5", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-5", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-5", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-5", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-5", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-5", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-5", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-5", "Value=51300", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-5", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-5", "Value=006SF", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-5", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-5", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-5", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-5", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-5", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-5", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-5", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.6", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-6", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-6", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-6", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-6", "Value=Dallas Cullen Schp Gender & Social Justice Studies", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-6", "Value=E5096", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-6", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-6", "Value=150300", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-6", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-6", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-6", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-6", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-6", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-6", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-6", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-6", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-6", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-6", "Value=01208", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-6", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-6", "Value=000027662", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-6", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-6", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-6", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-6", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-6", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.7", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-7", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-7", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-7", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-7", "Value=Dissertation Fellowship", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-7", "Value=100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-7", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-7", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-7", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-7", "Value=85000", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-7", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-7", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-7", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-7", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-7", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-7", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-7", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-7", "Value=02793", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-7", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-7", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-7", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-7", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-7", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-7", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-7", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.8", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-8", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-8", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-8", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-8", "Value=MA Recruit UofA Thesis Master's Schlp", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-8", "Value=100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-8", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-8", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-8", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-8", "Value=85001", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-8", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-8", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-8", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-8", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-8", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-8", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-8", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-8", "Value=02796", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-8", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-8", "Value=000025906", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-8", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-8", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-8", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-8", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-8", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.9", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-9", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-9", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-9", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-9", "Value=MA Recuitment Fees", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-9", "Value=100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-9", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-9", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-9", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-9", "Value=85001", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-9", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-9", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-9", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-9", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-9", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-9", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-9", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-9", "Value=02796", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-9", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-9", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-9", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-9", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-9", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-9", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-9", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.10", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-10", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-10", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-10", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-10", "Value=Graduate Intern Tuition Supplement", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-10", "Value=100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-10", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-10", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-10", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-10", "Value=85002", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-10", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-10", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-10", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-10", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-10", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-10", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-10", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-10", "Value=02797", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-10", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-10", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-10", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-10", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-10", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-10", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-10", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.11", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-11", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-11", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-11", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-11", "Value=WHJ and PDPD", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-11", "Value=100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-11", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-11", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-11", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-11", "Value=85003", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-11", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-11", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-11", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-11", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-11", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-11", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-11", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-11", "Value=02798", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-11", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-11", "Value=000025908", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-11", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-11", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-11", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-11", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-11", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.12", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-12", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-12", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-12", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-12", "Value=Rogers Sugar Ltd Scholarship", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-12", "Value=530", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-12", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-12", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-12", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-12", "Value=GS012", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-12", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-12", "Value=RES0031092", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-12", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-12", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-12", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-12", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-12", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-12", "Value=02827", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-12", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-12", "Value=000025941", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-12", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-12", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-12", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-12", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-12", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.13", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-13", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-13", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-13", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-13", "Value=Alberta Research Council (Karl A Clark) Meml Schp", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-13", "Value=550", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-13", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-13", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-13", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-13", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-13", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-13", "Value=S000000007", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-13", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-13", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-13", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-13", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-13", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-13", "Value=02828", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-13", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-13", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-13", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-13", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-13", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-13", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-13", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.14", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-14", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-14", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-14", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-14", "Value=Pfizer Research Scholarship", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-14", "Value=550", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-14", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-14", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-14", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-14", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-14", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-14", "Value=S000000174", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-14", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-14", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-14", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-14", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-14", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-14", "Value=02830", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-14", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-14", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-14", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-14", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-14", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-14", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-14", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.15", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-15", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-15", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-15", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-15", "Value=Parke-Davis Canada Centennial Pharmacy Res Awd", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-15", "Value=553", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-15", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-15", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-15", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-15", "Value=GS013", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-15", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-15", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-15", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-15", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-15", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-15", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-15", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-15", "Value=02832", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-15", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-15", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-15", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-15", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-15", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-15", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-15", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.16", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-16", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-16", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-16", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-16", "Value=St John's Inst Schp in memory of Samuel Woloshyn", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-16", "Value=550", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-16", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-16", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-16", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-16", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-16", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-16", "Value=S000000199", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-16", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-16", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-16", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-16", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-16", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-16", "Value=02833", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-16", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-16", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-16", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-16", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-16", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-16", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-16", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.17", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-17", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-17", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-17", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-17", "Value=Queen Elizabeth II Scholarship", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-17", "Value=530", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-17", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-17", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-17", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-17", "Value=GS004", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-17", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-17", "Value=RES0031058", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-17", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-17", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-17", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-17", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-17", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-17", "Value=02834", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-17", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-17", "Value=000025953", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-17", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-17", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-17", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-17", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-17", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.18", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-18", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-18", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-18", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-18", "Value=TRLabs Scholarship", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-18", "Value=553", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-18", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-18", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-18", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-18", "Value=GS005", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-18", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-18", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-18", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-18", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-18", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-18", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-18", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-18", "Value=02835", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-18", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-18", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-18", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-18", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-18", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-18", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-18", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.19", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-19", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-19", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-19", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-19", "Value=Miscellaneous Sundry - Grad Studies", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-19", "Value=530", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-19", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-19", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-19", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-19", "Value=GS006", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-19", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-19", "Value=RES0031086", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-19", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-19", "Value=500125", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-19", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-19", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-19", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-19", "Value=02837", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-19", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-19", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-19", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-19", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-19", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-19", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-19", "Value=", ENDITEM, 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.20", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-20", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-20", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-20", "Value=UDD_NAME", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-20", "Value=Professor IF Morrison Scholarship", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-20", "Value=550", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-20", "Value=UDD_UDF1", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-20", "Value=220100", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-20", "Value=UDD_UDF2", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-20", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-20", "Value=UDD_UDF3", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-20", "Value=S000000038", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-20", "Value=UDD_UDF4", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-20", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-20", "Value=UDD_UDF5", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-20", "Value=0", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-20", "Value=UDD_UDF6", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-20", "Value=02839", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-20", "Value=UDD_UDF7", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-20", "Value=", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-20", "Value=UDD_UDF8", ENDITEM, 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-20", "Value=UDD_IUSE", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-20", "Value=Y", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.1-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.2-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.3-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.4-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.5-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.6-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.7-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.8-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.9-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.10-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.11-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_FIELDS.MENSYS.12-20", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.1", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.2", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.3", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.4", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.5", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.6", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.7", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.8", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.9", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.10", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.11", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.12", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.13", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.14", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.15", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.16", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.17", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.18", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.19", "Value=", ENDITEM, 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.20", "Value=", ENDITEM, 
		"Name=FIRST_VALUE.DUMMY_PAGER.MENSYS.1", "Value=1", ENDITEM, 
		"Name=PREVIOUS_VALUE.DUMMY_PAGER.MENSYS.1", "Value=-19", ENDITEM, 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.1-1", "Value=1", ENDITEM, 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.2-1", "Value=21", ENDITEM, 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.3-1", "Value=41", ENDITEM, 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.4-1", "Value=61", ENDITEM, 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.5-1", "Value=81", ENDITEM, 
		"Name=NEXT_VALUE.DUMMY_PAGER.MENSYS.1", "Value=21", ENDITEM, 
		"Name=LAST_VALUE.DUMMY_PAGER.MENSYS.1", "Value=621", ENDITEM, 
		"Name=store.DUMMY_OPTIONS.MENSYS.1", "Value=Save", ENDITEM, 
		"Name=DCTC.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=ENTC.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=DMVC.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=ACCESS.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=HITS_LIST.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=HITS.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=DB.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=CURRENT_HIT.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=VISTA_MODE.DUMMY.MENSYS.1", "Value=2", ENDITEM, 
		"Name=TRANSACTION_ID.DUMMY.MENSYS.1", "Value=280C0CFB-D164-41E9-B8F1-6A0012ABBFC1", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254691179" failed during recording. Server response : 404*/

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(8);

	web_submit_data("SIW_INTRAY.getintray_4", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", ENDITEM, 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", ENDITEM, 
		LAST);

	lr_end_transaction("manage financial accounts",LR_AUTO);

	lr_start_transaction("interruption report");

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254576513" failed during recording. Server response : 404*/

	web_reg_find("Text=GSMS Awards: Interruptions Report", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_url("SIW_POD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_POD.start_url?7C53473A476F4032z3Hv3oUcK0BBID-d8Ew-nI5ufE15Kle3d5RIy40esMX-zcznsR-NYwZ4mIXjbjQGva5lxz73IBzCO9ZgDV--jwnLan8mKIjbjhqJaxrlji_IA9Tdxr-r6C-5WCFmRrvn8DLfKCEJW4KNJol6MtLyXaD__sIUrf6lUesyMO_rqaJ0_MOVDGxzY1z-ydkRXoCq", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254761472" failed during recording. Server response : 404*/

	lr_end_transaction("interruption report",LR_AUTO);

	web_reg_find("Text=Award Tenure Report", 
		LAST);

	lr_think_time(51);

	web_url("SIW_YMHD.start_url_3", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254819684" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_5", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", ENDITEM, 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254576514" failed during recording. Server response : 404*/

	lr_start_transaction("award tenture report");

	web_reg_find("Text=Award Tenure Report", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);

	web_url("SIW_YMHD.start_url_4", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254858456" failed during recording. Server response : 404*/

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

	web_submit_data("siw_ttq.validation", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_ttq.validation", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mode", "Value=ONE", ENDITEM, 
		"Name=indx", "Value=ANSWER.TTQ.MENSYS.7.", ENDITEM, 
		"Name=valu", "Value=", ENDITEM, 
		"Name=ttqs", "Value=95", ENDITEM, 
		"Name=mhdc", "Value=00100009427841360252", ENDITEM, 
		"Name=seqn", "Value=1", ENDITEM, 
		"Name=nkey", "Value=7FD6DF5B5D6243F7mfQp3oe3SZaf1sjSrhfajLtlkMzVNOr6LdoVXV8lQMBEgUvFlJvbcoYBWn7RTMZBqho4L6L8wZv34occaTX1WA", ENDITEM, 
		LAST);

	web_submit_data("siw_ttq.validation_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_ttq.validation", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mode", "Value=ONE", ENDITEM, 
		"Name=indx", "Value=ANSWER.TTQ.MENSYS.7.", ENDITEM, 
		"Name=valu", "Value=1001", ENDITEM, 
		"Name=ttqs", "Value=95", ENDITEM, 
		"Name=mhdc", "Value=00100009427841360252", ENDITEM, 
		"Name=seqn", "Value=1", ENDITEM, 
		"Name=nkey", "Value=7FD6DF5B5D6243F7mfQp3oe3SZaf1sjSrhfajLtlkMzVNOr6LdoVXV8lQMBEgUvFlJvbcoYBWn7RTMZBqho4L6L8wZv34occaTX1WA", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(11);

	web_submit_data("siw_dmu.timeout_7", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=566395C4517749B9MsjQYiF8XQVR5t39PboyJzNamxIiCl7-9UENKJ3aaUI1glc7tLnvwaobsL5eNYvIKdhCWGVnS0I1QyamEbRoStzePMO7DyWU", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Award Tenure Report", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

	web_submit_data("SIW_TTQ_5", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=S8ubErgTUT7KJxHrml4ixRL1rqmrqZuOdyuZo0uLTQ8=;new;;", ENDITEM, 
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841360252", ENDITEM, 
		"Name=SEQN.DUMMY.MENSYS.1", "Value=1", ENDITEM, 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=7FD6DF5B5D6243F7mfQp3oe3SZaf1sjSrhfajLtlkMzVNOr6LdoVXV8lQMBEgUvFlJvbcoYBWn7RTMZBqho4L6L8wZv34occaTX1WA", ENDITEM, 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=28843A0EFC51B839EF0E9B5BB1104FA1DB19BD554B99216C6BFDB8BCB60F36F7BDD1A43A2AE22669FD857747C6FEAC278A18FB641A23F864C40B6CF17389C3F5", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=+vxvGrAR6NsiNVyoCMd8OlaBfcK+DSxtlRu1c+bBg0M=;mod;88EE324D;DhJDR1NBV0RfQVdEXzAyAyJDMQ==", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=N", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=1001", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.10", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.11", "Value=2", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.11", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.12", "Value=Search", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.12", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.13", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.14", "Value=4", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.14", "Value=", ENDITEM, 
		"Name=#.TTQ.MENSYS.1", "Value=XUSdo3lzAX+fc1RHp+HFqOS9Kyd4zdMlEmuCstK+avM=;mod;0FB83285;BTJDOTAwDhJDR1NBV0RfQVdEXzAyAyJDMQ==", ENDITEM, 
		"Name=#.TTQ.MENSYS.2", "Value=zjvi48RCT/gUHoj/tjZ0nqCnwQfZONiT8vA2LsJ+ouQ=;mod;3D4EEF83;BDJDOTQOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.3", "Value=ZwyjQPB1JgXuY0/lgo+Fdsou2BrDRCUGE9z7lDtZx/M=;mod;E826A4E3;AzJDNA4SQ0dTQVdEX0FXRF8wMgMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.4", "Value=3kOyzezJ5ZVrdBErL9/0EoSEUwwGUYag0neLPISs0+M=;mod;0A34562F;AzJDMQ4SQ0dTQVdEX0FXRF8wMgMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.5", "Value=6pnBvyXzA6A43RwzLQd+XfNyqF1Sg/IGARV8Dh5/ZGI=;mod;5688DEA2;AzJDMg4SQ0dTQVdEX0FXRF8wMgMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.6", "Value=Vi5E1SbyU0TmRrZWijW+UPVPVoRk42dQoUCoIYO6OK8=;mod;BB2BFA36;AzJDMw4SQ0dTQVdEX0FXRF8wMgMiQzE=", ENDITEM, 
		"Name=#.TTQ.MENSYS.7", "Value=TsOl7xrefmLM5ARMEVCFRQCrxThIZ0sqFDLmJ65IojI=;mod;8EC0C822;BDJDOTUOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.8", "Value=YKejtriznQk3Cx8DUpki9SxFVXqxMJsSPTagvfyq+XI=;mod;3124CF54;BDJDOTEOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.9", "Value=sAEgIQ21CA9THwdBzrBgxDosCWbsJKNc1upsZnQsm8U=;mod;5FF16042;BDJDOTIOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.10", "Value=3D425iHo150v1E3rgAey2eU6ntRMYep5KsD4RneRUSQ=;mod;73369B26;BDJDOTMOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.11", "Value=ouJ7+7m2Ow3swz426f/Ax4E0BFnkE/wQGN77pao2DnE=;mod;95A246F7;BDJDOTYOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.12", "Value=gsh0j2vqSIn7kxtYTbjCYrV/ynzdpzvE6atDqFgyK1A=;mod;3926B032;BDJDNTAOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.13", "Value=rYy4xtkU1i1Mx0bvRgNSR3ymjMLnZJDm9CCQQCgsvNE=;mod;A7DE92B8;BDJDNTEOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.14", "Value=JBDhPeR20iIC/25iymbflRQ0u+Sdn2q7gZdkT5LZj6c=;mod;6A19A3BB;BDJDOTkOEkNHU0FXRF9BV0RfMDIDIkMx", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=+vxvGrAR6NsiNVyoCMd8OlaBfcK+DSxtlRu1c+bBg0M=;mod;88EE324D;DhJDR1NBV0RfQVdEXzAyAyJDMQ==", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254915214" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254576515" failed during recording. Server response : 404*/

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_submit_data("SIW_INTRAY.getintray_6", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", ENDITEM, 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", ENDITEM, 
		LAST);

	lr_end_transaction("award tenture report",LR_AUTO);

	lr_start_transaction("navigate to awards tab");

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(54);

	web_url("siw_portal.url_2", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_url("siw_portal.url_3", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254999141" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_7", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", ENDITEM, 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", ENDITEM, 
		LAST);

	lr_end_transaction("navigate to awards tab",LR_AUTO);

	lr_think_time(25);

	web_submit_data("siw_dmu.timeout_8", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=C2E2842D8FAA4B061a5BVW0Sz6mL4jaECK5w2h4GjjLsncHHWJgN0k15fWSou5iDhH81C2kXCnrBfU5FS7Ow_LzZ82SPBlFVsQ2LANwS9VXgktK4", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Nomination Dashboard", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(48);

	web_url("SIW_YMHD.start_url_5", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?FF24ED0DDE4740045bMj0Hb2K3ghYOzgc0fP2ZWxBUhJqVr0Y6Ob4lao0hoPmxFUMIHxZUAMD_mvc0cZapzuWuXYg0Gr4oIVFYxuAPNF_jpMDV-ECdE5w9p0PRkDUSyZPh_uz8scTFkw4IAFqedv7F83lMSUANFySg7SHYAL1Qj5ZWBSHgD69tG2fSVWomhfEzDxNO3y8AWSsxwPQ8V2v1wQZrMT8DIt3IGITQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255078494" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254999142" failed during recording. Server response : 404*/

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	lr_think_time(4);

	web_link("Awards", 
		"Text=Awards", 
		"Ordinal=1", 
		"Snapshot=t180.inf", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255093797" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_8", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=0A281B1E77D54C08Rr_uTkrwGYJfwniDGT5BG0_DEA4Lj-aEejx2Za4WA7JDRfDhDbpMqNM_qfA4-YmVe_aUKvWMLf5ExP_6yMBZCxMCvQPiEfpeLdhmPH2ixDrascSnh9zhVLeXwlfOOylYDmxWQ6OvNQsfp5kICzCKjyIr3fbRU2T5OHP4JOiOX4hUCG5P7Bem6PtaMNSizrwALMrQJ8J7Z2a6MyHoVETHF1aMPAyGxmwmwHBGrYy6hsg3AIasMWkfnLH5TmKXo3Ag", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=61DFDB9B-719D-4985-B84D-92BDED647E43", ENDITEM, 
		"Name=DIVID", "Value=divA3773B20-674B-48C3-935B-2E6F60C9FF3B", ENDITEM, 
		LAST);

	lr_start_transaction("create package");

	web_reg_find("Text=Nomination Dashboard", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(22);

	web_url("SIW_YMHD.start_url_6", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?498C266C81F2478AEZwqezYlCJDWE0oZGKvFxcEAa2tE5ATdbhBshPxMyadJEi840YdXpy9snGT5jfIqIRN6xzAlF5xPIhvNIrWNjJ1ddifXSOOzpPbgnFvf0MUD_Aq3WPSI87HK8nr8vSp4X31ZTf-n90noSHmD2UF3ax3dUCh_09YonnmIHifWQBdTLjCdMz_KWT2GDvLNXBY9bZCJUo1GznD73JTDJ-0cSQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255117247" failed during recording. Server response : 404*/

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_9", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", ENDITEM, 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_submit_data("siw_dmu.timeout_9", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=6CBD9272ED634A5C1siM4b6SrR6qvaiNmeMWiU2tQMjzsoY9KdIQq8dk2D-Iwdd3jIV3eosYvoUFnAkgV7e646NJbGJ6_Cv4PvHG78bkZcd2eGhv", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=View Application", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(19);

	web_url("SIW_YMHD.start_url_7", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?498C266C81F2478AEZwqezYlCJDWE0oZGKvFxcEAa2tE5ATdbhBshPxMyadJEi840YdXpy9snGT5jfIqIRN6xzAlF5xPIhvNIrWNjJ1ddifXSOOzpPbgnFvf0MUD_Aq3WPSI87HK8nr8vSp4X31ZTf-n90noSHmD2UF3ax3dUCh_09YonnmIHifWQBdTLjCdMz_KWT2GDvLNXBY9bZCJUo1GznD73JTDJ-0cSQ", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../plugins/css/charcount/charcount.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255147974" failed during recording. Server response : 404*/

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("siw_dmu.timeout_10", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?498C266C81F2478AEZwqezYlCJDWE0oZGKvFxcEAa2tE5ATdbhBshPxMyadJEi840YdXpy9snGT5jfIqIRN6xzAlF5xPIhvNIrWNjJ1ddifXSOOzpPbgnFvf0MUD_Aq3WPSI87HK8nr8vSp4X31ZTf-n90noSHmD2UF3ax3dUCh_09YonnmIHifWQBdTLjCdMz_KWT2GDvLNXBY9bZCJUo1GznD73JTDJ-0cSQ", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=869FEA7C51BE4637lqNwfOkUfSrPWrH4Ekm6wKi_wezPUd3e3CeV1RcQYMB0J2Z5Q0-P61d85qen_t0zoJz53I2w0wcfAKQ82Yv5rrSxCquhgyMf", ENDITEM, 
		EXTRARES, 
		"Url=../plugins/javascript/charcount/charcount.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/sits_images/ui-bg_glass_75_e6e6e6_1x400.png" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254999143" failed during recording. Server response : 404*/

	web_reg_find("Text=Cover generation complete", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("SIW_YMHD.start_url_8", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?135CC2F22CDA41CFdV9pkn4GAhFfZ5kI6C6ddkXt8UBPLRoSTrggLQ6CwN3WKXuIxgD81E-g6fRpEnotDg1vrak-8C36gMt13LwLyp4LOrI28MbRy3tfipO6UW-gk2L0T1pX5NSooxEjBSzs11GUFGKuGyOaXyENNlNngxh8KL_r1YjKoBTsPq1ZPYDL5Piug5t6n7P1wZFiFoK0-rx0QZ8v0UTpbf6aYa6UuhmC-Yrk9LZJqZSP1ruw5Xg", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255181192" failed during recording. Server response : 404*/

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("siw_dmu.timeout_11", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=1F0CD08900CF412AcNnpF5kHcRzxNKvuZflUZvXnyajzZCdtr6vvp_GWILcjEVq-R0JX7TksnAlFg09Ev6oyinP2rXcMzxJev2AlW1ECLU0p96LT", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255093798" failed during recording. Server response : 404*/

	web_reg_find("Text=View Application", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_submit_data("SIW_TTQ_6", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=S8ubErgTUT7KJxHrml4ixRL1rqmrqZuOdyuZo0uLTQ8=;new;;", ENDITEM, 
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841360586", ENDITEM, 
		"Name=SEQN.DUMMY.MENSYS.1", "Value=1", ENDITEM, 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=09237F4AE3AA4AF8hiBqz5cvI-H0LuPkRIfgskAMAe-ZaDvjloQ4s-QcQQ85oSockFueFCK4AGf5DOTqZdu9T2M_9nvAPOSsUb7rGA", ENDITEM, 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=961262307D8B9ACCDF99C5315DBE2D79B28CA1D3B646A8CABF28F6B4FEC11567B6281F62D13291FF7EE23344B9BCF7D522F063EC1001ED827C07F7FBA5870A3C", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=HB9qfnNmtrJautuGEfcHuPWEuRzCsBXrO+d1Kc+OyX0=;mod;8B231BDD;DhJDR1NBV0RfTk9NXzA1AyJDMQ==", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Refresh", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=2", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=0", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=#.TTQ.MENSYS.1", "Value=Kxr169hi1tBHkXsK0VusDmBYoAe9bKN+BEY8vR3dWLk=;mod;A299D370;BTJDOTAwDhJDR1NBV0RfTk9NXzA1AyJDMQ==", ENDITEM, 
		"Name=#.TTQ.MENSYS.2", "Value=X+/QvNGnntNYQek4lND4OnO2+EpJNElgULb3mRyVob8=;mod;E96ACBC9;BDJDOTAOEkNHU0FXRF9OT01fMDUDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.3", "Value=GvVElnAa6u5M2vv+2bJBNjPkRdFzmPH8Z0RQdzPQbyo=;mod;E7BEC183;BDJDOTEOEkNHU0FXRF9OT01fMDUDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.4", "Value=aC37qEQoCaJtGQQY0FOgZyGzwWp4fbczQzZbrGu0vbQ=;mod;A4291C06;BDJDNTEOEkNHU0FXRF9OT01fMDUDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.5", "Value=FLgxAtpklbbgWUppmg9u8EEAbMuHGv+KC7spPGJYp9s=;mod;A97E164B;BDJDNTAOEkNHU0FXRF9OT01fMDUDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.6", "Value=Dnzvfzn5Fq3uLePqfJlnTqEkwBBN12np6pH88ZiCUGI=;mod;1CE08C61;BTJDOTAxDhJDR1NBV0RfTk9NXzA1AyJDMQ==", ENDITEM, 
		"Name=#.TTQ.MENSYS.7", "Value=31fjJmwM37FDHH8Wxlim3HR9JGdeU11GHAYkri6wYcY=;mod;AD9DE294;BDJDNTMOEkNHU0FXRF9OT01fMDUDIkMx", ENDITEM, 
		"Name=#.TTQ.MENSYS.8", "Value=kYlfbecl6X6mgxKqpvAee91n1Eu2eJxwX8FVoI9vhTM=;mod;6D43A141;BTJDMjAwDhJDR1NBV0RfTk9NXzA1AyJDMQ==", ENDITEM, 
		"Name=#.TTQ.MENSYS.9", "Value=VMpZ7WWNp3xiDPMSwk79g+V22UMtkdZcOM2GuUZ0Lko=;mod;7BE1082F;BTJDMjAxDhJDR1NBV0RfTk9NXzA1AyJDMQ==", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=HB9qfnNmtrJautuGEfcHuPWEuRzCsBXrO+d1Kc+OyX0=;mod;8B231BDD;DhJDR1NBV0RfTk9NXzA1AyJDMQ==", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255189280" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/sits_images/ui-bg_glass_75_e6e6e6_1x400.png" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255117248" failed during recording. Server response : 404*/

	lr_think_time(7);

	web_link("Download Merged PDF Application Pack", 
		"Text=Download Merged PDF Application Pack", 
		"Snapshot=t190.inf", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_10", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=0A281B1E77D54C08Rr_uTkrwGYJfwniDGT5BG0_DEA4Lj-aEejx2Za4WA7JDRfDhDbpMqNM_qfA4-YmVe_aUKvWMLf5ExP_6yMBZCxMCvQPiEfpeLdhmPH2ixDrascSnh9zhVLeXwlfOOylYDmxWQ6OvNQsfp5kICzCKjyIr3fbRU2T5OHP4JOiOX4hUCG5P7Bem6PtaMNSizrwALMrQJ8J7Z2a6MyHoVETHF1aMPAyGxmwmwHBGrYy6hsg3AIasMWkfnLH5TmKXo3Ag", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=61DFDB9B-719D-4985-B84D-92BDED647E43", ENDITEM, 
		"Name=DIVID", "Value=divA3773B20-674B-48C3-935B-2E6F60C9FF3B", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_submit_data("siw_dmu.timeout_12", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=4A3CF7796947404A8NOcoX-OPzYsmIBW4tTV1YmL4wdHLZv-t8zMpCxmbH-twzEP5t0xI1aShXjV4DcFEvQkvKAoe5KDa2Jn4PRGlGIob-TIhW-d", ENDITEM, 
		LAST);

	lr_think_time(27);

	web_submit_data("SIW_INTRAY.getintray_11", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", ENDITEM, 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", ENDITEM, 
		LAST);

	lr_end_transaction("create package",LR_AUTO);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254999144" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255093799" failed during recording. Server response : 404*/

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Award Search", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(58);

	web_url("SIW_YMHD.start_url_9", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?B73744E1D2954BFDGOdMTPMcAWsAL1494lu53lhbTVWUGINeMLnhRVabSuo4xQH2UZisS_iScYFKIn6opVhSVGIm_WMq0arxPVc379-MuJDNWm3rSOIMy8f7VBe3DKEhwUIXzxEIeRsF1nvVjTE3isV45UaGA_7zJvbQl3S0YDTnXPPCwquJgyVQP_6PeAdP4SPVL2RjVMXE0gthRGkkjTJLSaVsZph9FMaOP3SVC49YRZJ9mhPBN2hKRpA", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255332774" failed during recording. Server response : 404*/

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	lr_think_time(5);

	web_submit_form("SIW_TTQ_7", 
		"Snapshot=t195.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Exit", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255338824" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_12", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=FA9AB848E6F54028myflALhgJRwBaSt_AhuEobYQWb-P6KqfXRd7wnUIVDL2wqb5Ck-kD_ibQ4gjWcKsvNIHdIAJ2G4bDXqQtBSQMv2PLW2LGSfTAjX_Dp3YEWqLNJhg06_ZdhgyOMHY0xulQuHhVI1hJsjXxhCvlzQN36_OrqD0ZLouzcsf4Vp2BKxtZefDqZ6AzwCBM9BkAGiC-LzqMpfHeRnBYwZOnQ4GU6Nq1G1U-HZzRH1wSlEYduVQBrJo01TS1TuJ6P020Eji", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=B2A28770-48FA-440E-8D48-4ED81E5D036D", ENDITEM, 
		"Name=DIVID", "Value=div9BB8B3A8-3E05-45B2-A80D-247643F662A9", ENDITEM, 
		LAST);

	lr_start_transaction("award tab award search");

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254999145" failed during recording. Server response : 404*/

	web_reg_find("Text=Award Search", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("SIW_YMHD.start_url_10", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F7018AAC35AF491AuzMFG7qGh4W33kKOJqn86hL51w3KZBdxJ_L0vpGFTrQ03tl8f5KSofs_K65_Y82s-NnJIpUsbMC18VZsRWAsl2DT4zRy9KAsFwNJwnfUM9nJXUp-h5LWwuz6IKQ4uWZVJ9QacorJ_I-YTOUV8_TyUHHGViPrhdCvvDihB0w2AvdP_9YZIKWOX44TAYTAMHOr2J21032B5pVeTTiiny1lymJFGgxFUedQLL6WxMpolkA", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255362226" failed during recording. Server response : 404*/

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_submit_data("SIW_INTRAY.getintray_13", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", ENDITEM, 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", ENDITEM, 
		LAST);

	web_reg_find("Text=Award Search", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_submit_data("SIW_TTQ_8", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F7018AAC35AF491AuzMFG7qGh4W33kKOJqn86hL51w3KZBdxJ_L0vpGFTrQ03tl8f5KSofs_K65_Y82s-NnJIpUsbMC18VZsRWAsl2DT4zRy9KAsFwNJwnfUM9nJXUp-h5LWwuz6IKQ4uWZVJ9QacorJ_I-YTOUV8_TyUHHGViPrhdCvvDihB0w2AvdP_9YZIKWOX44TAYTAMHOr2J21032B5pVeTTiiny1lymJFGgxFUedQLL6WxMpolkA", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=S8ubErgTUT7KJxHrml4ixRL1rqmrqZuOdyuZo0uLTQ8=;new;;", ENDITEM, 
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841360835", ENDITEM, 
		"Name=SEQN.DUMMY.MENSYS.1", "Value=2", ENDITEM, 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=9331A0F0296D439DyWtyUB6ziDRHUBBlyp-ST-JK-aOs9LURvpkODcU6rzhdoyJTD_fvzTAWIJrAZx7WoMWSUOq4wDdTMxj4vwMT7w", ENDITEM, 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=F89C2ECE9FEA2560697F7B6287305C1FDFC0CF039D613114CDAF2FD1196C811B6B1D6F4798F769ABB629215FEC676ABE57E3ADAD5C6D5434FF4E5606355C0C04", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=BHA/KmHSp0fzO3D9cGaBo4+fd1mAwbUizODlIrCymhw=;mod;300C2B23;DhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=D", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=Search", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=#.TTQ.MENSYS.1", "Value=3r48Z5J9z7uTsGm2IvSsLOP6adZ2+DB0vBovmKtylxU=;mod;6F934529;BTJDMTAxDhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=#.TTQ.MENSYS.2", "Value=wTu54SGYOy6fSz394OTUG2bXWS2eoaCJAWqw/XfNScw=;mod;C945A158;BTJDMTAyDhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=#.TTQ.MENSYS.3", "Value=yDDcqTukKYGC8Sz9NcPUQIiHiLDZSVhROUXANhzh/Bo=;mod;0E38DB50;BTJDMTAzDhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=#.TTQ.MENSYS.4", "Value=ty+CmSwV3hLpoxhnSFX/A0c3ucQ9tJF4pHvyUCVzDD4=;mod;0DC832F8;BTJDMTA0DhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=#.TTQ.MENSYS.5", "Value=7934vMaeJogT9fYA/v+as/IxSNRsNGOXI4ljDYtCLQ4=;mod;C0937D08;BTJDMTA1DhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=#.TTQ.MENSYS.6", "Value=gnWVhTeFGocXCLDnQMqyutQisUlKYpLU1eunMqz/IXQ=;mod;592637C2;BTJDMjAxDhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=#.TTQ.MENSYS.7", "Value=zZ7XGlFSfEVhErgbm1slTgLHOJPUBb9WqVht088KXeA=;mod;CF041727;BTJDMjAyDhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=BHA/KmHSp0fzO3D9cGaBo4+fd1mAwbUizODlIrCymhw=;mod;300C2B23;DhJDR1NBV0RfTk9NXzEwAyJDMg==", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255379242" failed during recording. Server response : 404*/

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	lr_think_time(8);

	web_submit_form("SIW_TTQ_9", 
		"Snapshot=t200.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=Doctoral", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Exit", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_14", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=88F350DB4C19486AYjH9ng3ygmiNGI_g6fNeGn6b9DZmNECSlE5s6KQXM8FHM6Cw20XPYbbn3cGlNMAYKL1rhJ9i_ZErdandgihgL4eXBytDi9YwC8YQ1DjLtYu_xlASDx61rrCRYaw4-jg71MwBVcrqJaEPrEkxQJocSyRfplt91PGjYl0FX8EWBz7a6WJObfaYXpgZSYwCw1ZQckfmreUZ8BvWQVKxasmDZIBAvibHewsmabvbob6VIwc_nr80Rem5mp6aQ0d6X6J9", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=531E4866-52E4-45C2-9A0A-2D804126B821", ENDITEM, 
		"Name=DIVID", "Value=div1B896E71-10BB-4B4A-A4F9-F7D3048C367F", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255390851" failed during recording. Server response : 404*/

	lr_end_transaction("award tab award search",LR_AUTO);

	lr_think_time(27);

	web_submit_data("siw_dmu.timeout_13", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=A753254DDD644EA8OWoNuLOQO0H355G43PYAQdZQM3zZdrAw5VR_pBz7cJ9UdUMk9vIoQx-FztyEv3N2PqTv1pw4ACkoxvciGANZKIOrlhQVYqc2", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Search for Applicant", 
		LAST);

	web_revert_auto_header("DNT");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(13);

	web_url("SIW_YMHD.start_url_11", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../plugins/javascript/datatables/media/css/jquery.dataTables.min.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255440006" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254999146" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255390852" failed during recording. Server response : 404*/

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_15", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", ENDITEM, 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", ENDITEM, 
		LAST);

	lr_start_transaction("awards tab applicant search");

	web_reg_find("Text=Search for Applicant", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(18);

	web_url("SIW_YMHD.start_url_12", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255508889" failed during recording. Server response : 404*/

	web_revert_auto_header("DNT");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_16", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=88F350DB4C19486AYjH9ng3ygmiNGI_g6fNeGn6b9DZmNECSlE5s6KQXM8FHM6Cw20XPYbbn3cGlNMAYKL1rhJ9i_ZErdandgihgL4eXBytDi9YwC8YQ1DjLtYu_xlASDx61rrCRYaw4-jg71MwBVcrqJaEPrEkxQJocSyRfplt91PGjYl0FX8EWBz7a6WJObfaYXpgZSYwCw1ZQckfmreUZ8BvWQVKxasmDZIBAvibHewsmabvbob6VIwc_nr80Rem5mp6aQ0d6X6J9", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=531E4866-52E4-45C2-9A0A-2D804126B821", ENDITEM, 
		"Name=DIVID", "Value=div1B896E71-10BB-4B4A-A4F9-F7D3048C367F", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_add_header("DNT", 
		"1");

	lr_think_time(4);

	web_submit_data("siw_dmu.timeout_14", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=0F069F5D077B4527rc5QfKQ3NgUEOM621Ox8os9s5Zm80iuvZaJXpnBlIxA7e03MZtzsYyc0DQmsQ9Dtf34UN3rv69P5CMeOyYjOXqh9oN1hzh64", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545254999147" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255390853" failed during recording. Server response : 404*/

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1545255508890" failed during recording. Server response : 404*/

	return 0;
}