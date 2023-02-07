#include <stdio.h>
int main(){
int a,s,d;
scanf("%d%d%d",&a,&s,&d);
//printf("%d",d);
int max=(a>s)?((a>d)?a:d):((s>d?s:d));
printf("%d",max);


return 0;
}
