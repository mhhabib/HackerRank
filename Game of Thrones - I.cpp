#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {

    int word[26]={0};
    for(int i=0;i<s.size();i++){
        word[s[i]-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(word[i]%2==1)
            cnt++;
    }
    if(cnt>1)
        return "NO";
    else
        return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
