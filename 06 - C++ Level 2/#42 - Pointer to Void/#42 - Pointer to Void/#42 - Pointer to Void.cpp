#include <iostream>
using namespace std;

int main() {
    void* ptr; // ÇĞÇ ÈÏí ÇÓÊÎÏã ÇáÈæíäÊÑ áíÃÔÑ Úáì äãØíä ãÎÊáİíä ÇäÊÌÑ æİáæÊ ÈÎáíå İæíÏ ÚÇã
    float f1 = 10.5;
    int x = 50;

    ptr = &f1;
    cout << ptr << endl;                                 // ÚäæÇä ÇáãÊÛíÑ f1
    cout << *(static_cast<float*>(ptr)) << endl;         // ØÈÇÚÉ ŞíãÉ f1 ÈÚÏ ÇáÊÍæíá
   // ÈÓ ÇÓÊÎÏã äæÚ ÇáÈæíäÊÑ İæíÏ ãÇ ÈŞÏÑ ÇØÈÚ ÇáŞíãÉ ãä ÎáÇá ÇáäÌãÉ İŞØ æÇÓã ÇáÈæíäÑ áÇ ÈÏí ÇÓÊÎÏã åÇáßáíÔÉ ÊÈÚ ÇáÊÍæíá áÇŞÏÑ ÇØÈÚ ÇáŞíãÉ

    ptr = &x;
    cout << ptr << endl;                                 // ÚäæÇä ÇáãÊÛíÑ x
    cout << *(static_cast<int*>(ptr)) << endl;           // ØÈÇÚÉ ŞíãÉ x ÈÚÏ ÇáÊÍæíá

    return 0;
}
