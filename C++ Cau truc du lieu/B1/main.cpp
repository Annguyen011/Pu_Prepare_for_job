#include<iostream>
#include<vector> // Chỉ cần thư viện này là đủ dùng vector rồi

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    // // Vòng lặp duyệt qua từng con số trong vector
    // for(auto x : v)
    // {
    //     cout << x << " ";
    // }

    // vector<int>::iterator it; // Khai báo con trỏ iterator
    // for(it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " "; // In ra giá trị mà con trỏ iterator đang trỏ tới
    // }
    
    return 0;
}