#include <stdio.h>
int main(){
int a,rev=0,rm;
printf("Enter the tale of num to print: ");
scanf("%d",&a);

while(a>0){
rm=a%10;
rev=rev*10+rm;
a/=10;
}

/*
for(;a>0;a/=10){
rev=rev*10+a%10;
}

*/



printf("%d",rev);

return 0;
}
