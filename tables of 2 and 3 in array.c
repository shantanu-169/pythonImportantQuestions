#include<stdio.h>



void printtable(int  arr[][10],int n,int m,int numbers);
int main(){

int table[2][10];

printtable(table,0,10,2);
printtable(table,1,10,3);

  for(int i=0;i<10;i++)

printf("%d  \t",table[0][i]);


printf("\n");


  for(int i=0;i<10;i++)

printf("%d  \t",table[1][i]);


    return 0;


}

void printtable(int  arr[][10],int n,int m,int numbers){



    for(int i=0;i<10;i++){

        arr[n][i]= numbers*(i+1);

    }
}