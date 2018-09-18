#include <iostream>
#include <string>

using namespace std;

int swap(int *x)
{
    int aux;
        for( int i=0;i<10-1;i++){
         for( int j=i+1;j<10;j++){
              if (x[j]>x[i]){
                 aux=x[i];
                  x[i] =x[j];
                  x[j] =aux;
              }
         }
        }

        return *x;

}

void swap_reflejo()
{
    int num,vectorp[10];
    for(int i=0;i<10;++i)
    {
        cout<<"ingrese datos para vector"<<endl;
        cin>>num;
        vectorp[i]=num;
    }
       cout<<"el arreglo ingresado es:"<<endl;
    for(int i =0;i<10;++i)
    {
        cout<<vectorp[i]<<" ";
    }
   
    swap(vectorp);
    cout<<endl;
    for(int i=0;i<10;i++)
    {
        
         cout<<vectorp[i]<<" ";
    }
  
}

int main()
{
    swap_reflejo();
          return 0;
}