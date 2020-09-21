#include <stdio.h>

int main()
{
    float per ;
    printf("Enter your percentage:");
    scanf("%f",&per);
    if (per>80)
        printf("A grade!");
    else if (per>=70&&per<80)
        printf("B grade!");
    else if (per>=60&&per<70)
        printf("C grade!");
    else if (per>=45&&per<60)
        printf("D grade!");
    else if(per<45)
        printf("FAIL!");

    return 0;
}
