#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q; 
    cin >> n >> q; 

    long long int a[n]; 
    long long int pre[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    pre[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }

    while(q--)
    {
        long long int l, r; 
        cin >> l >> r; 
        l--; 
        r--; 

        if(l == 0)
        {
            cout << pre[r] << "\n"; 
        }else 
        {
            cout << pre[r] - pre[l-1] << "\n"; 
        }
    }
    return 0; 
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }

    while (y--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }
    
    
    return 0;
}
*/