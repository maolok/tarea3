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

            cout<<"numero "<<i<<" : ";
            cout<<*array<<endl;


        *array++;

         }

}

float calcularpromedio(float *array, int size)
{
   int i;
   float promedio;
   float sumatoria = 0;


   for(i=0;i<size;i++)
   {

       sumatoria = sumatoria + *array;
       array++;

   }

   promedio = (sumatoria/size);

   cout<<"sumatoria numeros : "<<sumatoria<<endl;
   cout<<"promedio : "<<promedio<<endl;


   return promedio;





}

void calculodesviacion (float *array,int size, float promedio)
{
    int i;
    float temp1,temp2;
    float sumatoria = 0;
    for(i=0;i<size;i++)
    {


         temp1 = *array - promedio;
         temp2 = temp1*temp1;


        sumatoria = sumatoria + temp2;

        array++;

    }


     float desviacion = sqrt((sumatoria/size));
     cout<<"la desviacion estandar es : "<<desviacion<<endl;

}



int main()
{
    const int n = 100;
    float numeros[100];
    inicializararreglo(numeros,n);
    float promedio = calcularpromedio(numeros,n);
    calculodesviacion(numeros,n,promedio);




}
