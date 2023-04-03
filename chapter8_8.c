#include <stdio.h>

/*
Ex8
Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each student, and the average score, high score, and low score for each quiz
*/

int main(void)
{
	int i, j, student_total, quiz_total, lowest = 100, highest = 0;	
	int grade[5][5];

	for (i = 0; i < 5; i++){
		printf("Enter student%d\'s grade : ",i+1);
		for (j = 0; j < 5; j++){
			scanf("%d",&grade[i][j]);
		}
	}		

	// total score and average score for each student
	for (i = 0; i < 5; i++){
		printf("\n");
		for (j = 0; j < 5; j++){
			student_total += grade[i][j];
		}
		printf("student%d\'s total score : ",i+1);
		printf("%d\n",student_total);
		printf("student%d\'s average score : %.2f\n",i+1, (float) student_total/5);
		student_total = 0;
	}

	// average score, high score, and low score for each quiz
	for (i = 0; i < 5; i++){
		printf("\n");
		for (j = 0; j < 5; j++){
			quiz_total += grade[j][i];
			if (grade[j][i] > highest){
				highest = grade[j][i];  
			}
			if (grade[j][i] < lowest){
				lowest = grade[j][i];
			} 
		}
		printf("quiz%d\'s average score : %.2f\n",i+1,(float) quiz_total/5);	
		printf("quiz%d\'s highest score : %d\n",i+1,highest);
		printf("quiz%d\'s lowest score : %d\n",i+1,lowest);
		highest = 0;
		lowest = 101;	
		quiz_total = 0;
	}
	return 0;
}
