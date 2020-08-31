#include<stdio.h>

int main()
{
    int score, degree;
    printf("Please enter your degree:");
    scanf("%d", &degree);
    printf("Please input your score.");
    scanf("%d", &score);


    if (score <=60 && degree ==1 ){
        printf("failed!\n");
    }
    else if(score <=70 && degree==2){
        printf("faild\n");
    }
    else{
        printf("Congrets!\n");
    }

    return 0;
}
