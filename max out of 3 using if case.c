#include <stdio.h>
int main(){
int a,s,d,max;
scanf("%d%d%d",&a,&s,&d);
max=a;
if (s>max){
    max=s;
}
if (d>max){
    max=d;
}

printf("%d",max);


return 0;
}
