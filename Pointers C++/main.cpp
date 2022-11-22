#include <iostream>
using namespace std;
int parameterMystery5(int* d, int e, int& f);

int main()
{
    int b = 0, d = -1, e = 5, f = 2;
    b = parameterMystery5(&d, e, f);
    parameterMystery5(&f, d, e);
    parameterMystery5(&b, f, d);

    cout << d << " " << e << " " << f << " " << b << endl;
    cout << endl;

    return 0;
}
int parameterMystery5(int* d, int e, int& f)
{
    f += 10;
    *d = e + 2;
    e--;
    cout << e << " " << d << " " << *d << " " << f << endl;
    return e + f;
}
