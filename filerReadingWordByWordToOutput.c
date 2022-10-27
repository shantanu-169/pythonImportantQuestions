#include<stdio.h>
#include<stdlib.h>


int main(){

FILE *fptr;

char ch;
fptr=fopen("string.c","r");


do{

    ch=fgetc(fptr);
    putchar(ch);
    
}
while(ch!=EOF);


fclose(fptr);


  


    return 0;
    


}