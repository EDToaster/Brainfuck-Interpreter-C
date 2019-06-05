#include<stdio.h>
int m[999999],s[999999],c,i,*r=m,*p=s;
main(int n,char **v){
  FILE *f=fopen(v[1],"r");
  for(;(c=fgetc(f))!=EOF;i++)s[i]=c;
  for(;(c=*p);p++){
    if(c==60||c==62)r+=(c-61);
    if(c==43||c==45)*r+=(44-c);
    if(c==44)*r=getchar();
    if(c==46)putchar(*r);
    if((c==91||c==93)&&((c-92)<0)==!*r){
      char d=92-c,o=d;
      do{
        p+=d;
        if(*p==91||*p==93)o+=(92-*p);
      } while(o);
    }
  }
}