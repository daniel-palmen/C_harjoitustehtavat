#define MAX_LEN 100
#define MAX_SUBJECT 21

typedef struct course{
    char name[MAX_SUBJECT];
    int score;
    int grade;
} course;
void write_file(char *name, course *arr, char *file_name, int many);
void read_file(char *file_name);
int make_grade(int score);