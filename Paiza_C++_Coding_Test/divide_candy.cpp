/*
箱の中に飴が N 個あります。この飴を 10 人で分けるとき、1 人何個もらえますか？

入力例 1 の場合
3000
3000 個を 10 人で分けるので、
300
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input;
    cin >> input;
    cout << input / 10;
    return 0;
}