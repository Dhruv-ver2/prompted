// The following code performs encryptions and decryption 
#include<stdio.h>
#include<string.h>

//Encryption1: Shifting the alphabetical characters by 2 steps
void encrypt1(char *str){
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            str[i]+=2; //str[i]=str[i]+2;

    }

}

//Encryption2: Shifting the first 5 elements by 5(ASCII) steps and remaining by 7(ASCII) steps
void encrypt2(char *str){
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) ||  str[i]>=33 && str[i]<=42||str[i]==64){
         if(i<=5)
             str[i] += 5;
         else
             str[i] += 7;
        }
    }
}

void decrypt1(char *estr){
    for(int i=0;estr[i]!='\0';i++){
        if((estr[i]>=65 && estr[i]<=90) || (estr[i]>=97 && estr[i]<=122))
            estr[i]-=2;   //estr[i]=estr[i]-2;

    }
}

void decrypt2(char *str){
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) ||  str[i]>=33 && str[i]<=42||str[i]==64){
         if(i<=5){
             str[i] -= 5;
         }
         else{
             str[i] -= 7;
         }
        }
    
}
}


