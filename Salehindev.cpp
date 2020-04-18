#include <iostream>
using namespace std;
int arcFactoriel(int n)
{
    bool stat=true;
    int i=1;
    while(stat==true)
    {
        if(r==1)
        {
            cout <<i<<"! = "<<n<<endl;
            stat=false;
        }
        else
        {
            if(r<1)
            {
                cout<<"Pas de factoriellle pour cette valeur"<<endl;
                return 0;
            }
            else
            {
                r=r/(i+1);
                i++;
            }
        }
    }
    return i;
}