#include <cmath>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

// 计算两个操作数和一个运算符的结果
double calculate(double a, double b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0)
            throw runtime_error("Divide by zero error.");
        return a / b;
    default:
        throw runtime_error("Invalid operator");
    }
}

// 评估表达式，假设表达式已验证无误
double evaluateExpression(const string &expr)
{
    stack<double> values; // 存储数字
    stack<char> ops;      // 存储运算符

    for (size_t i = 0; i < expr.size(); ++i)
    {
        if (isdigit(expr[i]) || expr[i] == '.')
        {
            stringstream ss;
            while (i < expr.size() && (isdigit(expr[i]) || expr[i] == '.'))
            {
                ss << expr[i++];
            }
            --i; // 回退一个位置，因为for循环会自动++
            values.push(stod(ss.str()));
        }
        else if (expr[i] == '(')
        {
            ops.push('(');
        }
        else if (expr[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                double val2 = values.top();
                values.pop();
                double val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(calculate(val1, val2, op));
            }
            if (!ops.empty())
                ops.pop(); // 移除左括号
        }
        else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/')
        {
            while (!ops.empty() && (ops.top() != '(') &&
                   ((expr[i] == '*' || expr[i] == '/') ||
                    (ops.top() != '+' && ops.top() != '-')))
            {
                double val2 = values.top();
                values.pop();
                double val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(calculate(val1, val2, op));
            }
            ops.push(expr[i]);
        }
    }

    while (!ops.empty())
    {
        double val2 = values.top();
        values.pop();
        double val1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(calculate(val1, val2, op));
    }

    return values.top();
}

int main()
{
    string input;
    cout << "Enter an expression: ";
    getline(cin, input);

    try
    {
        double result = evaluateExpression(input);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}