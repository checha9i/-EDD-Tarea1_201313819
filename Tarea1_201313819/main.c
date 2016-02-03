#include <stdio.h>
/*
USAC
Facultad de Ingenieria
Cesar Javier Solares Orozco
201313819
*/
int main()
{
            int Menu1,Menu2,x,y,z,w,t,p,v,tamanot,tamanop,tamanov,tamanox,tamanoy,tamanoz,tamanow,tamtot,postot;


printf("Mapeo LexicoGrafico. \n 1.Calcular \n 2.Salir \n");
            scanf("%d",&Menu2);



            while(Menu2!=2){

 printf("Ingrese el numero de dimensiones \n");
//escaneamos las dimensiones
scanf("%d",&Menu1);
if(Menu1==1){
    printf("UNIDIMENSIONAL. \n ");
           printf("INGRESE TAMANO DEL ARREGLO \n ");
           scanf("%d",&tamanox);
           printf("INGRESE POSICION \n ");
            scanf("%d",&x);
           printf("POSICION: %d \n",x);

}
else if(Menu1==2){printf("BIDIMENSIONAL. \n ");
    printf("TAMANO DE X: \n ");
           scanf("%d",&tamanox);

           printf("TAMANO DE Y: \n ");
           scanf("%d",&tamanoy);

           tamtot=tamanox *tamanoy;

           printf("POSICION EN X \n ");
           scanf("%d",&x);
           printf("POSICION EN Y \n ");
           scanf("%d",&y);

           postot= ((x)+(tamanoy)*(y-1)-1);

           printf("TAMANO TOTAL DEL ARREGLO: %d \n", tamtot);
           printf("POSICION: %d \n", postot);



}
else if(Menu1==3){printf("MULTIDIMENSIONAL. \n ");
    printf("%d dimensiones \n ",Menu1);
    printf("TAMANO DE X: \n ");
           scanf("%d",&tamanox);

           printf("TAMANO DE Y: \n ");
           scanf("%d",&tamanoy);
           printf("TAMANO DE Z: \n ");
           scanf("%d",&tamanoz);

           tamtot=tamanox *tamanoy*tamanoz;

           printf("POSICION EN X \n ");
           scanf("%d",&x);
           printf("POSICION EN Y \n ");
           scanf("%d",&y);

           printf("POSICION EN Z \n ");
           scanf("%d",&z);
           postot= ((x)+(tamanoy)*(y-1))+(tamanox)*(tamanoy)*(z - 1);
           printf("TAMANO TOTAL DEL ARREGLO: %d \n", tamtot);
           printf("POSICION: %d \n", postot);

}
else if(Menu1==4){printf("MULTIDIMENSIONAL. \n ");
    printf("%d dimensiones \n ",Menu1);
    printf("TAMANO DE X: \n ");
           scanf("%d",&tamanox);

           printf("TAMANO DE Y: \n ");
           scanf("%d",&tamanoy);
           printf("TAMANO DE Z: \n ");
           scanf("%d",&tamanoz);
           printf("TAMANO DE W: \n ");
           scanf("%d",&tamanow);
           tamtot=tamanox *tamanoy*tamanoz*tamanow;

           printf("POSICION EN X \n ");
           scanf("%d",&x);
           printf("POSICION EN Y \n ");
           scanf("%d",&y);

           printf("POSICION EN Z \n ");
           scanf("%d",&z);
           printf("POSICION EN W \n ");
           scanf("%d",&w);
           postot= ((x)+(tamanoy)*(y-1))+(tamanox)*(tamanoy)*(z - 1)+(tamanox)*(tamanoy)*(tamanoz)*(w - 1);
           printf("TAMANO TOTAL DEL ARREGLO: %d \n", tamtot);
           printf("POSICION: %d \n", postot);


}
else if(Menu1==5){printf("MULTIDIMENSIONAL. \n ");
    printf("%d dimensiones \n ",Menu1);
    printf("TAMANO DE X: \n ");
           scanf("%d",&tamanox);

           printf("TAMANO DE Y: \n ");
           scanf("%d",&tamanoy);
           printf("TAMANO DE Z: \n ");
           scanf("%d",&tamanoz);
           printf("TAMANO DE W: \n ");
           scanf("%d",&tamanow);
           printf("TAMANO DE T: \n ");
           scanf("%d",&tamanot);

           tamtot=tamanox *tamanoy*tamanoz*tamanow*tamanot;


           printf("POSICION EN X \n ");
           scanf("%d",&x);
           printf("POSICION EN Y \n ");
           scanf("%d",&y);

           printf("POSICION EN Z \n ");
           scanf("%d",&z);
           printf("POSICION EN W \n ");
           scanf("%d",&w);
           printf("POSICION EN T \n ");
           scanf("%d",&t);
           postot= ((x)+(tamanoy)*(y-1))+(tamanox)*(tamanoy)*(z - 1)+(tamanox)*(tamanoy)*(tamanoz)*(w - 1)+(tamanox)*(tamanoy)*(tamanoz)*(tamanow)*(t - 1);
           printf("TAMANO TOTAL DEL ARREGLO: %d \n", tamtot);
           printf("POSICION: %d \n", postot);

}
else if(Menu1==6){printf("MULTIDIMENSIONAL. \n ");
    printf("%d dimensiones \n ",Menu1);
    printf("TAMANO DE X: \n ");
           scanf("%d",&tamanox);

           printf("TAMANO DE Y: \n ");
           scanf("%d",&tamanoy);
           printf("TAMANO DE Z: \n ");
           scanf("%d",&tamanoz);
           printf("TAMANO DE W: \n ");
           scanf("%d",&tamanow);
           printf("TAMANO DE T: \n ");
           scanf("%d",&tamanot);
           printf("TAMANO DE P: \n ");
           scanf("%d",&tamanop);

           tamtot=tamanox *tamanoy*tamanoz*tamanow*tamanot*tamanop;


           printf("POSICION EN X \n ");
           scanf("%d",&x);
           printf("POSICION EN Y \n ");
           scanf("%d",&y);

           printf("POSICION EN Z \n ");
           scanf("%d",&z);
           printf("POSICION EN W \n ");
           scanf("%d",&w);
           printf("POSICION EN T \n ");
           scanf("%d",&t);
           printf("POSICION EN P \n ");
           scanf("%d",&p);
           postot= ((x)+(tamanoy)*(y-1))+(tamanox)*(tamanoy)*(z - 1)+(tamanox)*(tamanoy)*(tamanoz)*(w - 1)+(tamanox)*(tamanoy)*(tamanoz)*(tamanow)*(t - 1)+(tamanox)*(tamanoy)*(tamanoz)*(tamanow)*(tamanot)*(p - 1);
           printf("TAMANO TOTAL DEL ARREGLO: %d \n", tamtot);
           printf("POSICION: %d \n", postot);

}
else if(Menu1==7){printf("MULTIDIMENSIONAL. \n ");
    printf("%d dimensiones \n ",Menu1);
    printf("TAMANO DE X: \n ");
           scanf("%d",&tamanox);

           printf("TAMANO DE Y: \n ");
           scanf("%d",&tamanoy);
           printf("TAMANO DE Z: \n ");
           scanf("%d",&tamanoz);
           printf("TAMANO DE W: \n ");
           scanf("%d",&tamanow);
           printf("TAMANO DE T: \n ");
           scanf("%d",&tamanot);
           printf("TAMANO DE P: \n ");
           scanf("%d",&tamanop);
           printf("TAMANO DE V: \n ");
           scanf("%d",&tamanov);

           tamtot=tamanox *tamanoy*tamanoz*tamanow*tamanot*tamanop*tamanov;


           printf("POSICION EN X \n ");
           scanf("%d",&x);
           printf("POSICION EN Y \n ");
           scanf("%d",&y);

           printf("POSICION EN Z \n ");
           scanf("%d",&z);
           printf("POSICION EN W \n ");
           scanf("%d",&w);
           printf("POSICION EN T \n ");
           scanf("%d",&t);
           printf("POSICION EN P \n ");
           scanf("%d",&p);
           printf("POSICION EN V \n ");
           scanf("%d",&v);
           postot= ((x)+(tamanoy)*(y-1))+(tamanox)*(tamanoy)*(z - 1)+(tamanox)*(tamanoy)*(tamanoz)*(w - 1)+(tamanox)*(tamanoy)*(tamanoz)*(tamanow)*(t - 1)+(tamanox)*(tamanoy)*(tamanoz)*(tamanow)*(tamanot)*(p - 1)+(tamanox)*(tamanoy)*(tamanoz)*(tamanow)*(tamanot)*(tamanop)*(v - 1);
           printf("TAMANO TOTAL DEL ARREGLO: %d \n", tamtot);
           printf("POSICION: %d \n", postot);

}
else if(Menu1>7){printf("MULTIDIMENSIONAL. \n ");
    printf("ERROR too many dimensions ... Adios (°.°)/ \n ");}
printf("Mapeo LexicoGrafico. \n 1.Calcular \n 2.Salir \n");
            scanf("%d",&Menu2);
            }
}
