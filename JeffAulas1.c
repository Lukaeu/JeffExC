#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int num, maiorNum, menorNum, soma;
    float cont;
  
  
    printf("insira um valor, se o valor for 0 o programa encerra:\n");
    scanf("%d", &num);
    
    maiorNum = num;
    menorNum = num;
     
    while(num != 0){
        soma += num;
        cont++;
        if(num > maiorNum)
            maiorNum = num;
        if(num < menorNum)
            menorNum = num;
        printf("insira outro valor, se o valor for 0 o programa encerra:\n");
        scanf("%d", &num);
        
    }
    
    float media = soma/cont;
        
    

    printf("O maior número digitado é: %d\n", maiorNum);         
    printf("O menor número digitado é: %d\n", menorNum);         
    printf("A média dos números digitados é: %.2f\n", media);

    return 0;
}