#include <stdio.h>

float math(int fNum, int sNum, char op){
    float result = 0; 
    switch (op)
    {
    case '+':{
        result = fNum + sNum;   
        break;
    }
    case '-':{
        result = fNum - sNum;
        break;
    }
    case '/':{
        if (sNum != 0 ){
            result = (float)fNum / sNum;
        }
        else{
            printf("\nSorry, you can't divide by 0\n");
            result = 0;   
        }
        break;
    } 
    case '*':{ 
        result = fNum * sNum;
        break;
    } 
    default:{
        printf("Sorry, we don't support this operation :(\n");        
        break;
        }
    }
    return result;
}

void start(){
    int state = 1;
    while (state)
    {
        printf("\nHello!\n");
        printf("Welcome to CLI Calculator\n");
        printf("Choose what do you want to do: \n");
        printf("1. Use a calculator\n");
        printf("2. EXIT\n");
        int choice;
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1: {
            int firstNumber, secondNumber;
            char operator;
            printf("Enter your first number:\n ");
            scanf("%d", &firstNumber);

            printf("\nEnter type of an operation (+, -, *, /):\n");
            scanf(" %c", &operator);

            printf("\nEnter your second number: \n");
            scanf("%d", &secondNumber);

            printf("\nThe result is:  %.2f", math(firstNumber,secondNumber,operator));
            break;
        }
        case 2: {
            printf("\nBye bye");
            state = 0;
            break;
        } 
        default: {
            printf("\nSorry can't help :(");
            break;
          }  }
    }
    
}

int main(){
    start();
    return 0;
}