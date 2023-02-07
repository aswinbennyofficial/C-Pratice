#include <stdio.h>
int main(){
int a,s,d;
scanf("%d%d%d",&a,&s,&d);

int max=(a>s)?((a>d)?a:(s>d)?s:d) : ((s>d?s:d));
printf("%d",max);


return 0;
}
