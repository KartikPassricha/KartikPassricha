#include <stdio.h>

int main()
{
    int startinput;
    printf("Hello everyone, Welcome to the numbergame\n Press 1 to exit \n Press 2 to play \n Press 3 for timepass\n");
    scanf("%d",&startinput);
    if (startinput==1){
      return 0;
    }
    else if (startinput==3)
       {
      printf("PISS OFF");
      return 0;
    }
    else if (startinput==2){
      float num1;
      float num2;
      float num3;
      printf("Enter number 1 please");
      scanf("%f",&num1);
      printf("Enter number 2 please");
      scanf("%f",&num2);
      printf("Enter number 3 please");
      scanf("%f",&num3);
      int choice;
      printf("What u wanna do with numbers \n Press 1 to add \n Press 2 to subtract \n Press 3 to Multiply \n Press 4 to Divide \n Press 5 for exit \n");
      scanf("%d",&choice);
      if (choice==1)
      {
        printf("The sum is %f",num1+num2+num3);
      }
      else if (choice==2)
      {
        printf("The difference is %f",num1-num2-num3);
      }
      else if (choice==3)
      {
        printf("The difference is %f",num1*num2*num3);
      }
      else if (choice==4)
      {
        printf("The difference is %f",num1/num2/num3);
      }
      else if (choice==5)
      {
        printf("Meet U next time");
        return 0;
      }
      else
      {
        printf("Enter the valid number");
      }
    
    }

    else {
      printf("Specify the correct number");
      return 0;
    }     
    return 0; 
}