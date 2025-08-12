#include<stdio.h>    
int main(){ 
    char string[]="HelLo worlD!";
    printf("before updating of string:%s\n",string);
    string[0]='h';
    string[3]='l';
    string[10]='d';
    printf("after updating of string:%s\n",string);
}

  