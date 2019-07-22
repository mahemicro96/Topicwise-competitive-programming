#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;
main()
{
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        list<char> l;
        l.push_back(s[0]);
        int max = 1;
        for (int i = 1; i < s.length(); i++) {
            if (find(l.begin(), l.end(), s[i]) == l.end()) {
                l.push_back(s[i]);
            }
            else {
                while (l.front() != s[i])
                    l.pop_front();
                l.pop_front();
                l.push_back(s[i]);
            }
            if (l.size() > max)
                max = l.size();
        }
        cout << max << endl;
    }
}