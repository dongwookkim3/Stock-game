#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int money = 150000;
int samsung_price = 70000;
int apple_price = 70000;
int naver_price = 70000;
int cacao_price = 70000;
int samsung_count = 0;
int apple_count = 0;
int naver_count = 0;
int cacao_count = 0;
int option;
char input[100000];
long long int count;
void main()
{
Start:
	srand(time(NULL));
    while (1)
	{
        system("cls");
        printf("===== 주식 연습 프로그램 =====\n");
        printf("1. 주식 구매하기\n");
        printf("2. 주식게임 규칙 및 명령어\n");
        printf("3. 게임 종료하기\n");
        printf("=================================\n");
        printf("번호를 선택해 주세요. : ");
        scanf("%d", &option);
        getchar();
        switch (option)
		{
        	case 1:
			    while (1)
				{
					system("cls");
			        printf("잔고: %d원\n", money);
					printf("---------------------------------\n");
			        printf("Samsung 주식 가격: %d원\n", samsung_price);
			        printf("Apple   주식 가격: %d원\n", apple_price);
			        printf("Naver   주식 가격: %d원\n", naver_price);
			        printf("Cacao   주식 가격: %d원\n", cacao_price);
					printf("---------------------------------\n");
			        printf("보유한 Samsung 주식 수: %d개\n", samsung_count);
			        printf("보유한 Apple   주식 수: %d개\n", apple_count);
			        printf("보유한 Naver   주식 수: %d개\n", naver_count);
			        printf("보유한 Cacao   주식 수: %d개\n", cacao_count);
					printf("---------------------------------\n");
			        printf("어떤 주식을 구매 또는 판매하시겠습니까? (Samsung, Apple, Naver, Cacao, Skip, Back, 종료): ");
			        scanf("%s", input);
			        if (strcmp(input, "종료") == 0)
					{
			            exit(0); 
			        }
			        if (strcmp(input, "Skip") == 0)
			        {
					goto Change;
					}
					if (strcmp(input, "Back") == 0)
					{
					goto Start;
					}
			        else if (strcmp(input, "Samsung") == 0)
					{
			            printf("몇 개의 주식을 구매 또는 판매하시겠습니까? ");
			            scanf("%lld", &count);
			            if (count > 0)
						{ 
			                if (money < count * samsung_price)
							{
			                    printf("돈이 부족합니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                samsung_count += count;
			                money -= count * samsung_price;
			            }
			            else if (count < 0)
						{ 
			                if (samsung_count + count < 0)
							{
			                    printf("보유한 주식 수보다 많은 수를 판매할 수 없습니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                samsung_count += count;
			                money -= count * samsung_price;
			            }
			        }
			        else if (strcmp(input, "Apple") == 0)
					{
			            printf("몇 개의 주식을 구매 또는 판매하시겠습니까? ");
			            scanf("%lld", &count);
				        if (count > 0)
						{
			                if (money < count * apple_price)
							{
			                    printf("돈이 부족합니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                apple_count += count;
			                money -= count * apple_price;
			            }
			            else if (count < 0)
						{
			                if (apple_count + count < 0)
							{
			                    printf("보유한 주식 수보다 많은 수를 판매할 수 없습니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                apple_count += count;
			                money -= count * apple_price;
			            }
			        }
			        else if (strcmp(input, "Naver") == 0)
					{
			            printf("몇 개의 주식을 구매 또는 판매하시겠습니까? ");
			            scanf("%lld", &count);
			            if (count > 0)
						{
			                if (money < count * naver_price)
							{
			                    printf("돈이 부족합니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                naver_count += count;
			                money -= count * naver_price;
			            }
			            else if (count < 0)
						{
			                if (naver_count + count < 0)
							{
			                    printf("보유한 주식 수보다 많은 수를 판매할 수 없습니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                naver_count += count;
			                money -= count * naver_price;
			            }
			        }
			        else if (strcmp(input, "Cacao") == 0)
					{
			            printf("몇 개의 주식을 구매 또는 판매하시겠습니까? ");
			            scanf("%lld", &count);
			            if (count > 0)
						{
			                if (money < count * cacao_price)
							{
			                    printf("돈이 부족합니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                cacao_count += count;
			                money -= count * cacao_price;
			            }
			            else if (count < 0)
						{
			                if (cacao_count + count < 0)
							{
			                    printf("보유한 주식 수보다 많은 수를 판매할 수 없습니다.\n");
			                    Sleep(1000);
			                    continue;
			                }
			                cacao_count += count;
			                money -= count * cacao_price;
			            }
			        }
Change:
					srand(time(NULL));
				    samsung_price += rand() % 15001 - 5000;
				    apple_price += rand() % 15001 - 5000;
				    naver_price += rand() % 15001 - 5000;
				    cacao_price += rand() % 15001 - 5000;
			    	system("cls");
			    }
    		case 2:
				system("cls");
				printf("------주식게임 규칙 및 명령어------\n");
				printf("1. 사고싶은 회사의 이름을 영어로 입력한다. (앞자리는 대문자로)\n");
				printf("2. 회사를 고른 후에 구매 혹은 판매할만큼 입력한다. \n		양수는 구매 음수는 판매\n");
				printf("3. 주가변동이 일어난후 구매 또는 판매 또는 Skip을 입력하여 돈을 번다.\n");
				printf("-----------------------------------\n");
				printf("아무키나 눌러서 메뉴로 돌아가세요.");
				getchar();
				system("cls");
				break;
			case 3:
			{
				exit(0); 
			}
			default:
			{
				printf("잘못된 입력입니다.\n");
				Sleep(1000);
				system("cls");
				continue;
			}
		}
	}
}

