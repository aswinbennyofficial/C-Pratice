#include<stdio.h>
int main(){
int count=0,i,j,div=0;

    for (i=2;i<=100;i++){
        if(count<10){
            div=0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                div++;
                }
            }
            if (div<=2){
            printf("%d\n",i);
            count++;
                }
            }
        else{
            break;
        }
    }

}


/* 


#include<stdio.h>
int main(){
int count=0,i,j;char is_prime='T';

    for (i=2;i<=100;i++){
        if(count<10){
            is_prime='T';
            for(j=2;j<i;j++){
                if(i%j==0){
                    is_prime='F';
                    break;
                
                }
            }
            if (is_prime=='T'){
            printf("%d\n",i);
            count++;
                }
            }
        else{
            break;
        }
    }

}


*/


/* 

#include<stdio.h>
int main(){
int count=0,i=2,j;char is_prime='T';

    
        while(count<10){
            is_prime='T';
            for(j=2;j<i;j++){
                if(i%j==0){
                    is_prime='F';
                    break;
                }
            }
            if (is_prime=='T'){
            printf("%d\n",i);
            count++;
                }
                i++;
            }

}


*/
