#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int linhas,colunas, i, j, n, b, c, k=0;
    int mat1[linhas][colunas], mat2[linhas][colunas], mat3[linhas][colunas], vet1[i], vetinterseccao[i];

    setlocale(LC_ALL,"Portuguese");

    SetConsoleTitle("Trabalho final de IPC - Nathan Soares Mota");

    printf("======================================================= \n");
    printf("                         Bem vindo \n\n");
    printf("                     Nathan Soares Mota \n\n");
    printf("======================================================= \n\n");

    printf("Informe o que voce deseja:  \n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - União\n");
    printf("4 - Intersecção\n");
    printf("5 - Operação de Matriz Individual\n");
    printf("6 - Quantidade que o numero da matriz aparece\n");

    scanf("%d", &n);

    printf("Entre com o numero de linhas: ");
    scanf("%d",&linhas);
    printf("Entre com o numero de colunas: ");
    scanf("%d",&colunas);

    //verificação
    if(linhas > 5 || colunas > 5)
    {
        printf("Erro, o numero dessa matriz é superior a 5");
        return 0;
    }


    for (i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            printf(" Entre com os elementos da matriz 1 [%d][%d]:",i+1,j+1);
            scanf("%d", &mat1[i][j]);

            printf(" Entre com os elementos da matriz 2 [%d][%d]:",i+1,j+1);
            scanf("%d", &mat2[i][j]);

            if(n == 1)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
            else if(n == 2)
            {
                mat3[i][j] = mat1[i][j] - mat2[i][j];
            }


        }
    }

    switch(n)
    {
    //soma
    case 1:
        system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat1[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat2[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 3 (soma) criada*/
        printf("\n\nA matriz soma é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat3[i][j]);
            printf("\n\n");
        }

        break;

    //subtração
    case 2:
        system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat1[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat2[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 3 (subtração) criada*/
        printf("\n\nA matriz subtração é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat3[i][j]);
            printf("\n\n");
        }

        break;

    //União
    case 3:
        system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat1[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat2[i][j]);
            printf("\n\n");
        }

        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
            {
                vet1[k] = mat1[i][j] && mat2[i][j];
                k++;
            }
        }

        printf("\n\nA união é: \n\n");
        for(i=0; i<k; i++)
        {
            printf("%d", vet1[k]);
        }

        printf("\n\n");


        break;

    //Intersecção
    case 4:
        system("cls");
        printf("\n\nA matriz 1 criada é: \n\n");
        /*Mostra a matriz 1 criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat1[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 2 criada*/
        printf("\n\nA matriz 2 criada é: \n\n");
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                printf("%3.d\t",mat2[i][j]);
            printf("\n\n");
        }

        /*Mostra a matriz 3 (intersecção) criada*/
        for (i=0; i<linhas; i++)
        {
            for(j=0; j<colunas; j++)
                if (mat1[i][j] == mat2[i][j])
                {
                    printf("%d\t",vet1[i]);
                    printf("\n\n");
                }
                else
                {
                    printf("A matriz não possui intersecção \n\n");
                    printf("Ou seja, não há números em comuns nas matrizes");
                    printf("\n\n");
                    break;
                }
        }
        printf("\n\nA intersecção é: \n\n");
        for(;;)
        {
            if(vet1[i])
            {
                vetinterseccao[k] = vet1[i];
                k++;
            }
            printf("%d\t",vet1[i]);
        }


        break;

    //Operação de Matriz Individual
    case 5:
        printf("1 - Somar um número a matriz");
        printf("2 - Multiplicar pela matriz");
        printf("3 - Voltar ao menu anterior");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Você deseja adicionar um número a matriz 1 ou a matriz 2?");
            scanf("%d", &c);
            if(c == 1)
            {
                system("cls");
                printf("\n\nA matriz 1 criada é: \n\n");
                /*Mostra a matriz 1 criada*/
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                        printf("%3.d\t",mat1[i][j]);
                    printf("\n\n");
                }

            }

            else if(c == 2)
            {
                system("cls");
                /*Mostra a matriz 2 criada*/
                printf("\n\nA matriz 2 criada é: \n\n");
                for (i=0; i<linhas; i++)
                {
                    for(j=0; j<colunas; j++)
                        printf("%3.d\t",mat2[i][j]);
                    printf("\n\n");
                }

            }

            else
            {
                printf("Erro, valor incorreto");
                return 0;
            }
        }

        if(b == 2)
        {

        }

        if (b == 3)
        {
            break;
        }

        break;

    //Quantidade que o numero da matriz aparece
    case 6:

        break;

    default:
        printf("Erro\n");

    }

    system("pause>null");

    return 0;
}
