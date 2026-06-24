#include<iostream>
#include<vector> // Chỉ cần thư viện này là đủ dùng vector rồi
#include<set>

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
    set<int> s = {1, 2, 3, 4, 5, 6, 7};
    cout << *s.begin() << endl; // In ra giá trị của phần tử đầu
    cout << *s.rbegin() << endl; // In ra giá trị của phần tử
    cout << endl;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " "; // In ra giá trị mà con trỏ iterator đang trỏ tới
    }
    cout << endl;
    for(auto it = s.rbegin(); it != s.rend(); it++)
    {
        cout << *it << " "; // In ra giá trị mà con trỏ iterator đang trỏ tới
    }

    if(auto it = s.find(5); it != s.end())
    {
        cout << endl << "Tim thay 5" << endl;
    }
    else
    {
        cout << endl << "Khong tim thay 5" << endl;
    }

    if(s.count(5) > 0)
    {
        s.erase(5); // Xóa phần tử có giá trị 5
        cout << "Da xoa 5" << endl;
    }
    else
    {
        cout << "Khong tim thay 5" << endl;
    }
    
    return 0;
}