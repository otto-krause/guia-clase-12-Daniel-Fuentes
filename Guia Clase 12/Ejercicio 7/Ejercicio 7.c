    #include <stdlib.h>
    #include <stdio.h>
    int NumMayor(int a, int b);

    void main()
    {
        int num, num2;
        printf("Ingrese dos numeros\n");
        scanf("%d %d", &num, &num2);

        if(num == num2)
        {
            printf("Ambos numeros son iguales");
        }
        else
        {
           printf("El numero mayor es %d", NumMayor(num, num2));
        }
    }

    int NumMayor(int a, int b)
    {
        int nMayor;
        if (a > b)
        {
            nMayor = a;
        }
        else
        {
            nMayor = b;
        }
        return nMayor;
    }

