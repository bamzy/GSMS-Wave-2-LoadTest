ClickSearchForApplicant()
{

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t54.inf", 
		LAST);

	lr_think_time(5);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("success.txt_4", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t57.inf", 
		LAST);

	lr_think_time(12);

	web_url("success.txt_5", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t58.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Log in to the portal", 
		LAST);

	web_add_cookie("BIGipServerSITS-Test.app~SITS-Test_pool=1310857900.36895.0000; DOMAIN=graduate-studies-apply-test.ualberta.ca");

	web_add_cookie("BIGipServerSharedIIS-DEV=790764204.20480.0000; DOMAIN=graduate-studies-apply-test.ualberta.ca");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("siw_lgn", 
		"URL=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../css/uoa_files/index_files/modernizr.js", ENDITEM, 
		"Url=../css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/css/framework.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/framework-ie.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/uoa-ipp.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/index_files/all.js?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../images/working.gif", ENDITEM, 
		"Url=../css/uoa_files/img/banner-bg.svg", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Medium.woff", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905130113" failed during recording. Server response : 404*/

	web_add_cookie("EVISIONLOGINLANG=; DOMAIN=graduate-studies-apply-test.ualberta.ca");

	web_add_cookie("EVISIONLOGINHTV=; DOMAIN=graduate-studies-apply-test.ualberta.ca");

	web_add_cookie("EVISIONID_TEST=COOKIE_TEST; DOMAIN=graduate-studies-apply-test.ualberta.ca");

	web_reg_find("Text=User Redirect", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_submit_data("SIW_LGN", 
		"Action=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SCREEN_WIDTH.DUMMY.MENSYS.1", "Value=2560", ENDITEM, 
		"Name=SCREEN_HEIGHT.DUMMY.MENSYS.1", "Value=1080", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=RUNTIME.DUMMY.MENSYS.1", "Value=2018101817252892%1B4311FD9079557D24CFDD589691DA378B34877F32A34CA8BA287F4381315433CCA449E67A40B872B70E97F5CAC1E7ACBE1B82D72503DA3DF5F05B6860CF809832%1B7F80724DFA274C1382EB10AC10D0707B%1BNONE", ENDITEM, 
		"Name=PARS.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=MUA_CODE.DUMMY.MENSYS.1", "Value=88882001", ENDITEM, 
		"Name=PASSWORD.DUMMY.MENSYS.1", "Value=Qwerty12345", ENDITEM, 
		"Name=BP101.DUMMY_B.MENSYS.1", "Value=Log in", ENDITEM, 
		EXTRARES, 
		"Url=../fonts/glyphicons-halflings-regular.woff", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/css/sv.css", ENDITEM, 
		LAST);

	web_add_cookie("EVISIONID=C9F4B926A02B4B919D68C4C0E9F91D56; DOMAIN=graduate-studies-apply-test.ualberta.ca");

	web_reg_find("Text=e:Vision Portal", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_link("here", 
		"Text=here", 
		"Snapshot=t61.inf", 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905148521" failed during recording. Server response : 404*/

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray", 
		"Action=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_portal.url?87A7B8DBFED842CDyzzVO_DvoO6POHvocvT9xOhLG-fV_LV7IhkSGHUvuBJaWL8aKSGDsywGI08utSNg7MVn3QdOjYuNL1_JhQmnb4LWeEvgsnXyW6GLU01vcH4", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=7961F8DF43CB424DmdGqfcBjFBDRKwfUmQHI-OojVb9FQGedrOfWUi-uqVsn0ZewcEtN4GepL__3aK0PcieI8HZFr9V62nWcNEX_xMDie0yFCT2on3NuCgD5p0jd8HiQEhZxuzOYQEdloNh2vVf_2rQqvRpmiX_Zstwida9VvQMGKTnl949EHPBn5XZTmMQTjGGm6-AVHgPBzv1QSJJW_xsu7MALdLfnZuWftg", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=D1A9BD37-EE03-4D4B-99B6-CB46CDFAE3A3", ENDITEM, 
		"Name=DIVID", "Value=div97584AB1-FC91-496E-9A98-14BC1C0A1595", ENDITEM, 
		EXTRARES, 
		"Url=../images/emailred.jpg", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_portal.url?87A7B8DBFED842CDyzzVO_DvoO6POHvocvT9xOhLG-fV_LV7IhkSGHUvuBJaWL8aKSGDsywGI08utSNg7MVn3QdOjYuNL1_JhQmnb4LWeEvgsnXyW6GLU01vcH4", ENDITEM, 
		LAST);

	lr_think_time(29);

	web_submit_data("siw_dmu.timeout", 
		"Action=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_portal.url?87A7B8DBFED842CDyzzVO_DvoO6POHvocvT9xOhLG-fV_LV7IhkSGHUvuBJaWL8aKSGDsywGI08utSNg7MVn3QdOjYuNL1_JhQmnb4LWeEvgsnXyW6GLU01vcH4", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=9C50FAFD99B64A10xk1yV-ap3oWRuUiQTgnxclp5ueey91qr8SAmO-gJ9rmIFXZP5Vp16uwq5qnEmpSKyp1u8h6gatVNy0XjYivrF-_dPVAHfnJl", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_reg_find("Text=Search for Applicant", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(17);

	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?32AA123B90F44B64jwZLpwG2t2n7yQJ-yhFydQIS6X413g2ch5c3QcwD1x276sX5DGjRG0p7fDI8VP53v_41JwdSw40mAQPOD0a6D6coM37mt0bBEripz4GpDHR8hLAOe27yY0Dhz-mWnf74UU0Us1W5_IpXFcSGG3zoavZ9rUP30llni1HO65dSzcPhkHQCql54NDpvVJYiEgcpxay17F-P1po_A-KptEkcw9iJra_plZam-NnkC15IS6s", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_portal.url?87A7B8DBFED842CDyzzVO_DvoO6POHvocvT9xOhLG-fV_LV7IhkSGHUvuBJaWL8aKSGDsywGI08utSNg7MVn3QdOjYuNL1_JhQmnb4LWeEvgsnXyW6GLU01vcH4", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?32AA123B90F44B64jwZLpwG2t2n7yQJ-yhFydQIS6X413g2ch5c3QcwD1x276sX5DGjRG0p7fDI8VP53v_41JwdSw40mAQPOD0a6D6coM37mt0bBEripz4GpDHR8hLAOe27yY0Dhz-mWnf74UU0Us1W5_IpXFcSGG3zoavZ9rUP30llni1HO65dSzcPhkHQCql54NDpvVJYiEgcpxay17F-P1po_A-KptEkcw9iJra_plZam-NnkC15IS6s", ENDITEM, 
		"Url=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?32AA123B90F44B64jwZLpwG2t2n7yQJ-yhFydQIS6X413g2ch5c3QcwD1x276sX5DGjRG0p7fDI8VP53v_41JwdSw40mAQPOD0a6D6coM37mt0bBEripz4GpDHR8hLAOe27yY0Dhz-mWnf74UU0Us1W5_IpXFcSGG3zoavZ9rUP30llni1HO65dSzcPhkHQCql54NDpvVJYiEgcpxay17F-P1po_A-KptEkcw9iJra_plZam-NnkC15IS6s", ENDITEM, 
		"Url=../plugins/javascript/datatables/media/css/jquery.dataTables.min.css?v=930.1", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?32AA123B90F44B64jwZLpwG2t2n7yQJ-yhFydQIS6X413g2ch5c3QcwD1x276sX5DGjRG0p7fDI8VP53v_41JwdSw40mAQPOD0a6D6coM37mt0bBEripz4GpDHR8hLAOe27yY0Dhz-mWnf74UU0Us1W5_IpXFcSGG3zoavZ9rUP30llni1HO65dSzcPhkHQCql54NDpvVJYiEgcpxay17F-P1po_A-KptEkcw9iJra_plZam-NnkC15IS6s", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905197726" failed during recording. Server response : 404*/

	web_reg_find("Text=Task Questions", 
		LAST);

	lr_think_time(14);

	web_submit_form("SIW_TTQ", 
		"Snapshot=t65.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905213259" failed during recording. Server response : 404*/

	web_reg_find("Text=Search for Applicant", 
		LAST);

	lr_think_time(4);

	web_submit_form("SIW_TTQ_2", 
		"Snapshot=t66.inf", 
		ITEMDATA, 
		"Name=NEXT.DUMMY.MENSYS.1", "Value=Back", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905217727" failed during recording. Server response : 404*/

	web_reg_find("Text=Search for Applicant", 
		LAST);

	lr_think_time(5);

	web_submit_form("SIW_TTQ_3", 
		"Snapshot=t67.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=a", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		EXTRARES, 
		"Url=../plugins/javascript/datatables/media/images/sort_both.png", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/plugins/javascript/datatables/media/css/jquery.dataTables.min.css?v=930.1", ENDITEM, 
		"Url=../plugins/javascript/datatables/media/images/sort_asc.png", "Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/plugins/javascript/datatables/media/css/jquery.dataTables.min.css?v=930.1", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905223635" failed during recording. Server response : 404*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(28);

	web_submit_data("siw_dmu.timeout_2", 
		"Action=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=DFF458B7D02842682GwlxEesRab961L_WGg0k2zi0wYxgRdq2vAk7y_XHta2AAo7PVvadHFHOr-m8sC1YYLBpILduuZaEN3JjSGagZPWFCp7JiO3", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905223636" failed during recording. Server response : 404*/

	web_reg_find("Text=Search for Applicant", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(28);

	web_submit_data("SIW_TTQ_4", 
		"Action=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=S8ubErgTUT7KJxHrml4ixRL1rqmrqZuOdyuZo0uLTQ8=;new;;", ENDITEM, 
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009362935172681", ENDITEM, 
		"Name=SEQN.DUMMY.MENSYS.1", "Value=4", ENDITEM, 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=D8ED3D72F9A148CD9rFN9gmSSbkPu2InR1-e6vxic-l76EjuMZw1klY23w0kwgjYQ4bEVPmuuvIe4R7-6tMlNuxtoxWvm9mAb8yGOw", ENDITEM, 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=63E62C7F275854ECD9ECF1A04ABC9C040CECFF11CC31A7523B24BED53D8E025416479C86A5848D9649AF7C0C49E8ED3B5FD29B8A3292CD0FD8CE525A21CA9A0E", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=j601TZL2wmb3uzB5IptV9X5N7XepGP2V2DluG1B8T2Y=;mod;38EDF69E;DhJDR1NBV0RfTk9NXzAzBCJDMTA=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=a", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.10", "Value=", ENDITEM, 
		"Name=#.TTQ.MENSYS.1", "Value=B4SnAC2JFAa2FZPLpcPsIQ7f45bzeujnTJ2J43LwHXg=;mod;4B1614B2;BTJDOTAwDhJDR1NBV0RfTk9NXzAzBCJDMTA=", ENDITEM, 
		"Name=#.TTQ.MENSYS.2", "Value=6wlgJl/8YoEndP6HHkalF4r2oeC+GcCgsH7UOTj3+yA=;mod;4AA5B2E7;AzJDMQ4SQ0dTQVdEX05PTV8wMwQiQzEw", ENDITEM, 
		"Name=#.TTQ.MENSYS.3", "Value=4mGGSO4EXR0Cvy0Dwl2EsSxY2DJdTP7wG/f16DHYyhc=;mod;4DBD159D;AzJDMg4SQ0dTQVdEX05PTV8wMwQiQzEw", ENDITEM, 
		"Name=#.TTQ.MENSYS.4", "Value=hNcErIzL+p26ul/8eVtWv6Te/S0P4V7z0Sj5WDWsLJg=;mod;E84221D3;AzJDMw4SQ0dTQVdEX05PTV8wMwQiQzEw", ENDITEM, 
		"Name=#.TTQ.MENSYS.5", "Value=c+XKAjB1O6OFHPC/hOrZe5zlXbdOs9+ml4L8cBI+X0o=;mod;E26AC84D;AzJDNA4SQ0dTQVdEX05PTV8wMwQiQzEw", ENDITEM, 
		"Name=#.TTQ.MENSYS.6", "Value=jQn3VWOCnzDfliKvqplp8Hj1ZiRAI87l0ZDeqqxtMWc=;mod;DE5D8EDF;AzJDNQ4SQ0dTQVdEX05PTV8wMwQiQzEw", ENDITEM, 
		"Name=#.TTQ.MENSYS.7", "Value=v2jQefglzTmSLn0UB/FCLCLjuttfx2PrNYIkH7de5k0=;mod;88F56DF1;AzJDNg4SQ0dTQVdEX05PTV8wMwQiQzEw", ENDITEM, 
		"Name=#.TTQ.MENSYS.8", "Value=moVDWSFA3jX+57k/rXEn8J2p4eOB1PgPbpJ5fwLnKMI=;mod;9306E15A;AzJDNw4SQ0dTQVdEX05PTV8wMwQiQzEw", ENDITEM, 
		"Name=#.TTQ.MENSYS.9", "Value=CbwCzog4KTjUi2x3iXOKvrQn2mNm3PyTLJ6kdZBKhe8=;mod;975C0236;BDJDNTAOEkNHU0FXRF9OT01fMDMEIkMxMA==", ENDITEM, 
		"Name=#.TTQ.MENSYS.10", "Value=HHvpEIW+MNzPKdNFwpncGV6lre/uf3ifIXdH9fzSIW8=;mod;87575864;BTJDOTAxDhJDR1NBV0RfTk9NXzAzBCJDMTA=", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=j601TZL2wmb3uzB5IptV9X5N7XepGP2V2DluG1B8T2Y=;mod;38EDF69E;DhJDR1NBV0RfTk9NXzAzBCJDMTA=", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		LAST);

	/* Request with GET method to URL "https://graduate-studies-apply-test.ualberta.ca/api/emergencymessage.json?_=1539905342299" failed during recording. Server response : 404*/

	return 0;
}