#include <iostream>

using namespace std;

const string luni[] = {"ianuarie", "februarie", "martie", "aprilie", "mai", "iunie", "iulie", "august",
                 "septembrie", "octombrie", "noiembrie", "decembrie"
                };

int main()
{
    int n;
    cin >> n;
    cout << luni[n - 1] << '\n';
}
