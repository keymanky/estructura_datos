
//metodo de bisesion
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	double xi,xs,fxi,fxs,fxm,xm,v,edid,edis,e;
	int x;
	xi=1;
	xs=-2;
	printf("JORGE SALGADO MENDOZA\n");
	printf("\nmetodo de bisesion\nEJERCICIO b)	F(X)=-2x^3-4x^2+4x+4\n		PRESICION 1 MILESIMA	10000 ITIENERACIONES\n\n");
	printf("\nNO. \t\t XI \t\t\t XS \t\t XM \t\tE REL\n");	//CABECERA
	system("PAUSE");


	fxi= -(2*pow(xi,3))-(4*pow(xi,2))+(4*xi)+4;		//ECUACION
	fxs= -(2*pow(xs,3))-(4*pow(xs,2))+(4*xs)+4;
	v=fxi*fxs;		//COMPROBACION DE XI Y XS
	if (v<= 0)
	{
		for(x=1;x<=10000; x++)			//ITINERACIONES QUE SON 10000 MAXIMO
		{
			xm=(xi+xs)/2;
			fxi= -(2*pow(xi,3))-(4*pow(xi,2))+(4*xi)+4;	//SE EVALUA LA ECUACION EN XI Y XM
			fxm= -(2*pow(xm,3))-(4*pow(xm,2))+(4*xm)+4;
			printf("\n%d \t %f \t\t %f \t\t %f",x,xi,xs,xm);	//IMPRIME LA ITINERACION,EL XI, EL XS Y EL XM
			if ((fxi*fxm)==0)
			{
				printf("\nla raiz es:%f",xm);//SI ES RAIZ
				system("PAUSE");
				exit(0);
			}
			if ((fxi*fxm)<0)//NEGATIVO
			{
				xi=xi;
				xs=xm;
				if(x>1)		//CALCULAR EL ERROR
				{
					edid=fabs(xm-xi);//XI =XM VIEJO
					edis=fabs(xm);
					e=(edid/edis);
					printf("\t%f",e);//IMPRIME EL ERROR
					if (e<=0.001)
						goto presicion;
				}
			}
		
			if ((fxi*fxm)>0)//SI ES POSITIVO
			{
				xi=xm;
				xs=xs;
				if(x>1)//CALCULAR EL ERROR
				{
					edid=fabs(xm-xs);//XS =XM VIEJO
					edis=fabs(xm);
					e=edid/edis;
					printf("\t%f",e);//IMPRIME EL ERROR
					if (e<=0.001)
						goto presicion;
				}
			}//IF CUANDO EL PRODUCTO ES POSITIVO
		}//CIERRA EL CICLO
	}//CIERRA EL PRIMER IF
	else
	printf("ERROR DE PROGRAMA");

presicion:
	printf("SE A ALCANZADO LA PRESICION\n");
system("PAUSE");
}

