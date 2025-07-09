#include <stdio.h>
#include <string.h>

int main(){
    char text[50];
    FILE *fptr; 
    char filename[100];
    printf("Enter the file that you want to edit: ");
    scanf("%s", filename);
    printf("\n");
    fptr = fopen(filename, "w");
    int textSize = 1;   
    
    while(1){
        printf("%d    ", textSize);
        if (fgets(text, sizeof(text), stdin) == NULL) {
            break;
        }        
        char newText[51];
        strncpy(newText, text, 50);
        newText[50] = '\0'; 

        fprintf(fptr, newText);
        if(text == NULL){
            break;
        }

        textSize += 1; 
    }
    fclose(fptr);
    printf("You are done!");
}

                                                                                    