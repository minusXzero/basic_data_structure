#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q; 
    cin >> n >> q; 

    vector<int> A(n); 
    for(int i = 0; i < n; i++)
    {
        cin >> A[i]; 
    }

    for(int i = 0; i < q; i++)
    {
        int l, r; 
        cin >> l >> r; 

        cout << accumulate(A.begin() + l - 1, A.begin() + r, 0) << endl;


        // int sum = 0; 
        // for(int j = l-1; j <= r-1; j++)
        // {
        //     sum += A[j]; 
        // }
        // cout << sum << endl; 
    }


    // for(int val:A)
    // {
    //     cout << val << " ";
    // }

    return 0; 
}



// got TLE for my knowledge limitations; 