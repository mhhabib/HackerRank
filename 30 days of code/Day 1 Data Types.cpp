#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int ii; 
    double dd; 
    string ss;
    cin>>ii;
    cin>>dd;
    cin.ignore();
    getline (cin, ss);
    cout<<i+ii<<endl;
    printf("%.1lf\n",d+dd);
    cout<<s+ss<<endl;
    return 0;
}