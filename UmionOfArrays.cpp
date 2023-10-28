#include <bits/stdc++.h>
using namespace std;
// void getUnion(int a[], int n, int b[], int m)
// {
//     int min = (n > m) ? m : n;
//     set<int> s;

//     for (int i = 0; i < min; i++)
//     {
//         s.insert(a[i]);
//         s.insert(b[i]);
//     }

//     if(m > n)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             s.insert(b[i]);
//         }
        
//     }

//     else if(m < n)
//     {
//         for(int i =0; i<n; i++)
//         {
//             s.insert(a[i]);
//         }
//     }

//     for(auto itr = s.begin(); itr!=s.end(); itr++)
//     {
//         cout << *itr << " ";
//     }
    
// }



// Another Approach

void getUnion(int* a, int n, int* b, int m)
{
 
    // Defining map container mp
    map<int, int> mp;
 
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i });
 
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
    cout << "The union set of both arrays is :" << endl;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first<< " "; // mp will contain only distinct
                     
}
 
// Driver Code
int main()
{
    int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };
 
    getUnion(a, 9, b, 10);
}