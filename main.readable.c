// Combined tape and program array
// size = 2_097_152
char m[1<<21], 
// program counter
*p = m, 
// memory cell
*r=m+99999;
d, o;

main(c, v) char **v;
{
  read(open(v[1],0),p,-1);
  for(;c=*p;p++){
    o = d = 92 - c,
    c-60?c-62?c-43?c-45?c-44?c-46?:putchar(*r):read(0,r,1):--*r:++*r:++r:--r;
    if(!(c^91|*r)+!(c^93|!*r)) while (p+=d,o+=(*p==91)-(*p==93));
  }
}
