Click_Awards_Portal_Tab_ExtrSearchForCompetitionLink()
{
		web_reg_save_param_regexp(
		"ParamName=SearchForCompetitionLink",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		"Ordinal=3",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);

		
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
        "ParamName=AwardsLink",
        "RegExp=<a href=\"siw_portal.url\?(.*)\" id=\"GSAWD_AWD_01\" >",
        LAST);	

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{AwardsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		LAST);
	
}
