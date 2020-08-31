#include <stdio.h>
#define STUDENT 2
#define SUBJ 3

int main(){
    int scores[STUDENT][SUBJ];
    int i, j;
    double total;
    double total_avg;
    double max_avg=0.0;
    int max_avg_idx;
    double sum[STUDENT] = {0};
    double average[STUDENT] = {0};

    for (i=0; i<STUDENT;i++){
        for (j=0; j<SUBJ; j++){
            scanf("%d", &scores[i][j]);
            sum[i] += scores[i][j];
        }
        average[i] = sum[i]/SUBJ;
        total += sum[i];
        total_avg += average[i];
        if (average[i] > max_avg){
            max_avg = average[i];
            max_avg_idx = i;
        }
    }
    

    for (i=0; i<STUDENT;i++){
        printf("student %d\n", i+1);
        for (j=0; j<SUBJ; j++){
            printf("%d: %d\n",j+1, scores[i][j]);
        }
        printf("sum: %.f\n", sum[i]);
        printf("avg: %.2f\n", average[i]);
    }


    printf("total: %.f, avg: %.2f\n", total, total_avg/STUDENT);
    printf("highest avg: student %d: %.2f\n", max_avg_idx+1, max_avg);
    

    return 0;
}