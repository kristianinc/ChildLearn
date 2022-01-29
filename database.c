#include<stdio.h>
#include<windows.h>
#include<mysql.h>
#include<winsock2.h>

void finish_with_error(MYSQL*conn){
fprintf(stderr,"%s\n",mysql_error(conn));
mysql_close(conn);
exit(1);
}


int main(){

printf("============= CHILDLEARN =============\n\n");
printf("connecting to the database please wait....\n");
    //connection to the database
 MYSQL_RES *res;
 MYSQL_RES *result;
 MYSQL_ROW *row;
 char password[10];

MYSQL *conn;
conn = mysql_init(0);
conn = mysql_real_connect(conn,"localhost","root","","test",0,NULL,0);
if(conn){
    printf("status:connected\n\n");
}
else {printf("status:not connected\n\n");
 exit(0);
  }







  printf("enter your password\n");
  gets(password);

  if(strcmp(password,"love")==0){
    printf("access granted\n\n\n");
  } else{printf("access denied\n\n\n");
       exit(0);
  }

   //mysql_free_result(res);
   //mysql_close(conn);



  //if (mysql_query(conn, "create table pupils ( firstname varchar(20), lastname varchar(10), schoolcode varchar(10));") != 0)
 //{
  // fprintf(stderr, "failed to create the table\n");
  // return EXIT_FAILURE; }


  /*if (mysql_query(conn, "select * from pupils;") != 0)
  {
    fprintf(stderr, "Query Failure\n");
    return EXIT_FAILURE;
  }*/




printf("  list of commands you can enter\n\n");
printf("   viewall\n");
printf("   checkstatus\n");
printf("   viewassignment\n");
printf("   requestactivation\n");
printf("   checkdates\n");








char choice[20];

//login by checking databases


//allowing pupil to enter command of their choice
//we need sql statements to query the database
printf("\n\nenter your command\n");
gets(choice);

if(strcmp(choice, "viewall")==0){

if(mysql_query(conn,"SELECT firstname FROM pupils; ")){
    finish_with_error(conn);
   }
   res = mysql_init(0);
   res = mysql_store_result(conn);

   if(res==NULL){
    finish_with_error(conn);
   }

  // printf("%s",res);

   int num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
        printf("%s ",row[i]);
    }
    printf("\n");
   }
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
		printf("activation request sent\n");}

else{
	printf("command not recognized\n");
	exit(0);


}

//part for attempting assignments
//we need logic code after selecting characters from the database.


printf("\n\n");
 int i,j,number;
int *letter;

 int array[7][4];


  printf("enter 0 or 1 to draw your character:\n");

  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){

  	printf("enter 0 or 1 at row %d, column %d\n",(i+1),(j+1));
  	scanf("%d",&number);

  	if(number==1){
  		array[i][j]= 1;
	  }
	  else if (number==0){
	  	array[i][j] = 0;
	  }

	  }

 printf("\n");
	  }


printf("\n\n");
printf("the character you entered is shown below\n");

for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){

 	printf("* ");
 }
  else {
  	printf("");}



  }
	printf("\n");

}



}
