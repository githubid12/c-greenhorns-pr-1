#include<stdio.h>
#include<conio.h>

int main(void){

float bs,hra,da,ta,gs;


      printf("Find gross sallry by adding %of HRA,DA,and TA of use choice..\n\n");

      printf("Enter Your Basic Salary:");
      scanf("%f",&bs);

      hra=bs*0.1;
      da=bs*0.05;
      ta=bs*0.08;
      gs=(bs+hra+da+ta);
      printf("The gross salaty is Rs %0.2f",gs);



}
