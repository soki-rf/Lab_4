#include <iostream>
#include <vector>

using namespace std;

void sort(vector<float>& m){
    int i, j;
    float x;
    for(i=0; i < m.size(); ++i) {
        for (j = 0; j < m.size() - i - 1; ++j) {
            if (m[j] < m[j + 1]) {
                x = m[j];
                m[j] = m[j + 1];
                m[j + 1] = x;
            }
        }
    }
}


int main(){
    int i, n;
    cin >> n;
    vector<float> m(n);
    for(i=0; i < n; ++i){
        cin >> m[i];
    }
    sort(m);
    for(i=0; i < n; ++i){
        cout << m[i] << " ";
    }
    return 0;
}
