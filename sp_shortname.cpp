#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int a;
    string first, middle, last;
    cout<<endl<<endl;
    cout << "Follow step  As --" << endl;
    cout<<"Has NO middle name than enter '0'\nHave middle name Enter '1'"<<endl;
cin>>a;
if (a==1){
    cout << "Enter name as- firstname middlename lastname." << endl;
    cin >> first >> middle >> last;
    first[0]=toupper(first[0]);
    middle[0]=toupper(middle[0]);
    cout <<first[0] << ". " << middle[0] << ". " << last << endl;
}
if (a==0){
    cout << "Enter name as- firstname lastname." << endl;
    cin >> first >> last;
    first[0]=toupper(first[0]);
    
    cout <<first[0]<< ". " << last << endl;
}
else{
    cout<<" PLEASE!!! Enter the correct value"<<endl;

}
    return 0;
}