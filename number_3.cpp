#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int argmax(vector<float>& m, int n){
    float x = numeric_limits<float>::min();
    int res, i;

    if(n == 0){
        return -1;
    }
    for(i=0; i < n; ++i){
        if(m[i] > x){
            x = m[i];
            res = i;
        }
    }

    return res;
}

int main()
{
    int n, i;
    cin >> n;
    vector<float> m(n);

    for(i=0; i < n; ++i){
        cin >> m[i];
    }

    cout << argmax(m, n);
    return 0;
}
