#include <iostream>
#include <stack>
using namespace std;

// ������ ����������� ������� - ���������
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// ��������� ������ ����� ��� ������ ����������
void simulateStack(int n) {
    stack<int> callStack; // ��������� ����� �������
    while (n > 0) {
        callStack.push(n); // ��������� ��������� �������
        n--;               // ��������� � ���������� ������
    }

    int result = 1;
    while (!callStack.empty()) {
        result *= callStack.top(); // �������� ������� �����
        callStack.pop();           // ������� ��� �� �����
    }

    cout << "Factorial result using simulated stack: " << result << endl;
}

int main() {
    int num = 5;
    cout << "Factorial using recursion: " << factorial(num) << endl;
    simulateStack(num);
    return 0;
}
