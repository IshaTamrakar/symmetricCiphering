#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

void caesar (string pt){
	string ct;
	for(int i = 0; i < pt.size(); i++){
		int x = (((int(pt[i]) - 65) + 3 ) % 26) + 65;
		string s;
		s+= (char) x;
		ct.append(s);
	}
	cout << "Plain Text: " + pt + "\nCipher Text:" + ct + " "<< endl;
	return;
}

void shift (string pt , int sv){
    string ct;
	for(int i = 0; i < pt.size(); i++){
		int x = (((int(pt[i]) - 65) + sv ) % 26) + 65;
		string s;
		s+= (char) x;
		ct.append(s);
	}
	cout << "Plain Text: " + pt + "\nCipher Text:" + ct + " "<< endl;
	return;
}

void playfair (string pdascalt){
	cout << "working.." << endl;
	return;
}

void hill (string pt){
	cout << "working.." << endl;
	return;
}

void oneTimePad (string pt){
	cout << "working.." << endl;
	return;
}

void monoAlphabetic (string pt){
	cout << "working.." << endl;
	return;
}

void polyAlphabetic (string pt){
	cout << "working.." << endl;
	return;
}

int getValue (){
	int flag = 0;
	int value;
	while(flag == 0){
		cout << "Enter Value: ";
    cin >> value;
    if (value < 1 || value > 7){
    	cout << "Enter correct value!" << endl;
    	flag = 0;
	} else {
		flag = 1;
	}
	}
	return value;
}

string upperCase(string s){
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
	return s;
}

int main()
{
    cout << "Choose Encryption Technique : \n \t 1. Caesar Cipher \n \t 2. Shift Cipher \n\t 3. Play-fair Cipher \n \t 4. Hill Cipher \n\t 5. One Time Pad \n\t 6. Mono-Alphabetic Cipher \n\t 7. Poly alphabetic Cipher" << endl;
    int value = getValue();
    string plainText;
    cout << "Enter Plain Text" << endl;
    cin >> plainText;
    plainText = upperCase(plainText);
    switch(value){
    	case 1:
    		caesar(plainText);
    		break;
    	case 2:
    		cout << "Enter Shift Value: ";
    		int shiftValue;
    		cin >> shiftValue;
    		shift(plainText,shiftValue);
    		break;
    	case 3:
    		playfair(plainText);
    		break;
    	case 4:
    		hill(plainText);
    		break;
    	case 5:
    		oneTimePad(plainText);
    		break;
    	case 6:
    		monoAlphabetic(plainText);
    		break;
    	case 7:
    		polyAlphabetic(plainText);
    		break;
 	}
 	cout << "Encryption Successfull!!!" << endl;
    return 0;
}

