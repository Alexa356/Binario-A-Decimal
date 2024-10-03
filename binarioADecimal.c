#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char num[100];
    int res=0;
    bool right;
    do{
        right = true;
        printf("Ingresa un número binario\n");
        scanf("%s", num);
        printf("Tu número es: %s\n", num);
        for( int i =0 ;i < strlen(num);i++){
            if(num[i]!='0' && num[i]!='1'){
                right =false; 
            }
        }
    }while(!right);
    char num2[2];
    num2[1] = '\0';
    for(int j =strlen(num)-1, exp=0; j>-1; j--, exp++){
        num2[0]= num[j];
        res += atoi(num2)*pow(2, exp);
    }
    printf("El número decimal de %s es %d\n", num, res);
    
    return 0;
}
