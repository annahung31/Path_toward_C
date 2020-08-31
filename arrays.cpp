#include <stdio.h>
#define SIZE 5

int main(){
    int i;
    int inputs[SIZE];

    for (i=0; i<SIZE; i++){
        scanf("%d", &inputs[i]);
    }

    for (i=0; i<SIZE; i++){
        printf("%d\n", inputs[i]);
    }

}