#define _CRT_SECURE_NO_WARNINGS // scanf_s의 오류발생으로 scanf로 대체하는 구문
#include<stdio.h>

int main(void) {

    while (1) {
        double n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0; //변수 선언
        double v1 = 0, v2 = 0, v3 = 0, v4 = 0;
        char a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, i = 0;

        printf("input : ");

        scanf("%lf %c %lf %c", &n1, &a1, &n2, &a2);
        if (a2 == '=') {
        }
        else if (a2 != '=') {
            scanf("%lf %c", &n3, &a3);
            if (a3 == '=') {

            }
            else if (a3 != '=') {
                scanf("%lf %c", &n4, &a4);

                if (a4 == '=') {

                }
                else if (a4 != '=') {
                    scanf("%lf %c", &n5, &a5);
                }
            }
        }

        //scanf("%g %c %g %c %g %c %g %c %g %c", &n1, &a1, &n2, &a2, &n3, &a3, &n4, &a4, &n5, &a5);
        if (a2 == '=') { //수업시간에 배운 switch와 case를 사용
            switch (a1) {  //char a1의 값에 따라서 case를 설정
            case '+': //char a1의 값이 +일경우 +연산을 한다.
                v1 = n1 + n2;
                printf("output : %g %c %g = %g \n", n1, a1, n2, v1);
                break;
            case '-': //char a1의 값이 -일경우 -연산을 한다.
                v1 = n1 - n2;
                printf("output : %g %c %g = %g \n", n1, a1, n2, v1);
                break;
            case '*':  //char a1의 값이 *일경우 *연산을 한다.
                v1 = n1 * n2;
                printf("output : %g %c %g = %g \n", n1, a1, n2, v1);
                break;
            case '/':  //char a1의 값이 /일경우 /연산을 한다.
                v1 = n1 / n2;
                printf("output : %g %c %g = %g \n", n1, a1, n2, v1);
                break;
            }
        }

        else if (a3 == '=') { //총 16가지 경우를 if문으로 만듬
            if (a1 == '+' && a2 == '+') {
                v2 = n1 + n2 + n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '+' && a2 == '-') {
                v2 = n1 + n2 - n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '-' && a2 == '+') {
                v2 = n1 - n2 + n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '*' && a2 == '/') {
                v2 = n1 * n2 / n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '/' && a2 == '*') {
                v2 = n1 / n2 * n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '*' && a2 == '+') {
                v2 = n1 * n2 + n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '+' && a2 == '*') {
                v2 = n1 + (n2 * n3);
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '*' && a2 == '-') {
                v2 = (n1 * n2) - n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '-' && a2 == '*') {
                v2 = n1 - (n2 * n3);
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '+' && a2 == '/') {
                v2 = n1 + (n2 / n3);
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '/' && a2 == '+') {
                v2 = n1 / n2 + n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '-' && a2 == '/') {
                v2 = n1 - (n2 / n3);
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '/' && a2 == '-') {
                v2 = n1 / n2 - n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '-' && a2 == '-') {
                v2 = n1 - n2 - n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '*' && a2 == '*') {
                v2 = n1 * n2 * n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
            else if (a1 == '/' && a2 == '/') {
                v2 = n1 / n2 / n3;
                printf("output : %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, v2);
            }
        }

        else if (a4 == '=') { // 총 64가지 경우를 모두 if문으로 만듬
            if (a1 == '+' && a2 == '+' && a3 == '+') {
                v3 = n1 + n2 + n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '-' && a3 == '+') {
                v3 = n1 + n2 - n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '+' && a3 == '+') {
                v3 = n1 - n2 + n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '/' && a3 == '+') {
                v3 = (n1 * n2 / n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '*' && a3 == '+') {
                v3 = (n1 / n2 * n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '+' && a3 == '+') {
                v3 = (n1 * n2) + n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '*' && a3 == '+') {
                v3 = n1 + (n2 * n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '*' && a3 == '+') {
                v3 = n1 - (n2 * n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '-' && a3 == '+') {
                v3 = (n1 * n2) - n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '/' && a3 == '+') {
                v3 = n1 + (n2 / n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '+' && a3 == '+') {
                v3 = (n1 / n2) + n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '/' && a3 == '+') {
                v3 = n1 - (n2 / n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '-' && a3 == '+') {
                v3 = (n1 / n2) - n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '-' && a3 == '+') {
                v3 = n1 - n2 - n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '*' && a3 == '+') {
                v3 = (n1 * n2 * n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '/' && a3 == '+') {
                v3 = (n1 / n2 / n3) + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '+' && a3 == '-') {
                v3 = n1 + n2 + n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '-' && a3 == '-') {
                v3 = n1 + n2 - n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '+' && a3 == '-') {
                v3 = n1 - n2 + n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '/' && a3 == '-') {
                v3 = (n1 * n2 / n3) - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '*' && a3 == '-') {
                v3 = (n1 / n2) + n3 + n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '+' && a3 == '-') {
                v3 = (n1 * n2) + n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '*' && a3 == '-') {
                v3 = n1 + (n2 * n3) - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '*' && a3 == '-') {
                v3 = n1 - (n2 * n3) - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '-' && a3 == '-') {
                v3 = (n1 * n2) - n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '/' && a3 == '-') {
                v3 = n1 + (n2 / n3) - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '+' && a3 == '-') {
                v3 = (n1 / n2) + n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '/' && a3 == '-') {
                v3 = n1 - (n2 / n3) - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '-' && a3 == '-') {
                v3 = (n1 / n2) - n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '-' && a3 == '-') {
                v3 = n1 - n2 - n3 - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '*' && a3 == '-') {
                v3 = (n1 * n2 * n3) - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '/' && a3 == '-') {
                v3 = (n1 / n2 / n3) - n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '+' && a3 == '/') {
                v3 = n1 + n2 + (n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '-' && a3 == '/') {
                v3 = n1 + n2 - (n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '+' && a3 == '/') {
                v3 = n1 - n2 + (n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '/' && a3 == '/') {
                v3 = n1 * n2 / n3 / n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '*' && a3 == '/') {
                v3 = n1 / n2 * n3 / n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '+' && a3 == '/') {
                v3 = (n1 * n2) + n3 / n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '*' && a3 == '/') {
                v3 = n1 + (n2 * n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '*' && a3 == '/') {
                v3 = n1 - (n2 * n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '-' && a3 == '/') {
                v3 = (n1 * n2) - (n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '/' && a3 == '/') {
                v3 = n1 + (n2 / n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '+' && a3 == '/') {
                v3 = (n1 / n2) + (n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '/' && a3 == '/') {
                v3 = n1 - (n2 / n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '-' && a3 == '/') {
                v3 = (n1 / n2) - (n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '-' && a3 == '/') {
                v3 = n1 - n2 - (n3 / n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '*' && a3 == '/') {
                v3 = n1 * n2 * n3 / n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '/' && a3 == '/') {
                v3 = n1 / n2 / n3 / n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '+' && a3 == '*') {
                v3 = n1 + n2 + (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '-' && a3 == '*') {
                v3 = n1 + n2 - (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '+' && a3 == '*') {
                v3 = n1 - n2 + (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '/' && a3 == '*') {
                v3 = n1 * n2 / n3 * n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '*' && a3 == '*') {
                v3 = n1 / n2 * n3 * n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '+' && a3 == '*') {
                v3 = (n1 * n2) + (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '*' && a3 == '*') {
                v3 = n1 + (n2 * n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '*' && a3 == '*') {
                v3 = n1 - (n2 * n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '-' && a3 == '*') {
                v3 = (n1 * n2) - (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '+' && a2 == '/' && a3 == '*') {
                v3 = n1 + (n2 / n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '+' && a3 == '*') {
                v3 = (n1 / n2) + (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '/' && a3 == '*') {
                v3 = n1 - (n2 / n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '-' && a3 == '*') {
                v3 = (n1 / n2) - (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '-' && a2 == '-' && a3 == '*') {
                v3 = n1 - n2 - (n3 * n4);
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '*' && a2 == '*' && a3 == '*') {
                v3 = n1 * n2 * n3 * n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
            if (a1 == '/' && a2 == '/' && a3 == '*') {
                v3 = n1 / n2 / n3 * n4;
                printf("output : %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, v3);
            }
        }

        else if (a5 == '=') { // 곱셈 나눗셈을 먼저 처리하여 임시 함수에 저장하여 그 뒤에 덧셈, 뺼셈을 함으로 사칙연산을 수행할 수록 구현

            double t12 = 0, t23 = 0, t34 = 0, t45 = 0;

            if (a1 == '*') {
                v1 = n1 * n2;
                t12++;
            }
            else if (a1 == '/') {
                v1 = n1 / n2;
                t12++;
            }

            if (a2 == '*' && v1 != 0) {
                v2 = v1 * n3;
                t23++;
            }
            else if (a2 == '/' && v1 != 0) {
                v2 = v1 / n3;
                t23++;
            }
            else if (a2 == '*' && v1 == 0) {
                v2 = n2 * n3;
                t23++;
            }
            else if (a2 == '/' && v1 == 0) {
                v2 = n2 / n3;
                t23++;
            }

            if (a3 == '*' && v2 != 0) {
                v3 = v2 * n4;
                t34++;
            }
            else if (a3 == '/' && v2 != 0) {
                v3 = v2 / n4;
                t34++;
            }
            else if (a3 == '*' && v2 == 0) {
                v3 = n3 * n4;
                t34++;
            }
            else if (a3 == '/' && v2 == 0) {
                v3 = n3 / n4;
                t34++;
            }

            if (a4 == '*' && v3 != 0) {
                v4 = v3 * n5;
                t45++;
            }
            else if (a4 == '/' && v3 != 0) {
                v4 = v3 / n5;
                t45++;
            }
            else if (a4 == '*' && v3 == 0) {
                v4 = n4 * n5;
                t45++;
            }
            else if (a4 == '/' && v3 == 0) {
                v4 = n4 / n5;
                t45++;
            }

            // 1번째 연산자 덧셈
            if (a1 == '+' && t23 == 0) {
                v1 = n1 + n2;
            }
            else if (a1 == '+' && t23 != 0 && t34 == 0) {
                v2 = n1 + v2;
            }
            else if (a1 == '+' && t23 != 0 && t34 != 0 && t45 == 0) {
                v3 = n1 + v3;
            }
            else if (a1 == '+' && t23 != 0 && t34 != 0 && t45 != 0) {
                v4 = n1 + v4;
            }
            // 1번째 연산자 뺄셈
            if (a1 == '-' && t23 == 0) {
                v1 = n1 - n2;
            }
            else if (a1 == '-' && t23 != 0 && t34 == 0) {
                v2 = n1 - v2;
            }
            else if (a1 == '-' && t23 != 0 && t34 != 0 && t45 == 0) {
                v3 = n1 - v3;
            }
            else if (a1 == '-' && t23 != 0 && t34 != 0 && t45 != 0) {
                v4 = n1 - v4;
            }

            // 2번째 연산자 덧셈
            if (a2 == '+' && t34 == 0) {
                v2 = v1 + n3;
            }
            else if (a2 == '+' && t34 != 0 && t45 == 0) {
                v3 = v1 + v3;
            }
            else if (a2 == '+' && t34 != 0 && t45 != 0) {
                v4 = v1 + v4;
            }

            // 2번째 연산자 뺄셈
            if (a2 == '-' && t34 == 0) {
                v2 = v1 - n3;
            }
            else if (a2 == '-' && t34 != 0 && t45 == 0) {
                v3 = v1 - v3;
            }
            else if (a2 == '-' && t34 != 0 && t45 != 0) {
                v4 = v1 - v4;
            }

            // 3번째 연산자 덧셈뺄셈
            if (a3 == '+' && t45 == 0) {
                v3 = v2 + n4;
            }
            else if (a3 == '+' && t45 != 0) {
                v4 = v2 + v4;
            }
            else if (a3 == '-' && t45 == 0) {
                v3 = v2 - n4;
            }
            else if (a3 == '-' && t45 != 0) {
                v4 = v2 - v4;
            }

            // 4번째 연산자 덧셈뺄셈
            if (a4 == '+' && v4 == 0) {
                v4 = v3 + n5;
            }
            else if (a4 == '-' && v4 == 0) {
                v4 = v3 - n5;
            }

            printf("output : %g %c %g %c %g %c %g %c %g = %g \n", n1, a1, n2, a2, n3, a3, n4, a4, n5, v4);
            //printf("v1 : %g v2 : %g  v3 : %g v4 : %g \n", v1, v2, v3, v4);

        }
    }


    return 0;
}