      
      #include<stdio.h>
      #include<time.h>
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
 
      	
	 char option;
     float total;
     total =0;
     int i,j,number; // variable having the number of iterations.
     	
      int array[7][4]; 
   int *letter;
   float mark,sum;
 
 
     total =0;
     int k; // variable having the number of iterations in the program.
     sum =0;	
     	
     	for(k=0;k<2;k++){
     		
     	  printf("please enter the character you are about to attempt\n");
          option=getchar();
  //MARKING THE ARRAYS
  
  if(option=='A'||option=='a'){
	
  printf("enter 0 or 1 to draw your character:\n");
  for(i=0;i<7;i++){
  	for(j=0;j<4;j++){
  	printf("enter 0 or 1 at row %d, column %d:",(i+1),(j+1));
  	scanf("%d",&array[i][j]);}
 printf("\n"); }
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
  
  if(option=='B'||option=='b'){
  	
  }
  
  
  if(option=='C'||option=='c'){
  
  }
  
  
  if(option=='D'||option=='d'){
   }
  
  
  if(option=='E'||option=='e'){
  	
  }
  
  
  if(option=='F'||option=='f'){
  	
  }
  
  if(option=='G'||option=='g'){
  	
  }
  
  if(option=='H'||option=='h'){
  	
  }
  
  if(option=='I'||option=='i'){
  	
  }
  
  if(option=='J'||option=='j'){
  	
  }
  
  if(option=='K'||option=='k'){
  	
  }
  
  if(option=='L'||option=='l'){
  	
  }
  
  if(option=='M'||option=='m'){
  	
  }
  
  if(option=='N'||option=='n'){
  	
  }
  
  if(option=='O'||option=='o'){
  	
  }
  
  if(option=='Q'||option=='q'){
  	
  }
  
  if(option=='R'||option=='r'){
  	
  }
  
  if(option=='S'||option=='s'){
  	
  }
  
  if(option=='T'||option=='t'){
  	
  }
  
  if(option=='U'||option=='u'){
  	
  }
  
  if(option=='V'||option=='v'){
  	
  }
  
  if(option=='W'||option=='w'){
  	
  }
  
  if(option=='X'||option=='x'){
  	
  }
  
  if(option=='Y'||option=='y'){
  	
  }
  
  if(option=='Z'||option=='z'){
  	
  	
  }
  
            fflush(stdin);
		     //total=total+sum;		
		 }
     	
     	printf("total is %.2f\n",sum);
     total = (sum/(28*2))*100;
     printf("you scored %.2f percent\n",total);
     
  int ticks = clock();
 float seconds = (float)ticks/CLOCKS_PER_SEC;
 printf(" \n\n you spent %f seconds attempting the assignment",seconds);
     
     		 
}












