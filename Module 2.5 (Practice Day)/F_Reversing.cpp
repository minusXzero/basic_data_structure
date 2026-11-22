#include <bits/stdc++.h>
using namespace std;            
int main()
{
    int x; 
    cin >> x;
    vector<int> v(x); 
    for(int i = 0; i < x; i++)
    {
        cin >> v[i]; 
    }


    reverse(v.begin(), v.end());
    for(int val:v)
    {
        cout << val << " "; 
    }
    
    return 0; 
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(auto it = v.end()-1; it >= v.begin(); it--)
    {
        cout << *it << " ";
    }
    
    return 0;
}
*/