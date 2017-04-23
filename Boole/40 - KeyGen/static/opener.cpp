#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int flagLength;
int* encryptedCopy;
char* decryptedCopy;
int* encrypt(string flag) {
	encryptedCopy = new int[flagLength];
	for(int i = 0; i < flagLength; i++) {
		encryptedCopy[i] = int((flag[i]*2)^'keyz');
	}
	return encryptedCopy;
}
string decrypt(int* encFlag) {
	decryptedCopy = new char[flagLength];
	for(int i = 0; i < flagLength; i++) {
		decryptedCopy[i] = char((encFlag[i]^'keyz')/2);
	}
	return string(decryptedCopy);
}
string readFile(string path) {
	string contents;
    string line;
    ifstream myfile(path);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            contents += line;
        }
        myfile.close();
    } else cout << "Unable to open file";
    return contents;
}

int* splitToArr(string str) {
	std::stringstream test(str);
	std::string segment;
	std::vector<std::string> seglist;

	while(std::getline(test, segment, ' '))
	{
	   seglist.push_back(segment);
	}
}

int main() {
    string test = readFile("../flag.txt");
    flagLength = test.length();
    if (flagLength == 18) {
    	cout << "Sorry. Not gonna decode that!" << endl;
    	return 1;
    }
    int *encrypted = encrypt(test);
    string decrypted = decrypt(encrypted);
    cout << "Original: " << test << endl;
    for(int i = 0; i < flagLength; i++) {
    	cout << int(test[i]) << " ";
    }
    cout << endl << "Encrypted: ";
    for(int i = 0; i < flagLength; i++) {
    	cout << encrypted[i] << " ";
    }
    cout << endl;
	cout << "Decrypted: ";
    for(int i = 0; i < flagLength; i++) {
    	cout << int(decrypted[i]) << " ";
    }
    cout << endl;
}