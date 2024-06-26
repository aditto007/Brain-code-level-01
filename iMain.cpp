# include "iGraphics.h"
int flag1;
int flag2;
int flag3;
int flag4;
int flag5;
int flag6;
int flag7;
int flag8;

int a=0;

char iq1[20]={ "iq\\1.bmp" };
char iq2[20]={ "iq\\2.bmp" };
char iq3[20]={ "iq\\3.bmp" };
char over[20]={ "iq\\5.bmp" };
char correct[20]={ "iq\\4.bmp" };
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw() {
	//place your drawing codes here
	iClear();
	
	//iFilledRectangle(0,0,1024,600);
	iShowBMP(0,0,iq1);
	//iShowBMP2(250,0,iq,255);
	iSetColor(0,255,0);
	
	//biSetColor(255,0,0);
	//iText(800,400,"Score",GLUT_BITMAP_HELVETICA_18);
	if(flag1){
		
		iShowBMP(0,0,correct);
		a=1;
	}	
	
 if(flag2){
		
		iShowBMP(0,0,over);
}
	if(flag3){
		
		iShowBMP(0,0,iq2);
		a=2;
}

if(flag4){
		
		iShowBMP(0,0,correct);
		a=3;
	}
	 if(flag5){
		
		iShowBMP(0,0,over);
}
if(flag6){
	iShowBMP(0,0,iq3);
		a=5;
}
if(flag7){
		
		iShowBMP(0,0,correct);
		a=6;
	}
	 if(flag8){
		
		iShowBMP(0,0,over);
}
//bif(a==5) iFilledRectangle(633,54,115,115);
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		if((mx>=330&&mx<=445&&my>=56&&my<=144)&&flag2!=1){
			flag1=1;//iq level 01 correct answer
		}
		if((mx>=448&&mx<=688&&my>=56&&my<=236)||(mx>=330&&mx<=445&&my>=145&&my<=233)&&flag1!=1){
			flag2=1;//level 1 game over
		}
		if((mx>=0&&mx<=1024&&my>=0&&my<=600)&&a==1) flag3=1;//iq level 2 appear
		if((mx>=379&&mx<=451&&my>=89&&my<=161)&&a==2) flag4=1; //iq level 02 correct answer
		if((mx>=275&&mx<=347&&my>=89&&my<=161)||(mx>=485&&mx<=557&&my>=89&&my<=161)||(mx>=591&&mx<=663&&my>=89&&my<=161)||(mx>=695&&mx<=767&&my>=89&&my<=161)&&a==2) flag5=1; //iq level 02 game over
		if((mx>=0&&mx<=1024&&my>=0&&my<=600)&&a==3) flag6=1;//iq level 3 appear
		if((mx>=633&&mx<=748&&my>=54&&my<=169)&&a==5) flag7=1; //iq level 02 correct answer
		if((mx>=279&&mx<=631&&my>=54&&my<=169)&&a==5) flag8=1; //iq level 02 correct answer
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
	      
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
	//place your own initialization codes here.
	iInitialize(1024, 600, "IQ");
	return 0;
}
