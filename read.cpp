#include "inout.h"


void read(vector <int> &vec)
{
    int n,a;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        vec.push_back(a);
    }
}
