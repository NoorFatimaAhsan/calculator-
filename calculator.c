 #include<stdio.h>
#include<conio.h>
int main(){
    int number1,number2,option;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&number1,&number2);
    printf("Press 1:addition \n Press 2:substraction \n Press 3:multiplication \nPress 4: division\n");
    scanf("%d",&option);

    switch(option)
    {case 1 :
    printf("addition of %d and %d: %d",number1,number2,number1+number2);
    break;
    case 2 :
    printf("subtraction of %d and %d: %d",number1,number2,number1-number2);
    break;
     case 3 :
    printf("multiplication of %d and %d : %d",number1,number2,number1*number2);
    break;
    case 4 :
    printf("division of %d and %d: %d",number1,number2,number1/number2);
    break;
    default :
    printf("Error");
   }
    getche();
    }