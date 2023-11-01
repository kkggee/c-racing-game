<<<<<<< HEAD
#include <stdio.h>  // Ç¥ÁØÀÔÃâ·Â
=======
#include <stdio.h>  // í‘œì¤€ì…ì¶œë ¥
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
#include <conio.h>  // _getch() 
#include <stdlib.h> // rand(), system()
#include <time.h>   // time(NULL), clock()
#include <windows.h> // gotoxy(), system()

<<<<<<< HEAD
void gotoxy(int x, int y);  // ÄÜ¼Ö Ä¿¼­ÀÌµ¿ ÇÔ¼ö
void draw_line(int num, char c[][20]); // °ÔÀÓÈ­¸é Ãâ·Â ÇÔ¼ö
void gohorse(int num);      // ¸» ÀÌµ¿ ÇÔ¼ö
 
int main(void)
{
    int horse_num;           // ¸» ¼ö
    char horse_name[5][20];  // ¸» ÀÌ¸§ 

    printf("°æ¸¶°ÔÀÓ\n\n");
    printf("°æÁÖÇÒ ¸»ÀÇ ¼ıÀÚ (ÃÖ´ë 5)¸¦ ÀÔ·ÂÇÏ°í Enter>");
    scanf_s("%d", &horse_num);  // ¸» ¼ö ÀÔ·Â¹ŞÀ½

    printf("\n\n%d°³ ¸»ÀÇ ÀÌ¸§À» ÀÔ·ÂÇÏ°í Enter\n\n", horse_num);
    for (int i = 0; i < horse_num; i++)   // ¸» ÀÌ¸§ ÀÔ·Â¹ŞÀ½
    {
        printf("%d¹ø ¸» ÀÌ¸§ :", i + 1);
        scanf_s("%s", horse_name[i], 20);
        fflush(stdin);  // ÀÔ·Â ¹öÆÛ Áö¿ì±â
    }

    draw_line(horse_num, horse_name);  // °ÔÀÓÈ­¸é Ãâ·Â
    _getch();             // Å°º¸µå ÀÔ·Â O, Ãâ·Â X 
    gohorse(horse_num);   // ¸» ÀÌµ¿

    gotoxy(0, 15);  // Ä¿¼­(0,15)·Î ÀÌµ¿
    printf("°ÔÀÓ Á¾·á!\n");
    return 0;
}

void gotoxy(int x, int y)  // Ä¿¼­ÀÌµ¿ ÇÔ¼ö
=======
void gotoxy(int x, int y);  // ì½˜ì†” ì»¤ì„œì´ë™ í•¨ìˆ˜
void draw_line(int num, char c[][20]); // ê²Œì„í™”ë©´ ì¶œë ¥ í•¨ìˆ˜
void gohorse(int num);      // ë§ ì´ë™ í•¨ìˆ˜
 
int main(void)
{
    int horse_num;           // ë§ ìˆ˜
    char horse_name[5][20];  // ë§ ì´ë¦„ 

    printf("ê²½ë§ˆê²Œì„\n\n");
    printf("ê²½ì£¼í•  ë§ì˜ ìˆ«ì (ìµœëŒ€ 5)ë¥¼ ì…ë ¥í•˜ê³  Enter>");
    scanf_s("%d", &horse_num);  // ë§ ìˆ˜ ì…ë ¥ë°›ìŒ

    printf("\n\n%dê°œ ë§ì˜ ì´ë¦„ì„ ì…ë ¥í•˜ê³  Enter\n\n", horse_num);
    for (int i = 0; i < horse_num; i++)   // ë§ ì´ë¦„ ì…ë ¥ë°›ìŒ
    {
        printf("%dë²ˆ ë§ ì´ë¦„ :", i + 1);
        scanf_s("%s", horse_name[i], 20);
        fflush(stdin);  // ì…ë ¥ ë²„í¼ ì§€ìš°ê¸°
    }

    draw_line(horse_num, horse_name);  // ê²Œì„í™”ë©´ ì¶œë ¥
    _getch();             // í‚¤ë³´ë“œ ì…ë ¥ O, ì¶œë ¥ X 
    gohorse(horse_num);   // ë§ ì´ë™

    gotoxy(0, 15);  // ì»¤ì„œ(0,15)ë¡œ ì´ë™
    printf("ê²Œì„ ì¢…ë£Œ!\n");
    return 0;
}

void gotoxy(int x, int y)  // ì»¤ì„œì´ë™ í•¨ìˆ˜
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
{
    COORD Pos = { x , y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

<<<<<<< HEAD
void draw_line(int num, char c[][20]) // °ÔÀÓÈ­¸é Ãâ·Â ÇÔ¼ö
{
    system("cls");  // È­¸é Å¬¸®¾î
    printf("\n\n");
    printf(" start   1         10         20        30        40(end) µî¼ö ½Ã°£(ÃÊ)\n");
    printf("----------------------------------------------------------------------\n");
    gotoxy(51, 0);      // Ä¿¼­(51,0)À¸·Î ÀÌµ¿
    printf("¼Ò¿ä½Ã°£:");

    for (int i = 0; i < num; i++)  // ¸» ÀÌ¸§ Á¤·Ä
    {
        gotoxy(0, i * 2 + 4);
        printf("%-8s:>", c[i]);  // ÀÚ¸´¼ö È®º¸ÇÏ°í ÁÂÃøÀ¸·Î Á¤·Ä
    }
    printf("\n\n¾Æ¹«Å°³ª ´©¸£¸é °æÁÖ¸¦ ½ÃÀÛÇÕ´Ï´Ù. \n");
}

void gohorse(int num)    // ¸» ÀÌµ¿ ÇÔ¼ö
=======
void draw_line(int num, char c[][20]) // ê²Œì„í™”ë©´ ì¶œë ¥ í•¨ìˆ˜
{
    system("cls");  // í™”ë©´ í´ë¦¬ì–´
    printf("\n\n");
    printf(" start   1         10         20        30        40(end) ë“±ìˆ˜ ì‹œê°„(ì´ˆ)\n");
    printf("----------------------------------------------------------------------\n");
    gotoxy(51, 0);      // ì»¤ì„œ(51,0)ìœ¼ë¡œ ì´ë™
    printf("ì†Œìš”ì‹œê°„:");

    for (int i = 0; i < num; i++)  // ë§ ì´ë¦„ ì •ë ¬
    {
        gotoxy(0, i * 2 + 4);
        printf("%-8s:>", c[i]);  // ìë¦¿ìˆ˜ í™•ë³´í•˜ê³  ì¢Œì¸¡ìœ¼ë¡œ ì •ë ¬
    }
    printf("\n\nì•„ë¬´í‚¤ë‚˜ ëˆ„ë¥´ë©´ ê²½ì£¼ë¥¼ ì‹œì‘í•©ë‹ˆë‹¤. \n");
}

void gohorse(int num)    // ë§ ì´ë™ í•¨ìˆ˜
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
{
    int number, race, count = 0;
    int horse[5] = { 0 }, rank[5] = { 0 };
    clock_t start, end; // typedef long clock_t;
    double sec;
<<<<<<< HEAD
    srand((unsigned)time(NULL));  // ·£´ı ³­¼ö »ı¼º
    start = clock(); // ½Ã°£ ÃøÁ¤ ½ÃÀÛ
    while (count != num)  // µµÂøÇÑ ¸»ÀÇ ¼ıÀÚ°¡ ÀüÃ¼ ¸»ÀÇ ¼ö¿Í ´Ù¸£¸é ½ÇÇà
    {
        number = rand() % num;  // ·£´ıÀ¸·Î ¸» ¼±ÅÃ
        race = rand() % 2 + 1;        // ·£´ıÀ¸·Î 1,2 Áß ÀüÁøÇÒ ¼ö ¼±ÅÃ
        horse[number] = horse[number] + race;  // ¼±ÅÃµÈ ¸»ÀÌ ¼±ÅÃµÈ ¼ö¸¸Å­ ÀüÁø
        Sleep(300);         // 300/1000 ÃÊ¸¸Å­ Áö¿¬

        if (horse[number] > 39)
        {
            horse[number] = 40;  // ÀüÁøÇÑ ¼ö°¡ 39°¡ ÃÊ°úµÇ¸é 40ÀÌ µÊ
            if (rank[number] == 0)  // µî¼ö°¡ ¾øÀ¸¸é ½ÇÇà
            {
                count++;    // µî¼ö 1¾¿ Áõ°¡
                rank[number] = count;   // µî¼ö ¼³Á¤
                gotoxy(9, 4 + number * 2);  // Ä¿¼­ ÀÌµ¿
                for (int j = 0; j < horse[number]; j++)  // °ø¹é 40Ä­ Ãâ·Â
                    printf(" ");
                printf(">%d", horse[number]);  // ÀüÁøÇÑ ¼ö Ãâ·Â
                gotoxy(54, 4 + number * 2);
                printf("     %dµî  ", count);  // µî¼ö Ãâ·Â
                end = clock();                 // ½Ã°£ ÃøÁ¤ ³¡
                sec = (double)(end - start) / CLK_TCK; // ÁøÇàÇÑ ½Ã°£
                printf("%6.3f", sec);          // °É¸° ½Ã°£ Ãâ·Â
=======
    srand((unsigned)time(NULL));  // ëœë¤ ë‚œìˆ˜ ìƒì„±
    start = clock(); // ì‹œê°„ ì¸¡ì • ì‹œì‘
    while (count != num)  // ë„ì°©í•œ ë§ì˜ ìˆ«ìê°€ ì „ì²´ ë§ì˜ ìˆ˜ì™€ ë‹¤ë¥´ë©´ ì‹¤í–‰
    {
        number = rand() % num;  // ëœë¤ìœ¼ë¡œ ë§ ì„ íƒ
        race = rand() % 2 + 1;        // ëœë¤ìœ¼ë¡œ 1,2 ì¤‘ ì „ì§„í•  ìˆ˜ ì„ íƒ
        horse[number] = horse[number] + race;  // ì„ íƒëœ ë§ì´ ì„ íƒëœ ìˆ˜ë§Œí¼ ì „ì§„
        Sleep(300);         // 300/1000 ì´ˆë§Œí¼ ì§€ì—°

        if (horse[number] > 39)
        {
            horse[number] = 40;  // ì „ì§„í•œ ìˆ˜ê°€ 39ê°€ ì´ˆê³¼ë˜ë©´ 40ì´ ë¨
            if (rank[number] == 0)  // ë“±ìˆ˜ê°€ ì—†ìœ¼ë©´ ì‹¤í–‰
            {
                count++;    // ë“±ìˆ˜ 1ì”© ì¦ê°€
                rank[number] = count;   // ë“±ìˆ˜ ì„¤ì •
                gotoxy(9, 4 + number * 2);  // ì»¤ì„œ ì´ë™
                for (int j = 0; j < horse[number]; j++)  // ê³µë°± 40ì¹¸ ì¶œë ¥
                    printf(" ");
                printf(">%d", horse[number]);  // ì „ì§„í•œ ìˆ˜ ì¶œë ¥
                gotoxy(54, 4 + number * 2);
                printf("     %dë“±  ", count);  // ë“±ìˆ˜ ì¶œë ¥
                end = clock();                 // ì‹œê°„ ì¸¡ì • ë
                sec = (double)(end - start) / CLK_TCK; // ì§„í–‰í•œ ì‹œê°„
                printf("%6.3f", sec);          // ê±¸ë¦° ì‹œê°„ ì¶œë ¥
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
            }
        }
        else
        {
<<<<<<< HEAD
            gotoxy(9, 4 + number * 2);      // Ä¿¼­ ÀÌµ¿
            for (int j = 0; j < horse[number]; j++)  // ÀüÁøÇÒ ¼ö¸¸Å­ °ø¹é Ãâ·Â
                printf(" ");
            printf(">%d", horse[number]);  // ¾ó¸¶Å­ ÀüÁøÇÑÁö ¼ö Ãâ·Â
        }

        gotoxy(61, 0);
        end = clock();                     // ½Ã°£ ÃøÁ¤ ³¡
        sec = (double)(end - start) / CLK_TCK;  // ÁøÇàÇÑ ½Ã°£
        printf("%6.3fÃÊ", sec);            // ÀüÃ¼ ¼Ò¿ä½Ã°£ Ãâ·Â
    }
}
=======
            gotoxy(9, 4 + number * 2);      // ì»¤ì„œ ì´ë™
            for (int j = 0; j < horse[number]; j++)  // ì „ì§„í•  ìˆ˜ë§Œí¼ ê³µë°± ì¶œë ¥
                printf(" ");
            printf(">%d", horse[number]);  // ì–¼ë§ˆí¼ ì „ì§„í•œì§€ ìˆ˜ ì¶œë ¥
        }

        gotoxy(61, 0);
        end = clock();                     // ì‹œê°„ ì¸¡ì • ë
        sec = (double)(end - start) / CLK_TCK;  // ì§„í–‰í•œ ì‹œê°„
        printf("%6.3fì´ˆ", sec);            // ì „ì²´ ì†Œìš”ì‹œê°„ ì¶œë ¥
    }
}
>>>>>>> 2c9914b72b463ce2df9623d70c04dd9f84df2450
