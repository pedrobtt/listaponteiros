/* 2. Mostre o que será impresso pelo programa supondo que a variável i ocupa o endereço 4094 na 
memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho */

#include <stdio.h>

int main(){
    int i=5, *p;
    p = &i; // Supondo que i possui 4094 como endereço
    
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
    
    printf("p = %d bytes\n", sizeof(p));
    printf("p+1 = %d bytes\n", sizeof(p+1));
    printf("*p+2 = %d bytes\n", sizeof(*p+2));
    printf("**&p = %d bytes\n", sizeof(**&p));
    printf("3**p = %d bytes\n", sizeof(3**p));
    printf("**&p+4 = %d bytes\n", sizeof(**&p+4));
    
    // p : Retorna o endereço de i
    // p + 1 : Retorna o endereço de i + 1
    // *p + 2 : Retorna o conteúdo de i + 2    
    // **&p : Retorna para o conteúdo de i novamente
    // 3**p : Retorna o conteúde de i * 5
    // **&p+4 : Retorna para o conteúdo de i novamente + 4
    
    return 0;
}
