#include <stdio.h>
#include <math.h>

int money = 0;
int charge = 0;

void ChoiceMenu(int choice)
{
	while (choice < 1 || choice > 6 || isdigit(choice))
	{
		printf("다시 선택해주세요: ");
		scanf_s("%d", &choice);
	}

	printf("돈을 넣어주세요: ");
	scanf_s("%d", &money);


	switch (choice)
	{
	case 1:
		charge = money - 5500;
		break;
	case 2:
		charge = money - 5000;
		break;
	case 3:
		charge = money - 5500;
		break;
	case 4: 
		charge = money - 4500;
		break;
	case 5:
		charge = money - 6000;
		break;
	case 6:
		charge = money - 3500;
		break;
	}

	while (charge < 0) {
		printf("돈이 모자랍니다.");
		ChoiceMenu(choice);		
	}
}

void Menu()
{
	int choice = 0;
	printf("\n--------M E N U --------\n");
	printf("1. 딸기라떼: 5500\\\n2. 죠리퐁프라페: 5000\\\n3. 요거트스무디: 5500\\\n4. 돌체라떼: 4500\\\n5. 자바칩프라푸치노: 6000\\\n6. 아메리카노: 3500\\\n ");
	printf("-------------------------------\n");
	printf("원하는 메뉴를 선택하세요: ");
	scanf_s("%d", &choice);
	ChoiceMenu(choice);
	printf("잔돈을 받으세요: %d \n", charge);
}

int main()
{
	Menu();	
	return 0;
}