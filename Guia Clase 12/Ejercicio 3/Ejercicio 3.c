  #include <stdlib.h>
  #include <stdio.h>

  int porcentajeHom();//Faltan partes del ejercicio.
  int porcentajeMuj();
  int hom, muj, total;

  int porcentajeHom()
  {
      int porcenHom;
      printf("Ingrese la cantidad de hombres que enviaron su curriculum\n");
      scanf("%d", &hom);
      total = hom + muj;
      porcenHom = hom*100/(total);
      return
  }
  int porcentajeMuj()
  {
      int porcenMuj;
      printf("Ingrese la cantidad de mujeres que enviaron su curriculum\n");
      scanf("%d", muj);
      porcenMuj = hom*100/(total);
      return porcenMuj;
  }
