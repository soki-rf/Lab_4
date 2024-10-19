#include <iostream>
#include <vector>

using namespace std;

float mean(const vector<float>& m){
    float sum = 0;
    for(int i = 0; i < m.size(); ++i){
        sum += m[i];
    }
    return sum/m.size();
}

int main()
{
    int n, i, x;
    double res;
    cin >> n;
    vector<float> m(n);

    for(i=0; i < n; ++i){
        cin >> m[i];
    }

    cout << mean(m);

    return 0;
}
