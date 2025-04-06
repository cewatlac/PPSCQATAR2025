#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<pair<string, int>> result_log;
    
    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;
        
        if (command == "insert") {
            int value;
            cin >> value;
            pq.push(value);
            result_log.push_back({"insert", value});
        }
        else if (command == "removeMin") {
            if (pq.empty()) {
                result_log.push_back({"insert", 1});
            }
            else {
                pq.pop();
            }
            result_log.push_back({"removeMin", 0});
        }
        else if (command == "getMin") {
            int target_min;
            cin >> target_min;
            
            while (!pq.empty() && pq.top() < target_min) {
                pq.pop();
                result_log.push_back({"removeMin", 0});
            }
            
            if (pq.empty() || pq.top() > target_min) {
                pq.push(target_min);
                result_log.push_back({"insert", target_min});
            }
            
            result_log.push_back({"getMin", target_min});
        }
    }
    
    cout << result_log.size() << "\n";
    for (auto& op : result_log) {
        cout << op.first;
        if (op.first != "removeMin") cout << " " << op.second;
        cout << "\n";
    }
    
    return 0;
}
