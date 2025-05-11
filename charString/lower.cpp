#include <iostream>
#include <cstring>
using namespace std;
void tolower (char *str, int n) {
    for (int i = 0; i < n; i++) {
        char ch=str[i];
        if(ch>='a'&& ch<='z'){
            continue;
        }
        else{
            str[i]=ch - 'A' + 'a';
        }
        }
    }
int main() {
    char arr[30]="ApPle";
    tolower(arr, strlen(arr));
    cout<< arr<<endl;
     return 0;
}
