#include <stdio.h>
#include <stdlib.h>

//���� ���� 
struct student {
	int		ID;
	char	name[100];
	float		grade;
	
};


int main(int argc, char *argv[]) {
	
	//instance ����
	
	struct student s1 = {2116691, "HAYEON", 2.5};
	
	printf("ID : %i\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	// �ٸ� �� ���� 
	s1.ID = 123456;
	s1.name[0] = 'D';
	s1.grade = 4.3;
	
	//��� 
	printf("���� ��\n");
	printf("ID : %i\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	strcpy(s1.name, "Raccoon");
	printf("name2 : %s\n", s1.name);
	
	
	return 0;
}
