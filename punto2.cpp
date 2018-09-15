#include <iostream>
#include <time.h>
#include<math.h>

using namespace std;

void inicializararreglo(float *array, int size)
{
        int i;

        srand( time(nullptr));

        for (i=0;i<size;i++)
          {




        *array = float(float(-10 + rand() % (10+ 1- (-10)))/10.0);

            cout<<"numero "<<i<<" : "<<endl;
            cout<<*array<<endl;

        *array++;

         }

}

void calculardestandar(float *array, int size)
{
   int i;
   float promedio;
   float sumatoria = 0;
   float sumatoria2 = 0;

   for(i=0;i<size;i++)
   {

       sumatoria = sumatoria + *array;

       array++;

   }

   promedio = (sumatoria/size);

   cout<<"sumatoria 1 : "<<sumatoria<<endl; //estas dos variables las saca bien
   cout<<"promedio : "<<promedio<<endl;

   float temp1,temp2;
   
   //desde aca empieza a compilar raro y sacar resultados raros
   for(i=0;i<size;i++)
   {

       temp1 = (*array - (promedio));
       cout<<"temp 1 : "<<temp1<<endl;
       temp2 = ((temp1)*(temp1));
       cout<<"temp 2 :"<<temp2<<endl;

       sumatoria2 = sumatoria2 + temp2;



      array++;

   }

// hasta aca

   float destandar = (sqrt(sumatoria2/size));

   cout<<" sumatoria 2 :"<<sumatoria2<<endl;
   cout<<" desviacion estandar : "<<destandar<<endl;

}

int main()
{
    const int n = 100;
    float numeros[100];
    inicializararreglo(numeros,n);
    calculardestandar(numeros,n);

	system("pause");


}
