#include<stdio.h>
#include<windows.h>
#include<mysql.h>
#include<winsock2.h>
#include<time.h>

void finish_with_error(MYSQL*conn){
fprintf(stderr,"%s\n",mysql_error(conn));
mysql_close(conn);
exit(1);
}


int main(){
    int m,n;

printf("============= CHILDLEARN =============\n\n");
printf("connecting to the database please wait....\n");
    //connection to the database
 MYSQL_RES *res;
 MYSQL_RES *result;
 MYSQL_ROW row;
 char password[10];
 char mystring[300], myquery[100], ass[8],pupilname[20],stdtquery[230];
 char option;

MYSQL *conn;
conn = mysql_init(0);
conn = mysql_real_connect(conn,"localhost","root","","test",0,NULL,0);
if(conn){
    printf("status:connected\n\n");
}
else {printf("status:not connected\n\n");
 exit(0);
  }

  for(;;){

  printf("enter your school code\n");
  gets(password);
  strcpy(myquery,"select * from pupils where schoolcode = \'");
  strcat(myquery,password);
  strcat(myquery,"\'");

  if(mysql_query(conn,myquery)){
    printf("error\n");
    exit(0);
  }
    res = mysql_store_result(conn);
    row = mysql_fetch_row(res);

    if(res==NULL){
    finish_with_error(conn);
   }

  strcpy(stdtquery,"select firstname from pupils where schoolcode = \'");
  strcat(stdtquery,password);
  strcat(stdtquery,"\'");

   if(mysql_query(conn,stdtquery)){
    finish_with_error(conn);}
   result = mysql_init(0);
   result = mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);}
   int num_fields=mysql_num_fields(result);
   while((row=mysql_fetch_row(result))){
    for(int i=0;i<num_fields;i++){
            strcpy(pupilname,row[0]);}
   }

    if((row = mysql_num_rows(res))>0){
        printf("correct password!\n\n hey %s, welcome to childlearn\n\n",pupilname);


printf("============= MENU ============\n\n");

printf("  list of commands you can enter\n\n");
printf("   viewall\n");
printf("   checkstatus\n");
printf("   viewassignment\n");
printf("   requestactivation\n");
printf("   checkdates\n");

 printf("================================");

char choice[20];

printf("\n\nenter your command\n");
gets(choice);

if(strcmp(choice, "viewall")==0){

if(mysql_query(conn,"SELECT * FROM assignments; ")){
    finish_with_error(conn);
   }
   res = mysql_init(0);
   res = mysql_store_result(conn);

   if(res==NULL){
    finish_with_error(conn);
   }

   int num_fields=mysql_num_fields(res);
      printf("\n open assignments:\n");
      printf("  \nassignment_ID  characters\n");
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
            strcpy(ass,row[0]);
        printf("  %s            ",row[i]);
    }
    printf("\n");
   }

   //fetching the characters
   if(mysql_query(conn,"SELECT characters FROM assignments; ")){
    finish_with_error(conn);
   }
   res = mysql_init(0);
   res = mysql_store_result(conn);

   if(res==NULL){
    finish_with_error(conn);
   }
    num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
            strcpy(ass,row[0]);}
   }
   printf("\nyou are drawing characters %s in their order\n",ass);
   int length = strlen(ass);
   for(n=0;n<length;n++){
    if(ass[n] =='A'){
        printf("currently drawing A\n");
    }




   }
    //code for sending results into database
   //end of viewall.
   exit(0);
}

else if(strcmp(choice, "checkstatus")==0){
		printf("checking status please wait....\n");
}

else if(strcmp(choice, "viewassignment")==0){
		printf("assignment dates\n");
}

else if(strcmp(choice, "checkdates")==0){
		printf("you said hello\n");
}

else if(strcmp(choice, "requestactivation")==0){

 if (mysql_query(conn, "insert into requests  (schoolcode , petition) values  ('1200','activateme');")){

     fprintf(stderr, "couldnt send your request\n");
     return EXIT_FAILURE; }
     printf("your activation request has been sent to your teacher\n");
  exit(0);
         }

  else{
	printf("command not recognized\n");
	exit(0);


}

}    else {printf("incorrect password, try again\n\n");

          // exit(0);
            } }

}
