#include <iostream>
using namespace std;
int main () {
    int x, y, z;
    cin >> x >> y >> z;

    if (x >= y && x >= z)
    cout << "max = " << x << endl;

    else if (y >= x && y >= z)
    cout << "max = " << y << endl;

    else if (z >= x && z >= y)
    cout << "max = "<< z << endl;

    if (x <= y && x <= z )
    cout << "min = " << x << endl;

    else if (y <= x && y <= z )
    cout << "min = " << y << endl;

    else if (z <= x && z<= y)
    cout << "min = " << z << endl;

    return 0;

}