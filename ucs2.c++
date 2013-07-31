#include <codecvt>
#include <iostream>
#include <string>

using namespace std;

wstring_convert<codecvt_utf8<char16_t>, char16_t> convert;

int main() {
    u16string msg { 0x043F, 0x0438, 0x0441, 0x044C, 0x043A, 0x0430 };
    cout << convert.to_bytes(msg) << endl;
}
