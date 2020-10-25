  #include <stdlib.h>
  #include <stdio.h>
  int b=0, h=0;
  int perimetro();
  int area();

  int perimetro()
  {
      int peri;
      printf("Ingrese la base y la altura del rectangulo\n");
      scanf("%d %d", &b, &h);
      peri = 2*b + 2*h;
      return peri;
  }

  int area()
  {
      int calculoArea;
      calculoArea = b + h;
      return calculoArea;
  }

  int main()
  {
      int periMetro, areafin;
      periMetro = perimetro();
      areafin = area();
      system("cls");
      printf("El perimetro del rectangulo es %d y el area es %d", periMetro, areafin);
      return 0;
  }
