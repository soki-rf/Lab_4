#include <iostream>
#include <vector>
#include <limits>

using namespace std;

pair<float, float> minMax(const std::vector<float>& m){
    pair<float, float> res;
    res.first = numeric_limits<float>::max();
    res.second = numeric_limits<float>::min();
    if (m.size() == 0){
        res.first = numeric_limits<float>::min();
        res.second = numeric_limits<float>::max();
        return res;
    }
    for(int i = 0; i < m.size(); ++i){
        if(res.first > m[i]){
            res.first = m[i];
        }
        if(res.second < m[i]){
            res.second = m[i];
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<float> m(n);
    for(int i = 0; i < n; ++i){
        cin >> m[i];
    }

    cout << minMax(m).first << " " << minMax(m).second << endl;
    return 0;
}
