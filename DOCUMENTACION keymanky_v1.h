/**
*   DOCUMENTACION DE LA BIBLIOTECA DE FUNCIONES 
*   keymanky_v1.h
*
*
**/

int par_impar (int z);                          //Retorna 1 si es multiplo de 2...En otro caso retorna cero  del numero entero z.
int positivo_negativo(float n);                 //Retorna 0 si es negativo ...En otro caso retorna 1
int cuadrado(int a);                            //Retorna el cuadrado de un entero
int cubo (int jeje);                            //Retorna 3 cubo de un entero
int contar ();                                  //Retorna 2
float centigrados_farengati (float n);          //Retorna los grados fahrenheit de n grados centigrados. Nota no hay restriccion de grados centigrados
float farengati_centigrados (float n);          //Retorna los grados centrigados de n grados fahrenheit
int menu ();                                    //Imprime un menu y retorna la opcion tecleada. Si se teclea una opcion no valida entonces espera a que teclee una opcion valida. Si se teclea la opcion salir aborta inmediatamente el programa
float volumen_esfera (float r);                 //Devuelve el volumen de una esfera de radio float (r).
int edad (int a, int n);                        //Devuelve la edad, El primer parametro indica el ano ACTUAL y el segundo parametro indica el ano del NACIMIENTO . Si hay error devuelve 0.
float raiz_newton (float n, float ri, float t); //Retorna la APROXIMACION de la raiz cuadrada de un flotante calculada por el metodo de newton.El primer parametro es el Numero a calcular su raiz. El segundo Parametro indica una aproximacion de la raiz. El tercer parametro indica el error tolerado. Nota todos los parametros deben ser positivos diferentes de cero; de no ser asi no se garantiza nada
int verifica_raiz(float a,float b,float c);     //Recibe como parametros el valor de a,b,c de la formula general. Aplica tal formula y retorna 1 si hay raices reales o cero para raices imaginarias
float raiz_real2do(float a,float b,float c,int d);//Retorna una raiz de una ecuacion de segundo grado, para ello recibe a,b,c como parametros , el parametro d indica q raiz quiere devolveer si es 1 entonces se interpreta como x1 y si es 2 a x2.Si hay raices imaginarias devuelve cero. El parametro d solo puede ser 1 o 2.
float exponencial(float y);                     //Calcula e elevado a numeros pequenos pueden ser decimales. Nota el valor aproximado se calcula con la serie de Maclaurin. Esta funcion puede mandar error o cosas inesperadas checarla
int factorial (int t);                          //Calcula el factorial de un numero, este puede ser maximo 12, ya que puede traer sobredesbordamiento.NO Utiliza un metodo recursivo
float sumatoria(int i, int n, float x, float y);//Ejemplo de hacer una sumatoria en este caso el primer parametro(i) es el limite inferior y el segundo parametro es s, el limite superior.
int fecha_valida(int ano, int mes, int dia);    //Devuelve 1 si la fecha es valida o 0 en otro caso. El rango de anos es de 0-2999; mes 1-12, dia 1-31 (segun el mes). Esta funcion tambien funciona con anos bisiestos y toma en cuenta eso. El rango de los anos es facilmente cambiable.
int digitos (int n);                            //Retorna el numero de digitos de un entero positivo o negativo Entre un entero diferente de nulo y 8 digitos. Revisar el numero 99999999
int digito(int numero, int digit);              //Devuelve el digito especificado del numero dado, el primer parametro int es el numero completo, el segundo es el dijito que quiere del primer parametro.Si hay error retorna 0.  el digito 1 del numero 382 es 3, el digito 2 es 8 el digito 3 es 2. SE cuenta de izquierda a derecha.
int bisiesto (int ano);                         //Retorna 1 si el ano es bisiesto en otro caso 0
float absoluto (float n);                       //Retorna el valor absoluto de un float, la de math.h presenta problemas
void numero_arreglo(int m[],int n);             //Sobreescribe un arreglo int, cada elemento del arreglo es el numero (pasado), separado por digitos; es decir que en cada elemento del arreglo habra un digito que corresponde al numero entero pasado como argumento. Nota antes de usar esta funcion debe saber el numero de digitos para declarar un arreglo con ese numero de digitos,llame a la funcion numero de digitos.Maximo 10 digitos
int numero_tarot(int ano, int mes, int dia);    //Devuelve el numero de tarot de una persona, Puede q se pase una fecha no valida. Use la funcion de fecha valida para validar la fecha y luego pasar tal fecha a esta funcion, usa un metodo recursivo.
void triangulo_pascal(int n);                   //Imiprime el triangulo de pascal con n lineas, este n se pasa como argumento y debe estar en rango 1-40 para su buena impresion en consola
void MinusculasMayusculas(char str[]);          //Convierte la cadena de caracteres de Minusculas a -> Mayusculas.
void ordenar(char cad[][COLS_MAX],int nc);      //Ordena una matriz de cadena de caracteres, las filas representan los cadenas (cad), nota debe hacer una DEFINE de cols_Max para especificar el numero maximo de caracteres de todas las cadenas. El segundo parametro (nc) indica el numero de columnas de la matriz. Empezando en 1.
void presentar(unsigned char c);                //FUNCION Q USA Y MANIPULAS BITS
unsigned char ReflejarByte (union byte b);      //
int suma_cuadrados_n(int n)                     //Recibe el hasta que numero se quiere calcular la suma de cuadrados, retorna esta sumatoria. Si n=3 entonces retorna la suma de 1*1+2*2+3*3. N tiene q ser positivo diferente de cero.
void AsignarMem2d_d(double ***,int, int);       //Recibe como primer parametro un doble apuntador de tipo double (**p) pasado por referencia(&). El segundo parametro es #filas y el ultimo #columnas . Esta funcion asigna memoria dinamica para una matriz 2 dimensiones referenciadas por el apuntador. La matriz creada la inicializa en ceros, la matriz es de tipo double                                    
void LiberarMem2d_d(double **, int);            //Recibe como primer parametro un doble apuntador (pasado por valor<normal>), este apuntador apunta a la matriz; el segundo parametro es el numero de filas.Libera la memoria completa de las matriz dinamica creada. matriz de tipo double
void Visualizar_d(double **,int,int);           //Recibe como primer parametro el apuntador q apunta a la matriz dinamica(double apuntador tipo double), los otros 2 son #filas y #columnas. Imprime en pantalla los valores en forma de matriz de tipo double
void AsignarMem2d_char(char ***,int,int);       //Crea matriz de tipo char con parametros invertidos es decir el primero es columnas y el segundo filas, inicializa en a cada posicion
void LiberarMem2d_char(char**,int);             //igual q la de tipo double solo para char 
void Visualizar_char(char **,int);              //igual q la de tipo double solo para char  
void Inicializar2d_char(char **,int, char *);   //El primer parametro es el apuntador q apunta a matriz, el segundo es el renglon o fila a inicializar, el tercero es la cadena con q inicializare la fila de la matriz de tipo char
double Suma_Fila_d(int,double **,int);          //El primer parametro indica la fila a sumarse, el segundo es el puntero de tipo double q referencia la matriz de 2d, el ultimo parametro indica el #columnas de las matriz.Esta funcion retorna un double, sumatoria de elementos de esa fila
double Suma_Columna_d(int,double **,int);       //El primer parametro indica la columna a sumarse, el segundo el apuntador q referecia la matriz double, el ultimo indica el #filas de la matriz.
int Menor_d(double *,int);                      //Devuelve la posicion del elemento q es menor del arreglo double reprerenciado por el primer parametro y con elementos int del segundo parametro
int Mayor_d(double *,int);                      //Devuelve la posicion del elemento q es mayor del arreglo double reprerenciado por el primer parametro y con elementos int del segundo parametro
void Inicializa_Ts(double **,int);              //Inicializa la matriz triangular superior, se inicializara la matriz de acuerdo a su defincion.
void Transforma_Ts(double **,int,double *);     //Transforma una matriz de 2 dimensiones a 1 dimension
int Dimension_2d_Ts(int);                       //devuelve la dimension de una matriz triangular superior apartir del la dimension de la matriz de 1d
void Construye_Ts(double **,double*,int);       //Reconstruye la matriz triangular superior referenciada por ts, apartir de la matriz de 1d referenciada por p1d, el parametro dim_2d es igual a la dimension de la matriz de 2 dimensiones, para saber esta ultima vea la funcion anterior
int Busca_TS(int,int,int);                      //Busca el elemento correspondiente (usando una formula con los 2 primeros int, el primero es i(filas), el segundo es j(columnas)) . Esto se usa en una matriz tringaular q se paso a un arreglo unidimensional, es decir usando algoritmos de matriz poco densa. retorna la posicion correcta del arreglo de 1 dimension. N es el tamano de la matriz cuadrada triangular superior
void LeerCadenas(char **x,int nfilas);   		//Lee tantas cadenas de caracteres como nfilas haya pasado. Esta las deposita en una matriz 2dimesiones tipo char referenciadas por x. La matriz x no se debe de crear completmaente antes. Sino se crearan dinamicamente para cada fila los espacios necesarios (columnas especificas para cada fila) de tal forma que no se desperdicie espacio. Por lo tanto solo se debe declarar un doble apuntador, y despues reservar con memeoria dinamica el # de filas de tal matriz y despues utilizar esta funcion.
void OrdenarCadenas(char **x,int filas);    	//Ordena las filas de una matriz dinamica de tipo char segun sea alfabeticamente de forma descedente. De acuerdo con la tabla de ASCII, recibe un puntero que la referencia y el # de filas de dicha matriz. LO ordena con el metodo de burbuja mejorado.
int Lee(char *cadena);							//Recibe una cadena; la analiza y retorna : 0 para enteros, 1 para double , 2 para cadenas, 3 alfanumericos
void error();									//Aborta el programa. No libera la memoria que se haya pedido!!!
Grupo * Nuevo_Grupo();							//Crea espacio necesario para una estructura de tipo GRUPO. Este espacio sera retornado por un puntero del mismo tipo. Para ver la estructura grupo ver la biblioteca keymanky_v1 entre la funcion 49 y 50. //ESTO FUNCION SE RECOMIENDA NO USARLA EXPLICITAMENTE. LA USA IMPLICITAMENTE LA FUNCION INSERTAR
void Anadir_Grupo(int e, Grupo **x);			//Anade un nuevo grupo en la lista ordenada (la lista por su puesto es dinamica) con la info(de la estructura grupo) el parametro int es el grupo que se anadira
int Busca_Grupo(int x, Grupo * recorre);   		//Busca un grupo en la lista, busca el grupo x. Recibe un puntero a la lista de grupos.Retorna la posicion, empieza desde 0 hasta el ultimo elemento diferente de NULL. la posicion es como el indice.
void Imprime_Grupos(Grupo *j);					//Imprime el contenido de una lista ligada; en este caso la lista de grupos. el puntero pasado por referencia es el que referencia la lista
int Borra_Grupo(int x, Grupo ** puntero);		//Borra el grupo especificado por x o elemento de la lista. Recibe por referencia el puntero que apunta a la lista
Alumno *Nuevo_Alumno();							//Reserva nuevo espacio de memoria para un elemento de la estructura Alumno. Retorna el puntero que lo referencia. (EN LISTA LIGADA) //ESTO FUNCION SE RECOMIENDA NO USARLA EXPLICITAMENTE. LA USA IMPLICITAMENTE LA FUNCION INSERTAR
Grupo * Este(int m, Grupo *full);				//Une 2 lista Retorna un puntero. Recomiendo ver el codigo completo en el codigo 54!!!
void Anadir_Alumno(char *c,Alumno **x);			//Anade en orden alfabetico una cadena a una lista ligada en este caso tal lista tiene una estructura llamada Alumno. Recomiendo ver el codigo completo y/o la estructura Alumon
void Imprime_Alumno(Alumno *j);					//Imprime una lista ligada de cadena de caracteres con la estructura Alumno.
int Borra_Alumno(char *a,Alumno **puntero);		//Busca una cadena y la borra si es igual a la referenciada por el parametro puntero. La busca y borra si procede de una lista ligada con la estructura Alumno. Si no la encuetra retorna 0 ; si la encuentra y la borra retorna 1
int Busca_Alumno(char *a,Alumno *recorre);		//Busca una cadena en la lista ligada con estructura Alumno y referenciada por el puntero recorre. Si lo encuentra retorna la posicion borrada sino retorna -1 (la posicion empieza en cero)
void Imprime(int pos, int alum[], int prof[], char **carrera);//Arreglos paralelos; dados 3 arreglos. El indice n en los 3 arreglos sera informacion relacionada por lo tanto si digo imprime la pos 4 imprimira  el contenido del arreglo 1 en la indice de igual forma en el segundo y por ultimo en el tercero
void Limpia_Espacios(char *a,int max_espacios); //Limpia espacios no deseados de una cadena de caracteres. El numero maximo de espacio tolerados lo indica el parametro max_espacios; si quiere que toda la cadena este escrita sin espacio entonces ponga 0 en este parametro. La cadena la recibe como parametro y debe finalizar con '\0'
void Limpia_Ceros(char *numero);				//Elimina los ceros no significativos de una cadena. Para usar esta funcion es recomendable que se asegure que la cadena es un numero valido (usar la funcion LEE para hacer esto) elimina los ceros no significativos es decir los ceros antes de cualquier numero a excepcion cuando exista un punto o los ultimos ceros de un numero ejemplo 400000000.333000 y otro ceros que no significan nada
int Numeros_Punto(int opcion, char *numero);	//Retorna el numero de digitos antes del punto si la opcion es 1, si los quiere despues del punto poner 0; en el arreglo  numero; esta funcion solo la puede utilizar si sabe que la cadena tiene solo digitos validos y si se han eliminado los espacio y cero insignificativos. Si no lo ha echo revise una cuantas funciones aca arriba
void push(STACKNODEPTR **topptr, int info);		//Inserta el elemento info en la pila referenciada por topptr. La estructura de la pila la puede ver la biblioteca keymanky.v1 entre los codigos 64 y 65!!!
int vacia(STACKNODEPTR **tope);					//Vacia la pila referenciada por el tope 
void imprime(STACKNODEPTR *currentptr);			//Imprime el contenido de una pila refereciada por el puntero currentptr; (elimina todos los elementos hasta llegar al null)
void Push(PILA **tope, char *info);				//Inserta una cadena en una pila de cadenas. Para ver la defincion de la estructura busque entre los codigos 67-68 en la biblioteca keymanky.h
void Pop(PILA **tope);							//Elimina el elemento tope de la pila
void Elimina(PILA **tope);						//Vacia toda la pila 
void Imprime(PILA *tope);						//Imprime toda la pila
int Pos_Inf(char *pos);							//Tranforma de posicion posfija a infija. Retorna 0 si hay error. 1 si la conversion fue exitosa. Esta funcion utiliza la interfaz y la pila de cadenas con estructura que se encuentra entre los codigos 67-68. Ademas usa la interfaz con las funciones antes descritas!!!. El codigo completo esta en el programa 58
float maspeque(void);							//Funcion que pide al usuario n numeros y los analiza, retorna el mas pequeno y limpia la pantalla
void caracter_numero ();						//Funcion que te pide una cadena e imprime sus caracteres separados consu valor decimal
void numero_cadena(char m[],int n);				//Sobreescribe en el arreglo de caracteres un numero,digito por digito, el numero debe ser entero.
void numero_romano(int numero,char arreglo[]);	//Transforma un entero a romano el entero debe estar entre 1 -99.El Numero romano es la cadena!!!. La logica es que se ejecuta un for tantas veces como digitos tiene el numero decimal a transformar, el programa separa los digitos y los representa como decena o unidad, en base a ello define las unidades fundamentales que es 1 5 y 10 y con esto ejecuta una regla universal. Para ver esta regla ver el apartado de los casos en el switch
void calendario(int, int);                      //Funcion que imprime el mes de un ano en rango de 1990-100000. Lo imprime de forma correcta. El primer agumento es el mes(1-12) y el segundo el ano, si busca imprimir el calendario de un ano completo utilizar un ciclo.
void calendario_2(int);                         //Funcion que imprime el calendario de un ano completo.El parametro debe estar entre 1990-100000

