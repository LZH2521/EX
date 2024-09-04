#include <stdio.h>
int main()
{   
    double foot;
    double inch;
    printf("please give me your foot and inch");
    scanf("%lf %lf",&foot,&inch);
   
    printf("%f meters\n",((foot+inch/12)*0.3048));
    return 0;

}