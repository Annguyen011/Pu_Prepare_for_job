#include <bits/stdc++.h>

using namespace std;

void vi_du_sort_1()
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
    // 16 
}
#pragma binary search

// // Binary Search    
// void binarySearch()
// {

// }

// int dem(int n)
// {
//     if(n == 0)
//         return 0;
//     int ans = 0;
//     while(n != 0)
//     {
//         int r = n % 10;
//         if(r == 0 || r == 6 || r == 8)
//         ans++;
//         n /= 10;
//     }
//     return ans;
// }

// bool cmp(int a, int b)
// {
//     if(dem(a) != dem(b))
//         return dem(a) > dem(b);
//     return a < b;
// }
#pragma endregion
int main(int argc, char const *argv[])
{
    
    return 0;
}
