/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t218.inf", 
		LAST);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t219.inf", 
		LAST);

	lr_think_time(4);

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t220.inf", 
		LAST);

	web_url("success.txt_4", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t221.inf", 
		LAST);

	web_url("success.txt_5", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t222.inf", 
		LAST);

	lr_think_time(9);

	web_url("success.txt_6", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t223.inf", 
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
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=../css/uoa_files/index_files/modernizr.js", ENDITEM, 
		"Url=../css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=http://ciscobinary.openh264.org/openh264-win32-0410d336bb748149a4f560eb6108090f078254b1.zip", "Referer=", ENDITEM, 
		"Url=../css/uoa_files/css/uoa-ipp.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/index_files/all.js?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/framework-ie.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/framework.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/img/banner-bg.svg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Medium.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		LAST);

	web_add_cookie("EVISIONLOGINLANG=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONLOGINHTV=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONID_TEST=COOKIE_TEST; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_reg_find("Text=User Redirect", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_submit_data("SIW_LGN", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SCREEN_WIDTH.DUMMY.MENSYS.1", "Value=2560", ENDITEM, 
		"Name=SCREEN_HEIGHT.DUMMY.MENSYS.1", "Value=1080", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=RUNTIME.DUMMY.MENSYS.1", "Value=2019010209423175%1B9C8348A7C7406381CA2A16700C7DB6E2084D4A81CABA03CD01437944FF86537813C37ACA15E2B616CF15C963A34524083B0D0A4166F6F6946284A2B136C43E30%1BB71F747D177349EDBBCC7D3F5C757B65%1BNONE", ENDITEM, 
		"Name=PARS.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=MUA_CODE.DUMMY.MENSYS.1", "Value=AUTUSR1", ENDITEM, 
		"Name=PASSWORD.DUMMY.MENSYS.1", "Value=Qwerty12345", ENDITEM, 
		"Name=BP101.DUMMY_B.MENSYS.1", "Value=Log in", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=../fonts/glyphicons-halflings-regular.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/sv.css", ENDITEM, 
		LAST);

	web_add_cookie("EVISIONID=781BFA232DFA401AB481F3CF5C61D6C0; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_link("here", 
		"Text=here", 
		"Snapshot=t226.inf", 
		EXTRARES, 
		"Url=../css/uoa_files/index_files/all.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?29DC62E3DA1B4844wQ2KqzVxfh5Q_ivAwW3s8gReLnlksVBFj8e8Q8oMRQj0CWCSaFT5H1ht7-_R5243MobTdWPWkoiq8szCXAOLikwt6Nte42NT2T6EmFd9k9Y", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1546447386898" failed during recording. Server response : 404*/

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(10);

	web_link("Awards Portal", 
		"Text=Awards Portal", 
		"Ordinal=1", 
		"Snapshot=t227.inf", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-uat.ualberta.ca/api/emergencymessage.json?_=1546447400342" failed during recording. Server response : 404*/

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?537EEEBF66BD4AA4XpmeolSP3KCmhhT-Nbg4c93_yzOebW3J4rm0hh3pMvkGlZF7iKcEyfQjxs8e9nCulCZLb9dUDPUlY5p4JqxogFNWrrBAl2A5WLCPn2vN8qk", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=E12A2E276E764017TzFB5ePJ_xv9Z88DsEp4qknmJZRCeGjI4aez-Y7XvGeR58pixiqMSn6smHYW_D-eEJygXlZEFLbm-rmADrZUyXsUqeyINVld2PCy6jQeW1BKDCP73BrdPJp2co1KpWPAdHvvIU9RnMXCE26bJM2uQNLvY5E4DF51Wu2xXl0qjnXpdm3y5R0OkhtRN7aYV2uW", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=FA7E5E2E-8953-4F3A-BABC-6B4284295B9E", ENDITEM, 
		"Name=DIVID", "Value=divD45B6B8A-C94F-42BD-AD70-C935A240E4FD", ENDITEM, 
		EXTRARES, 
		"Url=../images/emailred.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?537EEEBF66BD4AA4XpmeolSP3KCmhhT-Nbg4c93_yzOebW3J4rm0hh3pMvkGlZF7iKcEyfQjxs8e9nCulCZLb9dUDPUlY5p4JqxogFNWrrBAl2A5WLCPn2vN8qk", ENDITEM, 
		"Url=../images/emailunr.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?537EEEBF66BD4AA4XpmeolSP3KCmhhT-Nbg4c93_yzOebW3J4rm0hh3pMvkGlZF7iKcEyfQjxs8e9nCulCZLb9dUDPUlY5p4JqxogFNWrrBAl2A5WLCPn2vN8qk", ENDITEM, 
		LAST);

	return 0;
}