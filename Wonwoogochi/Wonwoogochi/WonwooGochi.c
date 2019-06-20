//�����ġ�� �ش���
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
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("��"); break; //0�� ������
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("��"); break; //1�� ���
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("��"); break; //2�� ������
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
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("��"); break; //0�� ������
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("��"); break; //1�� ���
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("��"); break; //2�� ������
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
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("��"); break; //0�� ������
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("��"); break; //1�� ���
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("��"); break; //2�� ������
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
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("��"); break; //0�� ������
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("��"); break; //1�� ���
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("��"); break; //2�� ������
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
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("��"); break; //0�� ������
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("��"); break; //1�� ���
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("��"); break; //2�� ������
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
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); printf("��"); break; //0�� ������
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); printf("��"); break; //1�� ���
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); printf("��"); break; //2�� ������
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
		printf("����!");
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
		printf("���Ѱž�..");
		Sleep(110);
		system("cls");
		StartSad();
		gotoxy(7, 13);
		printf("���Ѱž�..");
		Sleep(110);
		system("cls");
		StartSad2();
		gotoxy(7, 13);
		printf("���Ѱž�..");
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
		printf("�� �ʹ� �Ⱦ�");
		Sleep(110);
		system("cls");
		StartMad();
		gotoxy(7, 13);
		printf("�� �ʹ� �Ⱦ�");
		Sleep(110);
		system("cls");
		StartMad2();
		gotoxy(7, 13);
		printf("�� �ʹ� �Ⱦ�");
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
	printf("* �� �� �� ��");
	gotoxy(x, 1 + y);
	printf("Ī �� �� �� ��");
	gotoxy(x, 2 + y);
	printf("�� �� �� ��");
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
	printf("* �� �� �� ũ �� ��");
	gotoxy(x, 1 + y);
	printf("�� �� �� �� �� �� ��");
	gotoxy(x, 2 + y);
	printf("�� �� �� ī �� �� ��");
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
	printf("* �� �� �� �� �� ��");
	gotoxy(x, 1 + y);
	printf("�� �� �� �� �� �� ��");
	gotoxy(x, 2 + y);
	printf("�� �� �� ü �� �� ��");
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
		printf("ȣ���� : %d", count);
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