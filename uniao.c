void uniMatriz()// FUNÇÃO DE UNIÃO DE MATRIZES
{
    int vet[50],cont=0;
    memset(vet,'\0',50);
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
    printf("====================================================================\nUNIÃO DAS MATRIZES\n====================================================================\n");
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            int rep = 0;
            for (int k = 0; k<cont&&rep==0; k++)
            {

                if (m[i][j]==vet[k])
                {
                    rep = 1;
                }
            }
            if (rep==0)
            {
                vet[cont] = m[i][j];
                cont++;
            }
        }
    }

    for (int i = 0; i < l1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            int rep = 0;
            for (int k = 0; k<cont&&rep==0; k++)
            {

                if (m2[i][j]==vet[k])
                {
                    rep = 1;
                }
            }
            if (rep==0)
            {
                vet[cont] = m2[i][j];
                cont++;
            }
        }
    }

    for (int k = 0; k<cont; k++)
    {
        printf("%d ",vet[k]);
    }
    printf("\n");
    getch();
    menup2();
}
