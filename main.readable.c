char *p;
s[9999], *r = s, d, o;
main(c, v) char **v;
{
  for (p = v[1]; c = *p; p++) {
    o = d = 92 - c,
    c - 60 ? c - 62 ? c - 43 ? c - 45 ? c - 44 ? c - 46 ?: putchar(*r)
                                               : read(0, r, 1)
                                      : --*r
                             : ++*r
                    : ++r
           : --r;
    if (!(c ^ 91 | *r) + !(c ^ 93 | !*r))
      while (p += d, o += (*p == 91) - (*p == 93))
        ;
  }
}
