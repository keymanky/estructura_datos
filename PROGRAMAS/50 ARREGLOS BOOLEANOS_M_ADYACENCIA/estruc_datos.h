/*******************************************************************************
********************************************************************************
*****************B I B L I O T E C A      D E     F U N C I O N E S*************
********************EXCLUSIVA DE ESTRUCTURA DE DATOS****************************
INTEGRANTES:
            HERNANDEZ ^2 ELIHU
            RODRIGUEZ ORDAZ OMAR
            SALGADO MENDOZA JORGE    <keymanky@hotmail.com>
            
********************************************************************************
********************************************************************************
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<memory.h>

//El orden de estos prototipos es el mismo q el cuerpo de las funciones

void Imprime_Encabezado(char *);                                                //Datos de los integrantes de esta materia del grupo.Recibe como parametro un apuntador a una cadenas de caracteres
void AsignarMem2d_d(double ***,int, int);                                       //Recibe como primer parametro un doble apuntador de tipo double (**p) pasado por referencia(&). El segundo parametro es #filas y el ultimo #columnas . Esta funcion asigna memoria dinamica para una matriz 2 dimensiones referenciadas por el apuntador. La matriz creada la inicializa en ceros, la matriz es de tipo double                                    
void LiberarMem2d_d(double **, int);                                            //Recibe como primer parametro un doble apuntador (pasado por valor<normal>), este apuntador apunta a la matriz; el segundo parametro es el numero de filas.Libera la memoria completa de las matriz dinamica creada. matriz de tipo double
void Visualizar_d(double **,int,int);                                           //Recibe como primer parametro el apuntador q apunta a la matriz dinamica(double apuntador tipo double), los otros 2 son #filas y #columnas. Imprime en pantalla los valores en forma de matriz de tipo double
void AsignarMem2d_char(char ***,int,int);                                       //Crea matriz de tipo char con parametros invertidos es decir el primero es columnas y el segundo filas, inicializa en a cada posicion
void LiberarMem2d_char(char**,int);                                             //igual q la de tipo double solo para char 
void Visualizar_char(char **,int,int);                                           //igual q la de tipo double solo para char  
void Inicializar2d_char(char **,int, char *);                                   //El primer parametro es el apuntador q apunta a matriz, el segundo es el renglon o fila a inicializar, el tercero es la cadena con q inicializare la fila de la matriz de tipo char
double Suma_Fila_d(int,double **,int);                                          //El primer parametro indica la fila a sumarse, el segundo es el puntero de tipo double q referencia la matriz de 2d, el ultimo parametro indica el #columnas de las matriz.Esta funcion retorna un double, sumatoria de elementos de esa fila
double Suma_Columna_d(int,double **,int);                                       //El primer parametro indica la columna a sumarse, el segundo el apuntador q referecia la matriz double, el ultimo indica el #filas de la matriz.
int Menor_d(double *,int);                                                      //Devuelve la posicion del elemento q es menor del arreglo double reprerenciado por el primer parametro y con elementos int del segundo parametro
int Mayor_d(double *,int);                                                      //Devuelve la posicion del elemento q es mayor del arreglo double reprerenciado por el primer parametro y con elementos int del segundo parametro
void Inicializa_Ts(double **,int);                                              //Inicializa la matriz triangular superior, se inicializara la matriz de acuerdo a su defincion.
void Transforma_Ts(double **,int,double *);                                     //Transforma una matriz de 2 dimensiones a 1 dimension
int Dimension_2d_Ts(int);                                                       //devuelve la dimension de una matriz triangular superior apartir del la dimension de la matriz de 1d
void Construye_Ts(double **,double*,int);                                       //Reconstruye la matriz triangular superior referenciada por ts, apartir de la matriz de 1d referenciada por p1d, el parametro dim_2d es igual a la dimension de la matriz de 2 dimensiones, para saber esta ultima vea la funcion anterior
int Busca_TS(int,int,int);                                                           //Busca el elemento correspondiente (usando una formula con los 2 primeros int, el primero es i(filas), el segundo es j(columnas)) . Esto se usa en una matriz tringaular q se paso a un arreglo unidimensional, es decir usando algoritmos de matriz poco densa. retorna la posicion correcta del arreglo de 1 dimension. N es el tamano de la matriz cuadrada triangular superior
/**********************IMPRIME EL ENCABEZADO **********************************/
void Imprime_Encabezado(char *p)
{
     printf("\n\t\tUNIVERSIDAD NACIONAL AUTONOMA DE MEXICO");
     printf("\n\t\tFES ACATLAN");
     printf("\n\t\tLIC. MATEMATICAS APLICADAS Y COMPUTACION");
     printf("\n\n\n\t\tIntegrantes:");
     printf("\n\t\tHernandez Hernandez Elihu");
     printf("\n\t\tRodriguez Ordaz Omar");
     printf("\n\t\tSalgado Mendoza Jorge");
     printf("\n\n\n\n\t\tEstructura de Datos\n\t\tTEMA: ");
     puts(p);
     printf("\n\n\n\t\tGrupo 1352");
     printf("\n\t\t2010-2\n\n\n\n\n");
     system("PAUSE");
     system("cls");
}

/****************CREA MATRIZ DINAMICA 2 DIMENSIONES DOUBLE*********************/
void AsignarMem2d_d(double ***x, int filas, int cols)
{
     double **p=NULL;
     int f=0;
     p=(double**)malloc(filas*sizeof(double*));
     if(p==NULL)
                return ;
     memset(p,0,filas*sizeof(double*));
     for(f=0;f<filas;f++)
     {               
         p[f]=(double *)malloc(cols * sizeof(double));
         if(p[f]==NULL)
         {
            LiberarMem2d_d(p,filas);
            *x=NULL;
            return;
         }
     memset(p[f],0,cols * sizeof(double));
     }
     *x=p;
}
/****************LIBERA LA MEMORIA DINAMICA 2 DIM DOUBLE **********************/
void LiberarMem2d_d(double **x, int filas)
{
     int f=0;
     for(f=0;f<filas;f++)
     {
         free(x[f]);
     }
     free(x);
}
/*****************VISUALIZA EL CONTENIDO DE LA MATRIZ DINAMICA 2 DIMES DOUBLE**/
void Visualizar_d(double **x, int filas, int cols)
{
     int f,c;
     for(f=0;f<filas;f++)
     {
         for(c=0;c<cols;c++)
             printf("%10g", x[f][c]);
         printf("\n");
     }
}
/****************CREA MATRIZ DINAMICA 2 DIMENSIONES CHAR  *********************/
void AsignarMem2d_char(char ***x, int filas, int cols)
{
     char **p=NULL;
     int f=0;
     p=(char**)malloc(filas*sizeof(char*));
     if(p==NULL)
                return ;
     memset(p,'a',filas*sizeof(char*));
     for(f=0;f<filas;f++)
     {               
         p[f]=(char *)malloc(cols * sizeof(char));
         if(p[f]==NULL)
         {
            LiberarMem2d_char(p,filas);
            *x=NULL;
            return;
         }
     memset(p[f],'a',cols * sizeof(char));
     }
     *x=p;
}
/****************LIBERA LA MEMORIA DINAMICA 2 DIM DOUBLE **********************/
void LiberarMem2d_char(char **x, int filas)
{
     int f=0;
     for(f=0;f<filas;f++)
     {
         free(x[f]);
     }
     free(x);
}
/*****************VISUALIZA EL CONTENIDO DE LA MATRIZ char de 2 DIMES char*****/
void Visualizar_char(char **x, int filas, int cols)
{
     int f;
     for(f=0;f<filas;f++)
         puts(x[f]);
}
/*************INICIALIZA UNA FILA DE UNA MATRIZ DE 2D CHAR CON UNA CADENA******/
void Inicializar2d_char(char **x,int n, char *m)
{
     x[n]=m;
}
/************SUMA LA FILA N DE UNA MATRIZ DOUBLE DE COLUMNAS COLS**************/
double Suma_Fila_d(int n,double **x,int cols)
{
     int i;
     double suma=0;
     for(i=0;i<cols;i++)
     {
        suma=suma+x[n][i];
     }
     return suma;
}  
/************SUMA LA columna N DE UNA MATRIZ DOUBLE DE filas filas*************/
double Suma_Columna_d(int n,double **x,int filas)
{
     int i;
     double suma=0;
     for(i=0;i<filas;i++)
     {
        suma=suma+x[i][n];
     }
     return suma;
}
/**********DEVUELVE LA POSICION DEL ELEMENTO MENOR DE UN ARREGLO DOUBLE 1D*****/
int Menor_d(double *x,int p) 
{
    int i,z=0;
    for(i=0;i<p-1;i++)
    {
        if(x[z]>x[i+1])
             z=i+1;
    }
    return z;
}
/**********DEVUELVE LA POSICION DEL ELEMENTO MAYOR DE UN ARREGLO DOUBLE 1D*****/
int Mayor_d(double *x,int p) 
{
    int i,z=0;
    for(i=0;i<p-1;i++)
    {
        if(x[z]<x[i+1])
             z=i+1;
    }
    return z;
}
/*************INICIALIZA POR MEDIO DEL USUARIO UNA MATRIZ TRIANGULAR SUPERIOR**/
void Inicializa_Ts(double **x,int n)
{
     int i,j;
     float a;
     for(i=0;i<n;i++)
         for(j=0;j<n;j++)
         {
             if(i<=j)
             {
                   do{
                   printf("Dame el elemento de la matriz <%d> <%d>: ",i+1,j+1);
                   scanf("%f",&a);
                   }while(a==0);
                   x[i][j]=(double)a;
             }
         }
}
/*******TRANSFORMA UNA MATRIZ TRIANGULAR SUPERIOR A UNA 1D T.S*****************/
void Transforma_Ts(double **x,int n,double *m)
{
     int a=0,i,j;
     for(i=0;i<n;i++)
         for(j=0;j<n;j++)
             if(i<=j)
             {
                     m[a]=x[i][j];
                     a++;
             }
}
/*****FUNCION Q DEVUELVE LA DIMENSION DE UNA MATRIZ 2D TRIANGULAR SUPERIOR*****/
int Dimension_2d_Ts(int n)
{
    int i,suma=0;
    for(i=0;i<n;i++)
    {
      suma=suma+i;
      if(suma>=n)
         break;
    }
    return i;
}
/*******TRANSFORMA UNA MATRIZ DE 1D A UNA MATRIZ TRIANGULAR SUPERIOR DE 2D*****/
void Construye_Ts(double ** x,double *y,int n)
{
     int i,j,a=0;
     int pos;
     for(i=1;i<=n;i++)               //i=1 y j=1 para poder usar la formula y por eso resto i-1 y j-1 ya q las matrizes en la commputadora se almacenan desde 0,0
         for(j=1;j<=n;j++)
         {
              if(i<=j)               //para sacar todas las posibles posiciones validas
              {
                      //x[i][j]=y[a];        mas facil sin usar toda esta formula
                      pos=1+((n*(i-1))-(((i-2)*(i-1))/2)+(j-i));         //aca la formula que calcula la posicion del arreglo bidimensiona 
                      x[i-1][j-1]=y[pos-1];     //pasamor el valor de la matriz unidimensional a la dibimensional en su respectivo lugar
                      //a++;
              }
         }
}
/***********BUSCA ELEMENTO DE LA MATRIZ T.SUPERIOR EN SU MATRIZ DE 1D**********/
int Busca_TS(int i,int j, int n)
{
       int pos; //posicion del arreglo unidimensional
       pos=0+((n*(i-1))-(((i-2)*(i-1))/2)+(j-i));
       return pos;
}
