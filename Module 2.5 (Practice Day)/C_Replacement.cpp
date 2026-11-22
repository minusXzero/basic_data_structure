#include <bits/stdc++.h>
using namespace std;   

void vector_input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
int main()
{
    int x; 
    cin >> x; 
    vector<int> A(x);
    
    vector_input(A, x);
    
    for(int val:A)
    {
        if(val != 0)
        {
            if(val > 0)
            {
                cout << "1" << " ";
            } else
            {
                cout << "2" << " ";
            }
        }
        else
        {
            cout << val << " ";
        }
    }
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    for(int value:x)
    {
        if(value != 0)
        {
            if(value > 0)
            {
                cout << "1" << " ";
            } else
            {
                cout << "2" << " ";
            }
        }
        else
        {
            cout << value << " ";
        }
    }
    
    
    return 0;
}
*/