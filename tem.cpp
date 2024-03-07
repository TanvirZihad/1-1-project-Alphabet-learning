# include "iGraphics.h"

int mode=0,step=0;
int correct_x,correct_y;
char current='a';
int g=0;
void iDraw() {
	//place your drawing codes here
	iClear();
	iSetColor(200,200,255);
	
//	iFilledRectangle(0,0,1500,780);
	iSetColor(150,197,200);
//	iFilledRectangle(30,700,80,30);
	iSetColor(0,255,0);
//	iText(50,710,"BACK",GLUT_BITMAP_HELVETICA_18);
iShowBMP(0,0,"Background5 (1).jpg");
iShowBMP(30,700,"Back.bmp");
	//pic->A
  if(step==1){
    iShowBMP(620,400,"Aeroplane.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->B
  else if(step==2){
	 iShowBMP(620,400,"Bat.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"C.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"G.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=1180;
  }
  //pic->C
  else if(step==3){
	 iShowBMP(620,400,"Calendar.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=810;
  }
 // pic->d
    else if(step==4){
	 iShowBMP(620,400,"Duck.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=440;
  }
  //pic->E
  else if(step==5){
	 iShowBMP(620,400,"Elephant.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"E.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"G.bmp");
	correct_x=420;
  }
  //pic->F
  else if(step==6){
	 iShowBMP(620,400,"Frog.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"F.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"A.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->G
  else if(step==7){
	 iShowBMP(620,400,"Giraffe.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"G.bmp");
	correct_x=1180;
  }
  //pic->H
  else if(step==8){
 iShowBMP(620,400,"Horse.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"H.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=790;
  }
  //pic->I
  else if(step==9){
	 iShowBMP(620,400,"Ice-cream.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"I.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=790;
  }
  //pic->J
  else if(step==10){
 iShowBMP(620,400,"Jeep.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"J.bmp");
	correct_x=1160;
  }
  //pic->K
  else if(step==11){
	 iShowBMP(620,400,"Key.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"K.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->L
  else if(step==12){
	 iShowBMP(620,400,"Lion.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"L.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=420;
  }
  //pic->M
  else if(step==13){
 iShowBMP(620,400,"Mug.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"M.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=790;
  }
  //pic->N
  else if(step==14){
	 iShowBMP(620,400,"Nailcutter.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"N.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->O
  else if(step==15){
	 iShowBMP(620,400,"Orange.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"O.bmp");
	correct_x=1160;
  }
  //pic->P
  else if(step==16){
 iShowBMP(620,400,"Pineapple.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"P.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=420;
  }
  //pic->Q
  else if(step==17){
	 iShowBMP(620,400,"Quoail.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"Q.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->R
  else if(step==18){
	 iShowBMP(620,400,"Radio.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"R.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=420;
  }
  //pic->S
  else if(step==19){
	 iShowBMP(620,400,"Sunflower.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"S.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->T
  else if(step==20){
	 iShowBMP(620,400,"Train.jpg");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"T.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=790;
  }
  //pic->U
  else if(step==21){
	 iShowBMP(620,400,"Umbrella.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"U.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=420;
  }
  //pic->V
  else if(step==22){
	 iShowBMP(620,400,"Video game.jpg");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"V.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->W
  else if(step==23){
 iShowBMP(620,400,"Watch.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"W.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=790;
  }
  //pic->X
  else if(step==24){
 iShowBMP(620,400,"Xylophone.jpg");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"X.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=420;
  }
  //pic->Y
  else if(step==25){
	 iShowBMP(620,400,"Yo yo.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"Y.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"C.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"B.bmp");
	correct_x=50;
  }
  //pic->Z
  else if(step==26){
	 iShowBMP(620,400,"Zebra.bmp");
	iSetColor(0,0,0);
	//iCircle(50,170,7);
	iRectangle(50,35,350,330);
	iShowBMP(70,50,"A.bmp");
	//iCircle(420,170,7);
	iRectangle(420,35,350,330);
	iShowBMP(440,50,"D.bmp");
	//iCircle(790,170,7);
	iRectangle(790,35,350,330);
	iShowBMP(810,50,"R.bmp");
	//iCircle(1160,170,7);
	iRectangle(1160,35,350,330);
	iShowBMP(1180,50,"Z.bmp");
	correct_x=1160;
  }

  if(mode==5){
	 iSetColor(0,255,0);
	//iFilledCircle(correct_x+7,170,7);
	iFilledRectangle(correct_x,35,350,15);
	iFilledRectangle(correct_x,350,350,15);
	iFilledRectangle(correct_x,35,20,330);
	iFilledRectangle(correct_x+320,35,30,330);
		 mode=0;
		// step++;
		 
	}
	else if(mode==1){
     iSetColor(255,0,0);
	// iFilledCircle(50,170,7);
	int l=50;
	iFilledRectangle(l,35,350,15);
	iFilledRectangle(l,350,350,15);
	iFilledRectangle(l,35,20,330);
	iFilledRectangle(l+320,35,30,330);
	}
  else if(mode==2){
     iSetColor(255,0,0);
	// iFilledCircle(420,170,7);
	int l=420;
	iFilledRectangle(l,35,350,15);
	iFilledRectangle(l,350,350,15);
	iFilledRectangle(l,35,20,330);
	iFilledRectangle(l+320,35,30,330);
	}
	else if(mode==3){
     iSetColor(255,0,0);
	// iFilledCircle(790,170,7);
	int l=790;
	iFilledRectangle(l,35,350,15);
	iFilledRectangle(l,350,350,15);
	iFilledRectangle(l,35,20,330);
	iFilledRectangle(l+320,35,30,330);
	}
	else if(mode==4){
     iSetColor(255,0,0);
	// iFilledCircle(1160,170,7);
	int l=1160;
	iFilledRectangle(l,35,350,15);
	iFilledRectangle(l,350,350,15);
	iFilledRectangle(l,35,20,330);
	iFilledRectangle(l+320,35,30,330);
	}


	
}


/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("%d %d\n",mx,my);
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx>=correct_x&&mx<=correct_x+350&&my>=35&&my<=390){
			mode=5;
			step++;
		}
		else if(mx>=50&&mx<=400&&my>=35&&my<=365){
			mode=1;
	
		}
		else if(mx>=420&&mx<=420+350&&my>35&&my<=365){
			mode=2;
		}
		else if(mx>=790&&mx<=790+350&&my>=35&&my<=365){
			mode=3;
		}
	else if(mx>=1160&&mx<=1160+350&&my>=35&&my<=365){
			mode=4;
		}
		else if(mx>=30&&mx<=80&&my>=700&&my<=750){
			if(step>1)step--,mode=0;
		}
		
	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	
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


	/*if(mode==0){
		x+=10,y+=5;
		if(x>=400)mode=1;
	}
	else if(mode==1){
		x-=5,y+=10;
		if(y>=400)mode=2;
	}
	else if(mode==2){
		x-=10,y-=5;
		if(x<=0)mode=3;
	}
	else if(mode==3){
		x+=5,y-=10;
		if(y<=0)mode=0;
	}*/


int main() {
	//place your own initialization codes here.
 
 // if(mode==5)iSetTimer(2000,func);

	iInitialize(1500,780, "Alphabet learning");
	return 0;
}

/*
option a:(55,245)->(245,40);
option b:(295,245)->(485,40)
option c:(545,245)->(735,40)
option d:(785,245)->(975,40)
(240,370)->(845,440)
(240,285)->(845,355)
(240,200)->(845,270)
(240,120)->(845,190)
*/