#include<stdio.h>
void avg_pr();

int main() {
    float avg, per;
    avg_pr(&avg, &per);
    printf("Average = %.2f\n",avg);
    printf("Percentage = %.2f\n",per);

    return 0;

}

void avg_pr(float *avg, float *pr){
    int s1, s2, s3;
    printf("Enter the marks of three students : ");
    scanf("%d%d%d",&s1, &s2, &s3);
    *avg = (s1 + s2 + s3)/ 3.0;
    *pr = *avg;
}
