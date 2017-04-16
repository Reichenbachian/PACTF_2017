// PotentialSolution
// compiled with splc.py (c) Sam Donow 2013-2015
#include <stdio.h>
#include <math.h>
#include "include/mathhelpers.h"
int condition = 0;
char inputbuffer[BUFSIZ];
int main() {

int Othello = 1;
int Macbeth = 0;
act1: {
goto act_1_scene1;
}
act_1_scene1: {
;
Macbeth = 0 ;

goto act_1_scene2;

}
act_1_scene2: {
Othello = getchar();
Macbeth = (Macbeth + 1) ;
condition = (Othello) == (-1);
if (!condition) {
 goto act_1_scene2;
 }
Macbeth = (Macbeth - 1) ;

goto act_1_scene3;

}
act_1_scene3: {
fprintf(stdout, "%c", (char)Othello);
Macbeth = (Macbeth + -1) ;
condition = (Macbeth) > (0);
if (condition) {
 goto act_1_scene3;
 }

goto act_1_scene4;

}
act_1_scene4: {
;

}
}
