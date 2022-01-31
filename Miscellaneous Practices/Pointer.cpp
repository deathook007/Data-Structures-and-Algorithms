#include <iostream>
using namespace std;
void updateVar(int *a);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        updateVar(&a);
        cout << a << "\n";
    }
    return 0;
}
void updateVar(int *a)
{
    *a += 10;
}