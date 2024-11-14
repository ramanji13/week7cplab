
#include<stdio.h>
#include<string.h>
int main() {
    char ch[200]= {"ramanji"};
    int i;
    for(i=0; ch[i]!='/0'; i++) {
        if(ch[i]>=65&&ch[i]<=90)
        {
            ch[i]=ch[i]+32;
        }
        else if(ch[i]>=90&&ch[i]<=122) {
            ch[i]=ch[i]-32;
        }
        else {
            ch[i]=ch[i];
        }
    }
    printf("%s",ch);
}
