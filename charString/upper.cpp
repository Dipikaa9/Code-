#include <iostream>
#include <cstring>
using namespace std;
void toUpper (char *str, int n) {
    for (int i = 0; i < n; i++) {
        char ch=str[i];
        if(ch>='A'&& ch<='Z'){
            continue;
        }
        else{
            str[i]=ch - 'a' + 'A';
        }
        }
    }
int main() {
    char arr[30]="ApPle";
    toUpper(arr, strlen(arr));
    cout<< arr<<endl;
     return 0;
}
