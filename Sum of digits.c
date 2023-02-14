#include <stdio.h>
int main(){
int a,sum=0,i;
printf("Enter the tale of num to print: ");
scanf("%d",&a);

/*while(a>0){
sum+=a%10;
a/=10;
}

*/


for (;a>0;a/=10){
sum+=a%10;
}
printf("%d",sum);

return 0;
}
