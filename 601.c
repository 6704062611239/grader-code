#include <stdio.h>

typedef struct {
    char name[16];
    char surname[20];
    int score[5];
    float stotal;
} Student;

void readStudentData(Student *s) {
	int j;
    scanf("%s %s", s->name, s->surname);
    s->stotal = 0;
    for ( j = 0; j < 5; j++) {
        scanf("%d", &s->score[j]);
        s->stotal += s->score[j];
    }
}

void printScoreI(Student students[], int size, int i) {
	int j;
    for ( j = 0; j < size; j++) {
        printf("%s %d\n", students[j].name, students[j].score[i - 1]);
    }
}

int main() {
    int n,i;
    scanf("%d", &n);

    Student students[n];
    for ( i = 0; i < n; i++) {
        readStudentData(&students[i]);
    }

    int examNum;
    scanf("%d", &examNum);

    printScoreI(students, n, examNum);

    return 0;
}
