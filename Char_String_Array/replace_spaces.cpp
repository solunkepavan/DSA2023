#include<iostream>
using namespace std;

string replaceSpaces(string &str){
	
	string temp = "";

	for(int i = 0; i<str.length(); i++){
		if(str[i] == ' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}

int main(){

    string str;
    cout << "Enter a string :"<< endl;
    getline(cin, str);

    cout <<replaceSpaces(str);

}


/*#include <iostream>
using namespace std;

void replaceSpacesInPlace(string &str) {
    int spaceCount = 0;
    int length = str.length();

    // Count the number of spaces in the string
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            spaceCount++;
        }
    }

    // Calculate the new length of the string after replacements
    int newLength = length + 2 * spaceCount;

    // Start from the end of the new string
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            // Replace space with "0"
            str[i + 2 * spaceCount] = '0';
            str[i + 2 * spaceCount - 1] = '4';
            str[i + 2 * spaceCount - 2] = '@';
            spaceCount--;
        } else {
            // Move non-space characters to their new positions
            str[i + 2 * spaceCount] = str[i];
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    replaceSpacesInPlace(str);

    cout << "Modified string: " << str << endl;
}
*/