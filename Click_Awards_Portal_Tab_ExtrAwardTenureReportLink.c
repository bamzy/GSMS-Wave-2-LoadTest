Click_Awards_Portal_Tab_ExtrAwardTenureReportLink()
{
	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");



/*Correlation comment - Do not change!  Original value='div8E0486F5-F9A5-4C73-8BAB-E423C92E1D80' Name ='DIVID' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=DIVID",
		"RegExp=div\\ id=\"(.*?)\"></div",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);

/*Correlation comment - Do not change!  Original value='0FDB2DC9-A240-46E0-AC34-308C54A29DA6' Name ='ISSC' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=ISSC",
		"RegExp=\"REFRESH\":120000,\"ISSC\":\"(.*?)\",",
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

/*Correlation comment - Do not change!  Original value='A089347D38774D4A3WCTVPJdoJZHqD1o_NtGwuFJCgoatbZTcnRjQ524S5VI910w6d2gQHUzv9y3L5l68cZBWzOJ_zB6mKLZ0Gs5xgvwU8I1B-3h8h54rrUToinCOTzH4vjj89_H08TfPVrK2XbxZ19czFN5338tWvF2GiZMXxLCXza2bssMbhGgyuyJ7bR22BHiOoSk7s4LRPko' Name ='NKEY' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=NKEY",
		"RegExp=loading\\.\\\\\">\",\"ORDR\":\"\",\"MHVC\":\"GSAWD_001\",\"NKEY\":\"(.*?)\"}\\)}\\)",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);


		
		
		
	web_reg_save_param_regexp(
		"ParamName=AwardTenureReportLink",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		"Ordinal=4",
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
