#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
	 int *new_array(int m, int n) 
{    
    
	int *mas; 
	mas = (int*)malloc(n*m*sizeof(int)); 
	return mas;
	 
} 

 void vvod(int *mas , int m, int n)
 {
 	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) 
		{
			scanf("%d", (mas + i * m + j));
		}
	}
 }
 	
 void random(int *mas , int m, int n){
 	
 	srand(time(NULL));

	for (int i = 0; i < n; i++) 
	{

		for (int j = 0; j < m; j++) 
		{
			*(mas + i * m + j) = rand()%100;
		}
	}
 } 	
 
 void sortirovka(int *mas, int m, int n){
 	int count=0;
	int temp;
	
		
		for (int i = 0; i < n; i++)
		{
			count = 0;
			while (count != m-1)
			{
				count = 0;
				for (int j = 0; j < m-1; j++)
				{
					if (*(mas + i * m + j) > * (mas + i * m + j + 1))
					{
						temp = *(mas + i * m + j);
						*(mas + i * m + j) = *(mas + i * m + j + 1);
						*(mas + i * m + j + 1) = temp;
					}
					else {
						count++;
					}
				}
			}
		}

 }
 
 void vivod (int *mas, int m, int n){
 	
 		for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("  %d  ", *(mas + i * m + j));
		}
		printf("\n");
	}	
 }



int main()
{
	setlocale(0, "rus");
     	 int input;
     printf("����� ����������\n");
	 printf("������� ������\n");
	 
	 	while(input != 7) 
	{
		printf("1.������������ ��������� ������ ��� ���������� �������\n"); 
		printf("2.���� ��������� ������� � ����������\n");
		printf("3.���������� ������� ���������� �������\n");
		printf("4.���������� ��������� �������:������������� ������ ������� �� ����������� � ������� ������ ��������\n");
		printf("5.����� ��������� ������� �� �����\n");
		printf("6.������������ ������, ���������� ��� �������\n"); 
		printf("7.�����\n"); 
	
		scanf("%d",&input); 
	 	switch(input)	
		{
			case 1:
				int n,m;	
 	printf("������� ������ �������");
 	scanf("%d",&n);
 	printf("��");
 	scanf("%d",&m);
			int *mas;
     mas=new_array(n,m);  
	              break; 
		    case 2:vvod( mas,m,n); break;
		    case 3:random(mas,m,n); break;
		    case 4:sortirovka(mas,m,n); break;
		    case 5:vivod (mas,m,n); break; 
			case 6:free(mas);  break; 
			case 7: break; 
		}	
}
}
