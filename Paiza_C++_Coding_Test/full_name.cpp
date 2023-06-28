/*
A 君の名字は paiza です。A 君の名前を表す文字列 S が与えられるので、フルネームを出力してください。

フルネームは、名字と名前を並べた文字列とします。入力例 1 の場合
neko
A 君の名字は paiza で名前が neko なので、以下の文字列を出力してください。
paizaneko
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    string input;
    cin >> input;
    cout << "paiza" << input;
    return 0;
}