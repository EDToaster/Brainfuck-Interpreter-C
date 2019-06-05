#include<stdio.h>
int m[999999],s[999999],c,i,*r=m,*p=s;
int main(int n,char **v){
  FILE *f=fopen(v[1],"r");
  for(;(c=fgetc(f))!=EOF;i++)s[i]=c;
  for(;*p;p++){
    if(*p==60||*p==62)r+=(*p-61);
    if(*p==43||*p==45)*r+=(44-*p);
    if(*p==44)*r=getchar();
    if(*p==46)putchar(*r);
    if((*p==91||*p==93)&&((*p-92)<0)==!*r){
      char d=92-*p,o=d;
      do{
        p+=d;
        if(*p==91||*p==93)o+=(92-*p);
      } while(o);
    }
  }
}