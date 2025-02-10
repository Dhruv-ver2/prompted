#include<stdio.h>

void main(){
    char string[100];
    printf("Enter a string:");
    scanf("%s",string);

    for(int i=0;string[i]!='\0';i++){
        if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122))
            string[i]+=2;
    }

    printf("The salted string = %s",string);
}