#include<stdio.h>
    int main(){
        int s,e,i,j,isPrime=1;
        printf("Enter the starting number: ");
        scanf("%d",&s);
        printf("Enter the ending number: ");
        scanf("%d",&e);

        for (i=s;i<=e;i++){
            isPrime=1;
            for(j=2;j<=i/2;j++){
                if (i%j==0){
                    isPrime=0;
                    break;
                }
            }

            if(isPrime==1 && (i!=1 && i!=0) ){
                for(j=1;j<=10;j++){
                    printf("%d X %d = %d\n",i,j,j*i);
                }

                printf("\n");
            }

        }
    }
