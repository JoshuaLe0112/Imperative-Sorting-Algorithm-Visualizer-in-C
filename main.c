#include<stdio.h>
#include<stdlib.h>

void inputOption(char option[], char input[]);

int main (int argc, char **argv){

    char option[100];
    char input[100];
   
    inputOption(option,input);

    return 0;
}

//Program Input
void inputOption(char option[], char input[]){

    printf("Enter bubble, selection, or insertion: ");    
    scanf("%s",option);
    printf("Enter the characters to be sorted: ");
    scanf("%s",input);

    printf("Check the option: %s",option);
    printf("\nCheck the sort option: %s\n",input);
    

}