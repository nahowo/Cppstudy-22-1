#include <iostream>

using namespace std;

int main()
{
    int x, sum;
    while(1)
    {
        cout << "정수를 입력하세요: ";
        cin >> x;
        sum+=x;
        if (x==0)
            break;
    }
    cout << sum << endl;
    return 0;
}
