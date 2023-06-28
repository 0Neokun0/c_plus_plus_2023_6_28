/*
A 君の 1 年前の体重は 10 kg でしたが、現在は N kg です。 A 君の体重は何 kg 増えましたか？

入力例 1 の場合
30
30 kg は 10 kg より 20 kg 増えているので
20
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input;

    cin >> input;
    cout << input - 10;
    return 0;
}