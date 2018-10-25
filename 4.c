#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
    char n[100];
    char* m="asdf";
    strcpy(n,m);
    printf("%s\n",n);
    return 0;
}