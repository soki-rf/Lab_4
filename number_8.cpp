#include <iostream>
#include <vector>
#include <string>

using namespace std;

string join(const vector<std::string>& m, const string& sep){
    string s = "";
    for(int i = 0; i < m.size(); ++i){
        s += m[i] + sep;
    }
    return s;
}

int main(){
    vector<std::string> arr = {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};
    string str = join(arr, " ");
    cout << str;
    return 0;
}
