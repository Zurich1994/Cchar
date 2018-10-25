#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 100
int main(){
	int len1,len2;
	int i,j,temp;
	int flag;
	char *t1=(char *)malloc(N*sizeof(char));
	char *t2="asdfghjkl1234567890";
	
	len2 = strlen(t2);
	
	while(~scanf("%s",t1)){
		flag = 0;
		len1 = strlen(t1);
		for(i=0;i<len2;){
			temp = i;
			for(j=0;j<len1;j++){
				if(t1[j] == t2[i]){
					i++;
					if(j == len1-1){
						flag = 1;
						break;
					}
					continue;
				}
				else{
					i=temp+1;
					break;
				}
			}
		}
		if(flag){
			printf("Æ¥Åä³É¹¦£¡\n"); 
		}
		else
			printf("Æ¥ÅäÊ§°Ü£¡\n"); 
	}
free(t1);
return 0;
} 
