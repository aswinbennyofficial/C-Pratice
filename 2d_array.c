#include <stdio.h>
void main(){
int n=3,m=4;
//int arr[n][m];
int i,j,count=1;

int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};




for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    printf("%d \t",arr[i][j]);
    }
    printf("\n");
}

}

