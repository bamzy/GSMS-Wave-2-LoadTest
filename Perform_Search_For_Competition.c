Perform_Search_For_Competition()
{
	
	
	web_reg_save_param_regexp(
		"ParamName=TTE.MENSYS.1-1",
		"RegExp=name=\"#\\.TTE\\.MENSYS\\.1-1\"\\ value=\"(.*?)\"\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_TTQ*",
		LAST);
	
	web_submit_form("SIW_TTQ", 
		"Snapshot=t62.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value={AcademicYear}", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Search", ENDITEM, 
		LAST);
	return 0;
}
