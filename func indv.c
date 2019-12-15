void menup3()//MENU TERCIARIO ( SOMA / SUB )
{
    int opcao1=0;
    int opcao2=0;
    int x;

    while (TRUE)
    {
        system("cls");
        printf("Primeira Matriz:\n");
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("[%d] ",m[i][j]);
            }
            printf("\n");
        }
        printf("Segunda Matriz:\n");
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("[%d] ",m2[i][j]);
            }
            printf("\n");
        }
        printf("Escolha uma matriz:\n[1] Matriz 1\n[2] Matriz 2\n[3] Voltar ao Menu Anterior\n");
        scanf("%d",&opcao1);
        if (opcao1 == 1)
        {
            printf("MATRIZ 1 SELECIONADA\n");
            printf("====================================================================\n");
        }
        if (opcao1 == 2)
        {
            printf("MATRIZ 2 SELECIONADA\n");
            printf("====================================================================\n");
        }
        if (opcao1 == 3)
        {
            menup2();
        }
        printf("[1] SOMA [2] MULTIPLICAÇÃO\n");
        scanf("%d",&opcao2);
        printf("====================================================================\n");
        printf("por: ");
        scanf("%d",&x);
        printf("====================================================================\n");
        if (opcao1 == 1)// MATRIZ 1 SELECT
        {
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (opcao2 == 1) // REALIZA SOMA
                    {
                        sm[i][j] = m[i][j]+ x;
                    }
                    else // REALIZA MULTIPLICAÇÃO
                    {
                        sm[i][j] = m[i][j]* x;
                    }
                }
            }
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",sm[i][j]);
                }
                printf("\n");
            }
            getch();
        }
        else if (opcao1 == 2) // MATRIZ 2 SELECT
        {
            for (int i = 0; i < l1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    if (opcao2 == 1)
                    {
                        sm[i][j] = m2[i][j]+ x; // SOMA
                    }
                    else
                    {
                        sm[i][j] = m2[i][j]* x;// MULT
                    }
                }
            }
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",sm[i][j]);
                }
                printf("\n");
            }
            getch();
        }
        else
        {
            printf("Opção Inválida\n");
            getch();
        }
    }
    menup2();
}
