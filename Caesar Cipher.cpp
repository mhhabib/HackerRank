#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rot;
    char a;
    string s;
    cin >> rot;
    cin >> s;
    cin >> rot;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            a = isupper(s[i])?'A':'a';
            s[i]= a + (s[i] - a + rot)%26;
        }
    }
    cout << s << endl;
    return 0;
}
