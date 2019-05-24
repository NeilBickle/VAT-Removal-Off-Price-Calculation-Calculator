/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

double main()
{
    double a, b;
    printf("\nWelcome To The Vat Removal Calculator, This Calculator Calculates The Price Of A Product Without VAT, To Start Enter The Gross Amount Including Vat Then enter The Current VAT Rate In Your Country With A 1 In Front Of It, For Example In The UK The Rate Is 20 Percent So You Would Write 1.20");
    printf("\nEnter the the gross amount Than, Enter The Vat Percentage with a 1 at the start, so if the vat percentage is 20 percent the number to enter would be 1.20");
    scanf("%lg %lg", &a, &b);
    double ans;

    
    
        ans = a/b;
        
        
        
    
    printf("\n The Answer Is :%lg", ans);
    return 0;
}
