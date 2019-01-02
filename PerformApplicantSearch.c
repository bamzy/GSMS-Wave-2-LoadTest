PerformApplicantSearch()
{
	
	web_submit_form("SIW_TTQ",
		"Snapshot=t88.inf",
		ITEMDATA,
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM,
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM,
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM,
		"Name=ANSWER.TTQ.MENSYS.5", "Value={Department}", ENDITEM,
		"Name=ANSWER.TTQ.MENSYS.6", "Value={Citizenship}", ENDITEM,
		"Name=ANSWER.TTQ.MENSYS.7", "Value={Program}", ENDITEM,
		"Name=ANSWER.TTQ.MENSYS.8", "Value={CourseOrThesis}", ENDITEM,
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM,		
		LAST);
	
	return 0;
}
