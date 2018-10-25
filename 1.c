#include<stdio.h>
#include<string.h>
int main(){
  char *n;
  char a[2]="a";
  char q='2';
  char b[3]={'a','b','\0'};
  char c[3]={'c','d','\0'};
  /*n="afaf";
  printf("%s,%c,%c,%c\n",n,n[9],n[4],n[3]);

  printf("%s,%c,%c\n",a,a[1],a[32]);*/
  strcpy(b,c);
  printf("%s",q);
  return 0;
}
