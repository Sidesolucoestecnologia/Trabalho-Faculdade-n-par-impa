#include <stdio.h> 

  

int main() { 

    //Criando variável com número inteiro 

    int num1, num2; 

    //Criando variável para contar a quantidade de números pares, inicializada com valor 0 

    int valor_p = 0; 

  

 // Exibindo mensagem na tela para o usuário digitar o primeiro número 

    printf("Digite o primeiro número: "); 

//Obtendo o valor do primeiro número inteiro fornecido pelo usuário 

    scanf("%d", &num1); 

// Exibindo mensagem na tela para o usuário digitar o segundo número 

    printf("Digite o segundo número: "); 

//Obtendo o valor do segundo número inteiro fornecido pelo usuário 

    scanf("%d", &num2); 

  

    // Verificando se os intervalos e validos. 

    // if para verificar se o num1 e maior que num2 exibir imagem 

    if (num1 > num2) { 

//Se o primeiro número for maior que o segundo, o programa exibe uma mensagem e termina 

        printf("O primeiro número deve menor que o segundo.\n"); 

        return 0; // encerra o programa 

    } 

  

    // Loop para contar os números pares entre o intervalo 

    for (int num = num1; num <= num2; num++) { 

        if (num % 2 == 0) { 

            valor_p++; //Incrementa o contador de números pares 

        } 

    } 

  

    // Exibe mensagem para usuário o total de números pares 

    printf("Total de números pares entre: %d e %d são  %d\n pares", num1, num2, valor_p); 

  

    return 0; 

} 

 