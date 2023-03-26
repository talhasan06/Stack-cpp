#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    stack<int> s;
    int a[4] = {1, 3, 2, 4};
    int size = 4;
    for (int i = 0; i < size; i++)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.size() > 0 && s.top() > a[i])
        {
            v.push_back(s.top());
        }
        else if (s.size() > 0 && s.top() <= a[i])
        {
            while (s.size() > 0 && s.top() <= a[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}