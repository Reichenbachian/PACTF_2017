#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

using namespace std;
int flagLength;
int* encryptedCopy;
char* decryptedCopy;
int* encrypt(string flag) {
	encryptedCopy = new int[flagLength];
	for(int i = 0; i < flagLength; i++) {
		encryptedCopy[i] = int((flag[i]*2)^'&');
	}
	return encryptedCopy;
}
string decrypt(int* encFlag) {
	decryptedCopy = new char[flagLength];
	for(int i = 0; i < flagLength; i++) {
		decryptedCopy[i] = char((encFlag[i]^'&')/2);
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

template<typename Out>
void split(const std::string &s, char delim, Out result) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}


std::vector<std::string> split(const string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}

void decryptFile(string filePath) {
    if (true) {
        cout << "Sorry! Not gonna decrypt that for you!" << endl;
    }
    string test = readFile(filePath);
    flagLength = test.length();
    vector<string> splitVect;
    splitVect = split(test, ' ');
    cout << splitVect.at(1) << endl;
    int coded[splitVect.size()];
    for (int i = 0; i < splitVect.size(); i++) {
        coded[i] = stoi(splitVect.at(i));
    }
    string decrypted = decrypt(coded);
    cout << "Decrypted: ";
    for(int i = 0; i < decrypted.size(); i++) {
        cout << char(int(decrypted[i]));
    }
    cout << endl;
}

void encryptString(string str) {
    flagLength = str.length();
    int *encrypted = encrypt(str);
    ofstream myfile;
    myfile.open ("encrypted.txt");
    string outputStr = "";
    for(int i = 0; i < flagLength; i++) {
        outputStr = outputStr + to_string(encrypted[i])+ " ";
    }
    myfile << outputStr;
    myfile.close();
}

int main() {
    while(true) {
        cout << "IT'S MY FLAG! YOU CAN'T HAVE IT!!!!" << endl;
    }
}