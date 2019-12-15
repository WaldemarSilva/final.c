    int vet[50],vet2[50],vet3[50];
    int k = 0, k2 = 0, k3 = 0, y = 0;
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            vet[k] = m[i][j];
            k++;
        }

    }
    for (int i = 0; i < l1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            vet2[k2] = m2[i][j];
            k2++;
        }
    }

    //CHECAGEM DE QUAL O MAIOR VETOR PARA USAR NO FOR

    if (k >= k2)
    {
        k3 = k;
    }
    else
    {
        k3 = k2;
    }

    //CHECANDO A INTERSECCAO

    for (int i = 0; i < k3; i++)
    {
        for (int j = 0; j < k3; j++)
        {
            if (vet[i] == vet2[j])
            {
                vet3[y] = vet[i];
                y++;
            }
        }
    }

    //TIRANDO OS NUMEROS IGUAIS

    for (int i = 0; i < y; ++i)
    {
        for (int j = i+1; j < y; ++j)
        {
            if (vet3[i] == vet3[j])
            {
                for (int m = j; m < y - 1; ++m)
                {
                    vet3[m] = vet3[m+1];
                }
                y = y-1;
            }
        }
    }
    printf("====================================================================\n");
    printf("\n RESULTADO DA INTERSECCAO DAS DUAS MATRIZES : \n\n");
    printf("====================================================================\n");
    for (int i = 0; i < y; i++)
    {
        printf("%d ", vet3[i]);
    }
    printf("\n");
    getch();
