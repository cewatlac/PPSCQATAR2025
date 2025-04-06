#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    bool fb = false, fs = false;
    int n, s; cin >> n >> s;
    vector<pair<int,int>> buy, sell;
    for (int i = 0; i < n; i++){
        char t; cin >> t;
        if (t == 'B'){
            int a, b; cin >> a >> b;
            if (!buy.empty()){
                for (int i = 0; i < buy.size(); i++){
                    if (buy[i].first == a){
                        buy[i].second += b;
                        fb = !fb;
                        break;
                    }
                }
            }
            if (!fb){
                pair<int,int> c = make_pair(a,b);
                buy.push_back(c);
            }
            fb = false;
        }
        else {
            int a, b; cin >> a >> b;
            if (!sell.empty()){
                for (int i = 0; i < sell.size(); i++){
                    if (sell[i].first == a){
                        sell[i].second += b;
                        fs = !fs;
                        break;
                    }
                }
            }
            if (!fs){
                pair<int,int> c = make_pair(a,b);
                sell.push_back(c);
            }
            fs = false;
        }
    }
    sort(buy.begin(),buy.end(),[](auto &a, auto &b){return a.first > b.first;});
    sort(sell.begin(),sell.end(),[](auto &a, auto &b){return a.first < b.first;});

    if (!sell.empty()){
        int q1 = s;
        vector<pair<int,int>> temp;
        if (sell.size() < s){q1 = sell.size();}
        for (int i = 0; i < q1; i++){
            temp.push_back(sell[i]);
        }
        sort(temp.begin(),temp.end(),[](auto &a, auto &b){return a.first > b.first;});
        for (int i = 0; i < q1; i++){
            cout << "S " << temp[i].first << ' ' << temp[i].second << '\n';
        }
    }
    if (!buy.empty()){
        int q2 = s;
        if (buy.size() < s){q2 = buy.size();}
        for (int i = 0; i < q2; i++){
            cout << "B " << buy[i].first << ' ' << buy[i].second << '\n';
        }
    }
}
