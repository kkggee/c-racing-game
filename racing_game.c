<<<<<<< HEAD
#include <stdio.h>  // ǥ�������
=======
#include <stdio.h>  // 표준입출력
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
#include <conio.h>  // _getch() 
#include <stdlib.h> // rand(), system()
#include <time.h>   // time(NULL), clock()
#include <windows.h> // gotoxy(), system()

<<<<<<< HEAD
void gotoxy(int x, int y);  // �ܼ� Ŀ���̵� �Լ�
void draw_line(int num, char c[][20]); // ����ȭ�� ��� �Լ�
void gohorse(int num);      // �� �̵� �Լ�
 
int main(void)
{
    int horse_num;           // �� ��
    char horse_name[5][20];  // �� �̸� 

    printf("�渶����\n\n");
    printf("������ ���� ���� (�ִ� 5)�� �Է��ϰ� Enter>");
    scanf_s("%d", &horse_num);  // �� �� �Է¹���

    printf("\n\n%d�� ���� �̸��� �Է��ϰ� Enter\n\n", horse_num);
    for (int i = 0; i < horse_num; i++)   // �� �̸� �Է¹���
    {
        printf("%d�� �� �̸� :", i + 1);
        scanf_s("%s", horse_name[i], 20);
        fflush(stdin);  // �Է� ���� �����
    }

    draw_line(horse_num, horse_name);  // ����ȭ�� ���
    _getch();             // Ű���� �Է� O, ��� X 
    gohorse(horse_num);   // �� �̵�

    gotoxy(0, 15);  // Ŀ��(0,15)�� �̵�
    printf("���� ����!\n");
    return 0;
}

void gotoxy(int x, int y)  // Ŀ���̵� �Լ�
=======
void gotoxy(int x, int y);  // 콘솔 커서이동 함수
void draw_line(int num, char c[][20]); // 게임화면 출력 함수
void gohorse(int num);      // 말 이동 함수
 
int main(void)
{
    int horse_num;           // 말 수
    char horse_name[5][20];  // 말 이름 

    printf("경마게임\n\n");
    printf("경주할 말의 숫자 (최대 5)를 입력하고 Enter>");
    scanf_s("%d", &horse_num);  // 말 수 입력받음

    printf("\n\n%d개 말의 이름을 입력하고 Enter\n\n", horse_num);
    for (int i = 0; i < horse_num; i++)   // 말 이름 입력받음
    {
        printf("%d번 말 이름 :", i + 1);
        scanf_s("%s", horse_name[i], 20);
        fflush(stdin);  // 입력 버퍼 지우기
    }

    draw_line(horse_num, horse_name);  // 게임화면 출력
    _getch();             // 키보드 입력 O, 출력 X 
    gohorse(horse_num);   // 말 이동

    gotoxy(0, 15);  // 커서(0,15)로 이동
    printf("게임 종료!\n");
    return 0;
}

void gotoxy(int x, int y)  // 커서이동 함수
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
{
    COORD Pos = { x , y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

<<<<<<< HEAD
void draw_line(int num, char c[][20]) // ����ȭ�� ��� �Լ�
{
    system("cls");  // ȭ�� Ŭ����
    printf("\n\n");
    printf(" start   1         10         20        30        40(end) ��� �ð�(��)\n");
    printf("----------------------------------------------------------------------\n");
    gotoxy(51, 0);      // Ŀ��(51,0)���� �̵�
    printf("�ҿ�ð�:");

    for (int i = 0; i < num; i++)  // �� �̸� ����
    {
        gotoxy(0, i * 2 + 4);
        printf("%-8s:>", c[i]);  // �ڸ��� Ȯ���ϰ� �������� ����
    }
    printf("\n\n�ƹ�Ű�� ������ ���ָ� �����մϴ�. \n");
}

void gohorse(int num)    // �� �̵� �Լ�
=======
void draw_line(int num, char c[][20]) // 게임화면 출력 함수
{
    system("cls");  // 화면 클리어
    printf("\n\n");
    printf(" start   1         10         20        30        40(end) 등수 시간(초)\n");
    printf("----------------------------------------------------------------------\n");
    gotoxy(51, 0);      // 커서(51,0)으로 이동
    printf("소요시간:");

    for (int i = 0; i < num; i++)  // 말 이름 정렬
    {
        gotoxy(0, i * 2 + 4);
        printf("%-8s:>", c[i]);  // 자릿수 확보하고 좌측으로 정렬
    }
    printf("\n\n아무키나 누르면 경주를 시작합니다. \n");
}

void gohorse(int num)    // 말 이동 함수
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
{
    int number, race, count = 0;
    int horse[5] = { 0 }, rank[5] = { 0 };
    clock_t start, end; // typedef long clock_t;
    double sec;
<<<<<<< HEAD
    srand((unsigned)time(NULL));  // ���� ���� ����
    start = clock(); // �ð� ���� ����
    while (count != num)  // ������ ���� ���ڰ� ��ü ���� ���� �ٸ��� ����
    {
        number = rand() % num;  // �������� �� ����
        race = rand() % 2 + 1;        // �������� 1,2 �� ������ �� ����
        horse[number] = horse[number] + race;  // ���õ� ���� ���õ� ����ŭ ����
        Sleep(300);         // 300/1000 �ʸ�ŭ ����

        if (horse[number] > 39)
        {
            horse[number] = 40;  // ������ ���� 39�� �ʰ��Ǹ� 40�� ��
            if (rank[number] == 0)  // ����� ������ ����
            {
                count++;    // ��� 1�� ����
                rank[number] = count;   // ��� ����
                gotoxy(9, 4 + number * 2);  // Ŀ�� �̵�
                for (int j = 0; j < horse[number]; j++)  // ���� 40ĭ ���
                    printf(" ");
                printf(">%d", horse[number]);  // ������ �� ���
                gotoxy(54, 4 + number * 2);
                printf("     %d��  ", count);  // ��� ���
                end = clock();                 // �ð� ���� ��
                sec = (double)(end - start) / CLK_TCK; // ������ �ð�
                printf("%6.3f", sec);          // �ɸ� �ð� ���
=======
    srand((unsigned)time(NULL));  // 랜덤 난수 생성
    start = clock(); // 시간 측정 시작
    while (count != num)  // 도착한 말의 숫자가 전체 말의 수와 다르면 실행
    {
        number = rand() % num;  // 랜덤으로 말 선택
        race = rand() % 2 + 1;        // 랜덤으로 1,2 중 전진할 수 선택
        horse[number] = horse[number] + race;  // 선택된 말이 선택된 수만큼 전진
        Sleep(300);         // 300/1000 초만큼 지연

        if (horse[number] > 39)
        {
            horse[number] = 40;  // 전진한 수가 39가 초과되면 40이 됨
            if (rank[number] == 0)  // 등수가 없으면 실행
            {
                count++;    // 등수 1씩 증가
                rank[number] = count;   // 등수 설정
                gotoxy(9, 4 + number * 2);  // 커서 이동
                for (int j = 0; j < horse[number]; j++)  // 공백 40칸 출력
                    printf(" ");
                printf(">%d", horse[number]);  // 전진한 수 출력
                gotoxy(54, 4 + number * 2);
                printf("     %d등  ", count);  // 등수 출력
                end = clock();                 // 시간 측정 끝
                sec = (double)(end - start) / CLK_TCK; // 진행한 시간
                printf("%6.3f", sec);          // 걸린 시간 출력
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
            }
        }
        else
        {
<<<<<<< HEAD
            gotoxy(9, 4 + number * 2);      // Ŀ�� �̵�
            for (int j = 0; j < horse[number]; j++)  // ������ ����ŭ ���� ���
                printf(" ");
            printf(">%d", horse[number]);  // ��ŭ �������� �� ���
        }

        gotoxy(61, 0);
        end = clock();                     // �ð� ���� ��
        sec = (double)(end - start) / CLK_TCK;  // ������ �ð�
        printf("%6.3f��", sec);            // ��ü �ҿ�ð� ���
    }
}
=======
            gotoxy(9, 4 + number * 2);      // 커서 이동
            for (int j = 0; j < horse[number]; j++)  // 전진할 수만큼 공백 출력
                printf(" ");
            printf(">%d", horse[number]);  // 얼마큼 전진한지 수 출력
        }

        gotoxy(61, 0);
        end = clock();                     // 시간 측정 끝
        sec = (double)(end - start) / CLK_TCK;  // 진행한 시간
        printf("%6.3f초", sec);            // 전체 소요시간 출력
    }
}
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
