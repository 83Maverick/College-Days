 /**
 * C program to calculate gross salary of an employee
 */

#include <stdio.h>

int main()
{
    float basic, gross, da, hra ,ma, deduction, pf , it, pt, netsalary;

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);

    /* Calculate D.A, H.R.A and M.A. according to specified conditions */
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
        ma  = basic * 0.1;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
        ma  = basic * 1.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
        ma  = basic * 0.2;
    }
    pt = (basic*12)/20;
	
	  pf = (basic*14)/20;
	
	  it = (basic*15)/20;
    /* Calculate gross salary */
    gross = basic + hra + da + ma;
    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
    /* Calculate deduction*/
    deduction=gross-pf-pt-it;
    printf("DEDUCTED SALARY OF EMPLOYEE = %.2f", deduction);
    /* Calculate net salary*/
    netsalary=gross-deduction;
    printf("NET SALARY OF EMPLOYEE = %.2f", netsalary);
  
    return 0;
}
