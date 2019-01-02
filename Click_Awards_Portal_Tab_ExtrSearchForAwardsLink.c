Click_Awards_Portal_Tab_ExtrSearchForAwardsLink()
{



	
	web_reg_save_param_regexp(
       "ParamName=NKEY",
       "RegExp=\"NKEY\":\"(.*)\"}",
        SEARCH_FILTERS,
        "Scope=Body",
        "IgnoreRedirections=No",
        LAST);
	
	
	web_reg_save_param_regexp(
       "ParamName=DIVID",
       "RegExp={\"DIVID\":\"(.*)\",\"REFRESH",
        SEARCH_FILTERS,
        "Scope=Body",
        "IgnoreRedirections=No",
        LAST);
	
	web_reg_save_param_regexp(
       "ParamName=ISSC",
       "RegExp=\"ISSC\":\"(.*)\",\"PAGE",
        SEARCH_FILTERS,
        "Scope=Body",
        "IgnoreRedirections=No",
        LAST);
	
	web_reg_save_param_regexp(
		"ParamName=SearchForAnAwardsLink",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);


	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=name=\"%\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);
		
		
	web_reg_save_param_regexp(
		"ParamName=InterruptionReportLink",
		"RegExp=SIW_POD\\.start_url\\?(.*?)\"\\ target",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);
	
	


/*Correlation comment - Do not change!  Original value='GSAWD_001' Name ='MHV_CODE' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=MHV_CODE",
		"RegExp=loading\\.\\\\\">\",\"ORDR\":\"\",\"MHVC\":\"(.*?)\",",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{AwardsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		LAST);
	
	
	


	
	return 0;
}
