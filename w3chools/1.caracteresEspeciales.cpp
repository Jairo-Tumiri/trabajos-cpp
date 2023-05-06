#include <iostream>

using namespace std;

int main()
{
    string x = "Caracteres especiales";

    string txt = "We are the so-called \"Vikings\" from the north."; /* We are the so-called "Vikings" from the north. 46 */
    // string txt = "It\'s alright.";  /* It's alright. 13 */
    // string txt = "The character \\ is called backslash."; /* The character \ is called backslash. 36 */

    cout << txt + " " << txt.length();
    return 0;
}