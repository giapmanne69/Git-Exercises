#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s=="PUSHFRONT"){
            int x; cin >> x;
            dq.push_front(x);
        }
        if (s=="PRINTFRONT"){
            if (dq.empty()) cout << "NONE\n";
            else cout << dq.front() << "\n";
        }
        if (s=="POPFRONT"){
            if (!dq.empty()) dq.pop_front();
        }
        if (s=="PUSHBACK"){
            int n; cin >> n;
            dq.push_back(n);
        }
        if (s=="PRINTBACK"){
            if (dq.empty()) cout << "NONE\n";
            else cout << dq.back() << "\n";
        }
        if (s=="POPBACK"){
            if (!dq.empty()) dq.pop_back();
        }
    }
}
