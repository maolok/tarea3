#include <iostream>
using namespace std;

void datosarray1(int *array1 ,int filas,int comlunas)
{

    int i,k;
	for (i=0;i<comlunas;i++)
    {

		for(k=0;k<filas;k++)
        {

            cout<<"ingrese datos fila "<<k<<" columna "<<i<<endl;
			cin>>*array1;

			array1++;
			


        }



    }


}

void mostrararray( int *array1, int filas, int columnas)
{

    int i,k;
	for (i=0;i<columnas;i++)
    {

        for(k=0;k<filas;k++)
        {


            cout<<*array1<<"    ";
			array1++;

        }

         cout<<endl;

    }


}

 void hadamard(int *array1,int *array2, int *resultado1, int filas, int columnas)
{

	cout<<"RESULTADO HADAMARD : "<<endl;
	int i,k;
	for (i=0;i<columnas;i++)
    {

		for(k=0;k<filas;k++)
        {

			*resultado1 = ((*array1)*(*array2));

			
			cout<<*resultado1<<"   ";

			


			array1++;
	        array2++; 

        }

		cout<<endl;

    }

	

}


int main()
{
	const int filas = 4;
	const int columnas = 4;
	int resultado[filas][columnas];
	int array1[filas][columnas];
	int array3[filas][columnas];
    int array2[filas][columnas] = {

                     {1,2,3,4},
                     {1,2,3,4},
                     {1,2,3,4},
                     {1,2,3,4}


                     };

	cout<<"INGRESE MATRIZ :"<<endl;
	datosarray1(*array1,filas,columnas);

	cout<<" MATRIZ INGRESADA :"<<endl;

	mostrararray(*array1,filas,columnas);

	cout<<" MATRIZ FIJA :"<<endl;

	mostrararray(*array2,filas,columnas);

	hadamard(*array1,*array2,*resultado,columnas,filas);
    

	//aplicacion
	
	cout<<"INGRESE MATRIZ 1 :"<<endl;
	
	datosarray1(*array1,filas,columnas);

	cout<<"INGRESE MATRIZ 2 :"<<endl;

	datosarray1(*array3,filas,columnas);

	cout<<" MATRIZ 1 :"<<endl;

	mostrararray(*array1,filas,columnas);

	cout<<" MATRIZ 2 :"<<endl;

	mostrararray(*array3,filas,columnas);

	hadamard(*array1,*array3,*resultado,columnas,filas);
    
	


	
    return 0;
}
