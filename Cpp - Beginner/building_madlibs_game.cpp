#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string color, plural_noun, celebrity;

    cout << "Enter a color" << endl;
    getline(cin, color);

    cout << "Enter a plural_noun" << endl;
    getline(cin, plural_noun);

    cout << "Enter a celebrity name" << endl;
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << plural_noun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}
