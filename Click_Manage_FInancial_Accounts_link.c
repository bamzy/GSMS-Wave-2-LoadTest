Click_Manage_FInancial_Accounts_link()
{
	
	
	web_submit_data("SIW_INTRAY.getintray",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
		"Snapshot=t697.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=NKEY", "Value={NKEY}", ENDITEM,
		"Name=MHV_CODE", "Value={MHV_CODE}", ENDITEM,
		"Name=PAGE", "Value=", ENDITEM,
		"Name=ORDR", "Value=", ENDITEM,
		"Name=ISSC", "Value={ISSC}", ENDITEM,
		"Name=DIVID", "Value={DIVID}", ENDITEM,
		LAST);
	
	
	web_url("SIW_DMX.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX.start_url?{ManageFinancialAccountsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?CA19143325B6454CQN8on_gJpVmHPp1a3h-YhyYdUJeBcBNpsYbQA-fwE2812f81AQo7kspvLaminDx_ODS075AXoJxLIOL6aveJwW5N09_vDcUnJ9X8f4EBdi2MyH05GAOgLl4AFv6wwCQq",
		"Snapshot=t15.inf",
		"Mode=HTML",
		LAST);
	


	return 0;
}
