#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s=="PUSH"){
            int n; cin >> n;
            q.push(n);
        }
        if (s=="POP"){
            if (!q.empty()) q.pop();
        }
        if (s=="PRINTFRONT"){
            if (q.empty()) cout << "NONE\n";
            else cout << q.front() << "\n";
        }
    }
}
// trông ok rồi đấy
