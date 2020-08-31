#include<stdio.h>

int main()
{
    int i, j, ans;
    for (i =1; i <10; i++){
        for (j =1; j <10; j++){
            ans = i * j;
            if (j == 9){
                printf("%d*%d=%2d\n", j, i, ans);
            }
            else{
                printf("%d*%d=%2d ", j, i, ans);
            }
        }
    }

    return 0;
}
