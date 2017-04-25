#include <string>
#include <iostream>

using namespace std;

	
int main()
{
	string flag = "Good Luck!";
	string shorterFlag="";
	for (int i = 0; i < flag.length(); i++) {
		if(i == flag.length() - 1) {
			shorterFlag += to_string((int)(flag[i])) + ",";
		} else {
			shorterFlag += to_string((int)(flag[i+1]+flag[i])) + ",";
		}
	}
	for (int i = 0; i < shorterFlag.length(); i++) {
		shorterFlag[i] = shorterFlag[i]^'a';
	}
	srand (time(NULL));
	int iSecret = rand() % 50 + 1;
	int i = 0;
	while (i <= iSecret) {
		for (int i = 0; i < shorterFlag.length(); i++) {
			shorterFlag[i] = shorterFlag[i]^iSecret;
		}
		i++;
	}
	cout << "Encrypted To: " << shorterFlag << endl;
	return 0;
}