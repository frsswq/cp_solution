#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> a;

        for (string s : tokens) {
            if (s == "+" ||
                s == "-" ||
                s == "*" ||
                s == "/") {
                    int x = a.top(); a.pop();
                    int y = a.top(); a.pop();

                    if (s == "+") {
                        a.push(y + x);
                    } else if (s == "-") {
                        a.push(y - x);
                    } else if (s == "*") {
                        a.push(y * x);
                    } else {
                        a.push(y / x);
                    }

                    // ternary operator
                    
                    // s == "+" ? a.push(y + x) :
                    // s == "-" ? a.push(y - x) :
                    // s == "*" ? a.push(y * x) : a.push(y / x);
                }
            else {
                a.push(stoi(s));
            }
        }

        return a.top();
    }
};