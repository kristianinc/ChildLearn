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
 int A[7][4]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,0,0,1}};
 int B[7][4]={{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0}};
 int C[7][4]={{0,1,1,1},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{0,1,1,1}};
 int D[7][4]={{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,1,1,0}};
 int E[7][4]={{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1}};
 int F[7][4]={{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,0,0,0}};
 int G[7][4]={{0,1,1,1},{1,0,0,0},{1,0,0,0},{1,0,1,1},{1,0,0,1},{1,0,0,1},{0,1,1,1}};
 int H[7][4]={{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,0,0,1}};
 int I[7][4]={{1,1,1,1},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0},{1,1,1,1}};
 int J[7][4]={{1,1,1,1},{0,0,1,0},{0,0,1,0},{0,0,1,0},{1,0,1,0},{1,0,1,0},{0,1,1,1}};
 int K[7][4]={{1,0,0,1},{1,0,0,1},{1,0,1,0},{1,1,0,0},{1,0,1,0},{1,0,0,1},{1,0,0,1}};
 int L[7][4]={{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,1,1,1}};
 int M[7][4]={{1,0,0,1},{1,1,1,1},{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1}};
 int N[7][4]={{1,0,0,1},{1,1,0,1},{1,1,0,1},{1,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,0,1}};
 int O[7][4]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0}};
 int P[7][4]={{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0},{1,0,0,0},{1,0,0,0},{1,0,0,0}};
 int Q[7][4]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,1,1},{0,1,1,1}};
 int R[7][4]={{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1}};
 int S[7][4]={{0,1,1,1},{1,0,0,0},{1,0,0,0},{0,1,1,0},{0,0,0,1},{0,0,0,1},{1,1,1,0}};
 int T[7][4]={{1,1,1,1},{1,1,1,1},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0}};
 int U[7][4]={{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0}};
 int V[7][4]={{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0},{0,1,1,0}};
 int W[7][4]={{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{1,1,1,1},{1,1,1,1},{1,0,0,1}};
 int X[7][4]={{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0},{1,0,0,1},{1,0,0,1},{1,0,0,1}};
 int Y[7][4]={{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,1,1,0},{0,1,1,0},{0,1,1,0},{0,1,1,0}};
 int Z[7][4]={{1,1,1,1},{0,0,0,1},{0,0,1,0},{0,1,0,0},{1,0,0,0},{1,0,0,0},{1,1,1,1}};
 int array[7][4];

 int total,scores,avg;
 total =0;
 int i,j,number;
 int *letter;
 float mark,sum;
 total =0;
 sum =0;
    int m,n;

printf("============= CHILDLEARN =============\n\n");
printf("connecting to the database please wait....\n");
    //connection to the database
 MYSQL_RES *res;
 MYSQL_RES *result;
 MYSQL_ROW row;
 char password[10];
 char mystring[300], myquery[100], ass[8],pupilname[20],stdtquery[230],reqquery[100],assid[10] ,idquery[100],assoption[10];
 char option,assin[10],stotal[16],sseconds[10],assopquery[200],statquery[210],status[10];

MYSQL *conn;
conn = mysql_init(0);
conn = mysql_real_connect(conn,"localhost","root","","childlearn",0,NULL,0);
if(conn){
    printf("status:connected\n\n");
}
else {printf("status:not connected\n\n");
 exit(0);
  }

  for(;;){

  printf("enter your usercode\n");
  gets(password);
  strcpy(myquery,"select * from pupils where usercode = '");
  strcat(myquery,password);
  strcat(myquery,"';");

  if(mysql_query(conn,myquery)){
    printf("error\n");
    exit(0);
  }
    res = mysql_store_result(conn);
    row = mysql_fetch_row(res);

    if(res==NULL){
    finish_with_error(conn);
   }

  strcpy(stdtquery,"select firstname from pupils where usercode = \'");
  strcat(stdtquery,password);
  strcat(stdtquery,"\'");

   if(mysql_query(conn,stdtquery)){
    finish_with_error(conn);}
   result = mysql_init(0);
   result = mysql_store_result(conn);
   if(result==NULL){
    finish_with_error(conn);}
   int num_fields=mysql_num_fields(result);
   while((row=mysql_fetch_row(result))){
    for(int i=0;i<num_fields;i++){
            strcpy(pupilname,row[0]);}
   }

    if((row = mysql_num_rows(res))>0){
        printf("access granted\n\n hey %s, welcome to childlearn\n\n",pupilname);

 for(;;){

printf("============= MENU ============\n\n");

printf("  list of commands you can enter\n\n");
printf("   viewall                        > displays assignment number and date, whether attempted or not\n");
printf("   checkstatus                    > displays all attempted assignments\n");
printf("   viewassignment assignmentId    > displays details of a specific assignment\n");
printf("   requestactivation              > sends an activation request to your teacher\n");
printf("   checkdates                     > shows if there is an assignment in specified time\n");

 printf("================================");

char choice[20];

printf("\n\nenter your command\n");
gets(choice);

if(strcmp(choice, "viewall")==0){
//checking activation status
 strcpy(statquery,"select _status from pupils where usercode = \'");
  strcat(statquery,password);
  strcat(statquery,"\'");

   if(mysql_query(conn,statquery)){
    finish_with_error(conn);}
   result = mysql_init(0);
   result = mysql_store_result(conn);
   if(result==NULL){
    finish_with_error(conn);}
   int num_fields=mysql_num_fields(result);
   while((row=mysql_fetch_row(result))){
    for(int i=0;i<num_fields;i++){
            strcpy(status,row[0]);}
   }
if(strcmp(status,"Deactivated")==0){
    printf("\n  sorry %s, you have been deactivated. please send an activation request to attempt assignments\n",pupilname);
    exit(0);
}

if(mysql_query(conn,"SELECT * FROM assignments; ")){
    finish_with_error(conn);}
   res = mysql_init(0);
   res = mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);}
    num_fields=mysql_num_fields(res);
    printf("\n open assignments:\n");
    printf("  \nassignment_ID\tcharacters  \t\tdate \t\t    start\t\t stop\n");
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
            strcpy(ass,row[0]);
        printf("  %s           ",row[i]);
    }
    printf("\n");
   }

   printf("\nenter assignment Id to start attempt.\n");
   gets(assoption);

   strcpy(assopquery,"select * from assignments where assignmentID = \'");
   strcat(assopquery,assoption);
   strcat(assopquery,"\'");


   if(mysql_query(conn,assopquery)){
    finish_with_error(conn);}
   res = mysql_init(0);
   res = mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);}
    num_fields=mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
        strcpy(assid,row[0]);
        strcpy(ass,row[1]);
}     }
   printf("\n In this assignment, you are drawing characters %s in their order\n",ass);
   printf("you have started the attempt\n\n");
   int length = strlen(ass);

   for(n=0;n<1;n++){
      if(ass[n]=='A'||ass[n]=='a'){
  printf("you're currently drawing letter A'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&A[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==A[i][j]){
		sum++;}
		}}
//printf("you scored %d in this letter\n",sum);
  }

  if(ass[n]=='B'||ass[n]=='b'){
  	 printf("you're currently drawing letter B'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&B[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==B[i][j]){
		sum++;}
		}}
  }


  if(ass[n]=='C'||ass[n]=='c'){
   printf("you're currently drawing letter C'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&C[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==C[i][j]){
		sum++;}
		}}
  }


  if(ass[n]=='D'||ass[n]=='d'){
 printf("you're currently drawing letter D'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&D[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==D[i][j]){
		sum++;}
		}}
   }


  if(ass[n]=='E'||ass[n]=='e'){
   printf("you're currently drawing letter E'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&E[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==E[i][j]){
		sum++;}
		}}
  }


  if(ass[n]=='F'||ass[n]=='f'){
   printf("you're currently drawing letter F'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&F[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==F[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='G'||ass[n]=='g'){
   printf("you're currently drawing letter G'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&G[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==G[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='H'||ass[n]=='h'){
   printf("you're currently drawing letter H'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&H[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==H[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='I'||ass[n]=='i'){
   printf("you're currently drawing letter I'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&I[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==I[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='J'||ass[n]=='j'){
   printf("you're currently drawing letter J'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&J[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==J[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='K'||ass[n]=='k'){
   printf("you're currently drawing letter K'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&J[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==J[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='L'||ass[n]=='l'){
   printf("you're currently drawing letter L'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&L[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==L[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='M'||ass[n]=='m'){
   printf("you're currently drawing letter M'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&M[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==M[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='N'||ass[n]=='n'){
   printf("you're currently drawing letter N'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&N[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==N[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='O'||ass[n]=='o'){
   printf("you're currently drawing letter O'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&O[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==O[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='P'||ass[n]=='p'){
   printf("you're currently drawing letter P'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&P[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==P[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='Q'||ass[n]=='q'){
   printf("you're currently drawing letter Q'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&Q[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==Q[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='R'||ass[n]=='r'){
   printf("you're currently drawing letter R'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&R[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==R[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='S'||ass[n]=='s'){
   printf("you're currently drawing letter S'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&S[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==S[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='T'||ass[n]=='t'){
   printf("you're currently drawing letter T'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&T[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==T[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='U'||ass[n]=='u'){
   printf("you're currently drawing letter U'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&U[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==U[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='V'||ass[n]=='v'){
   printf("you're currently drawing letter V'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&V[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==V[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='W'||ass[n]=='w'){
   printf("you're currently drawing letter W'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&W[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==W[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='X'||ass[n]=='x'){
   printf("you're currently drawing letter X'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&X[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==X[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='Y'||ass[n]=='y'){
   printf("you're currently drawing letter Y'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&Y[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==Y[i][j]){
		sum++;}
		}}
  }

  if(ass[n]=='Z'||ass[n]=='z'){
  	 printf("you're currently drawing letter Z'\n\n");
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
 printf("\n\n");
printf("the character you entered is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&array[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
printf("\n\n");
printf("the correct character is shown below\n");
for(i=0;i<7;i++){
  for(j=0;j<4;j++){
  	*letter;
 letter=&Z[i][j];
 if (*letter==1){
 	printf("* ");}
  else {
  	printf("  ");}
  }
	printf("\n");}
//array for comparing/ marking the character.
for(i=0;i<7;i++){
	for(j=0;j<4;j++){
	if(array[i][j]==Z[i][j]){
		sum++;}
		}}
  }
        fflush(stdin);

   }
printf("total is %.2f\n",sum);
     total = (sum/(28*1))*100;
     printf("you scored %d percent in this assignment\n",total);

  int ticks = clock();
 int seconds = (float)ticks/CLOCKS_PER_SEC;
 printf(" \n\n you spent %f seconds attempting the assignment\n",seconds);

   itoa(total,stotal,10);
   itoa(seconds,sseconds,10);

  strcpy(reqquery,"insert into results (assignmentID,characters,firstname,usercode,mark,time,comment) values ('");
  strcat(reqquery,assid);
  strcat(reqquery,"','");
  strcat(reqquery,ass);
  strcat(reqquery,"','");
  strcat(reqquery,pupilname);
  strcat(reqquery,"','");
  strcat(reqquery,password);
  strcat(reqquery,"','");
  strcat(reqquery,stotal);
  strcat(reqquery,"','");
  strcat(reqquery,sseconds);
  strcat(reqquery,"','");
  strcat(reqquery,"");
  strcat(reqquery,"');");

   if(mysql_query(conn,reqquery)){
    printf("\n\n hello %s, you can't attempt the assignment twice\n",pupilname); exit(0);}

     printf("\n\nyour assignment results have been sent to your teacher\n");
  exit(0);

}

else if(strcmp(choice, "checkstatus")==0){

   strcpy(reqquery,"select mark from results where usercode='");
   strcat(reqquery,password);
   strcat(reqquery,"';");
   if(mysql_query(conn,reqquery)){
    finish_with_error(conn);}
   res = mysql_init(0);
   res = mysql_store_result(conn);
   if(res==NULL){
   finish_with_error(conn);}
   int num_rows=mysql_num_rows(res);
   num_fields = mysql_num_fields(res);
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
     //printf("%d\t",row[i]);
      scores = atoi(row[i]);
        total += scores;

}     }
   printf("\n > the average percentage mark you scored is: %d \n",total/num_rows);

   strcpy(reqquery,"select assignmentID from results where usercode='");
   strcat(reqquery,password);
   strcat(reqquery,"';");
   if(mysql_query(conn,reqquery)){
    finish_with_error(conn);}
   res = mysql_init(0);
   res = mysql_store_result(conn);
   if(res==NULL){
   finish_with_error(conn);}
   num_rows=mysql_num_rows(res);
   printf(" > you have so far attempted %d assignment(s)\n",num_rows);

   if(mysql_query(conn,"select distinct assignmentID from results;")){
    finish_with_error(conn);}
   result = mysql_init(0);
   result = mysql_store_result(conn);
   if(result==NULL){
   finish_with_error(conn);}
   int totalass = mysql_num_rows(result);
   printf(" > total assignments completed are: %d\n",totalass);

   float perc = ((float)num_rows/totalass)*100;
   printf(" > you have attempted %.0f percent of the completed assignments\n",perc);



        exit(0);

}

else if(strcmp(choice, "viewassignment")==0){
   gets(assin);
  strcpy(idquery,"select * from results where assignmentID ='");
  strcat(idquery,assin);
  strcat(idquery,"'");
  strcat(idquery,"and usercode='");
  strcat(idquery,password);
  strcat(idquery,"';");

  if(mysql_query(conn,idquery)){
    finish_with_error(conn);}
   res = mysql_init(0);
   res = mysql_store_result(conn);
   if(res==NULL){
    finish_with_error(conn);}
   int num_fields=mysql_num_fields(res);
    printf("\n assignment:\n");
    printf("  \nassignment_ID\t\tcharacters\tfirstname\tusercode\tmark \t time \t comment\n");
   while((row=mysql_fetch_row(res))){
    for(int i=0;i<num_fields;i++){
            strcpy(ass,row[0]);
        printf("  %s         ",row[i]);
    }
    printf("\n");
   }
}

else if(strcmp(choice, "checkdates")==0){
		printf("you said hello\n");
}

else if(strcmp(choice, "requestactivation")==0){

  strcpy(reqquery,"update pupils set request ='activate me' where usercode ='");
  strcat(reqquery,password);
  strcat(reqquery,"';");

   if(mysql_query(conn,reqquery)){
    printf(" sorry %s, your teacher already received your complaint\n",pupilname); exit(0);}
    printf("your activation request has been sent to your teacher\n");
  exit(0);
         }
  else{
	printf("command not recognized\n");

}  printf("\n\n");  }

}    else {printf("incorrect usercode, try again\n\n");

          // exit(0);
            } }

}
