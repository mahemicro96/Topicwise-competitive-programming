#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    while (n--) {
        int e;
        cin >> e;
        stack<long long> s;
        //vector<int>a(e);
        vector<pair<long long, long long> > a(e);
        for (int i = 0; i < e; i++)
            cin >> a[i].first;
        s.push(0);
        for (int i = 1; i < e; i++) {
            if (s.empty()) {
                s.push(i);
                continue;
            }
            while (!s.empty() && a[s.top()].first < a[i].first) {

                a[s.top()].second = a[i].first;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty()) {
            a[s.top()].second = -1;
            s.pop();
        }
        for (int i = 0; i < e; i++) {
            cout << a[i].second << " ";
        }
        cout << endl;
    }
}