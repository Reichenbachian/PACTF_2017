#include <string>
#include <iostream>
#include <vector>
#include "md5.h"
 
using std::cout; using std::endl;
 
// int main(int argc, char *argv[])
// {
//     cout << md5("grape") << endl;
//     return 0;
// }


using std::cout; using std::endl;

// The main recursive method to print all possible strings of length "length"
void print_str(const char str[],std::string prefix,const int n, const int length) {
    if (length == 1) {
        for (int j = 0; j < n; j++) {
        	std::string daStr = prefix + str[j];
        	daStr = md5(daStr);
        	if (!daStr.compare("8468e3375746bd7ec1733a5e9d16ba6b")){
        		cout << "Found it! " << daStr << endl;
        		exit(0);
        	}
        }
    } else {
        for (int i = 0; i < n; i++) {
            print_str(str, prefix + str[i], n, length - 1);
        }
    }
}

int main() {
	for (int i = 18; i < 22; i++) {
	    int length = i;
	    char str[] = {'a', 'b', 'c'};
	    int n = sizeof str;
	    print_str(str, "", n, length);  //Note: this function works on all cases and not just the case above
	}
    return 0;
}
// md5("aa$a$aa$a$a$$$a$$")