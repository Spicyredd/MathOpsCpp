#include <iostream>
#include <string>
#include <functional>
using namespace std;

void definedBefore();

void printHelloWorld()
{
    cout << "Hello World I was printed from function\n";
}

void greet(string name)
{
    cout << "Hello " << name << "\n";
}

void tempFunc(function<void()> func)
{
    cout << "Passed to real Function\n";
    func();
    func();
}

int main()
{
    auto message = []()
    {
        cout << "Hello From Lambda Function\n";
        return 1;
    };

    int mes = message();
    cout << mes << "\n";
    tempFunc(message);
    tempFunc(message);
}

void definedBefore()
{
    cout << "I was defined before";
}