Click_Search_For_Award_Link()
{
	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	       

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
	
	

	
	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{SearchForAnAwardsLink}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?EA026DD51BC74211HfMx3h_TiiPe1GvNX0ehNdlfCWz0usJzHQR6MmkcmPPse2xCkJNRPuC2AnpsPLuU4Eql4Z-30I8m0MA-mbcnfeidYyqWGBXWA_ny3pdYo4k", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?EB35303E56AD4C95HKXuftJI6QKiFKYKV34-zHpqfxYFDvmNyxDgFr1ZB9hHunkWK2mn5s3wFV63UsmBiUWgp--tqlf3n5JQCPxiba4eGeyrJ6ko-t0X026EQBv4Jy7yKF5fEXCLg5zoMdXXLQLfnMUzBdWFD_gQHdwhc5x9Z7mTDhziznzSurvbx0gxJLc4ITUAMGtSjm_TPD5lUxOAmMTIp72BcVr55jr3D4vamq6MNPESSwWff8KZgkc", ENDITEM, 
		"Url=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?EB35303E56AD4C95HKXuftJI6QKiFKYKV34-zHpqfxYFDvmNyxDgFr1ZB9hHunkWK2mn5s3wFV63UsmBiUWgp--tqlf3n5JQCPxiba4eGeyrJ6ko-t0X026EQBv4Jy7yKF5fEXCLg5zoMdXXLQLfnMUzBdWFD_gQHdwhc5x9Z7mTDhziznzSurvbx0gxJLc4ITUAMGtSjm_TPD5lUxOAmMTIp72BcVr55jr3D4vamq6MNPESSwWff8KZgkc", ENDITEM, 
		"Url=../plugins/css/chosen/chosen-sprite.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	
	
	return 0;
}
