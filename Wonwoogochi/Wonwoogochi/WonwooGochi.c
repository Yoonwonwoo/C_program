//원우고치의 해더들
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>

#define MENU 20
#define UP 0
#define DOWN 1
#define SUBMIT 2

int count = 0;

void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void StartMenu() {
	int menu[MENU][MENU] = {
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,0,0,2,0,0,0,2,0,0,0,0,0,1},
		{1,0,0,0,2,0,0,0,2,2,2,0,0,0,2,0,0,0,0,1},
		{1,0,0,0,0,2,0,2,2,2,2,2,0,2,0,0,0,0,0,1},
		{1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,1},
		{1,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

	for (int i = 0; i < MENU; i++) {
		for (int j = 0; j < MENU; j++) {
			switch (menu[i][j])
			{
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("■"); break; //0은 검정색
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("■"); break; //1은 흰색
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("■"); break; //2는 빨간색
			}
		}
		puts("");
	}
}

void StartHappy() {
	int menu[MENU][MENU] = {
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,0,0,2,0,0,0,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,2,0,2,2,2,0,2,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,2,2,2,2,2,0,2,0,0,0,0,0,1},
		{1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,1},
		{1,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

	for (int i = 0; i < MENU; i++) {
		for (int j = 0; j < MENU; j++) {
			switch (menu[i][j])
			{
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("■"); break; //0은 검정색
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("■"); break; //1은 흰색
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("■"); break; //2는 빨간색
			}
		}
		puts("");
	}
}

void StartMad() {
	int menu[MENU][MENU] = {
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,2,0,0,0,2,0,2,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,0,0,2,0,0,0,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,2,0,2,2,2,0,2,0,0,0,0,0,0,1},
		{1,0,0,2,0,2,0,2,2,2,2,2,0,2,0,2,0,0,0,1},
		{1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,1},
		{1,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

	for (int i = 0; i < MENU; i++) {
		for (int j = 0; j < MENU; j++) {
			switch (menu[i][j])
			{
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("■"); break; //0은 검정색
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("■"); break; //1은 흰색
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("■"); break; //2는 빨간색
			}
		}
		puts("");
	}
}

void StartMad2() {
	int menu[MENU][MENU] = {
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,0,0,2,0,0,0,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,2,0,0,0,2,0,2,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,0,0,2,0,0,0,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,2,0,2,2,2,0,2,0,0,0,0,0,0,1},
		{1,0,0,2,0,2,0,2,2,2,2,2,0,2,0,2,0,0,0,1},
		{1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,1},
		{1,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

	for (int i = 0; i < MENU; i++) {
		for (int j = 0; j < MENU; j++) {
			switch (menu[i][j])
			{
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("■"); break; //0은 검정색
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("■"); break; //1은 흰색
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("■"); break; //2는 빨간색
			}
		}
		puts("");
	}
}

void StartSad(){
	int menu[MENU][MENU] = {
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,2,0,0,0,2,2,2,0,0,0,2,0,0,0,0,1},
			{1,0,0,0,0,2,0,2,2,2,2,2,0,2,0,0,0,0,0,1},
			{1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,1},
			{1,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

	for (int i = 0; i < MENU; i++) {
		for (int j = 0; j < MENU; j++) {
			switch (menu[i][j])
			{
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("■"); break; //0은 검정색
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("■"); break; //1은 흰색
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("■"); break; //2는 빨간색
			}
		}
		puts("");
	}
}

void StartSad2() {
	int menu[MENU][MENU] = {
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,2,0,2,2,2,2,2,0,2,0,0,0,0,0,1},
		{1,0,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,1},
		{1,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

	for (int i = 0; i < MENU; i++) {
		for (int j = 0; j < MENU; j++) {
			switch (menu[i][j])
			{
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("■"); break; //0은 검정색
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("■"); break; //1은 흰색
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("■"); break; //2는 빨간색
			}
		}
		puts("");
	}
}

void Happy() {
	count++;
	for (int i = 0; i < 4; i++) {
		Sleep(110);
		system("cls");
		if (i == 3) {
			main();
		}
		StartMenu();
		Sleep(110);
		system("cls");
	
		StartHappy();
		
		gotoxy(7, 13);
		printf("고마엉!");
	}
}

void Sick() {
	count -= 2;
	for (int i = 0; i < 4; i++) {
		Sleep(110);
		system("cls");
		if (i == 3) {
			main();
		}
		StartMenu();
		gotoxy(7, 13);
		printf("뭘한거야..");
		Sleep(110);
		system("cls");
		StartSad();
		gotoxy(7, 13);
		printf("뭘한거야..");
		Sleep(110);
		system("cls");
		StartSad2();
		gotoxy(7, 13);
		printf("뭘한거야..");
	}

}

void Mad() {
	count--;
	for (int i = 0; i < 4; i++) {
		Sleep(110);
		system("cls");
		if (i == 3) {
			main();
		}
		StartMenu();
		gotoxy(7, 13);
		printf("윽 너무 싫어");
		Sleep(110);
		system("cls");
		StartMad();
		gotoxy(7, 13);
		printf("윽 너무 싫어");
		Sleep(110);
		system("cls");
		StartMad2();
		gotoxy(7, 13);
		printf("윽 너무 싫어");
	}
}

int KeyControler() {
		int inputKey = _getch();
		if (inputKey == 72) {
			return UP;
		}
		else if (inputKey == 80) {
			return DOWN;
		}
		else if (inputKey == 32) {
			return SUBMIT;
		}
}

int Cursor() {
	int x = 12;
	int y = 13;
	gotoxy(x - 2, y);
	printf("* 먹 이 주 기");
	gotoxy(x, 1 + y);
	printf("칭 찬 해 주 기");
	gotoxy(x, 2 + y);
	printf("종 료 하 기");
	while (1) {
		int n = KeyControler();
		switch (n) {
		case UP: if (y > 13) {
			gotoxy(x - 2, y);
			printf(" ");
			gotoxy(x - 2, --y);
			printf("*");
		}
				 break;
		case DOWN: if (y < 15) {
			gotoxy(x - 2, y);
			printf(" ");
			gotoxy(x - 2, ++y);
			printf("*");
		}
				   break;
		case SUBMIT: {return y - 13; break; }
		}
	}
}

int First() {
	int x = 8;
	int y = 13;
	gotoxy(x - 2, y);
	printf("* 스 테 이 크 주 기");
	gotoxy(x, 1 + y);
	printf("곰 팡 이 핀 빵 주 기");
	gotoxy(x, 2 + y);
	printf("아 메 리 카 노 주 기");
	while (1) {
		int n = KeyControler();
		switch (n) {
		case UP: if (y > 13) {
			gotoxy(x - 2, y);
			printf(" ");
			gotoxy(x - 2, --y);
			printf("*");
		}
				 break;
		case DOWN: if (y < 15) {
			gotoxy(x - 2, y);
			printf(" ");
			gotoxy(x - 2, ++y);
			printf("*");
		}
				   break;
		case SUBMIT: {return y - 13; break; }
		}
	}
}

int Second() {
	int x = 8;
	int y = 13;
	gotoxy(x - 2, y);
	printf("* 너 가 제 일 예 뻐");
	gotoxy(x, 1 + y);
	printf("너 는 정 말 최 고 야");
	gotoxy(x, 2 + y);
	printf("너 는 대 체 왜 사 니");
	while (1) {
		int n = KeyControler();
		switch (n) {
		case UP: if (y > 13) {
			gotoxy(x - 2, y);
			printf(" ");
			gotoxy(x - 2, --y);
			printf("*");
		}
				 break;
		case DOWN: if (y < 15) {
			gotoxy(x - 2, y);
			printf(" ");
			gotoxy(x - 2, ++y);
			printf("*");
		}
				   break;
		case SUBMIT: {return y - 13; break; }
		}
	}

}

int main() {

	int w;
	while (1) {
		if (count < 0) {
			exit(1);
		}
		StartMenu();
		gotoxy(50, 3);
		printf("호감도 : %d", count);
		w = Cursor();
		if (w == 0) {
			int f = First();
			if (f == 0) {
				Happy();
			}
			else if (f == 1) {
				Sick();
			}
			else if (f == 2) {
				Mad();
			}
		}
		else if (w == 1) {
			int s = Second();
			if (s == 0) {
				Happy();
			}
			else if (s == 1) {
				Happy();
			}
			else if (s == 2) {
				Mad();
			}
		}
		else if (w == 2) {
			exit(1);
		}
		
	}

	return 0;
}