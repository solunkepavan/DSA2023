#include <iostream>
#include <stack>
#include <string>

bool isValidParenthesis(const std::string& expression) {
    std::stack<char> s;

    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else {
            if (!s.empty()) {
                char top = s.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    s.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    std::string expression;
    std::cout << "Enter the expression: ";
    std::cin >> expression;

    if (isValidParenthesis(expression)) {
        std::cout << "Valid parentheses\n";
    } else {
        std::cout << "Invalid parentheses\n";
    }

    return 0;
}
 