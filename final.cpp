#include "iGraphics.h"

int page = 1;
int part = 1;
int done = 0;
int next = 0;
int wrong = 0;
int wrong_x, wrong_y, right_x, right_y;
int correct_x;
int prev, ok;
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw()
{
	// place your drawing codes here
	iClear();
	if (page == 1)
	{
		iShowBMP(0, 0, "welcome.bmp");
	}
	else if (page == 2)
	{
		iShowBMP(0, 0, "Menu.bmp");
	}
	else if (page == 3)
	{
		iSetColor(0, 9, 255);

		if (part == 5)
		{
			iShowBMP(0, 0, "A.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "AEROPLANE", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 2)
		{
			iShowBMP(0, 0, "B.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(470, 650, "BAT", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 13)
		{
			iShowBMP(0, 0, "C.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "CLOCK", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 4)
		{
			iShowBMP(0, 0, "D.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(450, 650, "DOLPHIN", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 1)
		{ // 55 295 545 785
			iShowBMP(0, 0, "E.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(450, 650, "ELEPHANT", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 19)
		{
			iShowBMP(0, 0, "F.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(450, 670, "FLAG", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 9)
		{
			iShowBMP(0, 0, "G.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(450, 720, "GRAPES", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 8)
		{
			iShowBMP(0, 0, "H.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 670, "HORSE", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 7)
		{
			iShowBMP(0, 0, "I.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(450, 650, "ICE-CREAM", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 20)
		{
			iShowBMP(0, 0, "J.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "JEEP", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 15)
		{
			iShowBMP(0, 0, "K.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(450, 650, "KEYS", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 12)
		{
			iShowBMP(0, 0, "L.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(470, 600, "LION", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 3)
		{
			iShowBMP(0, 0, "M.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(470, 630, "MUG", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 17)
		{
			iShowBMP(0, 0, "N.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(450, 650, "NAILCUTTER", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 11)
		{
			iShowBMP(0, 0, "O.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "ORANGE", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 21)
		{
			iShowBMP(0, 0, "P.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(450, 720, "PINEAPPLE", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 14)
		{
			iShowBMP(0, 0, "Q.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "QUOAIL", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 25)
		{
			iShowBMP(0, 0, "R.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "RADIO", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 6)
		{
			iShowBMP(0, 0, "S.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(450, 600, "SUNFLOWER", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 22)
		{
			iShowBMP(0, 0, "T.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(450, 650, "TRAIN", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 16)
		{
			iShowBMP(0, 0, "U.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "UMBRELLA", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 10)
		{
			iShowBMP(0, 0, "V.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(450, 650, "VIDEO GAME", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 26)
		{
			iShowBMP(0, 0, "W.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(450, 650, "WATCH", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 24)
		{
			iShowBMP(0, 0, "X.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(450, 650, "XYLOPHONE", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 18)
		{
			iShowBMP(0, 0, "Y.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(450, 680, "YO YO", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 23)
		{
			iShowBMP(0, 0, "Z.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(450, 650, "ZEBRA", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		iShowBMP2(960, 700, "pause.bmp", 255);
		iShowBMP2(20, 680, "help.bmp", 0);
	}
	if (page == 4)
	{
		iSetColor(0, 0, 0);
		if (part == 4)
		{
			iShowBMP(0, 0, "A_img.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(80, 270, "Zebra", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Ambulance", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Video game", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Train", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 22)
		{
			iShowBMP(0, 0, "B_img.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(80, 270, "Key", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Horse", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Book", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Clock", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 5)
		{
			iShowBMP(0, 0, "C_img.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(80, 270, "Yo yo", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Xylophone", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Orange", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Clock", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 1)
		{
			iShowBMP(0, 0, "D_img.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(80, 270, "Aeroplane", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Nailcutter", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Diamond", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Pineapple", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 3)
		{ // 55 295 545 785
			iShowBMP(0, 0, "E_img.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(80, 270, "Quoail", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Mug", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Grapes", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Earings", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 16)
		{
			iShowBMP(0, 0, "F_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Fox", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Zebra", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Umbrella", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Ice-cream", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 7)
		{
			iShowBMP(0, 0, "G_img.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(80, 270, "Ambulance", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Orange", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Gold", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Xylophone", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 20)
		{
			iShowBMP(0, 0, "H_img.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(80, 270, "Mug", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Aeroplane", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Earings", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Horse", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 12)
		{
			iShowBMP(0, 0, "I_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Ice-cube", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Quoail", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Dolphin", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Horse", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 11)
		{
			iShowBMP(0, 0, "J_img.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(80, 270, "Bat", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Quoail", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Jam", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Quoail", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 10)
		{
			iShowBMP(0, 0, "K_img.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(80, 270, "Earing", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Fox", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Key", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Ice-cube", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 9)
		{
			iShowBMP(0, 0, "L_img.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(80, 270, "Earings", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Lemon", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Gold", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Book", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 17)
		{
			iShowBMP(0, 0, "M_img.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(80, 270, "Umbrella", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Watch", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Mug", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Nailcutter", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 24)
		{
			iShowBMP(0, 0, "N_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Nailcutter", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Mug", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Grapes", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Bat", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 15)
		{
			iShowBMP(0, 0, "O_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Orange", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Quoail", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Umbrella", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Video game", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 6)
		{
			iShowBMP(0, 0, "P_img.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(80, 270, "Keys", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Yo yo", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Zebra", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Parrot", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 19)
		{
			iShowBMP(0, 0, "Q_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Quaoil", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Ice-cube", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Gold", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Jam", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 8)
		{
			iShowBMP(0, 0, "R_img.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(80, 270, "Parrot", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Diamond", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Ambulance", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Ring", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 13)
		{
			iShowBMP(0, 0, "S_img.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(80, 270, "Ambulance", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Ship", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Earings", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Zebra", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 18)
		{
			iShowBMP(0, 0, "T_img.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(80, 270, "Ambulance", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Book", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Parrot", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Train", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 23)
		{
			iShowBMP(0, 0, "U_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Umbrella", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Xylophone", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Zebra", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Lemon", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 2)
		{
			iShowBMP(0, 0, "V_img.jpg");
			correct_x = 545;
			if (ok)
			{
				iText(80, 270, "Watch", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Xylophone", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Video game", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Aeroplane", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 21)
		{
			iShowBMP(0, 0, "W_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Watch", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Bat", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Dolphin", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Aeroplane", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 14)
		{
			iShowBMP(0, 0, "X_img.jpg");
			correct_x = 295;
			if (ok)
			{
				iText(80, 270, "Zebra", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Xylophone", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Train", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Yo yo", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 26)
		{
			iShowBMP(0, 0, "Y_img.jpg");
			correct_x = 55;
			if (ok)
			{
				iText(80, 270, "Yo yo", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Ice-cube", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Ring", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Ship", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (part == 25)
		{
			iShowBMP(0, 0, "Z_img.jpg");
			correct_x = 785;
			if (ok)
			{
				iText(80, 270, "Ambulance", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(340, 270, "Yo yo", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(585, 270, "Earings", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(820, 270, "Zebra", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		iShowBMP2(960, 700, "pause.bmp", 255);
		iShowBMP2(20, 680, "help.bmp", 0);
	}
	if (page == 5)
	{
		if (part == 7)
		{
			iShowBMP(0, 0, "A_to_a.jpg");
			correct_x = 545;
		}
		else if (part == 21)
		{
			iShowBMP(0, 0, "B_to_b.jpg");
			correct_x = 55;
		}
		else if (part == 5)
		{
			iShowBMP(0, 0, "C_to_c.jpg");
			correct_x = 785;
		}
		else if (part == 6)
		{
			iShowBMP(0, 0, "D_to_d.jpg");
			correct_x = 55;
		}
		else if (part == 3)
		{ // 55 295 545 785
			iShowBMP(0, 0, "E_to_e.jpg");
			correct_x = 545;
		}
		else if (part == 4)
		{
			iShowBMP(0, 0, "F_to_f.jpg");
			correct_x = 55;
		}
		else if (part == 1)
		{
			iShowBMP(0, 0, "G_to_g.jpg");
			correct_x = 545;
		}
		else if (part == 10)
		{
			iShowBMP(0, 0, "H_to_h.jpg");
			correct_x = 785;
		}
		else if (part == 11)
		{
			iShowBMP(0, 0, "I_to_i.jpg");
			correct_x = 785;
		}
		else if (part == 8)
		{
			iShowBMP(0, 0, "J_to_j.jpg");
			correct_x = 55;
		}
		else if (part == 9)
		{
			iShowBMP(0, 0, "K_to_k.jpg");
			correct_x = 545;
		}
		else if (part == 15)
		{
			iShowBMP(0, 0, "L_to_l.jpg");
			correct_x = 295;
		}
		else if (part == 12)
		{
			iShowBMP(0, 0, "M_to_m.jpg");
			correct_x = 785;
		}
		else if (part == 14)
		{
			iShowBMP(0, 0, "N_to_n.jpg");
			correct_x = 55;
		}
		else if (part == 13)
		{
			iShowBMP(0, 0, "O_to_o.jpg");
			correct_x = 545;
		}
		else if (part == 17)
		{
			iShowBMP(0, 0, "P_to_p.jpg");
			correct_x = 295;
		}
		else if (part == 16)
		{
			iShowBMP(0, 0, "Q_to_q.jpg");
			correct_x = 785;
		}
		else if (part == 19)
		{
			iShowBMP(0, 0, "R_to_r.jpg");
			correct_x = 55;
		}
		else if (part == 18)
		{
			iShowBMP(0, 0, "S_to_s.jpg");
			correct_x = 295;
		}
		else if (part == 20)
		{
			iShowBMP(0, 0, "T_to_t.jpg");
			correct_x = 545;
		}
		else if (part == 2)
		{
			iShowBMP(0, 0, "U_to_u.jpg");
			correct_x = 295;
		}
		else if (part == 26)
		{
			iShowBMP(0, 0, "V_to_v.jpg");
			correct_x = 295;
		}
		else if (part == 23)
		{
			iShowBMP(0, 0, "W_to_w.jpg");
			correct_x = 55;
		}
		else if (part == 25)
		{
			iShowBMP(0, 0, "X_to_x.jpg");
			correct_x = 785;
		}
		else if (part == 24)
		{
			iShowBMP(0, 0, "Y_to_y.jpg");
			correct_x = 295;
		}
		else if (part == 22)
		{
			iShowBMP(0, 0, "Z_to_z.jpg");
			correct_x = 55;
		}
		iShowBMP2(960, 700, "pause.bmp", 255);
		iShowBMP2(20, 680, "help.bmp", 0);
	}
	if (page == 6)
	{
		if (part == 10)
		{
			iShowBMP(0, 0, "low_to_up(a).jpg");
			correct_x = 55;
		}
		else if (part == 2)
		{
			iShowBMP(0, 0, "low_to_up(b).jpg");
			correct_x = 55;
		}
		else if (part == 9)
		{
			iShowBMP(0, 0, "low_to_up(c).jpg");
			correct_x = 295;
		}
		else if (part == 14)
		{
			iShowBMP(0, 0, "low_to_up(d).jpg");
			correct_x = 785;
		}
		else if (part == 6)
		{ // 55 295 545 785
			iShowBMP(0, 0, "low_to_up(e).jpg");
			correct_x = 55;
		}
		else if (part == 5)
		{
			iShowBMP(0, 0, "low_to_up(f).jpg");
			correct_x = 545;
		}
		else if (part == 7)
		{
			iShowBMP(0, 0, "low_to_up(g).jpg");
			correct_x = 295;
		}
		else if (part == 11)
		{
			iShowBMP(0, 0, "low_to_up(h).jpg");
			correct_x = 785;
		}
		else if (part == 3)
		{
			iShowBMP(0, 0, "low_to_up(i).jpg");
			correct_x = 545;
		}
		else if (part == 1)
		{
			iShowBMP(0, 0, "low_to_up(j).jpg");
			correct_x = 55;
		}
		else if (part == 8)
		{
			iShowBMP(0, 0, "low_to_up(k).jpg");
			correct_x = 295;
		}
		else if (part == 15)
		{
			iShowBMP(0, 0, "low_to_up(l).jpg");
			correct_x = 785;
		}
		else if (part == 17)
		{
			iShowBMP(0, 0, "low_to_up(m).jpg");
			correct_x = 545;
		}
		else if (part == 4)
		{
			iShowBMP(0, 0, "low_to_up(n).jpg");
			correct_x = 295;
		}
		else if (part == 13)
		{
			iShowBMP(0, 0, "low_to_up(o).jpg");
			correct_x = 55;
		}
		else if (part == 16)
		{
			iShowBMP(0, 0, "low_to_up(p).jpg");
			correct_x = 55;
		}
		else if (part == 12)
		{
			iShowBMP(0, 0, "low_to_up(q).jpg");
			correct_x = 785;
		}
		else if (part == 26)
		{
			iShowBMP(0, 0, "low_to_up(r).jpg");
			correct_x = 55;
		}
		else if (part == 19)
		{
			iShowBMP(0, 0, "low_to_up(s).jpg");
			correct_x = 785;
		}
		else if (part == 20)
		{
			iShowBMP(0, 0, "low_to_up(t).jpg");
			correct_x = 545;
		}
		else if (part == 21)
		{
			iShowBMP(0, 0, "low_to_up(u).jpg");
			correct_x = 295;
		}
		else if (part == 25)
		{
			iShowBMP(0, 0, "low_to_up(v).jpg");
			correct_x = 785;
		}
		else if (part == 24)
		{
			iShowBMP(0, 0, "low_to_up(w).jpg");
			correct_x = 545;
		}
		else if (part == 23)
		{
			iShowBMP(0, 0, "low_to_up(x).jpg");
			correct_x = 545;
		}
		else if (part == 22)
		{
			iShowBMP(0, 0, "low_to_up(y).jpg");
			correct_x = 55;
		}
		else if (part == 18)
		{
			iShowBMP(0, 0, "low_to_up(z).jpg");
			correct_x = 545;
		}
		iShowBMP2(960, 700, "pause.bmp", 255);
		iShowBMP2(20, 680, "help.bmp", 0);
	}
	else if (page == 7)
	{
		iShowBMP(0, 0, "pause_page.bmp");
	}
	else if (page == 8)
	{
		iShowBMP(0, 0, "help_page3.bmp");
	}
	else if (page == 9)
	{
		iShowBMP(0, 0, "help_page4.bmp");
	}
	else if (page == 10)
	{
		iShowBMP(0, 0, "help_page5.bmp");
	}
	else if (page == 11)
	{
		iShowBMP(0, 0, "help_page6.bmp");
	}
	else if (page == 12)
	{
		if (part == 1)
		{
			iShowBMP(0, 0, "A_les.bmp");
		}
		else if (part == 2)
		{
			iShowBMP(0, 0, "B_les.bmp");
		}
		else if (part == 3)
		{
			iShowBMP(0, 0, "C_les.bmp");
		}
		else if (part == 4)
		{
			iShowBMP(0, 0, "D_les.bmp");
		}
		else if (part == 5)
		{
			iShowBMP(0, 0, "E_les.bmp");
		}
		else if (part == 6)
		{
			iShowBMP(0, 0, "F_les.bmp");
		}
		else if (part == 7)
		{
			iShowBMP(0, 0, "G_les.bmp");
		}
		else if (part == 8)
		{
			iShowBMP(0, 0, "H_les.bmp");
		}
		else if (part == 9)
		{
			iShowBMP(0, 0, "I_les.bmp");
		}
		else if (part == 10)
		{
			iShowBMP(0, 0, "J_les.bmp");
		}
		else if (part == 11)
		{
			iShowBMP(0, 0, "K_les.bmp");
		}
		else if (part == 12)
		{
			iShowBMP(0, 0, "L_les.bmp");
		}
		else if (part == 13)
		{
			iShowBMP(0, 0, "M_les.bmp");
		}
		else if (part == 14)
		{
			iShowBMP(0, 0, "N_les.bmp");
		}
		else if (part == 15)
		{
			iShowBMP(0, 0, "O_les.bmp");
		}
		else if (part == 16)
		{
			iShowBMP(0, 0, "P_les.bmp");
		}
		else if (part == 17)
		{
			iShowBMP(0, 0, "Q_les.bmp");
		}
		else if (part == 18)
		{
			iShowBMP(0, 0, "R_les.bmp");
		}
		else if (part == 19)
		{
			iShowBMP(0, 0, "S_les.bmp");
		}
		else if (part == 20)
		{
			iShowBMP(0, 0, "T_les.bmp");
		}
		else if (part == 21)
		{
			iShowBMP(0, 0, "U_les.bmp");
		}
		else if (part == 22)
		{
			iShowBMP(0, 0, "V_les.bmp");
		}
		else if (part == 23)
		{
			iShowBMP(0, 0, "W_les.bmp");
		}
		else if (part == 24)
		{
			iShowBMP(0, 0, "X_les.bmp");
		}
		else if (part == 25)
		{
			iShowBMP(0, 0, "Y_les.bmp");
		}
		else if (part == 26)
		{
			iShowBMP(0, 0, "Z_les.bmp");
		}
		iShowBMP2(360, 680, "previous.bmp", 0);
		iShowBMP2(470, 680, "return_main.bmp", 0);
		iShowBMP2(580, 680, "nxt.bmp", 0);
	}
	else if (page == 13)
	{
		iShowBMP(0, 0, "Quiz.bmp");
	}
	if (done == 1 && page >= 3 && page <= 6)
	{
		iShowBMP2(right_x, right_y, "right.bmp", 0);
		iShowBMP(850, 400, "next.bmp");
		iSetColor(255, 0, 0);
		iText(840, 450, "PRESS BELOW", GLUT_BITMAP_TIMES_ROMAN_24);
		next = 1;
	}
	else if (wrong == 1 && page >= 3 && page <= 6)
	{
		iShowBMP2(wrong_x, wrong_y, "wrong.bmp", 0);
	}
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	// place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (page == 1)
		{
			if (mx >= 0 && mx <= 1024 && my >= 0 && my <= 780)
			{
				page++;
			}
		}
		else if (page == 2)
		{
			done = 0;
			if (mx >= 240 && mx <= 845 && my >= 370 && my <= 440)
			{
				page = 12;
			}
			else if (mx >= 240 && mx <= 845 && my >= 285 && my <= 355)
			{
				page = 13;
			}
		}
		else if (page == 13)
		{
			if (mx >= 240 && mx <= 845 && my >= 370 && my <= 440)
			{
				page = 6;
			}
			else if (mx >= 240 && mx <= 845 && my >= 285 && my <= 355)
			{
				page = 5;
			}
			else if (mx >= 240 && mx <= 845 && my >= 200 && my <= 270)
			{
				page = 3;
			}
			else if (mx >= 240 && mx <= 845 && my >= 120 && my <= 190)
			{
				page = 4;
			}
		}
		else if (page == 12)
		{
			if (mx >= 360 && mx <= 680 && mx <= 450 && my <= 770)
			{
				if (part > 1)
					part--;
			}
			else if (mx >= 470 && mx <= 680 && mx <= 565 && my <= 775)
			{
				page = 2;
			}
			else if (mx >= 580 && mx <= 680 && mx <= 670 && my <= 770)
			{
				if (part < 26)
					part++;
				else
				{
					part = 1;
					page = 2;
				}
			}
		}
		else if (page == 7)
		{
			if (mx >= 240 && mx <= 845 && my >= 370 && my <= 440)
			{
				page = prev;
			}
			else if (mx >= 240 && mx <= 845 && my >= 285 && my <= 355)
			{
				page = 2;
				prev = 0;
				part = 1;

				next = 0;
				done = 0;
				wrong = 0;
				ok = 0;
			}
			/*else if (mx >= 240 && mx <= 845 && my >= 200 && my <= 270)
			{
				if (prev == 3)
					page = 8;
				else if (prev == 4)
					page = 9;
				else if (prev == 5)
					page = 10;
				else if (prev == 6)
					page = 11;
			}*/
		}
		else if (page >= 8 && page <= 11)
		{
			if (mx >= 10 && my >= 700 && mx <= 85 && my <= 780)
			{
				page = prev;
			}
		}
		else
		{
			if (mx >= 960 && mx <= 1020 && my >= 700 && my <= 780)
			{
				prev = page;
				page = 7;
			}
			else if (mx >= 20 && my >= 680 && mx <= 90 && my <= 780)
			{
				prev = page;
				if (prev == 3)
					page = 8;
				else if (prev == 4)
					page = 9;
				else if (prev == 5)
					page = 10;
				else if (prev == 6)
					page = 11;
			}
			if (!next)
			{
				if (mx >= correct_x && mx <= correct_x + 190 && my >= 40 && my <= 245)
				{
					done = 1;
					right_x = correct_x + 5, right_y = 45;
					ok = 1;
				}
				else if (mx >= 55 && mx <= 245 && my >= 40 && my <= 245)
				{
					wrong = 1;
					wrong_x = 75, wrong_y = 45;
				}
				else if (mx >= 295 && mx <= 485 && my >= 40 && my <= 245)
				{
					wrong = 1;
					wrong_x = 325, wrong_y = 45;
				}
				else if (mx >= 545 && mx <= 735 && my >= 40 && my <= 245)
				{
					wrong = 1;
					wrong_x = 575, wrong_y = 45;
				}
				else if (mx >= 785 && mx <= 975 && my >= 40 && my <= 245)
				{
					wrong = 1;
					wrong_x = 805, wrong_y = 45;
				}
			}
			else if (next == 1)
			{
				if (mx >= 850 && my >= 400 && mx <= 980 && my <= 445)
				{
					next = 0;
					done = 0;
					wrong = 0;
					ok = 0;
					if (part < 26)
						part++;
					else
					{
						page = 2;
						part = 1;
					}
				}
			}
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		//	x -= 10;
		// y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
	// place your codes for other keys here
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
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	// place your codes for other keys here
}

int main()
{
	// place your own initialization codes here.
	iInitialize(1024, 780, "Alphabet learning");
	return 0;
}
