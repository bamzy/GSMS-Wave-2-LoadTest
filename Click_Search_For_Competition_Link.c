Click_Search_For_Competition_Link()
{
	
	
		web_submit_data("SIW_INTRAY.getintray",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
		"Snapshot=t12.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=NKEY", "Value={NKEY}", ENDITEM,
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM,
		"Name=PAGE", "Value=", ENDITEM,
		"Name=ORDR", "Value=", ENDITEM,
		"Name=ISSC", "Value={ISSC}", ENDITEM,
		"Name=DIVID", "Value={DIVID}", ENDITEM,
		LAST);


	
	

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{SearchForCompetitionLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?DA9A0EB5CAC8481Ck9O73XRwDJ5amHaAF16yDCjKKb4t6HXhn7LA9QF6zRqkNa8WtTpUFp7sr36sbT_zICxNoU06zZU_ElQD-92qhkv4giAr1__imMEyibBlo9ZOTQFREdWn6D9SYqlcOFbI",
		"Snapshot=t20.inf",
		"Mode=HTML",
		LAST);





	return 0;
}
