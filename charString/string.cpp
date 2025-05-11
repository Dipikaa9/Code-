#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
//char arr[5]={'c','o','d','e','\0'};
//char arr[]="abc";
//char arr[4]="abc";
//cout<<arr<<endl;

//char word[30];
//cin >> word;
//cout << "your word : " << word<<endl;
//cout << "length: "<< strlen(word)<<endl;
char word[30];
cin.getline(word,30,'*');
cout << "your word : " << word<<endl;
cout << "length: "<< strlen(word)<<endl;
return 0;

}