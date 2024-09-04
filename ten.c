#include <stdio.h>
int main()
{   
    int price=0;
    int amount=0;
    int change=0;
    printf("money");
    scanf("%d",&price);
    printf("give");
    scanf("%d",&amount);
     change=amount-price;
    if (change>=0)
    {
        printf("give you %d yuan\n",change);
        }
    //else if (change<0)
//{printf("your amount is not enough,please check it");}
    else {printf("your amount is not enough,please check it");}
    
    return  0;
}