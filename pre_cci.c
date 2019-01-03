# 1 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c"
# 1 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h" 1
 
 












 











# 103 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"


# 1075 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/SharedParameter.h" 1



 
 
 
 
# 100 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/web_api.h" 1







# 1 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/as_web.h"


# 802 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/as_web.h"



























# 840 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "D:\\Program Files (x86)\\Canon\\Easy-WebPrint EX\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2




 
 



# 3 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	lr_log_message("VUSER IP -> %s",lr_get_vuser_ip());
	lr_log_message("VUSER ID -> %s",lr_eval_string("{ID}"));
	web_reg_save_param_regexp(
        "ParamName=RUNTIME.DUMMY.MENSYS.1",
        "RegExp=<input type=\"hidden\" name=\"RUNTIME\.DUMMY\.MENSYS\.1\" value=\"(.*)\\\"",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "RequestUrl=*/SIW_LGN*",
        "LAST");	
	
	web_reg_save_param_regexp(
		"ParamName=DUMMY_MENSYS_1",
		"RegExp=name=\"%\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_lgn*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=WEB_HEAD_MENSYS_1",
		"RegExp=name=\"%\\.WEB_HEAD\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_lgn*",
		"LAST");



        
        
	web_url("SIW_LGN",
		"URL=http://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t299.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/index_files/modernizr.js", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", "ENDITEM", 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/img/banner-bg.svg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/font/DINWeb-Medium.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/images/working.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", "ENDITEM", 
		"LAST");

	
	

	web_submit_data("SIW_LGN_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Snapshot=t304.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=", "ENDITEM", 
		"Name=SCREEN_WIDTH.DUMMY.MENSYS.1", "Value=1280", "ENDITEM", 
		"Name=SCREEN_HEIGHT.DUMMY.MENSYS.1", "Value=720", "ENDITEM", 
		"Name=%.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=RUNTIME.DUMMY.MENSYS.1", "Value={RUNTIME.DUMMY.MENSYS.1}", "ENDITEM", 
		"Name=PARS.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=MUA_CODE.DUMMY.MENSYS.1", "Value={ID}", "ENDITEM", 
		"Name=PASSWORD.DUMMY.MENSYS.1", "Value={Password}", "ENDITEM", 
		"Name=BP101.DUMMY_B.MENSYS.1", "Value=Login >>", "ENDITEM", 
		"Name=%.WEB_FOOT.MENSYS.1", "Value=", "ENDITEM", 
		"LAST");


	
	
	
	web_reg_save_param_regexp(
        "ParamName=AwardsLink",
        "RegExp=<a href=\"siw_portal.url\?(.*)\" id=\"GSAWD_AWD_01\" >",

        "LAST");	
	
 
 
 
 
 
	
	web_link("here", 
		"Text=here", 
		"Snapshot=t305.inf", 
		"EXTRARES", 
		
		"LAST");


	
	
	
	return 0;
}
# 4 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "dummy.c" 1
dummy()
{

	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_find("Text=Log in to the portal", 
		"LAST");

	web_add_cookie("BIGipServerSITSAPP-UAT-HTTP.app~SITSAPP-UAT-HTTP_pool=1092754092.36895.0000; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("BIGipServerSharedIIS-UAT=757209772.20480.0000; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

 
	web_reg_save_param_regexp(
		"ParamName=RUNTIME.DUMMY.MENSYS.1",
		"RegExp=name=\"RUNTIME\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_lgn*",
		"LAST");

	web_url("siw_lgn", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=../css/uoa_files/index_files/modernizr.js", "ENDITEM", 
		"Url=../css/uoa_files/font/DINWeb-Medium.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=../css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=../css/uoa_files/img/banner-bg.svg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", "ENDITEM", 
		"Url=../css/uoa_files/css/uoa-ipp.css?v=930.1", "ENDITEM", 
		"Url=../css/uoa_files/index_files/all.js?v=930.1", "ENDITEM", 
		"Url=../css/uoa_files/css/framework.css?v=930.1", "ENDITEM", 
		"Url=../css/uoa_files/css/framework-ie.css?v=930.1", "ENDITEM", 
		"Url=../images/working.gif", "ENDITEM", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	 

	lr_start_transaction("login");

	web_add_cookie("EVISIONLOGINLANG=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONLOGINHTV=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONID_TEST=COOKIE_TEST; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_reg_find("Text=User Redirect", 
		"LAST");

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	lr_think_time(34);

 
	web_reg_save_param_regexp(
		"ParamName=Click_here_login_url",
		"RegExp=siw_portal\\.url\\?(.*?)\">here",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_LGN*",
		"LAST");

	web_submit_data("SIW_LGN",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_lgn",
		"Snapshot=t144.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=SCREEN_WIDTH.DUMMY.MENSYS.1", "Value=1600", "ENDITEM",
		"Name=SCREEN_HEIGHT.DUMMY.MENSYS.1", "Value=900", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"Name=RUNTIME.DUMMY.MENSYS.1", "Value={RUNTIME.DUMMY.MENSYS.1}", "ENDITEM",
		"Name=PARS.DUMMY.MENSYS.1", "Value=", "ENDITEM",
		"Name=MUA_CODE.DUMMY.MENSYS.1", "Value={ID}", "ENDITEM", 
		"Name=PASSWORD.DUMMY.MENSYS.1", "Value={Password}", "ENDITEM", 
		"Name=BP101.DUMMY_B.MENSYS.1", "Value=Log in", "ENDITEM",
		"EXTRARES",
		"URL=../fonts/glyphicons-halflings-regular.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/sv.css", "ENDITEM",
		"LAST");

	
	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
		
		
	web_reg_save_param_regexp(
        "ParamName=AwardsPortalTabLink",
        "RegExp=<a href=\"siw_portal.url\?(.*)\" id=\"GSAWD_AWD_01\" >",

        "LAST");	
        
        
 
 
 
 
 
 
        

	web_link("here", 
		"Text=here", 
		"Snapshot=t145.inf", 
		"EXTRARES", 		
		"LAST");

	lr_end_transaction("login",2);
	
	
 
	

	lr_start_transaction("navigate to awards portal");
	
	
	web_link("Awards Portal", 
		"Text=Awards Portal", 
		"Ordinal=1", 
		"Snapshot=t227.inf", 
		"LAST");


	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(30);
 
 
 
 
 
 
 
 
 
 
 
 

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("siw_portal.url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url",
		"Snapshot=t147.inf",
		"Mode=HTML",
		"LAST");

	 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

	web_submit_data("SIW_INTRAY.getintray", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=5BB02629847940AAsnHL46J82_Ln2nlPVlwET0LMFBiuWa_GCI75f0HQLqdEcUn3xDTw70wOKfThduoD801Rq_hWuX1HP5b4zGFtCcU-5oackHal4sOnzZpms5O8AW5jXzaqCfRyjxMNlt2k66HvXQRmAKZJShCJokGrOmvhRdAYkLBEMvnU3Fe2nQYZRt2E4VwQHzYZ9jC3r5rS", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_001", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=606D4074-7EF5-4801-A210-92A173E61E08", "ENDITEM", 
		"Name=DIVID", "Value=div3301944E-1ED7-4344-898E-523470599BEB", "ENDITEM", 
		"EXTRARES", 
		"Url=../images/emailred.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", "ENDITEM", 
		"Url=../images/emailunr.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("DNT", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("DNT", 
		"1");

	lr_think_time(21);

	web_submit_data("siw_dmu.timeout_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=C2139C8B8A0B49D7AASCYmXIsv5YO0SrYgjCRlDMkhzTKgrR8mVDW1MNfiMO8GbT71ZiMZXDYwhnUsmr7r7pWWNVDPua1HwwkWdyoHVPKy4t-3rz", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	lr_end_transaction("navigate to awards portal",2);

	lr_start_transaction("search for competition");

	web_reg_find("Text=Search for Competition", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?92BD90DC85AD41A9lwUE3vZo7rso5T5eDicBaNBfv61AEA2fUyw6E6_hxwok4hXctugHynTD0o6zQGJDR49onnx8VrV0SbY3689mer4OQhFHTQu5VyAdFHjth-a0XbNR6qNd1SFRQZuftNDAKwe-lFF63ORcvTXEfoTzzHoq0tHZkOw2L8JiYnTL1VRVsxKg6Td2DccUdVkPZMeybiAzVTtDBVDwEWfZtU941FcjpnboCqGUzpeYuRkCaug", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?FFE57C3B6AA44B56gAoc0HdO9FYJe6nV_YLLbwOXWzxU0JytZgnJq8hv3ZbJvdU1WFPYbjp5m_hlRcAaW5zMNEN29-R5K0ZArY7zVl79ltDGL9-zQcp0nBwrpPg", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?92BD90DC85AD41A9lwUE3vZo7rso5T5eDicBaNBfv61AEA2fUyw6E6_hxwok4hXctugHynTD0o6zQGJDR49onnx8VrV0SbY3689mer4OQhFHTQu5VyAdFHjth-a0XbNR6qNd1SFRQZuftNDAKwe-lFF63ORcvTXEfoTzzHoq0tHZkOw2L8JiYnTL1VRVsxKg6Td2DccUdVkPZMeybiAzVTtDBVDwEWfZtU941FcjpnboCqGUzpeYuRkCaug", "ENDITEM", 
		"Url=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?92BD90DC85AD41A9lwUE3vZo7rso5T5eDicBaNBfv61AEA2fUyw6E6_hxwok4hXctugHynTD0o6zQGJDR49onnx8VrV0SbY3689mer4OQhFHTQu5VyAdFHjth-a0XbNR6qNd1SFRQZuftNDAKwe-lFF63ORcvTXEfoTzzHoq0tHZkOw2L8JiYnTL1VRVsxKg6Td2DccUdVkPZMeybiAzVTtDBVDwEWfZtU941FcjpnboCqGUzpeYuRkCaug", "ENDITEM", 
		"Url=../plugins/css/chosen/chosen-sprite@2x.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", "ENDITEM", 
		"LAST");

	 

	web_reg_find("Text=Search for Competition", 
		"LAST");

	web_submit_form("SIW_TTQ", 
		"Snapshot=t151.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=2018/2019", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Search", "ENDITEM", 
		"LAST");

	 

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(21);

	web_submit_data("siw_dmu.timeout_3", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=4BBEC326C7D74389xBIuXXRHp-Ypj8v81N0DPYjKar03K4cEEIz74-CvLKGaq7BvgBY2DtV_U6urAz3HwGXUiC83n1ACayKyj9-LZTiqLyLeM-ee", "ENDITEM", 
		"LAST");

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("SIW_TTQ_2",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ",
		"Snapshot=t153.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=%.WEB_HEAD.MENSYS.1", "Value={WEB_HEAD_MENSYS_1}", "ENDITEM",
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841359750", "ENDITEM",
		"Name=SEQN.DUMMY.MENSYS.1", "Value=2", "ENDITEM",
		"Name=NKEY.DUMMY.MENSYS.1", "Value=4DAA753D82E142D8RAMuGS_qHOHtOVLlH_fERrx2vFYN7N2LlLHRirMbbmIxV4498dmcV7iOFsJTHYT_rMbewJssxa92wBxYDwYarw", "ENDITEM",
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=5051DF18B772087FC3565E67043E5C502401C3867D02A50DC6934A3615DF9C6848811751BFCD06B7CF15E29446C086CB326795C13D4955E7E3610B6C73F54014", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=02mnOVDko+c10Q0XgfX3cRIP+46FKuo9maOLuYVKjsE=;mod;E005D931;DhJDR1NBV0RfQ01QXzAxAyJDMQ==", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.2", "Value=2018/19", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Back", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.10", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.11", "Value=", "ENDITEM",
		"Name=#.TTQ.MENSYS.1", "Value=XOQAD4X0ZfbMdwiDOMm8HMh21GfrNHuJnxIybNXgO10=;mod;EE3CDF27;BTJDOTAwDhJDR1NBV0RfQ01QXzAxAyJDMQ==", "ENDITEM",
		"Name=#.TTQ.MENSYS.2", "Value=HkAQab23NEtAd5ZLE4aWufeKngPp/ZXF9kpbZIb5sJA=;mod;05FE6565;AzJDMQ4SQ0dTQVdEX0NNUF8wMQMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.3", "Value=AOBo5TdZsEJWqoxYtofTel3V89pytbFyqlbAN7CMUrk=;mod;C623B65E;AzJDMg4SQ0dTQVdEX0NNUF8wMQMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.4", "Value=9GobFND9cfVdqAyB6uSHLXJtFlmb/0GBT16gqR2vKr0=;mod;158D2636;AzJDMw4SQ0dTQVdEX0NNUF8wMQMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.5", "Value=/XeT56RicmeZSbMe5JU+zka8DDgw+3omQ+6rUr5+w1A=;mod;A5532A26;BDJDOTAOEkNHU0FXRF9DTVBfMDEDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.6", "Value=uivf+rHTqhN228ZFUwq7EouBlXBd0MvaE9erehJ27Iw=;mod;275F3B0F;AzJDNA4SQ0dTQVdEX0NNUF8wMQMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.7", "Value=Xc41cZA2QHk/NssQqIpH45xtz2OLACompE+ZUlIAFCY=;mod;DBA4C75C;BDJDNTAOEkNHU0FXRF9DTVBfMDEDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.8", "Value=zED98Q7lJ7+PZzJz45+2R+yDdkl4b0KdqbSxATahkzE=;mod;05786E19;BDJDNTEOEkNHU0FXRF9DTVBfMDEDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.9", "Value=y/+YuPgdrlBYqtt4/3zrCC578yB3aho9bDecsw3lq0k=;mod;51C0E2CD;BDJDNTIOEkNHU0FXRF9DTVBfMDEDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.10", "Value=jAoKBS7L5TMedDLLJoKynoTJ8fRIhYGPubSQafdHvZ4=;mod;8332E2AA;BDJDNTMOEkNHU0FXRF9DTVBfMDEDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.11", "Value=IXcUw9IJmBD0sEiiQbJr6CiiPLOE2zn6aKLPYVEB7B8=;mod;9C36C73F;BDJDOTEOEkNHU0FXRF9DTVBfMDEDIkMx", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=02mnOVDko+c10Q0XgfX3cRIP+46FKuo9maOLuYVKjsE=;mod;E005D931;DhJDR1NBV0RfQ01QXzAxAyJDMQ==", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"LAST");

	 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=56BF2CB68DFA41ACIt_FkrqzsTwYpt0xuYJyMJBjo8bKrWjwxHsx507heDAzmfAARIiCFzrsM6kmL3pPr1Lw7C3LWVZTjRQAy8pYlLhhlmd8BwHwxau3Krbsi0XjyGEz8fRQ7l8kcXas8gTo01feCMQhasmNIsU6fOpOFD_gAx2AyWznI_3kyXUONkhNPNcJQJ0GVl31FroVqIEl", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_001", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=272470C6-1A96-4AA2-B9CE-3107F55EB171", "ENDITEM", 
		"Name=DIVID", "Value=divC6832610-50F0-40CF-BB23-846713EFD765", "ENDITEM", 
		"LAST");

	lr_end_transaction("search for competition",2);

	lr_think_time(30);

	web_submit_data("siw_dmu.timeout_4", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=F2A60A23A16D45F3Qp6kGR1NyrWJWnZ8lEOKpJoVY7BKT6ZhIdRuvq6bueI647K4IuYOHlXTKPnTIuwT5JniWnXxF0NEpLJnGBEx0Ddgjdga9bBe", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	lr_start_transaction("search for awards");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Search for Award", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("SIW_YMHD.start_url_2", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38649AB677C74885jl41dBLXusiqwrR7zE_9hnN3RuV0ktGlWxOwvyHCkFyDhNaVnCsSE74d9LstHFi8HZNkEUQNxH7qvBoVKsbUPwpEHxLtbrFIdenYhY8823Jh8BumyIVkGoFnXIiCEmrQ5GGLSF6T764RQ1R5IAEE_Dae1y6eyK1jFjlmmE_P6wq2G7ZB7YjU2v6ZUaUN5dOYTeOn5KcH4Jo23Dljc8gms8_PmQgDbVDQbJTcQwJRkdY", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_reg_find("Text=Search for Award", 
		"LAST");

	lr_think_time(20);

	web_submit_form("SIW_TTQ_3", 
		"Snapshot=t157.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=2018/2019", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=Search", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	 

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	lr_think_time(12);

	web_submit_form("SIW_TTQ_4", 
		"Snapshot=t158.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=2018/2019", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.12", "Value=Back", "ENDITEM", 
		"LAST");

	 

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_3", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_001", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", "ENDITEM", 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", "ENDITEM", 
		"LAST");

	lr_end_transaction("search for awards",2);

	lr_think_time(28);

	web_submit_data("siw_dmu.timeout_5", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=E823AA977E9748835Pm3yNOfgoPoO7zIasDEgjicPq78uSsS9Grg82shfqCtTEMqaqtdT9DbrF2w1K5KCdH52CyMyUrGVmeQgRGy38nS44s4YFl5", "ENDITEM", 
		"LAST");

	lr_start_transaction("manage financial accounts");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Manage Financial Accounts", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(33);

	web_url("SIW_DMX.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX.start_url?8543968D5E194E67zkboOu5ekUg0Uwk6_FiAvpOPu9FQt73ijD4IC6999xKtP3QkAjd3AGH_-3NTRZEwT0DFAzFQnUiSvc740gLQ5TDCncb2wRop49_5acnVZkGErrTz_OIYuP4dGnDGO6z2VUtUFH5IfmXqNXqATVeUMaTAWpr9cZkrQzYNcHBmtzZM-3IriWqSzLaeW03KtWxxQGyrdl9u_fFSkSuGxT7-3hfu9OEiY7-mDbAfah8w4kq1D6oZOB_PDp2SPvjwm04hAWIxZIY5wTplHCWX7HfoYUqh0svE9WMk0_5jqUuDfro", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../css/siw_dmx_lite.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX.start_url?8543968D5E194E67zkboOu5ekUg0Uwk6_FiAvpOPu9FQt73ijD4IC6999xKtP3QkAjd3AGH_-3NTRZEwT0DFAzFQnUiSvc740gLQ5TDCncb2wRop49_5acnVZkGErrTz_OIYuP4dGnDGO6z2VUtUFH5IfmXqNXqATVeUMaTAWpr9cZkrQzYNcHBmtzZM-3IriWqSzLaeW03KtWxxQGyrdl9u_fFSkSuGxT7-3hfu9OEiY7-mDbAfah8w4kq1D6oZOB_PDp2SPvjwm04hAWIxZIY5wTplHCWX7HfoYUqh0svE9WMk0_5jqUuDfro", "ENDITEM", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	 

	web_reg_find("Text=Manage Financial Accounts", 
		"LAST");

	web_submit_form("SIW_DMX_LITE", 
		"Snapshot=t162.inf", 
		"ITEMDATA", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.2-1", "Value=", "ENDITEM", 
		"Name=retrieve.DUMMY_OPTIONS.MENSYS.1", "Value=Search", "ENDITEM", 
		"LAST");

	 

	 

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(15);

	web_submit_data("siw_dmu.timeout_6", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX_LITE", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=551DA1366F3F42E7k3uo_lzQEieshIaKx-__abzz0CbJsXMiNk4lVKi8vZCD0XmAeq30zRDe_pod5nI55roZkIlXl91TE0D7d_CuM2yiT_MU66sd", "ENDITEM", 
		"LAST");

	web_reg_find("Text=Manage Financial Accounts", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_submit_data("SIW_DMX_LITE_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX_LITE", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX_LITE", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=FC25E36497A44FADoWIkX7yepfJD3A27M7r9x1XwEHv7eiftq0oUMKhLMG2107XUgaXOT9fgauCXJOso51UWJkZGSMd6u3gclbAw8E20oK9BapzyBulo5svMSTA", "ENDITEM", 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.1", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-1", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-1", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-1", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-1", "Value=Vega Grad Schp1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-1", "Value=E5133", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-1", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-1", "Value=51000", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-1", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-1", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-1", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-1", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-1", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-1", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-1", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-1", "Value=51300", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-1", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-1", "Value=001SF", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-1", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-1", "Value=000036126", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-1", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-1", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-1", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-1", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.2", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-2", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-2", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-2", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-2", "Value=Barns B Memorial Schp", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-2", "Value=E5192", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-2", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-2", "Value=51000", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-2", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-2", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-2", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-2", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-2", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-2", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-2", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-2", "Value=51300", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-2", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-2", "Value=002SF", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-2", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-2", "Value=000120120", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-2", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-2", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-2", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-2", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.3", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-3", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-3", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-3", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-3", "Value=Thomas Farrell Greenhalgh Mem Schp", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-3", "Value=E5217", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-3", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-3", "Value=51000", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-3", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-3", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-3", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-3", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-3", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-3", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-3", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-3", "Value=51300", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-3", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-3", "Value=003SF", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-3", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-3", "Value=000036380", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-3", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-3", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-3", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-3", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.4", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-4", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-4", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-4", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-4", "Value=TD Bank Health Science Student Awards", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-4", "Value=E7036", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-4", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-4", "Value=510000", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-4", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-4", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-4", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-4", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-4", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-4", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-4", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-4", "Value=51300", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-4", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-4", "Value=004SF", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-4", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-4", "Value=000068939", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-4", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-4", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-4", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-4", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.5", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-5", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-5", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-5", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-5", "Value=Helen DeSilva Buchanan Grad Schp", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-5", "Value=E5648", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-5", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-5", "Value=510000", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-5", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-5", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-5", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-5", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-5", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-5", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-5", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-5", "Value=51300", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-5", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-5", "Value=006SF", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-5", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-5", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-5", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-5", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-5", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-5", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.6", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-6", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-6", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-6", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-6", "Value=Dallas Cullen Schp Gender & Social Justice Studies", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-6", "Value=E5096", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-6", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-6", "Value=150300", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-6", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-6", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-6", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-6", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-6", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-6", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-6", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-6", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-6", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-6", "Value=01208", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-6", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-6", "Value=000027662", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-6", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-6", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-6", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-6", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.7", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-7", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-7", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-7", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-7", "Value=Dissertation Fellowship", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-7", "Value=100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-7", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-7", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-7", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-7", "Value=85000", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-7", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-7", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-7", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-7", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-7", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-7", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-7", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-7", "Value=02793", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-7", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-7", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-7", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-7", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-7", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-7", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.8", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-8", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-8", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-8", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-8", "Value=MA Recruit UofA Thesis Master's Schlp", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-8", "Value=100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-8", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-8", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-8", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-8", "Value=85001", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-8", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-8", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-8", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-8", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-8", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-8", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-8", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-8", "Value=02796", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-8", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-8", "Value=000025906", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-8", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-8", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-8", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-8", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.9", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-9", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-9", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-9", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-9", "Value=MA Recuitment Fees", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-9", "Value=100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-9", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-9", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-9", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-9", "Value=85001", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-9", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-9", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-9", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-9", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-9", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-9", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-9", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-9", "Value=02796", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-9", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-9", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-9", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-9", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-9", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-9", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.10", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-10", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-10", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-10", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-10", "Value=Graduate Intern Tuition Supplement", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-10", "Value=100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-10", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-10", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-10", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-10", "Value=85002", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-10", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-10", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-10", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-10", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-10", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-10", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-10", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-10", "Value=02797", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-10", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-10", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-10", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-10", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-10", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-10", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.11", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-11", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-11", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-11", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-11", "Value=WHJ and PDPD", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-11", "Value=100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-11", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-11", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-11", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-11", "Value=85003", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-11", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-11", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-11", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-11", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-11", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-11", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-11", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-11", "Value=02798", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-11", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-11", "Value=000025908", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-11", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-11", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-11", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-11", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.12", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-12", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-12", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-12", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-12", "Value=Rogers Sugar Ltd Scholarship", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-12", "Value=530", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-12", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-12", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-12", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-12", "Value=GS012", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-12", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-12", "Value=RES0031092", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-12", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-12", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-12", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-12", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-12", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-12", "Value=02827", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-12", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-12", "Value=000025941", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-12", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-12", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-12", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-12", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.13", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-13", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-13", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-13", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-13", "Value=Alberta Research Council (Karl A Clark) Meml Schp", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-13", "Value=550", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-13", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-13", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-13", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-13", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-13", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-13", "Value=S000000007", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-13", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-13", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-13", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-13", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-13", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-13", "Value=02828", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-13", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-13", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-13", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-13", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-13", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-13", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.14", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-14", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-14", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-14", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-14", "Value=Pfizer Research Scholarship", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-14", "Value=550", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-14", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-14", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-14", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-14", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-14", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-14", "Value=S000000174", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-14", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-14", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-14", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-14", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-14", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-14", "Value=02830", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-14", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-14", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-14", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-14", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-14", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-14", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.15", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-15", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-15", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-15", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-15", "Value=Parke-Davis Canada Centennial Pharmacy Res Awd", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-15", "Value=553", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-15", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-15", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-15", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-15", "Value=GS013", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-15", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-15", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-15", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-15", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-15", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-15", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-15", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-15", "Value=02832", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-15", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-15", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-15", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-15", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-15", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-15", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.16", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-16", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-16", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-16", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-16", "Value=St John's Inst Schp in memory of Samuel Woloshyn", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-16", "Value=550", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-16", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-16", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-16", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-16", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-16", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-16", "Value=S000000199", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-16", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-16", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-16", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-16", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-16", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-16", "Value=02833", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-16", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-16", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-16", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-16", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-16", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-16", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.17", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-17", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-17", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-17", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-17", "Value=Queen Elizabeth II Scholarship", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-17", "Value=530", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-17", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-17", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-17", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-17", "Value=GS004", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-17", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-17", "Value=RES0031058", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-17", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-17", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-17", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-17", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-17", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-17", "Value=02834", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-17", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-17", "Value=000025953", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-17", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-17", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-17", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-17", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.18", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-18", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-18", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-18", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-18", "Value=TRLabs Scholarship", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-18", "Value=553", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-18", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-18", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-18", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-18", "Value=GS005", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-18", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-18", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-18", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-18", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-18", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-18", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-18", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-18", "Value=02835", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-18", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-18", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-18", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-18", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-18", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-18", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.19", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-19", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-19", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-19", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-19", "Value=Miscellaneous Sundry - Grad Studies", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-19", "Value=530", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-19", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-19", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-19", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-19", "Value=GS006", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-19", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-19", "Value=RES0031086", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-19", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-19", "Value=500125", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-19", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-19", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-19", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-19", "Value=02837", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-19", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-19", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-19", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-19", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-19", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-19", "Value=", "ENDITEM", 
		"Name=DMX.DUMMY_OCCURRENCES.MENSYS.20", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.1-20", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.2-20", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.3-20", "Value=UDD_NAME", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-20", "Value=Professor IF Morrison Scholarship", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-20", "Value=550", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.4-20", "Value=UDD_UDF1", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-20", "Value=220100", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.5-20", "Value=UDD_UDF2", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-20", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.6-20", "Value=UDD_UDF3", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-20", "Value=S000000038", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.7-20", "Value=UDD_UDF4", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-20", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.8-20", "Value=UDD_UDF5", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-20", "Value=0", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.9-20", "Value=UDD_UDF6", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-20", "Value=02839", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.10-20", "Value=UDD_UDF7", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-20", "Value=", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.11-20", "Value=UDD_UDF8", "ENDITEM", 
		"Name=CODE.DUMMY_FIELDS.MENSYS.12-20", "Value=UDD_IUSE", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-20", "Value=Y", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.1-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.2-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.3-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.4-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.5-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.6-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.7-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.8-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.9-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.10-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.11-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_FIELDS.MENSYS.12-20", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.1", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.2", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.3", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.4", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.5", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.6", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.7", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.8", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.9", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.10", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.11", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.12", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.13", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.14", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.15", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.16", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.17", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.18", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.19", "Value=", "ENDITEM", 
		"Name=%.DUMMY_OCCURRENCES.MENSYS.20", "Value=", "ENDITEM", 
		"Name=FIRST_VALUE.DUMMY_PAGER.MENSYS.1", "Value=1", "ENDITEM", 
		"Name=PREVIOUS_VALUE.DUMMY_PAGER.MENSYS.1", "Value=-19", "ENDITEM", 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.1-1", "Value=1", "ENDITEM", 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.2-1", "Value=21", "ENDITEM", 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.3-1", "Value=41", "ENDITEM", 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.4-1", "Value=61", "ENDITEM", 
		"Name=RANGE_VALUE.DUMMY_PAGER_RANGE.MENSYS.5-1", "Value=81", "ENDITEM", 
		"Name=NEXT_VALUE.DUMMY_PAGER.MENSYS.1", "Value=21", "ENDITEM", 
		"Name=LAST_VALUE.DUMMY_PAGER.MENSYS.1", "Value=621", "ENDITEM", 
		"Name=store.DUMMY_OPTIONS.MENSYS.1", "Value=Save", "ENDITEM", 
		"Name=DCTC.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=ENTC.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=DMVC.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=ACCESS.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=HITS_LIST.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=HITS.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=DB.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=CURRENT_HIT.DUMMY.MENSYS.1", "Value=", "ENDITEM", 
		"Name=VISTA_MODE.DUMMY.MENSYS.1", "Value=2", "ENDITEM", 
		"Name=TRANSACTION_ID.DUMMY.MENSYS.1", "Value=280C0CFB-D164-41E9-B8F1-6A0012ABBFC1", "ENDITEM", 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM", 
		"LAST");

	 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(8);

	web_submit_data("SIW_INTRAY.getintray_4", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_001", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", "ENDITEM", 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", "ENDITEM", 
		"LAST");

	lr_end_transaction("manage financial accounts",2);

	lr_start_transaction("interruption report");

	 

	web_reg_find("Text=GSMS Awards: Interruptions Report", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_url("SIW_POD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_POD.start_url?7C53473A476F4032z3Hv3oUcK0BBID-d8Ew-nI5ufE15Kle3d5RIy40esMX-zcznsR-NYwZ4mIXjbjQGva5lxz73IBzCO9ZgDV--jwnLan8mKIjbjhqJaxrlji_IA9Tdxr-r6C-5WCFmRrvn8DLfKCEJW4KNJol6MtLyXaD__sIUrf6lUesyMO_rqaJ0_MOVDGxzY1z-ydkRXoCq", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		"LAST");

	 

	lr_end_transaction("interruption report",2);

	web_reg_find("Text=Award Tenure Report", 
		"LAST");

	lr_think_time(51);

	web_url("SIW_YMHD.start_url_3", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"LAST");

	 

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_5", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_001", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", "ENDITEM", 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	 

	lr_start_transaction("award tenture report");

	web_reg_find("Text=Award Tenure Report", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);

	web_url("SIW_YMHD.start_url_4", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

	web_submit_data("siw_ttq.validation", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_ttq.validation", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=mode", "Value=ONE", "ENDITEM", 
		"Name=indx", "Value=ANSWER.TTQ.MENSYS.7.", "ENDITEM", 
		"Name=valu", "Value=", "ENDITEM", 
		"Name=ttqs", "Value=95", "ENDITEM", 
		"Name=mhdc", "Value=00100009427841360252", "ENDITEM", 
		"Name=seqn", "Value=1", "ENDITEM", 
		"Name=nkey", "Value=7FD6DF5B5D6243F7mfQp3oe3SZaf1sjSrhfajLtlkMzVNOr6LdoVXV8lQMBEgUvFlJvbcoYBWn7RTMZBqho4L6L8wZv34occaTX1WA", "ENDITEM", 
		"LAST");

	web_submit_data("siw_ttq.validation_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_ttq.validation", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=mode", "Value=ONE", "ENDITEM", 
		"Name=indx", "Value=ANSWER.TTQ.MENSYS.7.", "ENDITEM", 
		"Name=valu", "Value=1001", "ENDITEM", 
		"Name=ttqs", "Value=95", "ENDITEM", 
		"Name=mhdc", "Value=00100009427841360252", "ENDITEM", 
		"Name=seqn", "Value=1", "ENDITEM", 
		"Name=nkey", "Value=7FD6DF5B5D6243F7mfQp3oe3SZaf1sjSrhfajLtlkMzVNOr6LdoVXV8lQMBEgUvFlJvbcoYBWn7RTMZBqho4L6L8wZv34occaTX1WA", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	lr_think_time(11);

	web_submit_data("siw_dmu.timeout_7", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=566395C4517749B9MsjQYiF8XQVR5t39PboyJzNamxIiCl7-9UENKJ3aaUI1glc7tLnvwaobsL5eNYvIKdhCWGVnS0I1QyamEbRoStzePMO7DyWU", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Award Tenure Report", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

	web_submit_data("SIW_TTQ_5",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?34EBBA6528CF471155aJdPeJh821qwaJ0fePfS7M1xQjL33MS53SM3reBS6xRaiy80Zs3zCgQ4BkBPe3wIpJUYgmSWy1pP5LcLnrHBFvsmshl4t6Z3RLUzNS0ZMkSRs_exYuqM0jzBIRB2AN8Xsq00uIO5Q2d6S6JZVTNv26mjZHW0VZiDjIHezSyKASTKEPRfMjkIa49xdUiPO-WuiJX6P4YOnXGg2klrYc1MQTlrHL-8OuItVDztzakMQ",
		"Snapshot=t173.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=%.WEB_HEAD.MENSYS.1", "Value={WEB_HEAD_MENSYS_1}", "ENDITEM",
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841360252", "ENDITEM",
		"Name=SEQN.DUMMY.MENSYS.1", "Value=1", "ENDITEM",
		"Name=NKEY.DUMMY.MENSYS.1", "Value=7FD6DF5B5D6243F7mfQp3oe3SZaf1sjSrhfajLtlkMzVNOr6LdoVXV8lQMBEgUvFlJvbcoYBWn7RTMZBqho4L6L8wZv34occaTX1WA", "ENDITEM",
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=28843A0EFC51B839EF0E9B5BB1104FA1DB19BD554B99216C6BFDB8BCB60F36F7BDD1A43A2AE22669FD857747C6FEAC278A18FB641A23F864C40B6CF17389C3F5", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=+vxvGrAR6NsiNVyoCMd8OlaBfcK+DSxtlRu1c+bBg0M=;mod;88EE324D;DhJDR1NBV0RfQVdEXzAyAyJDMQ==", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.2", "Value=N", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.7", "Value=1001", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.9", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.10", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.11", "Value=2", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.11", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.12", "Value=Search", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.12", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.13", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.14", "Value=4", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.14", "Value=", "ENDITEM",
		"Name=#.TTQ.MENSYS.1", "Value=XUSdo3lzAX+fc1RHp+HFqOS9Kyd4zdMlEmuCstK+avM=;mod;0FB83285;BTJDOTAwDhJDR1NBV0RfQVdEXzAyAyJDMQ==", "ENDITEM",
		"Name=#.TTQ.MENSYS.2", "Value=zjvi48RCT/gUHoj/tjZ0nqCnwQfZONiT8vA2LsJ+ouQ=;mod;3D4EEF83;BDJDOTQOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.3", "Value=ZwyjQPB1JgXuY0/lgo+Fdsou2BrDRCUGE9z7lDtZx/M=;mod;E826A4E3;AzJDNA4SQ0dTQVdEX0FXRF8wMgMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.4", "Value=3kOyzezJ5ZVrdBErL9/0EoSEUwwGUYag0neLPISs0+M=;mod;0A34562F;AzJDMQ4SQ0dTQVdEX0FXRF8wMgMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.5", "Value=6pnBvyXzA6A43RwzLQd+XfNyqF1Sg/IGARV8Dh5/ZGI=;mod;5688DEA2;AzJDMg4SQ0dTQVdEX0FXRF8wMgMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.6", "Value=Vi5E1SbyU0TmRrZWijW+UPVPVoRk42dQoUCoIYO6OK8=;mod;BB2BFA36;AzJDMw4SQ0dTQVdEX0FXRF8wMgMiQzE=", "ENDITEM",
		"Name=#.TTQ.MENSYS.7", "Value=TsOl7xrefmLM5ARMEVCFRQCrxThIZ0sqFDLmJ65IojI=;mod;8EC0C822;BDJDOTUOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.8", "Value=YKejtriznQk3Cx8DUpki9SxFVXqxMJsSPTagvfyq+XI=;mod;3124CF54;BDJDOTEOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.9", "Value=sAEgIQ21CA9THwdBzrBgxDosCWbsJKNc1upsZnQsm8U=;mod;5FF16042;BDJDOTIOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.10", "Value=3D425iHo150v1E3rgAey2eU6ntRMYep5KsD4RneRUSQ=;mod;73369B26;BDJDOTMOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.11", "Value=ouJ7+7m2Ow3swz426f/Ax4E0BFnkE/wQGN77pao2DnE=;mod;95A246F7;BDJDOTYOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.12", "Value=gsh0j2vqSIn7kxtYTbjCYrV/ynzdpzvE6atDqFgyK1A=;mod;3926B032;BDJDNTAOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.13", "Value=rYy4xtkU1i1Mx0bvRgNSR3ymjMLnZJDm9CCQQCgsvNE=;mod;A7DE92B8;BDJDNTEOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.14", "Value=JBDhPeR20iIC/25iymbflRQ0u+Sdn2q7gZdkT5LZj6c=;mod;6A19A3BB;BDJDOTkOEkNHU0FXRF9BV0RfMDIDIkMx", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=+vxvGrAR6NsiNVyoCMd8OlaBfcK+DSxtlRu1c+bBg0M=;mod;88EE324D;DhJDR1NBV0RfQVdEXzAyAyJDMQ==", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"LAST");

	 

	 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_submit_data("SIW_INTRAY.getintray_6", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=FDE975B18F3F4B61wXGypHGFtjkqC3YCAjfqmY6iIaxfQWtAeXJ2iw-qbR5ks-HZII-YzXgfcnphP_v4xdPNmbI7g3q5uRUcZmidyeLM2zvwIK_fh9nx753r_JOs4LCpOG6E7rEHtqvWhqZEJLOIVuRuLD5yJPTVg7-ZxgqqrDaPWGu8QvibRvsPcEcH-6TMwMjl5sygEfflA_P4", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_001", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=B981E544-717F-4F47-86ED-E5E2AA092977", "ENDITEM", 
		"Name=DIVID", "Value=div8026F101-2B87-4E07-9BF8-71419A5CCA95", "ENDITEM", 
		"LAST");

	lr_end_transaction("award tenture report",2);

	lr_start_transaction("navigate to awards tab");

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(54);

	web_url("siw_portal.url_2", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"LAST");

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	web_url("siw_portal.url_3", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		"LAST");

	 

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_7", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", "ENDITEM", 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", "ENDITEM", 
		"LAST");

	lr_end_transaction("navigate to awards tab",2);

	lr_think_time(25);

	web_submit_data("siw_dmu.timeout_8", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=C2E2842D8FAA4B061a5BVW0Sz6mL4jaECK5w2h4GjjLsncHHWJgN0k15fWSou5iDhH81C2kXCnrBfU5FS7Ow_LzZ82SPBlFVsQ2LANwS9VXgktK4", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Nomination Dashboard", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(48);

	web_url("SIW_YMHD.start_url_5", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?FF24ED0DDE4740045bMj0Hb2K3ghYOzgc0fP2ZWxBUhJqVr0Y6Ob4lao0hoPmxFUMIHxZUAMD_mvc0cZapzuWuXYg0Gr4oIVFYxuAPNF_jpMDV-ECdE5w9p0PRkDUSyZPh_uz8scTFkw4IAFqedv7F83lMSUANFySg7SHYAL1Qj5ZWBSHgD69tG2fSVWomhfEzDxNO3y8AWSsxwPQ8V2v1wQZrMT8DIt3IGITQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		"LAST");

	 

	 

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	lr_think_time(4);

	web_link("Awards", 
		"Text=Awards", 
		"Ordinal=1", 
		"Snapshot=t180.inf", 
		"LAST");

	 

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_8", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=0A281B1E77D54C08Rr_uTkrwGYJfwniDGT5BG0_DEA4Lj-aEejx2Za4WA7JDRfDhDbpMqNM_qfA4-YmVe_aUKvWMLf5ExP_6yMBZCxMCvQPiEfpeLdhmPH2ixDrascSnh9zhVLeXwlfOOylYDmxWQ6OvNQsfp5kICzCKjyIr3fbRU2T5OHP4JOiOX4hUCG5P7Bem6PtaMNSizrwALMrQJ8J7Z2a6MyHoVETHF1aMPAyGxmwmwHBGrYy6hsg3AIasMWkfnLH5TmKXo3Ag", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=61DFDB9B-719D-4985-B84D-92BDED647E43", "ENDITEM", 
		"Name=DIVID", "Value=divA3773B20-674B-48C3-935B-2E6F60C9FF3B", "ENDITEM", 
		"LAST");

	lr_start_transaction("create package");

	web_reg_find("Text=Nomination Dashboard", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(22);

	web_url("SIW_YMHD.start_url_6", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?498C266C81F2478AEZwqezYlCJDWE0oZGKvFxcEAa2tE5ATdbhBshPxMyadJEi840YdXpy9snGT5jfIqIRN6xzAlF5xPIhvNIrWNjJ1ddifXSOOzpPbgnFvf0MUD_Aq3WPSI87HK8nr8vSp4X31ZTf-n90noSHmD2UF3ax3dUCh_09YonnmIHifWQBdTLjCdMz_KWT2GDvLNXBY9bZCJUo1GznD73JTDJ-0cSQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	 

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_9", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", "ENDITEM", 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	web_submit_data("siw_dmu.timeout_9", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=6CBD9272ED634A5C1siM4b6SrR6qvaiNmeMWiU2tQMjzsoY9KdIQq8dk2D-Iwdd3jIV3eosYvoUFnAkgV7e646NJbGJ6_Cv4PvHG78bkZcd2eGhv", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=View Application", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(19);

	web_url("SIW_YMHD.start_url_7", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?498C266C81F2478AEZwqezYlCJDWE0oZGKvFxcEAa2tE5ATdbhBshPxMyadJEi840YdXpy9snGT5jfIqIRN6xzAlF5xPIhvNIrWNjJ1ddifXSOOzpPbgnFvf0MUD_Aq3WPSI87HK8nr8vSp4X31ZTf-n90noSHmD2UF3ax3dUCh_09YonnmIHifWQBdTLjCdMz_KWT2GDvLNXBY9bZCJUo1GznD73JTDJ-0cSQ", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../plugins/css/charcount/charcount.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", "ENDITEM", 
		"LAST");

	 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("siw_dmu.timeout_10", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?498C266C81F2478AEZwqezYlCJDWE0oZGKvFxcEAa2tE5ATdbhBshPxMyadJEi840YdXpy9snGT5jfIqIRN6xzAlF5xPIhvNIrWNjJ1ddifXSOOzpPbgnFvf0MUD_Aq3WPSI87HK8nr8vSp4X31ZTf-n90noSHmD2UF3ax3dUCh_09YonnmIHifWQBdTLjCdMz_KWT2GDvLNXBY9bZCJUo1GznD73JTDJ-0cSQ", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=869FEA7C51BE4637lqNwfOkUfSrPWrH4Ekm6wKi_wezPUd3e3CeV1RcQYMB0J2Z5Q0-P61d85qen_t0zoJz53I2w0wcfAKQ82Yv5rrSxCquhgyMf", "ENDITEM", 
		"EXTRARES", 
		"Url=../plugins/javascript/charcount/charcount.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", "ENDITEM", 
		"LAST");

	 

	 

	web_reg_find("Text=Cover generation complete", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("SIW_YMHD.start_url_8", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?135CC2F22CDA41CFdV9pkn4GAhFfZ5kI6C6ddkXt8UBPLRoSTrggLQ6CwN3WKXuIxgD81E-g6fRpEnotDg1vrak-8C36gMt13LwLyp4LOrI28MbRy3tfipO6UW-gk2L0T1pX5NSooxEjBSzs11GUFGKuGyOaXyENNlNngxh8KL_r1YjKoBTsPq1ZPYDL5Piug5t6n7P1wZFiFoK0-rx0QZ8v0UTpbf6aYa6UuhmC-Yrk9LZJqZSP1ruw5Xg", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("siw_dmu.timeout_11", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=1F0CD08900CF412AcNnpF5kHcRzxNKvuZflUZvXnyajzZCdtr6vvp_GWILcjEVq-R0JX7TksnAlFg09Ev6oyinP2rXcMzxJev2AlW1ECLU0p96LT", "ENDITEM", 
		"LAST");

	 

	web_reg_find("Text=View Application", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_submit_data("SIW_TTQ_6",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?38C3D48515D94FBEGdeeCDD_3XVZHhFFQdklw1lWnqjqE7I0ndgVMT2DXJJaT4ePkzvVkCu8phVDRMoE7wQxR98SV6LDhcGdTA65jbZI6vPYKDTK8uRZ4Lh97-sq2p0rPBZiYMKwTnMb6fQdtJ-juvLmKxevqWOFWIKGoIdyvqUJ1UVMImdVZNJ4N2fAzW4uLLxxusYg4EbOQKn9OygdD0ZWxwKLpkOJxvjnbCh9b45KjXWEmbOx09Cmfi0-iJ7S9FcTvOurfcmv4LMm",
		"Snapshot=t189.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=%.WEB_HEAD.MENSYS.1", "Value={WEB_HEAD_MENSYS_1}", "ENDITEM",
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841360586", "ENDITEM",
		"Name=SEQN.DUMMY.MENSYS.1", "Value=1", "ENDITEM",
		"Name=NKEY.DUMMY.MENSYS.1", "Value=09237F4AE3AA4AF8hiBqz5cvI-H0LuPkRIfgskAMAe-ZaDvjloQ4s-QcQQ85oSockFueFCK4AGf5DOTqZdu9T2M_9nvAPOSsUb7rGA", "ENDITEM",
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=961262307D8B9ACCDF99C5315DBE2D79B28CA1D3B646A8CABF28F6B4FEC11567B6281F62D13291FF7EE23344B9BCF7D522F063EC1001ED827C07F7FBA5870A3C", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=HB9qfnNmtrJautuGEfcHuPWEuRzCsBXrO+d1Kc+OyX0=;mod;8B231BDD;DhJDR1NBV0RfTk9NXzA1AyJDMQ==", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Refresh", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.8", "Value=2", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.9", "Value=0", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", "ENDITEM",
		"Name=#.TTQ.MENSYS.1", "Value=Kxr169hi1tBHkXsK0VusDmBYoAe9bKN+BEY8vR3dWLk=;mod;A299D370;BTJDOTAwDhJDR1NBV0RfTk9NXzA1AyJDMQ==", "ENDITEM",
		"Name=#.TTQ.MENSYS.2", "Value=X+/QvNGnntNYQek4lND4OnO2+EpJNElgULb3mRyVob8=;mod;E96ACBC9;BDJDOTAOEkNHU0FXRF9OT01fMDUDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.3", "Value=GvVElnAa6u5M2vv+2bJBNjPkRdFzmPH8Z0RQdzPQbyo=;mod;E7BEC183;BDJDOTEOEkNHU0FXRF9OT01fMDUDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.4", "Value=aC37qEQoCaJtGQQY0FOgZyGzwWp4fbczQzZbrGu0vbQ=;mod;A4291C06;BDJDNTEOEkNHU0FXRF9OT01fMDUDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.5", "Value=FLgxAtpklbbgWUppmg9u8EEAbMuHGv+KC7spPGJYp9s=;mod;A97E164B;BDJDNTAOEkNHU0FXRF9OT01fMDUDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.6", "Value=Dnzvfzn5Fq3uLePqfJlnTqEkwBBN12np6pH88ZiCUGI=;mod;1CE08C61;BTJDOTAxDhJDR1NBV0RfTk9NXzA1AyJDMQ==", "ENDITEM",
		"Name=#.TTQ.MENSYS.7", "Value=31fjJmwM37FDHH8Wxlim3HR9JGdeU11GHAYkri6wYcY=;mod;AD9DE294;BDJDNTMOEkNHU0FXRF9OT01fMDUDIkMx", "ENDITEM",
		"Name=#.TTQ.MENSYS.8", "Value=kYlfbecl6X6mgxKqpvAee91n1Eu2eJxwX8FVoI9vhTM=;mod;6D43A141;BTJDMjAwDhJDR1NBV0RfTk9NXzA1AyJDMQ==", "ENDITEM",
		"Name=#.TTQ.MENSYS.9", "Value=VMpZ7WWNp3xiDPMSwk79g+V22UMtkdZcOM2GuUZ0Lko=;mod;7BE1082F;BTJDMjAxDhJDR1NBV0RfTk9NXzA1AyJDMQ==", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=HB9qfnNmtrJautuGEfcHuPWEuRzCsBXrO+d1Kc+OyX0=;mod;8B231BDD;DhJDR1NBV0RfTk9NXzA1AyJDMQ==", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"LAST");

	 

	 

	 

	lr_think_time(7);

	web_link("Download Merged PDF Application Pack", 
		"Text=Download Merged PDF Application Pack", 
		"Snapshot=t190.inf", 
		"LAST");

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_10", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=0A281B1E77D54C08Rr_uTkrwGYJfwniDGT5BG0_DEA4Lj-aEejx2Za4WA7JDRfDhDbpMqNM_qfA4-YmVe_aUKvWMLf5ExP_6yMBZCxMCvQPiEfpeLdhmPH2ixDrascSnh9zhVLeXwlfOOylYDmxWQ6OvNQsfp5kICzCKjyIr3fbRU2T5OHP4JOiOX4hUCG5P7Bem6PtaMNSizrwALMrQJ8J7Z2a6MyHoVETHF1aMPAyGxmwmwHBGrYy6hsg3AIasMWkfnLH5TmKXo3Ag", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=61DFDB9B-719D-4985-B84D-92BDED647E43", "ENDITEM", 
		"Name=DIVID", "Value=divA3773B20-674B-48C3-935B-2E6F60C9FF3B", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	web_submit_data("siw_dmu.timeout_12", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=4A3CF7796947404A8NOcoX-OPzYsmIBW4tTV1YmL4wdHLZv-t8zMpCxmbH-twzEP5t0xI1aShXjV4DcFEvQkvKAoe5KDa2Jn4PRGlGIob-TIhW-d", "ENDITEM", 
		"LAST");

	lr_think_time(27);

	web_submit_data("SIW_INTRAY.getintray_11", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", "ENDITEM", 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", "ENDITEM", 
		"LAST");

	lr_end_transaction("create package",2);

	 

	 

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Award Search", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(58);

	web_url("SIW_YMHD.start_url_9", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?B73744E1D2954BFDGOdMTPMcAWsAL1494lu53lhbTVWUGINeMLnhRVabSuo4xQH2UZisS_iScYFKIn6opVhSVGIm_WMq0arxPVc379-MuJDNWm3rSOIMy8f7VBe3DKEhwUIXzxEIeRsF1nvVjTE3isV45UaGA_7zJvbQl3S0YDTnXPPCwquJgyVQP_6PeAdP4SPVL2RjVMXE0gthRGkkjTJLSaVsZph9FMaOP3SVC49YRZJ9mhPBN2hKRpA", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?1882E46D176543FFQyg6Xw_XnQ4ptV06HHPZxfsSu2_NQy9XxbQhEwjzhET8EALwX2g1ogIbYhEsTXyxGXhdim_tbngAD07X7wmMKCWebqWt_Je_EThYbl6ITnU", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	lr_think_time(5);

	web_submit_form("SIW_TTQ_7", 
		"Snapshot=t195.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Exit", "ENDITEM", 
		"LAST");

	 

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_12", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=FA9AB848E6F54028myflALhgJRwBaSt_AhuEobYQWb-P6KqfXRd7wnUIVDL2wqb5Ck-kD_ibQ4gjWcKsvNIHdIAJ2G4bDXqQtBSQMv2PLW2LGSfTAjX_Dp3YEWqLNJhg06_ZdhgyOMHY0xulQuHhVI1hJsjXxhCvlzQN36_OrqD0ZLouzcsf4Vp2BKxtZefDqZ6AzwCBM9BkAGiC-LzqMpfHeRnBYwZOnQ4GU6Nq1G1U-HZzRH1wSlEYduVQBrJo01TS1TuJ6P020Eji", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=B2A28770-48FA-440E-8D48-4ED81E5D036D", "ENDITEM", 
		"Name=DIVID", "Value=div9BB8B3A8-3E05-45B2-A80D-247643F662A9", "ENDITEM", 
		"LAST");

	lr_start_transaction("award tab award search");

	 

	web_reg_find("Text=Award Search", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("SIW_YMHD.start_url_10", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F7018AAC35AF491AuzMFG7qGh4W33kKOJqn86hL51w3KZBdxJ_L0vpGFTrQ03tl8f5KSofs_K65_Y82s-NnJIpUsbMC18VZsRWAsl2DT4zRy9KAsFwNJwnfUM9nJXUp-h5LWwuz6IKQ4uWZVJ9QacorJ_I-YTOUV8_TyUHHGViPrhdCvvDihB0w2AvdP_9YZIKWOX44TAYTAMHOr2J21032B5pVeTTiiny1lymJFGgxFUedQLL6WxMpolkA", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"LAST");

	 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(6);

	web_submit_data("SIW_INTRAY.getintray_13", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", "ENDITEM", 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", "ENDITEM", 
		"LAST");

	web_reg_find("Text=Award Search", 
		"LAST");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_submit_data("SIW_TTQ_8",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F7018AAC35AF491AuzMFG7qGh4W33kKOJqn86hL51w3KZBdxJ_L0vpGFTrQ03tl8f5KSofs_K65_Y82s-NnJIpUsbMC18VZsRWAsl2DT4zRy9KAsFwNJwnfUM9nJXUp-h5LWwuz6IKQ4uWZVJ9QacorJ_I-YTOUV8_TyUHHGViPrhdCvvDihB0w2AvdP_9YZIKWOX44TAYTAMHOr2J21032B5pVeTTiiny1lymJFGgxFUedQLL6WxMpolkA",
		"Snapshot=t199.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=%.WEB_HEAD.MENSYS.1", "Value={WEB_HEAD_MENSYS_1}", "ENDITEM",
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009427841360835", "ENDITEM",
		"Name=SEQN.DUMMY.MENSYS.1", "Value=2", "ENDITEM",
		"Name=NKEY.DUMMY.MENSYS.1", "Value=9331A0F0296D439DyWtyUB6ziDRHUBBlyp-ST-JK-aOs9LURvpkODcU6rzhdoyJTD_fvzTAWIJrAZx7WoMWSUOq4wDdTMxj4vwMT7w", "ENDITEM",
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=F89C2ECE9FEA2560697F7B6287305C1FDFC0CF039D613114CDAF2FD1196C811B6B1D6F4798F769ABB629215FEC676ABE57E3ADAD5C6D5434FF4E5606355C0C04", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=BHA/KmHSp0fzO3D9cGaBo4+fd1mAwbUizODlIrCymhw=;mod;300C2B23;DhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.1", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.4", "Value=D", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.6", "Value=Search", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", "ENDITEM",
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", "ENDITEM",
		"Name=#.TTQ.MENSYS.1", "Value=3r48Z5J9z7uTsGm2IvSsLOP6adZ2+DB0vBovmKtylxU=;mod;6F934529;BTJDMTAxDhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=#.TTQ.MENSYS.2", "Value=wTu54SGYOy6fSz394OTUG2bXWS2eoaCJAWqw/XfNScw=;mod;C945A158;BTJDMTAyDhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=#.TTQ.MENSYS.3", "Value=yDDcqTukKYGC8Sz9NcPUQIiHiLDZSVhROUXANhzh/Bo=;mod;0E38DB50;BTJDMTAzDhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=#.TTQ.MENSYS.4", "Value=ty+CmSwV3hLpoxhnSFX/A0c3ucQ9tJF4pHvyUCVzDD4=;mod;0DC832F8;BTJDMTA0DhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=#.TTQ.MENSYS.5", "Value=7934vMaeJogT9fYA/v+as/IxSNRsNGOXI4ljDYtCLQ4=;mod;C0937D08;BTJDMTA1DhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=#.TTQ.MENSYS.6", "Value=gnWVhTeFGocXCLDnQMqyutQisUlKYpLU1eunMqz/IXQ=;mod;592637C2;BTJDMjAxDhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=#.TTQ.MENSYS.7", "Value=zZ7XGlFSfEVhErgbm1slTgLHOJPUBb9WqVht088KXeA=;mod;CF041727;BTJDMjAyDhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=#.TTE.MENSYS.1-1", "Value=BHA/KmHSp0fzO3D9cGaBo4+fd1mAwbUizODlIrCymhw=;mod;300C2B23;DhJDR1NBV0RfTk9NXzEwAyJDMg==", "ENDITEM",
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", "ENDITEM",
		"EXTRARES",
		"URL=http://detectportal.firefox.com/success.txt", "ENDITEM",
		"LAST");

	 

	web_reg_find("Text=e:Vision Portal", 
		"LAST");

	lr_think_time(8);

	web_submit_form("SIW_TTQ_9", 
		"Snapshot=t200.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=Doctoral", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Exit", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_14", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=88F350DB4C19486AYjH9ng3ygmiNGI_g6fNeGn6b9DZmNECSlE5s6KQXM8FHM6Cw20XPYbbn3cGlNMAYKL1rhJ9i_ZErdandgihgL4eXBytDi9YwC8YQ1DjLtYu_xlASDx61rrCRYaw4-jg71MwBVcrqJaEPrEkxQJocSyRfplt91PGjYl0FX8EWBz7a6WJObfaYXpgZSYwCw1ZQckfmreUZ8BvWQVKxasmDZIBAvibHewsmabvbob6VIwc_nr80Rem5mp6aQ0d6X6J9", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=531E4866-52E4-45C2-9A0A-2D804126B821", "ENDITEM", 
		"Name=DIVID", "Value=div1B896E71-10BB-4B4A-A4F9-F7D3048C367F", "ENDITEM", 
		"LAST");

	 

	lr_end_transaction("award tab award search",2);

	lr_think_time(27);

	web_submit_data("siw_dmu.timeout_13", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=A753254DDD644EA8OWoNuLOQO0H355G43PYAQdZQM3zZdrAw5VR_pBz7cJ9UdUMk9vIoQx-FztyEv3N2PqTv1pw4ACkoxvciGANZKIOrlhQVYqc2", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=Search for Applicant", 
		"LAST");

	(web_remove_auto_header("DNT", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(13);

	web_url("SIW_YMHD.start_url_11", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../plugins/javascript/datatables/media/css/jquery.dataTables.min.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", "ENDITEM", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	 

	 

	 

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_15", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?9C314EE10A29400C0eMNEv5mQu6aCuKbg_ktwrf-M-PAXTtrc33nMwd6q_CBUq1RQ8BYHT50W9pOyyt3GZd9LyTAIno-Zpo08388w1DvH7avn-yhwkpbJeHrGhI", 
		"Snapshot=t204.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=3AA5FE1BC4174BBEcZ9pveeJ2y64ohvxc1tkwxomNlNEB9nsUGCPTDh4uILz9wqsNEmhQtoOBuCziiVOdFUW5FR965ln8zzANDfPogj1Kv6GP3ExRqAJEl5exFhi56Or0_TTSdSjUlrIoJaeAQBwf8ABjFRMJGpAHh_YmgAVl-0jbPnkKn9b5jUvjlHifMf8n2a4fE_EuZU_NBr_kG1wfO9NYVPrV0KvdIdh6GGLwjlM9J8qjmQsT920pN885KtFVCGQVkGYdip8-gAW", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=8FCD83DC-E978-4770-8EEC-F38F800B5B25", "ENDITEM", 
		"Name=DIVID", "Value=div678E779E-4FB9-4155-848D-E8C64C11A7FD", "ENDITEM", 
		"LAST");

	lr_start_transaction("awards tab applicant search");

	web_reg_find("Text=Search for Applicant", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(18);

	web_url("SIW_YMHD.start_url_12", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"LAST");

	 

	(web_remove_auto_header("DNT", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_16", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NKEY", "Value=88F350DB4C19486AYjH9ng3ygmiNGI_g6fNeGn6b9DZmNECSlE5s6KQXM8FHM6Cw20XPYbbn3cGlNMAYKL1rhJ9i_ZErdandgihgL4eXBytDi9YwC8YQ1DjLtYu_xlASDx61rrCRYaw4-jg71MwBVcrqJaEPrEkxQJocSyRfplt91PGjYl0FX8EWBz7a6WJObfaYXpgZSYwCw1ZQckfmreUZ8BvWQVKxasmDZIBAvibHewsmabvbob6VIwc_nr80Rem5mp6aQ0d6X6J9", "ENDITEM", 
		"Name=MHV_CODE", "Value=GSAWD_004", "ENDITEM", 
		"Name=PAGE", "Value=", "ENDITEM", 
		"Name=ORDR", "Value=", "ENDITEM", 
		"Name=ISSC", "Value=531E4866-52E4-45C2-9A0A-2D804126B821", "ENDITEM", 
		"Name=DIVID", "Value=div1B896E71-10BB-4B4A-A4F9-F7D3048C367F", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	web_add_header("DNT", 
		"1");

	lr_think_time(4);

	web_submit_data("siw_dmu.timeout_14", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?F1D927FB8A33493FPuWA3ihOROfPBRydRIFBqCG6aJoTFV1Sh4GNsACioNAFsSGQEyfUNEcLpyu0BxiVTMRRBE9sI5g9VDbJBN_kQBdTExOyHN6Pf15yDGirCHPHLvy366LkJm3Yt_a29sR9mNSBKwHFsz6yO2rp3_h5g5QfCKYG6j1UGbZ4EcEA9LQC9HQM2vnqwXxzaMsNTg7GSi3NAyQnGOkv7CSEaFS2VVnG9ZZlYd3AG04M-MXJChk", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=MOD", "Value=INIT", "ENDITEM", 
		"Name=KEY", "Value=0F069F5D077B4527rc5QfKQ3NgUEOM621Ox8os9s5Zm80iuvZaJXpnBlIxA7e03MZtzsYyc0DQmsQ9Dtf34UN3rv69P5CMeOyYjOXqh9oN1hzh64", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	 

	 

	 

	return 0;
}
# 5 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Awards_Portal_Tab_ExtrSearchForAwardsLink.c" 1
Click_Awards_Portal_Tab_ExtrSearchForAwardsLink()
{



	
	web_reg_save_param_regexp(
       "ParamName=NKEY",
       "RegExp=\"NKEY\":\"(.*)\"}",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	
	web_reg_save_param_regexp(
       "ParamName=DIVID",
       "RegExp={\"DIVID\":\"(.*)\",\"REFRESH",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	web_reg_save_param_regexp(
       "ParamName=ISSC",
       "RegExp=\"ISSC\":\"(.*)\",\"PAGE",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	web_reg_save_param_regexp(
		"ParamName=SearchForAnAwardsLink",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");


	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=name=\"%\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");
		
		
	web_reg_save_param_regexp(
		"ParamName=InterruptionReportLink",
		"RegExp=SIW_POD\\.start_url\\?(.*?)\"\\ target",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");
	
	


 
	web_reg_save_param_regexp(
		"ParamName=MHV_CODE",
		"RegExp=loading\\.\\\\\">\",\"ORDR\":\"\",\"MHVC\":\"(.*?)\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{AwardsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	
	
	


	
	return 0;
}
# 6 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Search_For_Award_Link.c" 1
Click_Search_For_Award_Link()
{
	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	       

	web_submit_data("SIW_INTRAY.getintray",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
		"Snapshot=t697.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=NKEY", "Value={NKEY}", "ENDITEM",
		"Name=MHV_CODE", "Value={MHV_CODE}", "ENDITEM",
		"Name=PAGE", "Value=", "ENDITEM",
		"Name=ORDR", "Value=", "ENDITEM",
		"Name=ISSC", "Value={ISSC}", "ENDITEM",
		"Name=DIVID", "Value={DIVID}", "ENDITEM",
		"LAST");
	
	

	
	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{SearchForAnAwardsLink}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?EA026DD51BC74211HfMx3h_TiiPe1GvNX0ehNdlfCWz0usJzHQR6MmkcmPPse2xCkJNRPuC2AnpsPLuU4Eql4Z-30I8m0MA-mbcnfeidYyqWGBXWA_ny3pdYo4k", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?EB35303E56AD4C95HKXuftJI6QKiFKYKV34-zHpqfxYFDvmNyxDgFr1ZB9hHunkWK2mn5s3wFV63UsmBiUWgp--tqlf3n5JQCPxiba4eGeyrJ6ko-t0X026EQBv4Jy7yKF5fEXCLg5zoMdXXLQLfnMUzBdWFD_gQHdwhc5x9Z7mTDhziznzSurvbx0gxJLc4ITUAMGtSjm_TPD5lUxOAmMTIp72BcVr55jr3D4vamq6MNPESSwWff8KZgkc", "ENDITEM", 
		"Url=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?EB35303E56AD4C95HKXuftJI6QKiFKYKV34-zHpqfxYFDvmNyxDgFr1ZB9hHunkWK2mn5s3wFV63UsmBiUWgp--tqlf3n5JQCPxiba4eGeyrJ6ko-t0X026EQBv4Jy7yKF5fEXCLg5zoMdXXLQLfnMUzBdWFD_gQHdwhc5x9Z7mTDhziznzSurvbx0gxJLc4ITUAMGtSjm_TPD5lUxOAmMTIp72BcVr55jr3D4vamq6MNPESSwWff8KZgkc", "ENDITEM", 
		"Url=../plugins/css/chosen/chosen-sprite.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", "ENDITEM", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	
	
	return 0;
}
# 7 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Perform_Search_For_An_Award.c" 1
Perform_Search_For_An_Award()
{
	web_reg_find("Text=Manage Award",
        "SaveCount=LinkCount",
        "LAST" );
	web_submit_form("SIW_TTQ", 
		"Snapshot=t36.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value={AcademicYear}", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=Search", "ENDITEM", 
		"LAST");
	
	return 0;
}
# 8 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Manage_Award_link_of_random_result.c" 1
Click_Manage_Award_link_of_random_result()
{
	
	
	if (atoi(lr_eval_string("{LinkCount}")) > 0){
		
		web_link("Manage Award", 
			"Text=Manage Award", 
			"Ordinal=1", 
			"Snapshot=t771.inf", 
			"LAST");
	}
	
	return 0;
}
# 9 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Awards_Portal_Tab_ExtrInterruptionReportLink.c" 1
Click_Awards_Portal_Tab_ExtrInterruptionReportLink()
{



	
	web_reg_save_param_regexp(
       "ParamName=NKEY",
       "RegExp=\"NKEY\":\"(.*)\"}",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	
	web_reg_save_param_regexp(
       "ParamName=DIVID",
       "RegExp={\"DIVID\":\"(.*)\",\"REFRESH",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	web_reg_save_param_regexp(
       "ParamName=ISSC",
       "RegExp=\"ISSC\":\"(.*)\",\"PAGE",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	web_reg_save_param_regexp(
		"ParamName=SearchForAnAwardsLink",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");


	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=name=\"%\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");
		
		
	web_reg_save_param_regexp(
		"ParamName=InterruptionReportLink",
		"RegExp=SIW_POD\\.start_url\\?(.*?)\"\\ target",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");
	
	


 
	web_reg_save_param_regexp(
		"ParamName=MHV_CODE",
		"RegExp=loading\\.\\\\\">\",\"ORDR\":\"\",\"MHVC\":\"(.*?)\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{AwardsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	
	
	


	
	return 0;
}
# 10 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Perform_Interruption_Report_link.c" 1
Perform_Interruption_Report_link()
{
	
	web_reg_save_param_regexp(
		"ParamName=ExportLink",
		"RegExp=\"\.\.\/run\/SIW_YGSL\.start_url\?(?:([^,;]*)\"(?:[^,;]|$))\' value=\'Export\'>",
		"LAST");
	
	
 
 
 
 
 
 
 
 
	
	
	web_url("SIW_POD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_POD.start_url?{InterruptionReportLink}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?83A8DC0A3A5843FE-NravpbLF8r7iCx9_I_7owOaGUJ-_AR6sVisa_wxnnPtPfJJSZUSW4-gLdmg8GfwvmOlpVkkyBsBt9RZgxWI_nubX7PMzuJZAfGeDwQ7aF8", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		
		"LAST");

	
	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YGSL.start_url{ExportLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	
	return 0;
}
# 11 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Extract_Interruption_Report_Results.c" 1
Extract_Interruption_Report_Results()
{
		web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YGSL.start_url{ExportLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	
	return 0;
}
# 12 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Awards_Portal_Tab_ExtrSearchForCompetitionLink.c" 1
Click_Awards_Portal_Tab_ExtrSearchForCompetitionLink()
{
		web_reg_save_param_regexp(
		"ParamName=SearchForCompetitionLink",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		"Ordinal=3",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");

		
	web_reg_save_param_regexp(
       "ParamName=NKEY",
       "RegExp=\"NKEY\":\"(.*)\"}",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	
	web_reg_save_param_regexp(
       "ParamName=DIVID",
       "RegExp={\"DIVID\":\"(.*)\",\"REFRESH",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	web_reg_save_param_regexp(
       "ParamName=ISSC",
       "RegExp=\"ISSC\":\"(.*)\",\"PAGE",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");

	web_reg_save_param_regexp(
        "ParamName=AwardsLink",
        "RegExp=<a href=\"siw_portal.url\?(.*)\" id=\"GSAWD_AWD_01\" >",
        "LAST");	

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{AwardsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	
}
# 13 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Search_For_Competition_Link.c" 1
Click_Search_For_Competition_Link()
{
	
	
		web_submit_data("SIW_INTRAY.getintray",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
		"Snapshot=t12.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=NKEY", "Value={NKEY}", "ENDITEM",
		"Name=MHV_CODE", "Value=GSAWD_001", "ENDITEM",
		"Name=PAGE", "Value=", "ENDITEM",
		"Name=ORDR", "Value=", "ENDITEM",
		"Name=ISSC", "Value={ISSC}", "ENDITEM",
		"Name=DIVID", "Value={DIVID}", "ENDITEM",
		"LAST");


	
	

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{SearchForCompetitionLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?DA9A0EB5CAC8481Ck9O73XRwDJ5amHaAF16yDCjKKb4t6HXhn7LA9QF6zRqkNa8WtTpUFp7sr36sbT_zICxNoU06zZU_ElQD-92qhkv4giAr1__imMEyibBlo9ZOTQFREdWn6D9SYqlcOFbI",
		"Snapshot=t20.inf",
		"Mode=HTML",
		"LAST");





	return 0;
}
# 14 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Perform_Search_For_Competition.c" 1
Perform_Search_For_Competition()
{
	
	
	web_reg_save_param_regexp(
		"ParamName=TTE.MENSYS.1-1",
		"RegExp=name=\"#\\.TTE\\.MENSYS\\.1-1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_TTQ*",
		"LAST");
	
	web_submit_form("SIW_TTQ", 
		"Snapshot=t62.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.2", "Value={AcademicYear}", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Search", "ENDITEM", 
		"LAST");
	return 0;
}
# 15 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Awards_Portal_Tab_ExtrManageFinancialAccountsLink.c" 1
Click_Awards_Portal_Tab_ExtrManageFinancialAccountsLink()
{
	
		
	web_reg_save_param_regexp(
       "ParamName=NKEY",
       "RegExp=\"NKEY\":\"(.*)\"}",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	
	web_reg_save_param_regexp(
       "ParamName=DIVID",
       "RegExp={\"DIVID\":\"(.*)\",\"REFRESH",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	web_reg_save_param_regexp(
       "ParamName=ISSC",
       "RegExp=\"ISSC\":\"(.*)\",\"PAGE",
        "SEARCH_FILTERS",
        "Scope=Body",
        "IgnoreRedirections=No",
        "LAST");
	
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");


	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=name=\"%\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");
		
		
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_2",
		"RegExp=SIW_POD\\.start_url\\?(.*?)\"\\ target",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");
	
	


 
	web_reg_save_param_regexp(
		"ParamName=MHV_CODE",
		"RegExp=loading\\.\\\\\">\",\"ORDR\":\"\",\"MHVC\":\"(.*?)\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");
		
	web_reg_save_param_regexp(
		"ParamName=ManageFinancialAccountsLink",
		"RegExp=SIW_DMX\\.start_url\\?(.*?)\"\\ target",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");


	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{AwardsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	
	
	

	return 0;
}
# 16 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Manage_FInancial_Accounts_link.c" 1
Click_Manage_FInancial_Accounts_link()
{
	
	
	web_submit_data("SIW_INTRAY.getintray",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
		"Snapshot=t697.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=NKEY", "Value={NKEY}", "ENDITEM",
		"Name=MHV_CODE", "Value={MHV_CODE}", "ENDITEM",
		"Name=PAGE", "Value=", "ENDITEM",
		"Name=ORDR", "Value=", "ENDITEM",
		"Name=ISSC", "Value={ISSC}", "ENDITEM",
		"Name=DIVID", "Value={DIVID}", "ENDITEM",
		"LAST");
	
	
	web_url("SIW_DMX.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_DMX.start_url?{ManageFinancialAccountsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?CA19143325B6454CQN8on_gJpVmHPp1a3h-YhyYdUJeBcBNpsYbQA-fwE2812f81AQo7kspvLaminDx_ODS075AXoJxLIOL6aveJwW5N09_vDcUnJ9X8f4EBdi2MyH05GAOgLl4AFv6wwCQq",
		"Snapshot=t15.inf",
		"Mode=HTML",
		"LAST");
	


	return 0;
}
# 17 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Perform_FInancial_Account_Search.c" 1
Perform_FInancial_Account_Search()
{
	
	
	
	
	web_submit_form("SIW_DMX_LITE", 
		"Snapshot=t75.inf", 
		"ITEMDATA", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.2-1", "Value=001SF", "ENDITEM", 
		"Name=retrieve.DUMMY_OPTIONS.MENSYS.1", "Value=Search", "ENDITEM", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", "ENDITEM", 
		"LAST");

	return 0;
}
# 18 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Perform_Financial_Account_Update.c" 1
Perform_Financial_Account_Update()
{
	
web_submit_form("SIW_DMX_LITE_2", 
		"Snapshot=t104.inf", 
		"ITEMDATA", 
		"Name=SELECTED.DUMMY_OCCURRENCES.MENSYS.1", "Value=<OFF>", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-1", "Value=Vega Grad Schp123", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-1", "Value=E5133", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-1", "Value=51000", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-1", "Value=0", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-1", "Value=", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-1", "Value=500125", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-1", "Value=51300", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-1", "Value=001SF", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-1", "Value=000036126", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-1", "Value=Y", "ENDITEM", 
		"Name=store.DUMMY_OPTIONS.MENSYS.1", "Value=Save", "ENDITEM", 
		"LAST");
	
	
	return 0;
}
# 19 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Export_Financial_Account_Result.c" 1
Export_Financial_Account_Result()
{
	
	
	
	web_submit_form("SIW_DMX_LITE_3", 
		"Snapshot=t166.inf", 
		"ITEMDATA", 
		"Name=SELECTED.DUMMY_OCCURRENCES.MENSYS.1", "Value=<OFF>", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.3-1", "Value=Vega Grad Schp123", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.4-1", "Value=E5133", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.5-1", "Value=51000", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.6-1", "Value=0", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.7-1", "Value=", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.8-1", "Value=500125", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.9-1", "Value=51300", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.10-1", "Value=001SF", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.11-1", "Value=000036126", "ENDITEM", 
		"Name=VALUE.DUMMY_FIELDS.MENSYS.12-1", "Value=Y", "ENDITEM", 
		"Name=export.DUMMY_OPTIONS.MENSYS.1", "Value=Export", "ENDITEM", 
		"LAST");
	
	
		web_reg_save_param_regexp(
		"ParamName=ExportLink",
		"RegExp=target='_BLANK'> (.*?)\_mensys_udd.csv",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_XEPC*",
		"LAST");
	
	
		web_submit_form("SIW_XEPC", 
		"Snapshot=t167.inf", 
		"ITEMDATA", 
		"Name=EXP_ALL.DUM1.MENSYS.1", "Value=Export all retrieved records", "ENDITEM", 
		"Name=FILETYPE.DUM1.MENSYS.1", "Value=CSV  (Comma separated)", "ENDITEM", 
		"Name=NOTIFICATION.DUM1.MENSYS.1", "Value=Create Link", "ENDITEM", 
		"Name=EMAIL.DUM1.MENSYS.1", "Value=", "ENDITEM", 
		"Name=XET_CODE.DUM1.MENSYS.1", "Value=", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.3-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.4-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.5-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.6-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.7-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.8-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.9-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.10-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.11-1", "Value=1", "ENDITEM", 
		"Name=EXPORT.ENTFLDS.MENSYS.12-1", "Value=1", "ENDITEM", 
		"Name=BP102.DUMMY_B.MENSYS.1", "Value=Export", "ENDITEM", 
		"LAST");


	


	web_link("{ExportLink}_mensys_udd.csv", 
		"Text={ExportLink}_mensys_udd.csv", 
		"Snapshot=t34.inf", 
		"LAST");
	
	
}
# 20 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Awards_Portal_Tab_ExtrAwardTenureReportLink.c" 1
Click_Awards_Portal_Tab_ExtrAwardTenureReportLink()
{
	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");



 
	web_reg_save_param_regexp(
		"ParamName=DIVID",
		"RegExp=div\\ id=\"(.*?)\"></div",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=ISSC",
		"RegExp=\"REFRESH\":120000,\"ISSC\":\"(.*?)\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=MHV_CODE",
		"RegExp=loading\\.\\\\\">\",\"ORDR\":\"\",\"MHVC\":\"(.*?)\",",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=NKEY",
		"RegExp=loading\\.\\\\\">\",\"ORDR\":\"\",\"MHVC\":\"GSAWD_001\",\"NKEY\":\"(.*?)\"}\\)}\\)",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");


		
		
		
	web_reg_save_param_regexp(
		"ParamName=AwardTenureReportLink",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\"\\ target",
		"Ordinal=4",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		"LAST");



	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{AwardsLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
		
		
		
	
		
	return 0;
}
# 21 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Click_Award_Tenure_Report_link.c" 1
Click_Award_Tenure_Report_link()
{
	
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a1",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a2",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.2\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a3",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.3\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a4",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.4\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a5",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.5\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a6",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.6\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a7",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.7\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a8",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.8\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a9",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.9\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a10",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.10\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a11",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.11\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a12",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.12\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a13",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.13\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_a14",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.14\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	
	web_reg_save_param_regexp(
		"ParamName=MHDC",
		"RegExp=name=\"MHDC\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	
	web_reg_save_param_regexp(
		"ParamName=RUN_MODE.DUMMY.MENSYS.1_1",
		"RegExp=name=\"RUN_MODE\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	
	
	
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter1",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");
	 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter2",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.2\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter3",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.3\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter4",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.4\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter5",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.5\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter6",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.6\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter7",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.7\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter8",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.8\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter9",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.9\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter10",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.10\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter11",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.11\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter12",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.12\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter13",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.13\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter14",
		"RegExp=name=\"\\#\\.TTQ\\.MENSYS\\.14\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

	
	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{AwardTenureReportLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?566BF8A69C9443FDGPqtQaxTDU4ej9RIw6JJtR97Vzmj2t0GyM_akWZvYHj7uQuRXE6Pq1j32Spn0cIj2QUcL6Qwjg9vQJ37uwuAudK6ORoE7daqvbWCV2oUJlo",
		"Snapshot=t180.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{AwardTenureReportLink}", "ENDITEM",
		"URL=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{AwardTenureReportLink}", "ENDITEM",
		"URL=../plugins/css/chosen/chosen-sprite.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", "ENDITEM",
		"LAST");
	return 0;
}
# 22 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Perform_Award_Tenure_Report_Search.c" 1
Perform_Award_Tenure_Report_Search()
{
	
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


web_reg_save_param_regexp(
		"ParamName=ExportLink2",
		"RegExp=\"\.\.\/run\/SIW_YGSL\.start_url\?(?:([^,;]*)\"(?:[^,;]|$))\' value=\'Export\'>",
		"LAST");
		
		
web_submit_form("SIW_TTQ_3", 
		"Snapshot=t42.inf", 
		"ITEMDATA", 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=2012/2013", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=Chemistry (Faculty of Science)", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=<OFF>", "ENDITEM", 
		"Name=ANSWER.TTQ.MENSYS.12", "Value=Search", "ENDITEM", 
		"LAST");
	
	return 0;
}
# 23 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "Perform_Export_Tenure_Report_Result.c" 1
Perform_Export_Tenure_Report_Result()
{
	
	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YGSL.start_url{ExportLink2}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	return 0;
}
# 24 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "ClickSearchForApplicant.c" 1
ClickSearchForApplicant()
{

	web_submit_data("SIW_INTRAY.getintray",
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}",
		"Snapshot=t62.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=NKEY", "Value={NKEY}", "ENDITEM",
		"Name=MHV_CODE", "Value={MHV_CODE}", "ENDITEM",
		"Name=PAGE", "Value=", "ENDITEM",
		"Name=ORDR", "Value=", "ENDITEM",
		"Name=ISSC", "Value={ISSC}", "ENDITEM",
		"Name=DIVID", "Value={DIVID}", "ENDITEM",		
		"LAST");
	

 
	web_reg_save_param_regexp(
		"ParamName=v",
		"RegExp=src=\"\\.\\./plugins/javascript/tablesaw/tablesaw\\.min\\.js\\?v=(.*?)\"></script",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_3",
		"RegExp=name=\"%\\.DUMMY\\.MENSYS\\.1\"\\ value=\"(.*?)\"\\ ",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		"LAST");

	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{SearchForApplicantLink}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{NKEY}", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 		
		"LAST");


	
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	
	
	return 0;
}
# 25 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "PerformApplicantSearch.c" 1
PerformApplicantSearch()
{
	
	web_submit_form("SIW_TTQ",
		"Snapshot=t88.inf",
		"ITEMDATA",
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.5", "Value={Department}", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.6", "Value={Citizenship}", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.7", "Value={Program}", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.8", "Value={CourseOrThesis}", "ENDITEM",
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", "ENDITEM",		
		"LAST");
	
	return 0;
}
# 26 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
		web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/SIW_YGSL.start_url?dsfasdf",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-test.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"LAST");
	return 0;
}
# 27 "d:\\workspace\\gsms.loadtest\\gsmsawardswavetwocomprehensive\\\\combined_GSMSAwardsWaveTwoComprehensive.c" 2

