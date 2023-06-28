/*
あなたは椅子の座面の適切な高さを計算するプログラムを作成しています。
一般的に適切な座面の高さは身長の 4 分の 1 と言われているのでそれに従って計算することにしました。

身長 n cmが与えられるので 4 で割った数値を出力してください。

入力例 1 の場合
172
身長 172 cmを4で割ると 43 となるので
43
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input;
    cin >> input;
    cout << input / 4;
    return 0;
}