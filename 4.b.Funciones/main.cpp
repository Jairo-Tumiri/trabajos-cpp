
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string nombre;
    int años;

    cout << "INGRESAR EL NOMBRE"<<endl;
    cin >> nombre;
    system("pause");
    cout << "INGRESAR LOS AÑOS"<<endl;
    cin >> años;
    cout << "tienes "<<años<<" años y tu nombre es: "+nombre<<endl;

    return 0;
}