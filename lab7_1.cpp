#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string text;
    cout << "Input text: ";
    cin >> text;
    cout << "Reversed text: " << func1(text) << endl;
    string rtext=func1(text);
    string uptext=func2(text);
    string uprtext=func2(rtext);
       if (uptext==uprtext)
        {
           cout << "Palindrome: " << "Yes";
        }
        else
        {
            cout << "Palindrome: " << "No";
        }
    return 0;
}
