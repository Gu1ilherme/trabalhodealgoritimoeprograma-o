#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    Usuário GitHub: dududarochadev
    O código abaixo implementa uma calculadora, na qual o usuário escolhe a operação desejada e os operandos.
    O mesmo foi desenvolvido em sua totalidade pelo aluno Eduardo Lopes da Rocha (202212162), com base nos conhecimentos adquiridos durante a carreira de desenvolvedor.
    É exibida uma mensagem pedindo para o usuário selecionar uma das opções de operações. (linha 30)
    Caso o usuário digite um valor inválido às operações, uma mensagem de erro é exibida e o mesmo deve digitar novamente. (linha 32)
    Caso o usuário selecione potenciação, a mensagem exibida para selecionar os operandos muda, solicitando a seleção da base e do expoente da potenciação. (linha 34)
    Caso o usuário selecione raiz quadrada, é solicitado apenas um valor de operando. (linha 41)
    Caso o usuário selecione divisão e tente dividir um valor por 0, uma mensagem de erro é exibida e o mesmo deve selecionar novamente os operandos. (linha 55)
    Os valores são calculados e o resultado é exibido ao usuário. (linha 85)
    Ao fim, o usuário seleciona se deseja continuar operando ou se deseja finalizar a execução de código utilizando uma variável de controle do tipo "char". (linha 87)
    */

    int operacao;
    float n1, n2, resultado;
    char controle;

    printf("Eduardo Lopes da Rocha\nUniversidade LaSalle\nAnálise e desenvolvimento de sistemas\nMatrícula 202212162\n\n");
    printf("Calculadora em C:\n");

    do{
        do
        {
            printf("\nSelecione a operação que deseja fazer:\n");
            printf("1. Adição\n2. Subtração\n3. Divisão\n4. Multiplicação\n5. Raiz quadrada\n6. Potência\n\n");
            scanf("%d", &operacao);

            if(operacao > 6 || operacao < 1)
            {
                printf("\nValor inválido, digite um valor válido.\n\n");
            }
        } while(operacao > 6 || operacao < 1);

        if (operacao == 6)
        {
            printf("\nDigite a base da potenciação: ");
            scanf("%f", &n1);
            printf("\nDigite o expoente da potenciação ");
            scanf("%f", &n2);
        }
        else if (operacao == 5)
        {
            printf("\nDigite o valor a ser usado na raiz quadrada: ");
            scanf("%f", &n1);
        }
        else
        {
            do
            {
                printf("\nEscolha o primeiro valor para a operação: ");
                scanf("%f", &n1);
                printf("\nEscolha o segundo valor para a operação: ");
                scanf("%f", &n2);

                if (operacao == 3 && n2 == 0)
                {
                    printf("\nNão é possível dividir nenhum valor por 0, tente novamente.\n");
                }
            } while(operacao == 3 && n2 == 0);
        }

        switch(operacao)
        {
            case 1:
                resultado = n1+n2;
                break;
            case 2:
                resultado = n1-n2;
                break;
            case 3:
                resultado = n1/n2;
                break;
            case 4:
                resultado = n1*n2;
                break;
            case 5:
                resultado = sqrt(n1);
                break;
            case 6:
                resultado = pow(n1, n2);
                break;
        }

        printf("\nO resultado da operação é: %.02f \n\n", resultado);

        printf("Pressione 0 para sair ou qualquer tecla para reiniciar: \n\n");
        scanf(" %c", &controle);
    } while(controle != '0');
}
