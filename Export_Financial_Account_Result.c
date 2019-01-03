Export_Financial_Account_Result()
{
	
	
	
	web_submit_form("SIW_DMX_LITE_3", 
		"Snapshot=t166.inf", 
		ITEMDATA, 
		"Name=SELECTED.DUMMY_OCCURRENCES.MENSYS.1", "Value=<OFF>", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-1", "Value=Vega Grad Schp123", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-1", "Value=E5133", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-1", "Value=51000", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-1", "Value=0", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-1", "Value=", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-1", "Value=500125", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-1", "Value=51300", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-1", "Value=001SF", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-1", "Value=000036126", ENDITEM, 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-1", "Value=Y", ENDITEM, 
		"Name=export.DUMMY_OPTIONS.MENSYS.1", "Value=Export", ENDITEM, 
		LAST);
	
	
		web_reg_save_param_regexp(
		"ParamName=ExportLink",
		"RegExp=target='_BLANK'> (.*?)\_mensys_udd.csv",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_XEPC*",
		LAST);
	
	
		web_submit_form("SIW_XEPC", 
		"Snapshot=t167.inf", 
		ITEMDATA, 
		"Name=EXP_ALL.DUM1.MENSYS.1", "Value=Export all retrieved records", ENDITEM, 
		"Name=FILETYPE.DUM1.MENSYS.1", "Value=CSV  (Comma separated)", ENDITEM, 
		"Name=NOTIFICATION.DUM1.MENSYS.1", "Value=Create Link", ENDITEM, 
		"Name=EMAIL.DUM1.MENSYS.1", "Value=", ENDITEM, 
		"Name=XET_CODE.DUM1.MENSYS.1", "Value=", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.3-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.4-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.5-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.6-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.7-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.8-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.9-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.10-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.11-1", "Value=1", ENDITEM, 
		"Name=EXPORT.ENTFLDS.MENSYS.12-1", "Value=1", ENDITEM, 
		"Name=BP102.DUMMY_B.MENSYS.1", "Value=Export", ENDITEM, 
		LAST);


	


	web_link("{ExportLink}_mensys_udd.csv", 
		"Text={ExportLink}_mensys_udd.csv", 
		"Snapshot=t34.inf", 
		LAST);
	
	
}
