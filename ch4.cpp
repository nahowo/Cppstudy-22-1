#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y, answer;
    string op;
    cout << "첫번째 정수를 입력하시오: ";
    cin >> x;
    cout << "두번째 정수를 입력하시오: ";
    cin >> y;
    cout << "연산자를 입력하시오: ";
    cin >> op;
    if(op=="+")
        answer=x+y;
    else if(op=="-")
        answer=x-y;
    else if(op=="*")
        answer=x*y;
    else if(op=="/")
        answer=x/y;
    else
        cout << "연산자를 잘못 입력하였습니다. \n";
        return 0;
    cout << x << op << y << "=" << answer << "\n";
    return 0;
}
