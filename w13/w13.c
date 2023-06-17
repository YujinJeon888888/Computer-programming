//숙제
//다음 코드에서 income과 tax를 
//크기가 MAX인 incomes와 taxes 배열로 
//변경하려고 합니다. 
#define _CRT_SECURE_NO_WARNINGS
#define MAX 5
#include <stdio.h>


int main()

{
    int incomes[MAX] = { 1000,5000,10000,40000,70000 };
    int taxes [MAX];
    double rate = 0.0;
    
    for (int i=0;i<MAX;++i)
    { 
        
        if (incomes[i] <= 1200)

            rate = 0.6;

        else if (incomes[i] <= 4600)

            rate = 0.15;

        else if (incomes[i] <= 8800)

            rate = 0.24;

        else if (incomes[i] <= 15000)

            rate = 0.35;

        else if (incomes[i] <= 30000)

            rate = 0.38;

        else if (incomes[i] <= 50000)

            rate = 0.40;

        else

            rate = 0.42;

        taxes[i] = (int)(incomes[i] * rate);
        printf("incomes[%d]: %d, taxes[%d]: %d ten thousands won\n", i, incomes[i], i, taxes[i]);

        
}
    return 0;

}

