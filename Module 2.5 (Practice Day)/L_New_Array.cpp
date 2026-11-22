#include <bits/stdc++.h>
using namespace std;

void vector_input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
int main() {
    int x; 
    cin >> x; 

    vector<int> A(x);
    vector<int> B(x);

    vector_input(A, x);
    vector_input(B, x);

    vector<int> C;

    C.insert(C.begin(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());

    for(int val:C)
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
    vector<int> A(n);
    vector<int> B(n);
    vector<int> C;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    C.insert(C.begin(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());

    for(int val:C)
    {
        cout << val << " ";
    }

    return 0;
}

*/