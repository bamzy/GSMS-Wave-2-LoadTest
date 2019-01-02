Perform_Search_For_An_Award()
{
	web_reg_find("Text=Manage Award",
        "SaveCount=LinkCount",
        LAST );
	web_submit_form("SIW_TTQ", 
		"Snapshot=t36.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=Search", ENDITEM, 
		LAST);
	
	return 0;
}
