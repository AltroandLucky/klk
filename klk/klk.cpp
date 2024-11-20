#include <iostream>
#include <stack>
using namespace std;

// Пример рекурсивной функции - факториал
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Симуляция работы стека при вызове факториала
void simulateStack(int n) {
    stack<int> callStack; // Симуляция стека вызовов
    while (n > 0) {
        callStack.push(n); // Сохраняем состояние функции
        n--;               // Переходим к следующему вызову
    }

    int result = 1;
    while (!callStack.empty()) {
        result *= callStack.top(); // Получаем текущий вызов
        callStack.pop();           // Удаляем его из стека
    }

    cout << "Factorial result using simulated stack: " << result << endl;
}

int main() {
    int num = 5;
    cout << "Factorial using recursion: " << factorial(num) << endl;
    simulateStack(num);
    return 0;
}
