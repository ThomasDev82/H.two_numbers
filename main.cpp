#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, fr, cr, rr;

    cin >> x >> y;


    fr = floor(x / y);

    cr = ceil(x / y);

    rr = round(x / y);

    cout << "floor " << x << " / " << y << " = " << fr << endl;
    cout << "ceil " << x << " / " << y << " = " << cr << endl;
    cout << "round " << x << " / " << y << " = " << rr << endl;


    return 0;
}
