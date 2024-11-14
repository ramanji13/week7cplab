#include <stdio.h>
#include <string.h>
int main() {
  char s1[345],s2[45];
  int l,i,j;
 gets(s1);
 gets(s2);
 
for (i=strlen(s1),j=0;s2[j]!='\0';i++,j++){
     s1[i]=s2[j];
}
printf("the new string is %s\n",s1);
}

