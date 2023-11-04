#include <iostream>
#include <string>

using namespace std;
int main()
{
    string nombres[3] = {"A", "B", "C"};
    int vec[3] = {3, 2, 8};
    int maxvec = 0;
    int posMax;
    int minvec = vec[0];
    int posMin;
    int posMedio;

    for (int i = 0; i < 3; i++)
    {
        if (minvec >= vec[i])
        {
            minvec = vec[i];
            posMin = i;
        }
        if (maxvec <= vec[i])
        {
            maxvec = vec[i];
            posMax = i;
        }
        if (vec[i] != maxvec && vec[i] != minvec)
        {
            posMedio = i;
        }
    }
    cout << "Primer lugar: " << nombres[posMax] << " con : " << maxvec << endl;
    cout << "segundo lugar: " << nombres[posMedio] << " con : " << vec[posMedio] << endl;
    cout << "tercer lugar: " << nombres[posMin] << " con : " << minvec << endl;

    return 0;
}