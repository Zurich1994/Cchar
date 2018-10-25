#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
    char* s1="select * from sher where username='";
    char* s2="' and password='";
    char* s3="'";
    char* username="Sherlock";
    char* password="alone007";
    char sql[100]={0};
    int i=0;
    int k=0;
    int length[5];
        length[0]=strlen(s1);
        length[1]=strlen(username);
        length[2]=strlen(s2);
        length[3]=strlen(password);
        length[4]=strlen(s3);
    for(k=0;k<length[0];){
        sql[i]=s1[k];
        i++;k++;
    }
    for(k=0;k<length[1];){
        sql[i]=username[k];
        i++;k++;
    }
    for(k=0;k<length[2];){
        sql[i]=s2[k];
        i++;k++;
    }
    for(k=0;k<length[3];){
        sql[i]=password[k];
        i++;k++;
    }
    for(k=0;k<length[4];){
        sql[i]=s3[k];
        i++;k++;
    }
    /*strcat(sql,username);
    strcat(sql,s2);
    strcat(sql,password);
    strcat(sql,s3);*/
    printf("%s\n",sql);
    return 0;
}
