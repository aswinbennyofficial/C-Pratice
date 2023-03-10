#include<stdio.h>

int sum(int n){

if(n==0){
return 0;
}

return n+sum(n-2);
}

void main(){
int n;
scanf("%d",&n);

if (n%2!=0){
n=n-1;
}

printf("%d",sum(n));
}
