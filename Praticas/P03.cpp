/*MDC= MULTIPLO DIVISOR CCOMUM, esse codigo ira calcular os dois divisores de 
'a' e 'b' e retornara o multiplo de ambos*/

#include<stdio.h>
#include<stdlib.h>

int mdc(int a, int b){
    if( a == b){ /*quando a e b tem o mesmo valor*/
        return a;
    }
    if( a > b){
        return mdc( a - b, b ); /*quando 'a' for maior que 'b'*/
    }
    else{
        return mdc( a, b - a);   /*quando 'b' for maior que 'a'*/
    }
}

int main(void){

    printf("%d", mdc(20,16));
    
    return 0;
}