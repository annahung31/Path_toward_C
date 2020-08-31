#include <stdio.h>


int main(){
    int data[5] = {34, 12,5,66,1};
    int temp;
    int i,j;

    for (j=5; j>1; j--){
        for (i=0;i<j-1;i++){
            if (data[i] > data[i+1]){
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
    for (int k=0; k < 5; k++){
        printf("%d ", data[k]);
    }
    printf("\n");

    return 0;

}