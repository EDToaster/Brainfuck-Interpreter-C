#include<stdio.h>
int m[999999],s[999999],*r=m,*p=s;
main(c,v)char **v;{
  FILE *f=fopen(v[1],"r");
  while(~(*p++=fgetc(f)));
  for(p=s;c=*p;p++){
    int d=92-c,o=d;
    c==60||c==62?r+=c-61:c==43||c==45?*r+=44-c:c==44?*r=getchar():c==46?putchar(*r):0;
    if(!(c-91&&c-93||(d>=0)-!*r)){
      do{
        p+=d;
        if(*p==91||*p==93)o+=92-*p;
      }while(o);
    }
  }
}