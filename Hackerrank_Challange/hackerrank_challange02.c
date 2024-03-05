#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int first1=0;
    int first2=0;
    int sum;
    float sum2;
    float second1,second2;
    scanf("%d %d", &first1, &first2);
    scanf("%f %f", &second1,&second2);
    sum = first1 + first2;
    printf("%d ",sum);printf("%d\n",first1-first2);
    sum2 = second1 + second2;
    printf("%.1f ",sum2);printf("%.1f",second1-second2);
    return 0;
}
