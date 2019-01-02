ClickSearchForApplicant()
{

	web_submit_data("SIW_INTRAY.getintray",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
		"Snapshot=t62.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=NKEY", "Value={NKEY}", ENDITEM,
		"Name=MHV_CODE", "Value={MHV_CODE}", ENDITEM,
		"Name=PAGE", "Value=", ENDITEM,
		"Name=ORDR", "Value=", ENDITEM,
		"Name=ISSC", "Value={ISSC}", ENDITEM,
		"Name=DIVID", "Value={DIVID}", ENDITEM,		
		LAST);
	

/*Correlation comment - Do not change!  Original value='930.1' Name ='v' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=v",
		"RegExp=src=\"\\.\\./plugins/javascript/tablesaw/tablesaw\\.min\\.js\\?v=(.*?)\"></script",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		LAST);

/*Correlation comment - Do not change!  Original value='FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;' Name ='CorrelationParameter_3' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_3",
		"RegExp=name=\"%\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		LAST);

	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{SearchForApplicantLink}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 		
		LAST);


	
	
//	web_submit_data("SIW_INTRAY.getintray",
//		"Action=https://graduate-studies-apply-train.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
//		"Method=POST",
//		"RecContentType=text/html",
//		"Referer=https://graduate-studies-apply-train.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
//		"Snapshot=t697.inf",
//		"Mode=HTML",
//		ITEMDATA,
//		"Name=NKEY", "Value={NKEY}", ENDITEM,
//		"Name=MHV_CODE", "Value={MHV_CODE}", ENDITEM,
//		"Name=PAGE", "Value=", ENDITEM,
//		"Name=ORDR", "Value=", ENDITEM,
//		"Name=ISSC", "Value={ISSC}", ENDITEM,
//		"Name=DIVID", "Value={DIVID}", ENDITEM,
//		LAST);
//	return 0;
//}
	
	
	return 0;
}