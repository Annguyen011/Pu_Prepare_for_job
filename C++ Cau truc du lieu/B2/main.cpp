#include <bits/stdc++.h>

using namespace std;

void vi_du_sort()
{
    int a[10] = {1, 2, 3, 4, 5, 4, 9, 7};
    int n = 10;
    sort(a, a + n);
    for(auto x:a)
    {
        cout << x << " ";
    }

    char c[10] = "Hello";
    cout << c << endl;
    sort(c, c + 5);
    cout << c << endl;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
