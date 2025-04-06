#include <string>
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    const string s1 = "qwertyuiop";
    const string s2 = "asdfghjkl;";
    const string s3 = "zxcvbnm,./";

    char l; cin >> l;
    string s, s0 = ""; cin >> s;

    int b;
    if (l == 'R'){
        b = -1;
    }
    else{
        b = 1;
    }

    for (int i = 0; i < s.length(); i++){
        if (find(s1.begin(), s1.end(), s[i]) != s1.end()){
            auto g = find(s1.begin(), s1.end(), s[i]);
            s0 += s1[distance(s1.begin(),g)+b];
        }
        else if (find(s2.begin(), s2.end(), s[i]) != s2.end()){
            auto g = find(s2.begin(), s2.end(), s[i]);
            s0 += s2[distance(s2.begin(),g)+b];
        }
        else if (find(s3.begin(), s3.end(), s[i]) != s3.end()){
            auto g = find(s3.begin(), s3.end(), s[i]);
            s0 += s3[distance(s3.begin(),g)+b];
        }
    }
    cout << s0;
}

