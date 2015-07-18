#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<memory.h>
//1
//FUNCION DICE SI UN INT ES PAR O NO
int par_impar (int z)    
{                                                          
if(z%2==0)
          return 1;
return 0;
}
//2
//FUNCION DICE SI UN FLOAT ES POSITIVO O NO
int positivo_negativo(float n)
{
    if (n<0)
        return 0;
    else
        return 1;
}
//3
//FUNCION QUE RETORNA EL CUADRADO
int cuadrado(int a)
{
    return a*a;
}
//4
//FUNCION QUE RETORNA EL CUBO
int cubo (int jeje)
{
    return jeje*jeje*jeje;
}
//5
//FUNCION QUE CUENTA
int contar ()                                                                     //funcion que no retorna contador
{
    static int contador=1;                                                        //se declara estatic para que despues de finalizar la llamada de la funcion el contador no se destruya y conserve el ultimo valor
    return contador++;
}
//6
//Convierte a farengati
float centigrados_farengati (float n)
{
      float cen;
      cen=(n*1.8)+32;
      return cen;
}
//7
//Convierte a grados
float farengati_centigrados (float n)
{
      float farengati;
      farengati = (n-32)/1.8;
      return farengati;
}
//8
//Funcion menu, modificar el printf y rango del while cada vez q se use
int menu ()
{
    char m[20];
    int x;
    do
    {
          system("cls");                                                        //da el efecto de borrar solo que lo no esta en las opciones
          printf("\n LEE EL MENU\n 1.-PARA CONVERTIR DE FARENHEIT A CENTIGRADOS\n 2.-PARA CONVERTIR DE CENTIGRADOS A FARENHEIT\n 3.-SALIR\n   ");
          gets (m);                                                             //gets lee los del teclado hasta una marca de EOF y lo guarda como cadena de caracters en alrreglo m
          x=atoi(m);                                                            //a x se le asigna el valor numerico de la cadena en int                                                   
          if (x==3)                                                          
             exit(0);
    }
    while (x!=1 && x!=2);
    return x;
}
//9
//Devuelve volumen de una esfera
float volumen_esfera (float r)
{
      float volume;
      volume= pow(r,3)*12.5664;//multiplique pi * 4 para despues solo dividirlo
      volume= volume/float(3);//aca lo dividi
      return volume;
}
//10
//Devuelve la edad
int edad (int a, int n)
{
    if(a<n)
    {
            printf("Error");
            system("PAUSE");
            return (0);
    }
    else
    return a-n;
}
//11
//Devuelve la raiz cuadrada por metodo de newton
float raiz_newton (float n, float ri, float t) //tanto numero a calcular como aproximacion deben de ser positivos
{
      float ri1;
      double e,ea;
      int x=0;
      do
      {
            ri1= ((n/ri)+ ri)/2;//formula de newton
            e= (ri1-ri)/ri1;    //e= error relativo
            if(e<0)         //la funcion del valor absoluto tiene problemas creo que solo funciona para enteros int, y si hay error retorna cero, por eso este if
                   e=-1*e;
            ri=ri1;       //intercambio que se usa en metodos iterativos
            x++;
  //          printf("\n%f error=%f", ri1,e);
            if(e<t)
                     break;
      }
      while(x<10000000);//numero maximo de iteraciones
      return ri1;
}
//12
//Devuelve 1 si es raiz real o 0 si es imaginaria
int verifica_raiz(float a,float b,float c)
{
    float verifica;
    verifica= (b*b)-(4*a*c);
    if (verifica<0)
       return 0;
    if (verifica>=0)
       return 1;
}
//13
//Retorna la raiz real especificada por d(si x1=1 o x2=2)
float raiz_real2do(float a,float b,float c,int d)
{
      float discriminante,x;
      discriminante=(b*b)-(4*a*c);
      if(a==0 && b==0)
      {
              return 0;
              exit(0);
      }
      if(discriminante<0)
      {
              return 0;
              exit (0);
      }
      if (a==0)
      {
              return -c/b;
              exit (0);
      }
      if (d==1)
      {
               x=(-b+(sqrt(discriminante)))/(2*a);
               return x;
               exit(0);
      }
      if (d==2)
      {
               x=(-b-(sqrt(discriminante)))/(2*a);
               return x;
               exit(0);
      }
}
//14
//FUNCION QUE CALCULA EL VALOR DE E
float exponencial(float y)
{
      float e,e1,error,ex;
      e=1;
      int c=1;
      do                                                                        //ciclo que calcula e elevado a la 1    
      {
          e1=e+ (float(1)/(factorial(c)));                                      //conversion explicita de 1 a float. Formula de maclaurin
          c++;
          e=e1;
      }while(c<13);                                                             //maximo 12 porque la funcion factorial retorna maximo el factorial de 12       
      ex=pow(e,y);                                                              //con esto se eleva el valor de e a lo que sea
      return ex;
}
//15
//FUNCION QUE CALCULA EL FACTORIAL DE UN NUMERO
int factorial (int t)
{
    if(t>12 || t<0)
            return 0;
    else
    {
    int unsigned a;
    float y=1,multi,x;
    for(x=1; x<=t; x+=1)
	{
	multi=x*y;
	y=multi;
	} 
    a= (int) y;
    return a;
    }
}
//16
//FUNCION QUE EVALUA UNA SUMATORIA
float sumatoria(int i, int n, float x, float y)//el primer argumento es limite inferior, el segundo es el superior, los otros 2 son personalizados cada vez
{
      float suma=0,b;
      for(i;i<=n;i++)
      {
                     b=(float)1/(x+(i*y));
                     suma= suma+ b;
                     printf("%f\n",suma);
                     }
      return suma;
}
//17
//FUNCION QUE DICE SI LA FECHA EXISTE
int fecha_valida(int ano, int mes, int dia)
{
    int v;
    if(ano<=0 || ano>=3000)
    {
              return 0;
              exit(0);
    }
    if(mes<=0 || mes>12)
    {
              return 0;
              exit(0);
    }    
    if(dia<=0 || dia>31)
    {
              return 0;
              exit(0);
    }
    switch (mes)
    {
           case 1:
                {
                      return 1;
                      exit(0);
                }
           case 2:
                {
                      if(dia<=28)
                      {
                      return 1;
                      exit(0);
                      }
                      if(dia>29)
                      {
                      return 0;
                      exit(0);
                      }
                      if(dia==29)
                      {
                                 v=bisiesto(ano);
                                 if(v==1)
                                 {
                                         return 1;
                                         exit(0);
                                 }
                                 else
                                 {
                                     return 0;
                                     exit(0);
                                 }
                      }
                }
           case 3:
                {
                      return 1;
                      exit(0);
                }
           case 4:
                {
                      if(dia<=30)
                      {
                      return 1;
                      exit(0);
                      }
                      else
                      {
                      return 0;
                      exit(0);
                      }
                }
           case 5:
                {
                      return 1;
                      exit(0);
                }
           case 6:
                {
                      if(dia<=30)
                      {
                      return 1;
                      exit(0);
                      }
                      else
                      {
                      return 0;
                      exit(0);
                      }
                }
           case 7:
                {
                      return 1;
                      exit(0);
                }
           case 8:
                {
                      return 1;
                      exit(0);
                } 
           case 9:
                {
                      if(dia<=30)
                      {
                      return 1;
                      exit(0);
                      }
                      else
                      {
                      return 0;
                      exit(0);
                      }
                }
           case 10:
                {
                      return 1;
                      exit(0);
                }
           case 11:
                {
                      if(dia<=30)
                      {
                      return 1;
                      exit(0);
                      }
                      else
                      {
                      return 0;
                      exit(0);
                      } 
                }
           case 12:
                {
                      return 1;
                      exit(0);
                }

     }
}
//18
//FUNCION QUE CUENTA EL NUMERO DE DIGITOS maximo 10
int digitos (int n)
{
    int ceros, d;
    n=int(absoluto((float)n));
    ceros=10;
    d=1;
    do
    {
        if(ceros>n)
        {
                   return d;
                   exit (0);
        }
        ceros=ceros*10;
        d++;
    }while (d<=20);
return 0;
}
//19
//FUNCION QUE RETORNA EL DIGITO ESPECIFICADO DE UN NUMERO INT
int digito(int numero, int digit)
{
    int dig,x;
    dig=digitos(numero);
    if(digit>dig || digit<=0)
    {
       return 0;
       exit(0);
    }
    int cadena[dig];
    numero_arreglo(cadena,numero);  
    return cadena[digit-1];
}
//20
//FUNCION DICE SI UN ANO ES BISIESTO
int bisiesto (int ano)
{                                                                               //un ano bisiesto es aquel divisible por 4, excepto si es divisible por 100 pero si por 400 
    if (ano % 4 == 0)
       {
            if (ano %100==0)
            {
                    if(ano%400==0)
                       return 1;
                    else
                       return 0;
            }
            else
               return 1;
       }
    else
       return 0;
}
//21
//FUNCION QUE DEVUELVE EL VALOR ABSOLUTO
float absoluto (float n)
{
      if (n<0)
          n=-1*n;
return n;
}
//22
//FUNCION QUE PASA UN ENTERO A CADENA maximo 10 digitos
void numero_arreglo(int m[],int n)
{
     int suma=0,d,x,y,i;
     d=digitos(n);
     for(x=1;x<=d;x++)
     {
                      y=(n/pow(10,d-x)) - suma;
                      m[x-1]=y;
                      suma= suma + m[x-1];                                      //en suma se iran sumando los numero por eso solo multiplico por 10 cada vez
                      suma=suma*10;
     }
}
//23
//FUNCION QUE CALCULA EL NUMERO DE TAROT DE UNA PERSONA
int numero_tarot(int ano, int mes, int dia)
{
    int n,suma,d,x,a;
    n= ano+mes+dia;
    d=digitos(n);
    suma=0;
    for(x=1;x<=d;x++)
    {
                     suma=suma + digito(n,x);
    }
    if(suma>9)
                     suma=numero_tarot(suma,0,0);                               //de chiripa le atine que suma=
    return suma;
}
//24
//FUNCION QUE DIBUJA EL TRIANGULO
void triangulo_pascal(int n)
{
     int x,a,i,nn,y,aa,d,ddx,dx;
     a=0;
     for(x=1;x<=n;x++)
     {
                      for(nn=n;nn>x;nn--)
                                         printf(" ");
                      if(x>9)
                      {
                             dx=digitos(x);
                             ddx=digito(x,dx);
                             y=ddx;
                      }
                      else
                          y=x;
                      for(i=1;i<=x;i++)
                      {
                                       if(y>9)                                  //para que y no se salga de 9 en ciclo interno
                                            y=0;
                                       printf("%d",y);
                                       y++;
                      }
                      if(x>1)
                      {
                             a=2+a;
                             aa=a;
                      }
                      for(i=1;i<x;i++)
                      {
                                      if(aa>=10)
                                      {
                                               d=digitos(aa);
                                               printf("%d",digito(aa,d));
                                               aa--;
                                      }
                                      else
                                      {
                                          printf("%d",aa);
                                          aa--;
                                      }
                      }
                      printf("\n");
     }
}
//25
//CONVIERTE DE MINUSCULAS A MAYUSCULAS SIN HACER USO DE FUNCIONES DE C
void MinusculasMayusculas(char str[])
{
     int i, desp= 'a' - 'A';                                                    //El juego de caracteres ASCII, hay una diferencia contante entre la a "minuscular"  y la "mayuscula" de igual forma esta diferencia es constante entre todas las letras menos las especiales como las acentuadas o la ñ
     for (i=0; str[i] != '\0'; i++)                                             //El final de toda cadena es el caracter nulo que es \n
         if(str[i] >= 'a' && str[i] <= 'z')                                     //Si las letras de la cadena estan entre la a y la z, las convierte
                   str[i]=str[i]-desp;                                          //Las minusculas tiene un rango mas alto en valor decimal qu las mayusculas cuando se escribe 'a' se hacer referencia al valor entero de la letra
}
//26
//FUNCION QUE ORDENA MATRIZ DE CARACTERes
void ordenar(char cad[][COLS_MAX],int nc)
{
     char aux[COLS_MAX];
     int i, s=1;
     while((s==1) && (nc>0))
     {
     nc--;
     s=0;
     for(i=1;i<=nc;i++)
       if(strcmp(cad[i-1],cad[i])>0)
       {
           strcpy(aux,cad[i-1]);
           strcpy(cad[i-1],cad[i]);
           strcpy(cad[i],aux);
           s=1;
       }
     }
}
//27
//OPERACIONES CON BITS
    void presentar(unsigned char c)
{
     int i=0;
     printf("El valor ASCII de %c es %Xh; en binario:",c,c);
     for(i=7;i>=0;i--)
         printf("%d",(c&(1<<i)) ? 1:0);
     printf("\n");
     system("PAUSE");
}
//28
//MANEJO BITSS
unsigned char ReflejarByte (union byte b)
{
         union byte c;
         c.bits.b0=b.bits.b7;
         c.bits.b1=b.bits.b6;
         c.bits.b2=b.bits.b5;
         c.bits.b3=b.bits.b4;
         c.bits.b4=b.bits.b3;
         c.bits.b5=b.bits.b2;
         c.bits.b6=b.bits.b1;   
         c.bits.b7=b.bits.b0;
         return(c.byte);
} 
//29
//SUMATORIA DE LOS N NUMEROS NATURALES AL CUADRADO
int suma_cuadrados_n(int n)
{
    int resultado=1;
    if(n==0)                                                                    //PARA EL CASO DE CERO          
        return resultado-1;
    if(n==1)                                                                    //CONDICION DE TERMINO          
        return resultado;
    else
        return ((n*n)+(suma_cuadrados_n(n-1)));                                 //PROCESO RECURSIVO                                      
}
//30
//CREA MATRIZ DINAMICA DOUBLE 
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
//31
//LIBERA LA MEMORIA DINAMICA 2 DIM DOUBLE
void LiberarMem2d_d(double **x, int filas)
{
     int f=0;
     for(f=0;f<filas;f++)
     {
         free(x[f]);
     }
     free(x);
}
//32
//VISUALIZA EL CONTENIDO DE LA MATRIZ DINAMICA 2 DIMES DOUBLE
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
//33
//CREA MATRIZ DINAMICA 2 DIMENSIONES CHAR
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
//34
//LIBERA LA MEMORIA DINAMICA 2 DIM DOUBLE
void LiberarMem2d_char(char **x, int filas)
{
     int f=0;
     for(f=0;f<filas;f++)
     {
         free(x[f]);
     }
     free(x);
}
//35
//VISUALIZA EL CONTENIDO DE LA MATRIZ char de 2 DIMES char
void Visualizar_char(char **x, int filas)
{
     int f;
     for(f=0;f<filas;f++)
         puts(x[f]);
}  
//36 
//SUMA LA FILA N DE UNA MATRIZ DOUBLE DE COLUMNAS COLS
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
//37
//SUMA LA columna N DE UNA MATRIZ DOUBLE DE filas filas
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
//38            
//DEVUELVE LA POSICION DEL ELEMENTO MENOR DE UN ARREGLO DOUBLE 1D; el parametro p es las filas
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
//39
//DEVUELVE LA POSICION DEL ELEMENTO MAYOR DE UN ARREGLO DOUBLE 1D; el parametro p es las filas
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
//40
//INICIALIZA POR MEDIO DEL USUARIO UNA MATRIZ TRIANGULAR SUPERIOR
void Inicializa_Ts(double **x,int n)                              				//La matriz Ts es por definicion cuadrada(dimension n)
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
//41
//TRANSFORMA UNA MATRIZ TRIANGULAR SUPERIOR A UNA 1D T.S
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
//42
//FUNCION Q DEVUELVE LA DIMENSION DE UNA MATRIZ 2D TRIANGULAR SUPERIOR
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
//43
//TRANSFORMA UNA MATRIZ DE 1D A UNA MATRIZ TRIANGULAR SUPERIOR DE 2D
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
//44
//BUSCA ELEMENTO DE LA MATRIZ T.SUPERIOR EN SU MATRIZ DE 1D
int Busca_TS(int i,int j, int n)
{
       int pos; //posicion del arreglo unidimensional
       pos=0+((n*(i-1))-(((i-2)*(i-1))/2)+(j-i));
       return pos;
}
//45
//FUNCION QUE LEE CADENAS Y LAS DEPOSITA EN UNA MATRIZ 2 DIM TIPO CHAR
void LeerCadenas(char **x,int nfilas)
{
      char cadena[50];
      int i,longitud=0;
      printf("Introducir cadenas de caracteres.\nNo introducir caracteres extranos y las Mayusculas seran convertidas a minusculas\n");
      for(i=0;i<nfilas;i++)
      {
           longitud=strlen(gets(cadena));             //se lee la cadena y se guarda en uno temporal en este caso llamado cadena, luego obtenemos la longitud de esa cadena
           x[i]=(char *)malloc(longitud +1);          //cada apuntador del arreglo apunta a un espacio en memoria de tipo char con caracteres de tamano longitud + 1, Mas 1 por el caracter nulo 
           strcpy(cadena,strlwr(cadena));             //convierte las mayusculas a minusculas si es q hay     (strlwr)
           strcpy(x[i],cadena);                       //copiamos la cadena auxiliar a la matriz
      }
      
      printf("\nLas cadenas ordenadas de a-z son \n\n");
}
//46
//ORDENA LAS FILAS DE UNA MATRIZ CHAR SEGUN SEA ALFABETICAMENTE
void OrdenarCadenas(char **x,int filas)               //compara la fila 1 con la siguinte, despues la 1=siguiente y hace lo mismo, ya acabado vuelve ha hacer lo mismo el numero de filas; para acegurar q comparo todas las cadenas
{
     char *aux;                                       //apuntador auxiliar
     int i,s=1;                                       
     while((s==1) && (--filas>0))                     //ejecute el ciclo si hay filas pendientes  y existio almenos un cambio, si s es igual a cero entonces significa q las cadenas estaban ordenadas alfabeticamente porq la cadena i-1 es siempre menor q la cadena i
     {
          s=0;
          for(i=1;i<=filas;i++)                       //compara las cadenas i-1  y la i 
              if(strcmp(x[i-1],x[i])>0)               //strcmp compara lexicograficamente las cadenas y devuelve <0 =0 o >0 si es menor,igual o mayor la cadena 1 (primer parametro) contra la 2 (segundo parametro)
              {                                       //si la cadena de arriba va despues q la cadena de abajo (i)
                   aux=x[i-1];                      
                   x[i-1]=x[i];                       //intercambia, dejando la menor hasta arriba
                   x[i]=aux;
                   s=1;                               //s muestra si existio almenos una permutacion,
              }
     }
}
//47
//Inicializa un renglon especifico de una matriz por una cadena
void Inicializar2d_char(char **matriz,int x, char *y)
{
 	 strcpy(matriz[x],y);
}
//48
//FUNCION Q RETORNA Q TIPO DE DATO LEYO DEL TECLADO
int Lee(char *cadena)
{
           int digitos,i,entero=0,alfanumerico=0, punto=0,espacio=0,menos=0,mas=0,caracter=0;    
           digitos=strlen(cadena);             //obtenemos el numero de caracteres menos el nulo
           for(i=0; i<digitos;i++)             //Barremos toda la cadena menos el nulo
           {
                  if(cadena[i] == ' ')         //*******************************no hace nada si es espacio
                     espacio++;
                  else if(cadena[i] == '.')    //*******************************en caso de que sea punto
                  {
                     punto++;
                     if(punto>1)
                     {              //hay mas de 1 punto
                        caracter++;
                        if(entero)            //existian numeros antes y hay 2 puntos
                        {
                           alfanumerico=1;
                           break;
                        }
                     }
                  }
                  else if(cadena[i] >= 48 && cadena[i] <= 57) //****************en caso de que sea un numero
                  {
                     entero++;
                     if(caracter>0)           //si hay un caracter
                        {
                        alfanumerico=1;
                        break;
                        }
                  }
                  else if(cadena [i]== '-')      //*****************************en caso de que menos
                  {
                     menos++;
                     if((menos >1) || (mas>0 || punto>0))     //el operador debe ir al principio o hay mas de 1
                        caracter++;
                     if(entero>0)                             //En caso de q haya un entero antes del operador 
                        {
                           alfanumerico=1;
                           break;
                        }
                  } 
                  else if(cadena [i]== '+')      //*****************************en caso de que sea mas
                  {
                     mas++;
                     if((mas >1) || (menos>0 || punto>0))     //el operador debe ir al principio o has mas de 1
                        caracter++;
                     if(entero>0)               //En caso d q haya entero antes del operador
                        {
                           alfanumerico=1;
                           break;
                        }                     
                  }      
                  else                        //********************************No es operador ni numero
                  {
                     if(entero>0)             //si hay algun numero antes
                     {
                       alfanumerico=1;
                       break;
                     }
                     caracter++; 
                  }
           }                               
           
           
           
           if(alfanumerico)
              return 3;                                   //En caso q no lo sea solo puede haber o letra o numeros. No mescla
           else
           {
              if(caracter>0 || (entero==0 && (mas>0 || menos>0 || punto>0)))    //Si hay letras,  entonces no puede haber enteros; lo q dice que hay operadores solos 
                 return 2;
              else if(caracter==0 && entero==0 && mas==0 && menos==0  && punto==0)     //Si solo hay espacios
                 return 2;
              else if(punto)                                                    //Si hay numeros no hay letras, Si hay punto es flotante
                 return 1;
              else                                                              //Solo hay numeros
                 return 0; 
           }
}
//49
//FUNCION ERROR
void error()
{
     printf("Insuficiente memoria\n");
     exit(1);         //aborta el programa
}
///////////////ESTRUCTURAS NECESARIAS PARA LAS SIGUIENTES FUNCIONES/////////////
typedef struct l
{
        char  nombre[50];
        struct l *sig_nombre;
}Alumno;
typedef struct n
{
        int grupo;
        struct n *sig_grupo;
        Alumno *nombre;
}Grupo;
////////////////////////////////////////////////////////////////////////////////

//50
//CREA EL ESPACIO PARA NUEVO ELEMENTO
Grupo * Nuevo_Grupo()
{
      Grupo *nuevo =(Grupo *)malloc(sizeof(Grupo));
      if(!nuevo)   //si apunta a null
         error();
      return nuevo;
}
//51
//ANADE UN NUEVO GRUPO EN ORDEN
void Anadir_Grupo(int e, Grupo **x)
{    
   int insertado=0;
   Grupo *p= *x;                                                                //Se crean apuntadores p(se va a ir moviendo), aux2(apunta al inicio de la lista , es copia de x), aux(apunta al anterior de p), q(tiene los q se va anadir).......Se crea un aux2 ya q si dejamos a x, entonces puede ocurrir cosas inesperadas
   Grupo *aux=NULL, *aux2=*x;
   Grupo *q=Nuevo_Grupo();                                                      //Nuevo aputador q
   q->grupo=e;                                                                  //se anaden el dato
   q->nombre=NULL;
/*CASO DE SEA EL UNICO NODO*/
    if(p==NULL)
    {  
      q->sig_grupo=NULL;                                                        //todo lo demas debe apuntar a NUll
      *x=q;   
   }
   
   else
   {
      int principio=1;
/*CICLO Q COMPARA EL CONTENDIDO PARA ORDENARLO E INSERTARLO ADECUADAMENTE*/
      while(p!=NULL)
      {
         if(e>= p->grupo && principio)                                          //Se anade al principio de la lista si el nuevo dato es mas grande
             {
                q->sig_grupo=p;
                p=q;
                *x=p;                                                           //Modifica a lo q apunta x, es el apuntador pasado por referencia
                insertado=1;                                                    
                break;
             }
         else                                                                   //No se anadio al prncipio, por lo q haremos uso del apuntador aux
             {
                if(e>=p->grupo)
                {
                     q->sig_grupo=p;
                     aux->sig_grupo=q;
                     *x=aux2;                                                   //Se modifica el contenido de x, para q siempre apunte al principio de la lista
                     insertado=1;
                     break;
                }
             }
         aux=p;
         p=p->sig_grupo;
         principio=0;
      }
      if(!insertado)                                                            //Si no se a insertado , signfica q el el menor , Insertar al final de la lista
      {
         aux->sig_grupo=q;                                                      //sabemos q aux apunta a uno antes q p, y p ya apunta a NULL o final de la lista
         q->sig_grupo=NULL;    
      }
   }
}
//52
//BUSCA UN GRUPO O ELEMENTO EN LA LISTA
int Busca_Grupo(int x, Grupo * recorre)
{
    Grupo *lista = recorre;
    int pos=0;                                                                  //Retorna la posicion q se encuentra en la lista, empieza en cero
    while(lista != NULL)
    {
       if(lista->grupo == x)
          return pos;
       pos++;   
       lista=lista->sig_grupo;
    }
    return -1;                                                                  //Retorna -1 si no se encontro
}
//53
//IMPRIME LOS GRUPOS O EL CONTENIDO DE UNA LISTA LIGADA
void Imprime_Grupos(Grupo *j) //entra como una compia a j
{
     int imprimio=0;
     Alumno *k=NULL;
     while(j != NULL)         //mientra j no apunte a null
     {
        printf("El grupo es : %d\n",j->grupo);
        k=j->nombre;
        while(k != NULL)
        {
             printf("\t\tEl alumno %s esta inscrito en este grupo\n",k->nombre);
             k=k->sig_nombre;
        } 
        j=j->sig_grupo;       //j apunta al siguiente nodo
        imprimio=1;
     }
     if(!imprimio)
        printf("No hay grupos Favor de anadir uno ...\n");
}
//54
//BORRA EL GRUPO ESPECIFICADO o ELEMENTO DE LA LISTA LIGADA
int Borra_Grupo(int x, Grupo ** puntero)
{
    Grupo *q= *puntero;
    Grupo *aux= NULL;
    Grupo *aux2= *puntero;
    int primero=1,ultimo=0;
    while(q != NULL)
    {
          Alumno *n=q->nombre;                                                        //apunta a la lista de alumnos del grupo
          Alumno *aux5=NULL;
          if(x==q->grupo && primero)                                            //elimina el primer grupo
          {
             while(n !=NULL)
             {
               aux5=n;                                                           //aux apunta al anterior
               n=n->sig_nombre;
               free(aux5);   
             }
             aux=*puntero;
             *puntero =aux->sig_grupo;
             free(aux);
             return 1;
          }
          else if(x==q->grupo && !primero)
          {
             while(n !=NULL)
             {
               aux5=n;                                                           //aux apunta al anterior
               n=n->sig_nombre;
               free(aux5);   
             }
              aux->sig_grupo=q->sig_grupo;
              free(q);
              *puntero =aux2;
              return 1;
          }
          aux=q;
          q=q->sig_grupo;
          primero=0;
    }
    return 0;
}
//55
//RETORNA EL PUNTERO Q APUNTA AL GRUPO ESPECIFICO (UNION ENTRE 2 LISTAS)
Grupo * Este(int m, Grupo *full)                                                //recibe un apuntador q apunta al principio de la lista de grupos
{                                                                               //retorna el apuntador al grupo especifico
      Grupo *nuevo= full;
      int i;
      for(i=0;i<m;i++)
      {
           nuevo=nuevo->sig_grupo;
      }      
      return nuevo;
}

//56
//ASIGNA UN ESPACIO DE MEMORIA PARA LISTA CON CADENA DE INFO  o nuevo ALUMNO
Alumno *Nuevo_Alumno()
{
      Alumno *nuevo =(Alumno *)malloc(sizeof(Alumno));
      if(!nuevo)   //si apunta a null
         error();
      return nuevo;
}
//57
//INSERTA UN NODO CON INFO CADENA ORDENADAMENTE
void Anadir_Alumno(char *c,Alumno **x)   
{
     Alumno *p=*x;
     Alumno *q=Nuevo_Alumno();
     Alumno *aux2=*x,*aux=NULL;
     int principio=1,insertado=0;
     strcpy(q->nombre,c);
     if(p == NULL)
     {
          q->sig_nombre=NULL;
          *x=q;
     } 
     else
     {
          while(p!=NULL)
          {
               if(strcmp(p->nombre,c) > 0 && principio)
               {
                    q->sig_nombre=p;
                    p=q;
                    *x=p;
                    insertado=1;
                    break;
               }
               else
               {
                    if(strcmp(p->nombre,c) >0)
                    {
                    q->sig_nombre=p;
                    aux->sig_nombre=q;
                    insertado=1;
                    *x=aux2;
                    break;
                    }
               }
               aux=p;
               p=p->sig_nombre;
               principio=0;
          }
          if(!insertado)
          {
               q->sig_nombre=NULL;
               aux->sig_nombre=q;
               *x=aux2;
          }
     }    
}
//58
//iMPRIME LA LISTA DE CADENAS
void Imprime_Alumno(Alumno *j)
{
     int imprimio=0;
     while(j != NULL)         //mientra j no apunte a null
     {
        printf("El Alumno es : %s\n",j->nombre);
        j=j->sig_nombre;       //j apunta al siguiente nodo
        imprimio=1;
     }
     if(!imprimio)
        printf("No hay Alumnos Favor de anadir uno ...\n");
}
//59
//BORRA EL ELEMENTO ESPECIFICADO cadena DE CARACTERES
int Borra_Alumno(char *a,Alumno **puntero)
{
    Alumno *q= *puntero;
    Alumno *aux= NULL;
    Alumno *aux2= *puntero;
    int primero=1,ultimo=0;
    while(q != NULL)
    {
          if((strcmp(q->nombre,a)==0) && primero)
          {
             aux=*puntero;
             *puntero =aux->sig_nombre;
             free(aux);
             return 1;
          }
          else if((strcmp(q->nombre,a)==0) && !primero)
          {
              aux->sig_nombre=q->sig_nombre;
              free(q);
              *puntero =aux2;
              return 1;
          }
          aux=q;
          q=q->sig_nombre;
          primero=0;
    }
    return 0;
}
//60
//BUSCA UN NOMBRE EN LA LISTA
int Busca_Alumno(char *a,Alumno *recorre)
{
    Alumno *lista = recorre;
    int pos=0;                                                                  //Retorna la posicion q se encuentra en la lista, empieza en cero
    while(lista != NULL)
    {
       if(strcmp(lista->nombre,a) == 0)
          return pos;
       pos++;   
       lista=lista->sig_nombre;
    }
    return -1;      
}
//61
// ARREGLOS PARALELOS IMPRIEE LOS 3 ARREGLOS EN EL INDICE pos
void Imprime(int pos, int alum[], int prof[], char **carrera)
{
printf("\nLos datos encontrados son:\n");
puts(carrera[pos]);
printf("\tNumero de alumnos: %d\n",alum[pos]);
printf("\tNumero de Profesores: %d",prof[pos]); 
printf("\n");
system("PAUSE");
}
//62
//LIMPIA LOS ESPACIO NO DESEADOS.
void Limpia_Espacios(char *a,int max_espacios)                                  //Recibe como parametro un apuntador a cadena y elimina los espacio juntos que superen el mas_espacio. Los espacio del principio y fin de la cadena se eliminan siempre
{
     int i, letra=0, espacio=0, dim_arreglo=0, dim_arreglo2=0,indice=0;
     dim_arreglo=strlen(a)+1;
     char arreglo_nuevo[dim_arreglo];                                           //declaramos un arreglo de la misma dimension
     if(max_espacios>=0)
     {
     for(i=0;i<=dim_arreglo-1;i++)                                               //lo hacemos menos 1 veces porq no nos interesa el caracter nulo         
     {
          if(a[i] != ' ')                                                       //si el indice no es espacio, q lo copie
          {
               arreglo_nuevo[indice]=a[i];
               letra=1;
               espacio=0;                                                       //no hay espacioos juntos
               indice++;
          }
          else
          {
              espacio++;
              if(!letra)                                                        //si no ha escrito ninguna letra entoces son los primeros espacios, q los elimine
                 continue;
              else
              {
              if(espacio<=max_espacios)                                         //copia solo los espacios validos                                      //
                 {
                 arreglo_nuevo[indice]=a[i];
                 indice++;   
                 }
              }
          }
     }
     arreglo_nuevo[indice]='\0';                                                //pone el caracter nulo
     dim_arreglo2=strlen(arreglo_nuevo);
     if(espacio>0)                                                              //si hay espacios al FINAL q los borre
          arreglo_nuevo[(dim_arreglo2-espacio)]='\0';
     strcpy(a,arreglo_nuevo);                                                   //q copie la cadena
     }
}
//63
//ELIMINA LOS CEROS NO SIGNIFICATIVOS
void Limpia_Ceros(char *numero)
{
     int max=strlen(numero),nume=0,j=0,borrar=0,ultimo=-1,i,punto=0;
     char nuevo[max+1];
     for(i=0;i<=max;i++)
     {
             if(numero[i] =='0' && !nume) //para los primeros ceros
             {
             }
             else if(numero[i]!='0' && numero[i]!='\0')      //un numero valido
             {
                  nume=1;
                  if(numero[i]=='.')
                       punto=1;
                  nuevo[j]=numero[i];
                  j++;
                  borrar=0;
             }
             else                         //para los ultimos ceros
             {
                 //nume=1;
                 nuevo[j]=numero[i];
                 j++;
                 if(borrar==0)
                      ultimo=j;           //guarda el ultimo indice valido
                 borrar++;
             }
     }
     if(borrar>0 && punto ==1)
         nuevo[ultimo-1]='\0';
      strcpy(numero,nuevo);     
}
//64
//CUENTA EL # DE DIGITOS ANTES Y DESPUES DE UN PUNTO (EN CADENA)
int Numeros_Punto(int opcion, char *numero) //retorna el numero de digitos antes o despues del punto decimal , esto lo decide el parametro opcion , si es 1 (el numero de digitos antes del punto decimal) en otro caso sera despues. Nota debe ser un numero valido y almacenado en caradena de caracters correctamente
{
int digitos=strlen(numero);
int contador=0,existe=0,nume,punto=0,i=0;
             for(i=0; i<=digitos; i++)
             {
                          if(numero[i]=='.')
                               {
                                   existe=1;
                                   break;
                               }
             }
             if(opcion==1)
             {
                  if(existe)
                       return i;
                  else
                       return digitos;
             }
             else
             {
                   if(existe)
                       return digitos-i-1;
                   else
                       return 0;
             }
}
/////////////////ESTRUCTURA DE LA PILA UTILIZA EN LAS SIG FUNCIONES/////////////
typedef struct STACKNODE{
       int data;
       struct STACKNODE *nextptr;
       }STACKNODEPTR;
////////////////////////////////////////////////////////////////////////////////

//65
//INSERTA UN ELEMENTO ENTERO EN LA PILA
void push(STACKNODEPTR **topptr, int info)
{
     STACKNODEPTR *copia=*topptr;
     STACKNODEPTR *newptr=NULL;   
     newptr= new STACKNODEPTR;
     newptr =(STACKNODEPTR *)malloc(sizeof(STACKNODEPTR));
     if(newptr != NULL)
     {
          newptr->data=info;
          if(*topptr==NULL)
              newptr->nextptr=NULL;
          else
              newptr->nextptr= copia;
          copia=newptr;
          *topptr=copia;
     }
     else
          printf("No hay memoria disponible\n");
}
//66
//Vacia la pila referenciad por el tope
int vacia(STACKNODEPTR **tope)
{
    if(tope != NULL)
       {
            STACKNODEPTR *doble=*tope;
            doble=doble->nextptr;
            free(*tope);
            *tope=doble;
       }
}
//67
//Imprime el contenido de una pila referenciada por el puntero currentptr hasta q encuetre NULL
void imprime(STACKNODEPTR *currentptr)
{
     if(currentptr == NULL)
          printf("La pila esta vacia\n");
     else
     {
     while(currentptr != NULL)
     {
          printf("%d-->",currentptr->data);
          currentptr=currentptr->nextptr;
     }
     }
     printf("\n");
}
//DEFINICION DE LA PILA a USARSE EN LA FUNCION DE POSFIJA A INFIJA
typedef struct P
{
     char cadena[100];                                                          //SI se pone char *cadena, hay problemas con el compilador
     int parentesis;
     int corchetes;
     int llaves;
     struct P *sig;
}PILA;
PILA* NuevoElemento()                                                           //Retorna puntero al nuevo espacio en memoria
{
      PILA *nuevo=(PILA *)malloc(sizeof(PILA));
      if(!nuevo)
         error();
      nuevo->parentesis=0;
      nuevo->corchetes=0;
      nuevo->llaves=0;
      nuevo->sig=NULL;
      return nuevo;
}
//68
//INSERTA UN ELEMENTO EN ESTE CASO CHAR EN LA PILA
void Push(PILA **tope, char *info)                                              //Recibe por referencia el apuntador de la pila
{
     PILA *clon= *tope;                                                                  //creamos un clon del apuntador por referencia
     PILA *nuevo=NuevoElemento();
     strcpy(nuevo->cadena,info);
     if(clon == NULL)
          nuevo->sig=NULL;
     else
          nuevo->sig=clon;
     
     clon=nuevo;
     *tope=clon;                                                                         //hasta el ultimo modificamos el apuntador por referencia
}
//69
//SACA UN ELEMENTO DE LA PILA, SE RECIBE EL APUNTADOR POR REFERENCIA
void Pop(PILA **tope)                                                           //Recibe por referencia el apuntador de la pila
{
     PILA *clon= *tope;                                                                  //creamos un clon para evitar problemas
     if(clon != NULL)
     {
     PILA *aux=clon;
     clon=clon->sig;
     free(aux);
     *tope=clon;
     }
}
//70
//VACIA TODA LA PILA
void Elimina(PILA **tope)
{
     PILA *clon= *tope;                                                         //creamos un clon para evitar problemas . trabajaremso con el clon
     while(clon != NULL)
     {
          Pop(&clon);
     }
     *tope=clon;                                                                //modificamos el apuntador original pasado por referencia
}
//71
//IMPRIME TODA LA PILA
void Imprime(PILA *tope)                                                        //El apuntador de la pila no es pasado por referencia porq no se modifica
{
     if(tope != NULL)
     while(tope != NULL)
     {
          printf("%s--->",tope->cadena);
          tope=tope->sig;
     }
     else
          printf("Pila vacia\n");
}
//72
//CONVIERTE POSICION POSFIJA A INFIJA SI PRODECE
int Pos_Inf(char *pos)    //transforma el contenido de la cadena a posicion infija, y devuelve 1; si no es valida la poscicion posfija entonces no hace nada y retorna 0
{
    Limpia_Espacios(pos,1);                                                     //elimina espacio no deseados, maximo 1 espacio intermedio para separar variables
    int i=0, espacio =0, caracter=0, operandos=0, indice=0;
    PILA *tope=NULL;
    char caden[strlen(pos)+1], temporal[2]={'!', '\0'};                         //en caden almacenara las variables
    char caden3[2]={'!','\0'};                                                  //caden2 es de [100] porq se va concatenar y debe tener el espacio sufiente para soportar una expresion grande, la caden3 se concatena despues
    char caden2[100];        
    while(pos[i] != '\0')                                                       //Recorre la cadena pos caracter por caracter hasta el nulo
    {
         if(pos[i]==' ')                                                        //si es un espacio.El espacio tiene como funcion separara variables, si hay variable sin meter en pila, entonces q la meta ya
         {
              if(caracter>0)
              {
                   caden[indice]='\0';                                               //agrega el caracter nulo a la cadena para despues meterla en la pila
                   Push(&tope,caden);   
                   operandos++;                                                 //lleva el conteo de los elementos en la pila
                   caracter=0;                                                  //lleva el conteo de la longitud de las variables en espera
                   indice=0;                                                    //lleva el conteo del indice valido para caden
              }
         }
         else if(pos[i] == '^'|| pos[i] == '*'|| pos[i] == '/'|| pos[i] == '+'|| pos[i] == '-')     //si es un operador,Tiene como funcion 2 cosas, si hay variables pendientes de meter en pila q las meta y sino y/o despues efectue la operacion
         {
              if(caracter>0)                                                    //actue como un espacio, es decir q lo meta en pila
              {
                   caden[indice]='\0';
                   Push(&tope,caden);
                   operandos++;
                   caracter=0;
                   indice=0;
              }
              if(operandos>1)                                                   //si hay almenos 2 varibles o expresiones en la pila q efectue el algoritmo
              {
                   caden2[1]='\0';
                   if((tope->parentesis==0 && tope->sig->parentesis==0) ||(tope->llaves>1 || tope->sig->llaves>1)) //si no hay parentesis en ningun operado, o almenos un operando ya tiene llaves; significa que cierre la expresion con parentesis, e indique en el operando q va quedar en la pila q contiene parentesis
                   {
                        caden2[0]='(';
                        caden3[0]=')';
                        tope->sig->parentesis=1;                                //este va a quedar en la pila. El apuntado por tope se va a fusionar con este.
                   }
                   else if((tope->parentesis==1 || tope->sig->parentesis==1) && (tope->corchetes==0 && tope->sig->corchetes==0))//si ya existe un parentesis en almenos 1 de los operandos , y,ninguno tiene corchetes ; entonces procede a poner corchetes
                   {
                        caden2[0]='[';
                        caden3[0]=']';
                        tope->sig->corchetes=1;                                 //este va a quedar en la pila.El tope se concatenara con este
                   }
                   else                                                         //Significa q van las llaves
                   {
                       caden2[0]='{';
                       caden3[0]='}';
                       tope->sig->llaves++;                                     //indiq q hay llaves
                       tope->sig->parentesis=0;                                 //resetea de todo nuevamente
                       tope->sig->llaves=0;
                   }
                   
                   temporal[0]=pos[i];                                          //el arreglo temporal contiene el operador, NOTA el temporal[1]='\0' siempre            
                   strcat(tope->sig->cadena,temporal);                          //concatena cadena q esta en la pila(una antes del tope) con el operador
                   strcat(tope->sig->cadena,tope->cadena);                      //vuelve a contatenar ahora con la cadena que esta en el tope
                   Pop(&tope);                                                  //saque el ultimo y por ende resta uno al contador de la pila         
                   operandos--; 
                   //esto q sigue anade los parentesis llaves o corchetes
                   strcat(caden2,tope->cadena);
                   strcat(caden2,caden3);
                   strcpy(tope->cadena,caden2);       
              }
              else                                                              //si solo hay 1 operador o menos entonces error ya que no tiene con q operandos efectuar la operacion
                   return 0;
         }
         else
         {
              caden[indice]=pos[i];                                             //En otro caso es una letra y que la meta en caden
              indice++;                                                         //El indice cambia
              caracter++;                                                       //Hay una variables de por lo menos 1 caracter en espera
         }
         i++;                                                                   //Cambia i y continua con el siglo
    }//fin del while
    if(operandos>1 || tope==NULL)                                               //Ya fuera del ciclo pregunta, si hay mas de 1 operando o expresion, si la hay significa que faltaron operadores y no es valido eso, o, pregunta si la pila esta vacia; este caso significa que nunca inserto nada
         return 0;
         
    else                                                                        //si entra aca es porq todo va bien solo falta eliminar los caracteres separadores<<< ( [ { >>>del principio y del final y listo
         {
         caden3[0]='(';                                                         //reutilizamos caden3 y le ponemos ( porq hay conflicto en el if con el parentesis
         if(tope->cadena[0]== caden3[0] || tope->cadena[0]=='[' || tope->cadena[0]== '{') //evalua si el primer caracter es un separador y si lo es debemos eliminarlo
         {
              tope->cadena[0]=' ';                                              //lo sobreescribe con espacio
              for(i=0;tope->cadena[i]!='\0';i++);                               //lleva hasta el ultimo (tambien hay q eliminarlo)
              tope->cadena[i-1]=' ';
              Limpia_Espacios(tope->cadena,0);                                  //limpia los espacio primero y ultimo.
         }
         
         strcpy(pos,tope->cadena);                                              //la cadena esta lista, es la apuntada por tope; la copie en la cadena pasada por referencia                         
         Elimina(&tope);                                                        //liberamos el contenido de la pila                                         
         return 1;                                                              
         }
}
//73
//FUNCION QUE PIDE AL USUARIO N NUMEROs Y RETORNA EL MAS PEQUENO
float maspeque(void)
{
int w,s,c;
float x,z;
printf("CUANTOS NUMEROS VAS A INTRODUCCIR\n");	
scanf("%d",&s);
for (c=1; c<=s; c++)
	{
	printf("EL NUMERO %d DE LA SECUENCIA ES\n",c);
	scanf("%f",&x);
	if (c>=2)
		if(z<x)
			z=z;
		else
			z=x;
	else
		z=x;
	}  
                                                                                //printf("EL NUMERO MAS PEQUEÃ‘O QUE INTRODUSISTE FUE:%f",z);
                                                                                //system("PAUSE");
system("cls");
return z;
}
//74
//FUNCION QUE LEE UNA CADENA Y LEE CARACTER A CARACTER CON SU VALOR DECIMAL
void caracter_numero ()
{
      char car=0;
      system("cls");
      printf("Introduzca una cadena de texto\n (Para terminar Ctrl+c\n");
      while((car=getchar())!=EOF)                                               //getchar cada vez que se ejecute leera el siguiente caracter del ultimo leido devuelve EOF si detecta el final del fichero
      {
         if (car !='\n')                                                        //se pone porque getchar antes de devolver EOF lee el caracter \n como caracter valido
            printf("El codigo Ascii de %c es %d\n", car, car);                  //putchar es para escribir un caracter y getchar para leer
      }
      system("PAUSE");
}
//75
//FUNCION QUE PASA UN ENTERO A CADENA maximo 9 digitos
void numero_cadena(char m[],int n)
{
     int suma=0,d,x,y,i;
     d=digitos(n);
    // m[d+1]='\0';
     m[d]='\0';                                                                 //el ultimo es caracter nulo en toda cadena
     for(x=1;x<=d;x++)
     {
                      y=(n/pow(10,d-x)) - suma;
                      m[x-1]=y;
                      suma= suma + m[x-1];                                      //en suma se iran sumando los numero por eso solo multiplico por 10 cada vez
                      suma=suma*10;
     }
    for(x=1;x<=d;x++)
     {
                      switch (m[x-1])
                      {
                                  case 0:
                                  {
                                  m[x-1]=48;
                                  break;
                                  }
                                  case 1:
                                  {     
                                  m[x-1]=49;
                                  break;
                                  }
                                  case 2:
                                  {
                                  m[x-1]=50;
                                  break;
                                  }
                                  case 3:
                                  {
                                  m[x-1]=51;
                                  break;
                                  }
                                  case 4:
                                  {
                                  m[x-1]=52;
                                  break;
                                  }
                                  case 5:
                                  {
                                  m[x-1]=53;
                                  break;
                                  }
                                  case 6:
                                  {
                                  m[x-1]=54;
                                  break;
                                  }
                                  case 7:
                                  {
                                  m[x-1]=55;
                                  break;
                                  }
                                  case 8:
                                  {
                                  m[x-1]=56;
                                  break;
                                  }
                                  case 9:
                                  {
                                  m[x-1]=57;
                                  break;
                                  }
                      }
     }
}  
//76
//TRASFORMA DE ENTERO 1-99 A ROMANO
void numero_romano(int numero,char arreglo[])
{
     if(numero>99 || numero<1)
                  arreglo[0]='\0';
     else
     {
     int contador;
     int x,y,digitosn,ndigiton;
     char unidad,cinco,decena;
     digitosn=digitos(numero);
     contador=0;
     for(x=1;x<=digitosn;x++)                                                   //FOR++++++++++++++++++++ciclo principal, lo repite 2 0 1 vez; dependiendo del numero decimal
     {
          if((digitosn-x)>0)                                                    //REPRESENTAR LA POSICION DEL DIGITO+++++++++++++si el numero es mayor a 10. Aca se define el algoritmo y logica de numeros romano
          {
                unidad= 'X';
                cinco= 'L';
                decena= 'C';
          }
          else if ((digitosn-x)==0)                                             //si el numero es menor a 10 o si se ejecuto el ciclo principall por segunda vez
          {
               unidad= 'I';
               cinco= 'V';
               decena= 'X';
          }          
          ndigiton=digito(numero,x);                                            //separa el digito de izquierda a derecha
          switch (ndigiton)                                                     //REGLA UNIVERSAL  ++++++++++++++++++++se deja que el usuario las interprete con ayuda del apartado de "representar la posicon del digito"
          {
                case 1: case 2: case 3:                                         //siempre que sea 1 2 0 3 se ejecutara sin importar que represente a decenas o unidad; es decir sin importar que el numero decimal tenga 2 o un digito
                     {
                             for(y=1;y<=ndigiton;y++)
                             {
                                   arreglo[contador]= unidad;                   //se va aguardando en el arreglo char
                                   contador++;
                             } 
                             break;                                             //necesario por definicion del switch
                     }
                case 4:                                                         //la misma logica para el cuadro, lo que cambia para decir que son decenas o unidades son los if del inicio del ciclo
                     {
                             arreglo[contador]=unidad;
                             contador++;
                             arreglo[contador]=cinco;
                             contador++;
                             break;
                     }
                case 5:
                     {
                             arreglo[contador]=cinco;
                             contador++;
                             break;
                     }
                case 6: case 7: case 8:
                     {
                             arreglo[contador]=cinco;
                             contador++;
                             for(y=1;y<=ndigiton-5;y++)
                             {
                                  arreglo[contador]=unidad;
                                  contador++;
                             }
                             break;
                     }
                case 9:
                     {
                             arreglo[contador]=unidad;
                             contador++;
                             arreglo[contador]=decena;
                             contador++;
                             break;
                     }
          }
     }
     arreglo[contador]='\0';                                                    //finaliza la cadena cuado acabo el ciclo for principal
     }
}
//77
//IMPRIME EL MES DE UN ANO
void calendario(int mes, int ano)                                               //el primer dia de 1990 fue lunes en base a ello se asigno 1 al lunes, hasta 7 domingo. Con ello se inciaron 2 ciclos que cuentan los dias transcurridos de 1990 hasta un mes antes del solicitado. y a esta cantidad le resta de 7 en 7 hasta obtener un numero en rango del 1al7.Si es 1 el numero significa que el MES ANTERIOR AL SOLICITADO ACABO EN LUNES, y el CALENDARIO debe de empezar en Martes;POR ESO le sumo 1 a la cantidad total de dias antes de restarle multiplos de 7.Finalmente resta imprimir en forma de tabla.
{
     if(mes<1||mes>12)
           printf("Mes invalido\n");
     else if (ano<1990|| ano>100000)
           printf("Ano invalido\n");
     else                                                                       //ejecuta el proceso completo
     {
         int mes_predeterminado[12]={31,0,31,30,31,30,31,31,30,31,30,31};       //dias que tienen los meses, 0 para febrero porque no se si es 28 o 29, lo averiguare con la funcion bisiesto
         int suma_anos=0,suma_meses=0,ano_predeterminado=1990,diferecia,contador=1,x,y,diferencia,suma_total,dias_imprimir;
         
         for(ano_predeterminado;ano_predeterminado<ano;ano_predeterminado++)    //ciclo que cuenta cuantos anos han pasado desde 1990 hasta 1 antes del solicitado, y por cada ano suma 365 o 366 en funcion del ano                                                                                      
         {
              if(bisiesto(ano_predeterminado)==1)
                   suma_anos=suma_anos+366;
              else
                   suma_anos=suma_anos+365;
         }
         
         for(x=0;x<mes-1;x++)                                                   //ciclo que suma los dias de los meses hasta 1 antes del solicitado
         {
              if(x==1)
              {
                      y=bisiesto(ano);
                      if(y==1)
                              mes_predeterminado[1]=29;
                      else
                              mes_predeterminado[1]=28;
              }
              suma_meses=suma_meses+ mes_predeterminado[x];
         }
         
         suma_total=suma_anos+suma_meses;
         diferencia=suma_total+1;                                               //suma 1 para que empieze en el dia solicitado
         
         while(diferencia>7)                                                    //ciclo que resta de 7 en 7 hasta obtener un numero del 1-7 y ver en que dia empieza dicho mes
               diferencia=diferencia-7;
               
         printf("L\tM\tMi\tJ\tV\tS\tD\n");
         for(x=1;x<diferencia;x++)                                              //ciclo que imprime tabulaciones dependiendo del dia inicial del mes
         {
               printf("\t");
               contador++;
         }
         
         dias_imprimir=mes_predeterminado[mes-1];                               //determina si imprime 28 o 29
         if(dias_imprimir==0)
              dias_imprimir=bisiesto(ano)+28;
         
              
         for(x=1;x<=dias_imprimir;x++)                                          //ciclo que imprime el mes
         {
              printf("%d\t",x);
              if(contador%7==0)
                   printf("\n");
              contador++;
         }
         printf("\n");
     }
}
//78
//FUNCION QUE IMPRIME EL CALENDARIO DE UN ANO
void calendario_2(int ano)
{
int x;
      for(x=1;x<=12;x++)
      {
         switch(x)
         {
                  case 1:
                  {
                        printf("\nENERO\n");
                        break;
                  }
                  case 2:
                  {
                        printf("\nFEBRERO\n");
                        break;
                  }
                  case 3:
                  {
                        printf("\nMARZO\n");
                        break;
                  }
                  case 4:
                  {
                        printf("\nABRIL\n");
                        break;
                  }
                  case 5:
                  {
                        printf("\nMAYO\n");
                        break;
                  }
                  case 6:
                  {
                        printf("\nJUNIO\n");
                        break;
                  }
                  case 7:
                  {
                        printf("\nJULIO\n");
                        break;
                  }
                  case 8:
                  {
                        printf("\nAGOSTO\n");
                        break;
                  }
                  case 9:
                  {
                        printf("\nSEPTIEMBRE\n");
                        break;
                  }
                  case 10:
                  {
                        printf("\nOCTUBRE\n");
                        break;
                  }
                  case 11:
                  {
                        printf("\nNOVIEMBRE\n");
                        break;
                  }
                  case 12:
                  {
                        printf("\nDICIEMBRE\n");
                        break;
                  }
         }
         calendario(x,ano);
      }
      system("PAUSE");
}
