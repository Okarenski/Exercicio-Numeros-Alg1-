#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"digite um numero: "<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"nulo"<<endl;
    }
     else if (n < -1) {
        cout<<"negativo"<<endl;
    }
      else if (n > 1)
    {
        cout<<"positivo"<<endl;
    }

    return 0;
}
