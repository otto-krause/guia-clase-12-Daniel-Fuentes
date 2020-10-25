    #include <stdlib.h>
    #include <stdio.h>

int presionCalculo(int fuer, int super)
{
    int presion;
    presion = fuer/super;
    return presion;
}

void main()
{
    int s, f;
     printf("Ingrese la superficie ");
     scanf("%d", &s);
     printf("Ingrese la fuerza ");
     scanf("%d", &f);
     printf("La presi%cn de la superficie ingresada es %d", 162, presionCalculo(f, s));
}

