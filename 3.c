#include<string.h>
#include<stdlib.h>
#include<stdio.h>
static char sql[100]={0};
char* make_char(char* s1,char* s2,char* s3,char* s4,char* s5){
    int i=0;
    int k=0;
    int length[5];
        length[0]=strlen(s1);
        length[1]=strlen(s4);
        length[2]=strlen(s2);
        length[3]=strlen(s5);
        length[4]=strlen(s3);
    for(k=0;k<length[0];){
        sql[i]=s1[k];
        i++;k++;
    }
    /*for(k=0;k<length[1];){
        sql[i]=s4[k];
        i++;k++;
    }
    for(k=0;k<length[2];){
        sql[i]=s2[k];
        i++;k++;
    }
    for(k=0;k<length[3];){
        sql[i]=s5[k];
        i++;k++;
    }
    for(k=0;k<length[4];){
        sql[i]=s3[k];
        i++;k++;
    }*/
    return sql;
}
int main(){
    char* newsql=make_char("select * from banker where username=","' and password='","'","Sherlock","alone007");
    printf("%s\n",newsql);
    return 0;
}