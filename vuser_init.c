vuser_init()
{
	lr_log_message("VUSER IP -> %s",lr_get_vuser_ip());
	lr_log_message("VUSER ID -> %s",lr_eval_string("{ID}"));
	web_reg_save_param_regexp(
        "ParamName=RUNTIME.DUMMY.MENSYS.1",
        "RegExp=<input type=\"hidden\" name=\"RUNTIME\.DUMMY\.MENSYS\.1\" value=\"(.*)\\\"",
        SEARCH_FILTERS,
        "Scope=Body",
        "IgnoreRedirections=No",
        "RequestUrl=*/SIW_LGN*",
        LAST);	
        
        
	web_url("SIW_LGN",
		"URL=http://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t299.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/index_files/modernizr.js", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", ENDITEM, 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/img/banner-bg.svg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/font/DINWeb-Medium.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/images/working.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", ENDITEM, 
		LAST);

	
	

	web_submit_data("SIW_LGN_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Snapshot=t304.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=", ENDITEM, 
		"Name=SCREEN_WIDTH.DUMMY.MENSYS.1", "Value=1280", ENDITEM, 
		"Name=SCREEN_HEIGHT.DUMMY.MENSYS.1", "Value=720", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=RUNTIME.DUMMY.MENSYS.1", "Value={RUNTIME.DUMMY.MENSYS.1}", ENDITEM, 
		"Name=PARS.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=MUA_CODE.DUMMY.MENSYS.1", "Value={ID}", ENDITEM, 
		"Name=PASSWORD.DUMMY.MENSYS.1", "Value={Password}", ENDITEM, 
		"Name=BP101.DUMMY_B.MENSYS.1", "Value=Login >>", ENDITEM, 
		"Name=%.WEB_FOOT.MENSYS.1", "Value=", ENDITEM, 
		LAST);


	
	
	
	web_reg_save_param_regexp(
        "ParamName=AwardsLink",
        "RegExp=<a href=\"siw_portal.url\?(.*)\" id=\"GSAWD_AWD_01\" >",

        LAST);	
	
//	web_reg_save_param_regexp(
//        "ParamName=ManageApplications",
//        "RegExp=<a href=\"siw_portal.url\?(.*)\" id=\"GSWFL01\" title=\"Manage Applications\">",
//
//        LAST);	
	
	web_link("here", 
		"Text=here", 
		"Snapshot=t305.inf", 
		EXTRARES, 
		
		LAST);


	
	
	
	return 0;
}
