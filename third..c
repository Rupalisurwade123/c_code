#include<stdio.h>
#include<string.h>
int main(){
    char ch[20]={'h','e','l','l','o'};
    char ch2[20];
    strcpy(ch2,ch);
    printf("the value of second string:%s",ch2);
}
