#include <iostream>

using namespace std;

int main()
{
    int x, sum;
    while(1)
    {
        cout << "������ �Է��ϼ���: ";
        cin >> x;
        sum+=x;
        if (x==0)
            break;
    }
    cout << sum << endl;
    return 0;
}
