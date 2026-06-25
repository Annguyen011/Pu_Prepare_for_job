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

#pragma region 1
// void bai_tap()
// {
//     int a[10] = {1, 2, 3, 4, 5, 4, 9, 7};
//     int n = 0;
//     stable_sort(a, a + n, [](int x, int y)-> bool{
//         return x < y;
//     });
// }
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

// void bai_tap_2()
// {
//     int a[10] = {1, 2, 3, 4, 5, 4, 9, 7};
//     int n = 8;
//     int *x = find(a, a + n, 4);
//     if(x != a + n)
//     {
//         cout << "Tim thay tai vi tri: " << x - a << endl;
//     }
//     else
//     {
//         cout << "Khong tim thay" << endl;
//     }
//     sort(a, a + n);
//     auto p = binary_search(a, a + n, 4);
//     if(p)
//     {
//         cout << "Tim thay" << p << endl;
//     }
//     else
//     {
//         cout << "Khong tim thay" << endl;
//     }
// }
// void bai_tap_2()
// {
// }

int main(int argc, char const *argv[])
{
    return 0;
}
