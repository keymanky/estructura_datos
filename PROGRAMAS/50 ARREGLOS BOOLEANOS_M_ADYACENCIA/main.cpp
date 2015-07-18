#include <winbgim.h>
#include<stdio.h>
#include<stdlib.h>
#include"estruc_datos.h"
typedef struct                              //estructura. con coordenadas del vertice
{
        int x;
        int y;
}punto;

int main()
{
      Imprime_Encabezado("ARREGLOS BOOLEANOS");
      int i,j;
      float xaleat,yaleat;
      double **adyacencia;                  //creamos apuntador para matriz de adyacencia
      punto matriz_puntos[5];               //creamos matriz de estructura punto con 5 elementos o sea 5 puntos
      AsignarMem2d_d(&adyacencia,5, 5);     //creamos matriz de adyacencia. double porq ya tenemos funciones para una double. Esta matriz es de 5 vertices y es cuadrada
      
      //arreglo booleano
      for(i=0;i<5;i++)                      //una inicializacion de la matriz de adyacencia bastante sencilla, todo el primer renglon es 1, menos el i igual a j
          for(j=0;j<5;j++)
          {
                if(i==0 && j!=i)
                {
                        adyacencia[i][j]=1;
                } 
                else
                        adyacencia[i][j]=0;
                
                if(j==0 && i>0)
                        adyacencia[i][j]=1;
                       
          } 
            
      initwindow(400,400);                 //inicio modo grafico
      //srand(12);
      for(i=0;i<5;i++)                     //genera 5 numeros aleatorios y los guarda en el arreglo de estructuras, para las coordenadas de x y y
      {
          xaleat=rand(); 
          xaleat=(xaleat/32767)*300;
          matriz_puntos[i].x=(int)xaleat;
          
          yaleat=rand();
          yaleat=(yaleat/32767)*300;
          matriz_puntos[i].y=(int)yaleat;
          
                                                                                            //printf("\n %d %d",matriz_puntos[i].x,matriz_puntos[i].y);
      }
      
      //operaciones con el grafo
      printf("La matriz de adyacencia del grafo es: \n");
      Visualizar_d(adyacencia,5,5);
      for(i=0;i<5;i++)
      {
            printf("El grado del vertice %d es %g\n",i+1,Suma_Fila_d(i,adyacencia,5));
      }
      
      
      //pintamos lineas si hay un uno en la matriz de adyacencia
      for(i=0;i<5;i++)
          for(j=0;j<5;j++)
          {
               if(adyacencia[i][j]==1 && i<j)   //i<j porq recordar q la matriz de adyacencia es simetrica
               {
                     setcolor(j+2);
                     line(matriz_puntos[i].x,matriz_puntos[i].y,matriz_puntos[j].x,matriz_puntos[j].y);
               }            
          }
      
      //pintamos todos los puntos como circulos          
      for(i=0;i<5;i++)
      {
          setcolor(14);
          circle(matriz_puntos[i].x,matriz_puntos[i].y,5);
      }
      
      
      LiberarMem2d_d(adyacencia, 5);
      system("PAUSE");
      closegraph();
}

  
