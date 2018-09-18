#include <iostream>

using namespace std;

const int n = 10;
int numeros[n] = {};

void ingresoarreglo()
{
    int i;
    cout<<"INGRESE LOS "<<n<<" NUMEROS PARA EL ARREGLO"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>numeros[i];


    }

}

int *mayor(int array[n])
{
     int i;
     int tempmayor = 0;
     for(i=0;i<n;i++)
         {

         if (*array > tempmayor)

         {
             tempmayor = *array;

         }


         array++;
     }

     int *mayor;
     mayor = &tempmayor;
     return mayor;


}

int *menor(int array[n], int nmay)
{
    int i;
    int tempmenor = nmay;
    for(i=0;i<n;i++)
    {

        if (*array < tempmenor)
        {

            tempmenor = *array;

        }

        array++;

    }

    int *menor;
    menor = &tempmenor;
    return menor;


}



int main()
{
    ingresoarreglo();
    int nummayor = *mayor(numeros);
    cout<<"el numero mayor del arreglo es :"<<nummayor<<endl;
    int nummenor = *menor(numeros,nummayor);
    cout<<"el numero menor del arreglo es :"<<nummenor<<endl;

    return 0;
}
