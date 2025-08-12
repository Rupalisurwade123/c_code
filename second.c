#include<stdio.h>

    int displaystring(char str[]){
    printf("the string is:%s\n",str);
}
int main(){
    char message[]="hello from main";
    displaystring(message);

}