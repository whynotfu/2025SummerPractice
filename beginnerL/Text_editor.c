#include <stdio.h>


int main(){
    char text[50];
    FILE *fptr; 
    char filename[100];
    scanf(filename);  
    fptr = fopen(filename, "w");
    int textSize = 1;
    
    while(1){
        printf("%d    ", textSize);
        fgets(text, sizeof(text), stdin);
        if(text == NULL){
            break;
        }

        textSize += 1; 
    }
    printf("You are done!");
}

                                                                                    