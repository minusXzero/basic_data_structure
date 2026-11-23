#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q; 
    cin >> n >> q;
    vector<int> v(n); 
    for(int i = 0; i < n; i++)
    {
        cin >> v[i]; 
    }

    sort(v.begin(), v.end());

    while(q--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1; 

        bool found = false; 
        
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(x == v[mid])
            {
                found = true;
                break;
            }

            if(x > v[mid])
            {
                l = mid + 1; 
            }else
            {
                r = mid - 1; 
            }
        }


        cout << (found ? "found" : "not found") << endl;

    }
    return 0; 
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    long long int y;
    cin >> x >> y;
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }

    while (y--)
    {
        int value;
        cin >> value;
        bool flag = false;
        for (int i = 0; i < x; i++)
        {
            if(v[i] == value)
            {
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            cout << "found" << endl;
        } else 
        {
            cout << "not found" << endl;
        }
    }
    
    
    return 0;
}
*/