#include<iostream>
#include<regex>
using namespace std;
int main()
{
  string input; 
  string idf="_[[:alnum:]]+|[a-zA-Z][[:alnum:]]+";
  string intconst="[+|-][[:digit:]]+|[0-9]+";
  string floatconst="[+|-][0-9]*\\.[0-9]+|[0-9]*\\.[0-9]+";

  string charA ="\\'[\\\\][nortb]\\'";
  string charB="\\'[\\\\][\\'\\\"\\\\]\\'";
  string charC="\\'[!@#$%^&*()_=+-|:;,.?}~`{]\\'";
  string charConst=charC+"|"+charA+"+|"+charB+"|"+charA;
 while(true)
  {
    cout<<"Enter string to check Validity: "<<endl;
    cin >> input;
    regex regstr(charConst);
    bool match = regex_match(input,regstr);

    cout<<(match?"Valid " : "Not valid ")<<endl<<endl;
  }
  system("pause");
  
};