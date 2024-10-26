#include <iostream>
#include <string>

using namespace std;

string replace(const string& str, const string& old, const string& new_s) {
    string s = str;
    int pos = 0;

    while ((pos = s.find(old, pos)) != string::npos) {
        s.replace(pos, old.length(), new_s);
        pos += new_s.length();
    }

    return s;
}

int main() {
    string s_2 = replace("Can you can a can as a canner can can a can?", "can", "cAN");
    cout << s_2 << endl;

    return 0;
}
