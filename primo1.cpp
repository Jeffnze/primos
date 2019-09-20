#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Ingrese un numero" << endl;
    cin >> a;
    while(a%2==0 & a%3==0)
        cout << a << " No es primo" << endl;



    for(int a=1;a<=10;a++)
        if(a%2==0 or a%3==0)
            cout << a << " No es primo" << endl;
        else
            cout << a << " Es primo" << endl;
    return 0;
}
