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
        int target_val; 
        cin >> target_val;

        auto it = find(A.begin(), A.end(), target_val);
        if(it != A.end())
        {
            cout << "found" << endl; 
        } else
        {
            cout << "not found" << endl; 
        }

    }


    // for(int val:A)
    // {
    //     cout << val << " ";
    // }

    return 0; 
}



// got TLE for my knowledge limitations; 