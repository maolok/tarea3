#include <iostream>
#include <string.h>

using namespace std;

string codigomorse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
char abecedario[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string frase;
void convertirmorse(string frase1)
{

for(char c : frase1)
{
    int i;
    for(i=0;i<26;i++)
    {

        if (c == abecedario[i])
        {


          cout<<codigomorse[i];
          cout<<" ";


        }


    }

    if (c == ' ')
    {

        cout<<"/";

    }

}


}
int main()
{
   cout<<"INGRESE FRASE : "<<endl;
   getline(cin,frase);

   convertirmorse(frase);
   cout<<endl;


}





