#include<stdio.h>

int main()
{
  float basicsalary,grosssalary,HRA,TA,PT,netsalary;
  printf("Enter basic salary: ");
  scanf("%f",&basicsalary);
  printf("basic salary is %f\n",basicsalary);
  
  HRA=basicsalary*0.10;
  TA=basicsalary*0.05;
  grosssalary=HRA+TA+basicsalary;
  PT=grosssalary*0.02;
  netsalary=grosssalary-PT;
  
  printf("HRA is %f\n",HRA);
  printf("TA is %f\n",TA);
  printf("Gross salary is %f\n",grosssalary);
  printf("Payable tax is %f\n",PT);
  printf("Net salary after deduction of payable tax is %f\n",netsalary);
  return 0;
}
