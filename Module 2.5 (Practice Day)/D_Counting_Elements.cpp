#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int count = 0; 
    for(int val:A)
    {
        auto it = find(A.begin(), A.end(), val+1);
        if(it != A.end())
        {
            count++;
        }
    }
    cout << count << endl;

}