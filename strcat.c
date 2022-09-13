
void strcat(char *s, char *t) {
  while (*t++)
    *++s = *t;
}
