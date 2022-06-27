#include <stdio.h>
int main()
{
    int B, N;
    while (scanf("%d %d", &B, &N) != EOF)
    {
        if (B == 0 && N == 0)
            return 0;
        int Total[B + 1], Devedor = 0, Credor = 0, Valor = 0;
        for (int B1 = 0; B1 < B; B1++)
            scanf("%d", &Total[B1]);
        for (int N1 = 0; N1 < N; N1++)
        {
            scanf("%d %d %d", &Devedor, &Credor, &Valor);
            Total[Devedor] -= Valor;
            Total[Credor] += Valor;
        }
        if (Total[1] < 0 || Total[2] < 0 || Total[3] < 0)
            printf("N\n");
        else
            printf("S\n");
    }
}