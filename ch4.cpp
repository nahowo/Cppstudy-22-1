#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y, answer;
    string op;
    cout << "ù��° ������ �Է��Ͻÿ�: ";
    cin >> x;
    cout << "�ι�° ������ �Է��Ͻÿ�: ";
    cin >> y;
    cout << "�����ڸ� �Է��Ͻÿ�: ";
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
        cout << "�����ڸ� �߸� �Է��Ͽ����ϴ�. \n";
        return 0;
    cout << x << op << y << "=" << answer << "\n";
    return 0;
}
