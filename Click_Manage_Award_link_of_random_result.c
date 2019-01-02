Click_Manage_Award_link_of_random_result()
{
	
	
	if (atoi(lr_eval_string("{LinkCount}")) > 0){
		
		web_link("Manage Award", 
			"Text=Manage Award", 
			"Ordinal=1", 
			"Snapshot=t771.inf", 
			LAST);
	}
	
	return 0;
}
