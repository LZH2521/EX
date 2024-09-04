#include <stdio.h>
int main()
{   
    int foot;
    int inch;
    printf("please give me your foot and inch");
    scanf("%d %d",&foot,&inch);
   
    printf("%f meters\n",((foot+inch/12.0)*0.3048));
    return 0;

}