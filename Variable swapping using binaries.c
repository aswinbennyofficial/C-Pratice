#include <stdio.h>
void main() {
int a,s;
printf("enter number a:");
scanf("%d",&a);
printf("enter number s:");
scanf("%d",&s);

/* int temp;
temp=a;
a=s;
s=temp;
*/

a=a^s;
s=a^s;
a=a^s;


printf("value of a is %d \n",a);
printf("value of s is %d",s);
}
