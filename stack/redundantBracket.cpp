#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || islower(ch) || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } else if (ch == ')') {
            bool isRedundant = true;

            while (st.top() != '(') {
                char top = st.top();

                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isRedundant = false;
                }
                st.pop();
            }

            if (isRedundant)
                return true;

            st.pop();
        }
    }
    return false;
}

int main() {
    string expression1 = "((a+b))";
    string expression2 = "((a+b)*c)";

    cout << "Expression 1: " << (findRedundantBrackets(expression1) ? "Redundant" : "Not Redundant") << endl;
    cout << "Expression 2: " << (findRedundantBrackets(expression2) ? "Redundant" : "Not Redundant") << endl;

    return 0;
}
