#include <stdio.h>
#include <math.h>

int money = 0;
int charge = 0;

void ChoiceMenu(int choice)
{
	while (choice < 1 || choice > 6 || isdigit(choice))
	{
		printf("�ٽ� �������ּ���: ");
		scanf_s("%d", &choice);
	}

	printf("���� �־��ּ���: ");
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
		printf("���� ���ڶ��ϴ�.");
		ChoiceMenu(choice);		
	}
}

void Menu()
{
	int choice = 0;
	printf("\n--------M E N U --------\n");
	printf("1. �����: 5500\\\n2. �Ҹ���������: 5000\\\n3. ���Ʈ������: 5500\\\n4. ��ü��: 4500\\\n5. �ڹ�Ĩ����Ǫġ��: 6000\\\n6. �Ƹ޸�ī��: 3500\\\n ");
	printf("-------------------------------\n");
	printf("���ϴ� �޴��� �����ϼ���: ");
	scanf_s("%d", &choice);
	ChoiceMenu(choice);
	printf("�ܵ��� ��������: %d \n", charge);
}

int main()
{
	Menu();	
	return 0;
}