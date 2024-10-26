#include <iostream>
#include <vector>

using namespace std;


bool remove_first_negative_element(vector<int>& vec, int& removed_element){
    int i;
    for(i=0;i < vec.size(); ++i){
        if(vec[i] < 0){
            removed_element = vec[i];
            vec.erase(vec.begin() + i);
            return true;
        }
    }
    return false;
}

int main(){
    int i, n, trash;
    trash = 0;
    cin >> n;
    vector<int> m(n);
    for(i=0; i < n; ++i){
        cin >> m[i];
    }

    remove_first_negative_element(m, trash);
    cout << trash;
    return 0;
}
