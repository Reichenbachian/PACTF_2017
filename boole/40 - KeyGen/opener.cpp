#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
int flagLength;
int* encryptedCopy;
char* decryptedCopy;
string encrypt(string flag) {
    string retStr;
	for(int i = 0; i < flagLength; i++) {
		retStr += to_string(int((flag[i]*2)^'.')) + " ";
	}
    ofstream myfile;
    myfile.open ("encrypted.txt");
    myfile << retStr;
    myfile.close();
	return retStr;
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
int *arr;
int* splitToArr(string str) {
    std::stringstream test(str);
    std::string segment;
    std::vector<int> seglist;

    while(std::getline(test, segment, ' '))
    {
        seglist.push_back(stoi(segment));
    }
    arr = new int[seglist.size()];
    for (int i = 0; i < seglist.size(); i++) {
        arr[i] = seglist.at(i);
    }
    return arr;
}
string decrypt(string fileName) {
    while (true) {
        cout << "CAN'T MAKE ME DECRYPT IT. NOT GONNA DO IT! YOU AREN'T MY CREATOR!" << endl;
    }
    string fileContents = readFile(fileName);
    int *encFlag = splitToArr(fileContents);
	decryptedCopy = new char[flagLength];
	for(int i = 0; i < flagLength; i++) {
		decryptedCopy[i] = char((encFlag[i]^'.')/2);
	}
    cout << "Decrypted: ";
    for(int i = 0; i < flagLength; i++) {
        cout << char(int(decryptedCopy[i]));
    }
	return string(decryptedCopy);
}


int main() {
    flagLength = 16;
    // encrypt(test);
    if (1==1) {
        cout << "Sorry buddy. But I'm not gonna decrypt it for you." << endl;
        return 1;
    }
    decrypt("encrypted.txt");
    // if (flagLength == 18) {
    // 	cout << "Sorry. Not gonna decode that!" << endl;
    // 	return 1;
    // }
    cout << endl;
}