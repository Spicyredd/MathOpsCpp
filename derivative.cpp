#include <iostream>
using namespace std;

class Variable
{
private:
    float val;
    float dot;

public:
    Variable(float val, float dot = 0)
    {
        this->val = val;
        this->dot = dot;
    }
    Variable operator+(Variable other)
    {
        float new_val = this->val + other.val;
        float new_dot = this->dot + other.dot;
        return Variable(new_val, new_dot);
    }
    Variable operator+(float other)
    {
        Variable constant(other, 0);
        return *this + constant;
    }
    Variable operator*(Variable other)
    {
        float new_val = this->val * other.val;
        float new_dot = (this->dot * other.val) + (this->val * other.dot);
        return Variable(new_val, new_dot);
    }
    Variable operator*(float other)
    {
        Variable constant(other, 0);
        return *this * constant;
    }
    friend std::ostream &operator<<(std::ostream &os, const Variable &obj);
};

ostream &operator<<(ostream &os, const Variable &obj)
{
    os << "Variable(val=" << obj.val << ", dot=" << obj.dot << ")";
    return os;
}

int main()
{
    Variable x(4, 1);
    Variable term_1 = x * x;
    Variable term_2 = x * 3;
    Variable term_3 = 5;
    Variable result = term_1 + term_2 + term_3; // x^2+3x+45
    cout << result;
    return 0;
}