<<<<<<< HEAD
#include <stdio.h>  // 표준입출력
=======
#include <stdio.h>  // �몴以��엯異쒕젰
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
#include <conio.h>  // _getch() 
#include <stdlib.h> // rand(), system()
#include <time.h>   // time(NULL), clock()
#include <windows.h> // gotoxy(), system()

<<<<<<< HEAD
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
=======
void gotoxy(int x, int y);  // 肄섏넄 而ㅼ꽌�씠�룞 �븿�닔
void draw_line(int num, char c[][20]); // 寃뚯엫�솕硫� 異쒕젰 �븿�닔
void gohorse(int num);      // 留� �씠�룞 �븿�닔
 
int main(void)
{
    int horse_num;           // 留� �닔
    char horse_name[5][20];  // 留� �씠由� 

    printf("寃쎈쭏寃뚯엫\n\n");
    printf("寃쎌＜�븷 留먯쓽 �닽�옄 (理쒕�� 5)瑜� �엯�젰�븯怨� Enter>");
    scanf_s("%d", &horse_num);  // 留� �닔 �엯�젰諛쏆쓬

    printf("\n\n%d媛� 留먯쓽 �씠由꾩쓣 �엯�젰�븯怨� Enter\n\n", horse_num);
    for (int i = 0; i < horse_num; i++)   // 留� �씠由� �엯�젰諛쏆쓬
    {
        printf("%d踰� 留� �씠由� :", i + 1);
        scanf_s("%s", horse_name[i], 20);
        fflush(stdin);  // �엯�젰 踰꾪띁 吏��슦湲�
    }

    draw_line(horse_num, horse_name);  // 寃뚯엫�솕硫� 異쒕젰
    _getch();             // �궎蹂대뱶 �엯�젰 O, 異쒕젰 X 
    gohorse(horse_num);   // 留� �씠�룞

    gotoxy(0, 15);  // 而ㅼ꽌(0,15)濡� �씠�룞
    printf("寃뚯엫 醫낅즺!\n");
    return 0;
}

void gotoxy(int x, int y)  // 而ㅼ꽌�씠�룞 �븿�닔
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
{
    COORD Pos = { x , y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

<<<<<<< HEAD
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
=======
void draw_line(int num, char c[][20]) // 寃뚯엫�솕硫� 異쒕젰 �븿�닔
{
    system("cls");  // �솕硫� �겢由ъ뼱
    printf("\n\n");
    printf(" start   1         10         20        30        40(end) �벑�닔 �떆媛�(珥�)\n");
    printf("----------------------------------------------------------------------\n");
    gotoxy(51, 0);      // 而ㅼ꽌(51,0)�쑝濡� �씠�룞
    printf("�냼�슂�떆媛�:");

    for (int i = 0; i < num; i++)  // 留� �씠由� �젙�젹
    {
        gotoxy(0, i * 2 + 4);
        printf("%-8s:>", c[i]);  // �옄由우닔 �솗蹂댄븯怨� 醫뚯륫�쑝濡� �젙�젹
    }
    printf("\n\n�븘臾댄궎�굹 �늻瑜대㈃ 寃쎌＜瑜� �떆�옉�빀�땲�떎. \n");
}

void gohorse(int num)    // 留� �씠�룞 �븿�닔
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
{
    int number, race, count = 0;
    int horse[5] = { 0 }, rank[5] = { 0 };
    clock_t start, end; // typedef long clock_t;
    double sec;
<<<<<<< HEAD
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
=======
    srand((unsigned)time(NULL));  // �옖�뜡 �궃�닔 �깮�꽦
    start = clock(); // �떆媛� 痢≪젙 �떆�옉
    while (count != num)  // �룄李⑺븳 留먯쓽 �닽�옄媛� �쟾泥� 留먯쓽 �닔��� �떎瑜대㈃ �떎�뻾
    {
        number = rand() % num;  // �옖�뜡�쑝濡� 留� �꽑�깮
        race = rand() % 2 + 1;        // �옖�뜡�쑝濡� 1,2 以� �쟾吏꾪븷 �닔 �꽑�깮
        horse[number] = horse[number] + race;  // �꽑�깮�맂 留먯씠 �꽑�깮�맂 �닔留뚰겮 �쟾吏�
        Sleep(300);         // 300/1000 珥덈쭔�겮 吏��뿰

        if (horse[number] > 39)
        {
            horse[number] = 40;  // �쟾吏꾪븳 �닔媛� 39媛� 珥덇낵�릺硫� 40�씠 �맖
            if (rank[number] == 0)  // �벑�닔媛� �뾾�쑝硫� �떎�뻾
            {
                count++;    // �벑�닔 1�뵫 利앷��
                rank[number] = count;   // �벑�닔 �꽕�젙
                gotoxy(9, 4 + number * 2);  // 而ㅼ꽌 �씠�룞
                for (int j = 0; j < horse[number]; j++)  // 怨듬갚 40移� 異쒕젰
                    printf(" ");
                printf(">%d", horse[number]);  // �쟾吏꾪븳 �닔 異쒕젰
                gotoxy(54, 4 + number * 2);
                printf("     %d�벑  ", count);  // �벑�닔 異쒕젰
                end = clock();                 // �떆媛� 痢≪젙 �걹
                sec = (double)(end - start) / CLK_TCK; // 吏꾪뻾�븳 �떆媛�
                printf("%6.3f", sec);          // 嫄몃┛ �떆媛� 異쒕젰
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
            }
        }
        else
        {
<<<<<<< HEAD
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
=======
            gotoxy(9, 4 + number * 2);      // 而ㅼ꽌 �씠�룞
            for (int j = 0; j < horse[number]; j++)  // �쟾吏꾪븷 �닔留뚰겮 怨듬갚 異쒕젰
                printf(" ");
            printf(">%d", horse[number]);  // �뼹留덊겮 �쟾吏꾪븳吏� �닔 異쒕젰
        }

        gotoxy(61, 0);
        end = clock();                     // �떆媛� 痢≪젙 �걹
        sec = (double)(end - start) / CLK_TCK;  // 吏꾪뻾�븳 �떆媛�
        printf("%6.3f珥�", sec);            // �쟾泥� �냼�슂�떆媛� 異쒕젰
    }
}
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
