#include <stdio.h>  
#include <string.h>  

int main() {  
    char inputString[100];  
    char reverseString[100];  
    char *ptrInput = inputString;  
    char *ptrReverse = reverseString;  
    int length, i;  

    printf("Nhap vao mot chuoi: ");  
    fgets(ptrInput, sizeof(inputString), stdin);  
    length = strlen(ptrInput) - 1;  

    for (i = 0; i < length; i++) {  
        ptrReverse[i] = ptrInput[length - 1 - i];  
    }  
    ptrReverse[length] = '\0';  

    printf("Chuoi nhap vao: %s", ptrInput);  
    printf("Chuoi dao nguoc: %s", ptrReverse);  

    return 0;  
}
