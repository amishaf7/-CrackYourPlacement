class Solution {
public:
    int check(char op) {
        if (op == '+' || op == '-') return 1;
        if (op == '*' || op == '/') return 2;
        return 0;
    }

    int applyOp(int a, int b, char op) {
        if (op == '/' && b == 0) {
            // Handle division by zero error (e.g., throw an exception)
            return INT_MIN; // Or another appropriate error indicator
        }
        switch(op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return a / b;
        }
        return 0;
    }

    int calculate(string s) {
        stack<int> in;
        stack<char> op;
        int n = s.size();
        int i = 0;

        while (i < n) {
            if (isdigit(s[i])) {
                int num = 0;
                // Handle multi-digit numbers
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                in.push(num);
               
            } else if (s[i] == ' ') {
                i++; // Skip spaces
            } else {
                // Apply operators with higher or equal precedence
                while (!op.empty() && check(op.top()) >= check(s[i])) {
                    int a = in.top();
                    in.pop();
                    int b = in.top();
                    in.pop();
                    char oper = op.top();
                    op.pop();
                    in.push(applyOp(b, a, oper));
                }
                op.push(s[i]);
                i++;
            }
        }

        // Apply remaining operators
        while (!op.empty()) {
            int a = in.top();
            in.pop();
            int b = in.top();
            in.pop();
            char oper = op.top();
            op.pop();
            in.push(applyOp(b, a, oper));
        }

        return in.top();
    }
};
