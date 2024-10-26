#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> split(const string &str, char sep)
{
    string s = str;
    string n = "";
    vector<string> m = {};
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == sep){
            if(n.size() > 0){
                m.push_back(n);
                n = "";
            }
        }else{
            n += s[i];
        }
    }
    m.push_back(n);
    return m;
};

int main(){
    string s = "Can you can a can as a canner can can a can?";
    for(int i = 0; i < split(s, ' ').size(); ++i){
        cout << split(s, ' ')[i] << " ";
    }
}
