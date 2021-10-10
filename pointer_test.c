#include <stdio.h>
typedef struct {
   char * name;
   float math_grade;
   float english_grade;
   float literature_grade;

} HocSinh;

int main()
{
    HocSinh student_1;
    student_1.name = "Hoang Vu";
    student_1.math_grade = 9;
    student_1.english_grade = 9.5;
    student_1.literature_grade = 10;
    //
    HocSinh student_2;
    student_2.name = "Tran Cong Lam";
    student_2.math_grade = 7;
    student_2.english_grade = 6.5;
    student_2.literature_grade = 6.6;
    //
    HocSinh student_3;
    student_3.name = "Tong Tran Le Huy";
    student_3.math_grade = 1.47;
    student_3.english_grade = 1.19;
    student_3.literature_grade = 3;
    printf("name: %s math_grade: %f english_grade: %f literature_grade: %f\n", student_1.name , student_1.math_grade, student_1.english_grade, student_1.literature_grade); 
    printf("name: %s math_grade: %f english_grade: %f literature_grade: %f\n", student_2.name , student_2.math_grade, student_2.english_grade, student_2.literature_grade); 
    printf("name: %s math_grade: %f english_grade: %f literature_grade: %f\n", student_3.name , student_3.math_grade, student_3.english_grade, student_3.literature_grade);
    ///
    printf("\n");
    HocSinh duong_class[3] = {
        student_1,
        student_2,
        student_3
    };
    for(int i = 0; i < 3; i++) 
    {
        HocSinh student = duong_class[i];
        printf("name= %s, math_grade= %f, english_grade= %f, literature_grade= %f\n", student.name, student.math_grade, student.english_grade,student.literature_grade);
    }
}
