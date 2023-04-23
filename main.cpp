#include <algorithm>
#include "inout.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    read(vec);
    sort(vec.begin(), vec.end());
    print(vec);

    return 0;
}

