Perform_FInancial_Account_Search()
{
	
	
	
	
	web_submit_form("SIW_DMX_LITE", 
		"Snapshot=t75.inf", 
		ITEMDATA, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.2-1", "Value=001SF", ENDITEM, 
		"Name=retrieve.DUMMY_OPTIONS.MENSYS.1", "Value=Search", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	return 0;
}
