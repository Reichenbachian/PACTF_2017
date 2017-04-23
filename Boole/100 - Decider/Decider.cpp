#include <string>
#include <iostream>

using namespace std;

	
int main()
{
	string flag = "youH4veBe3nChA11engedAndSucc33d3d!Nice!";
	string shorterFlag="";
	for (int i = 0; i < flag.length(); i++) {
		if(i == flag.length() - 1) {
			shorterFlag += to_string((int)(flag[i])) + ",";
		} else {
			shorterFlag += to_string((int)(flag[i+1]+flag[i])) + ",";
		}
	}
	cout << shorterFlag << endl;
	for (int i = 0; i < shorterFlag.length(); i++) {
		shorterFlag[i] = shorterFlag[i]^'a';
	}
	cout << shorterFlag << endl;
	srand (time(NULL));
	int iSecret = rand() % 100 + 1;
	int i = 0;
	cout << iSecret << endl;
	while (i <= iSecret) {
		for (int i = 0; i < shorterFlag.length(); i++) {
			shorterFlag[i] = shorterFlag[i]^iSecret;
		}
		i++;
	}
	cout << "TEST: " << shorterFlag << endl;
	return 0;
}