/*
 * GL Bajaj Summer Assignment — Day 30
 * Problem : Complete mini project: Student-Library-Employee combined
 * Author  : Kishan Nishad
 */
/*
 * FINAL MINI PROJECT — Day 30
 * Combines: Arrays, Strings, Functions, Structs
 * Modules: Student Records | Library | Employee Payroll
 */
#include <stdio.h>
#include <string.h>

/* ──── Student Module ──── */
#define MAX_S 20
typedef struct { int roll; char name[40]; float avg; char grade; } Student;
Student students[MAX_S]; int sCount = 0;

void addStudent() {
    Student *s = &students[sCount++];
    float m[5], tot = 0;
    printf("Roll: "); scanf("%d", &s->roll); getchar();
    printf("Name: "); fgets(s->name, 40, stdin); s->name[strcspn(s->name,"\n")]='\0';
    printf("5 Subject marks: ");
    for (int i=0;i<5;i++){scanf("%f",&m[i]);tot+=m[i];}
    s->avg = tot/5;
    s->grade = s->avg>=90?'A':s->avg>=75?'B':s->avg>=60?'C':s->avg>=45?'D':'F';
    printf("Added: %s (Grade %c)\n", s->name, s->grade);
}
void displayStudents() {
    printf("%-8s %-20s %-8s %s\n","Roll","Name","Avg","Grade");
    for(int i=0;i<sCount;i++)
        printf("%-8d %-20s %-8.2f %c\n",students[i].roll,students[i].name,students[i].avg,students[i].grade);
}

/* ──── Book Module ──── */
#define MAX_B 20
typedef struct { int id; char title[50]; int available; } Book;
Book books[MAX_B]; int bCount = 0;

void addBook() {
    Book *b = &books[bCount]; b->id = ++bCount;
    printf("Title: "); scanf(" "); fgets(b->title,50,stdin); b->title[strcspn(b->title,"\n")]='\0';
    b->available = 1; printf("Book %d added.\n", b->id);
}
void issueBook() {
    int id; printf("Book ID: "); scanf("%d",&id);
    for(int i=0;i<bCount;i++) if(books[i].id==id){
        if(books[i].available){books[i].available=0;printf("Issued.\n");}
        else printf("Unavailable.\n"); return;
    } printf("Not found.\n");
}
void displayBooks() {
    for(int i=0;i<bCount;i++)
        printf("ID:%d | %-40s | %s\n",books[i].id,books[i].title,books[i].available?"Free":"Issued");
}

/* ──── Payroll Module ──── */
#define MAX_E 20
typedef struct { int id; char name[40]; double basic, net; } Emp;
Emp emps[MAX_E]; int eCount = 0;

void addEmp() {
    Emp *e = &emps[eCount]; e->id = ++eCount;
    printf("Name: "); scanf(" "); fgets(e->name,40,stdin); e->name[strcspn(e->name,"\n")]='\0';
    printf("Basic: "); scanf("%lf",&e->basic);
    double gross = e->basic * 1.35;
    e->net = gross - (gross > 30000 ? 0.1*gross : 0);
    printf("Net salary: %.2f\n", e->net);
}
void displayEmp() {
    for(int i=0;i<eCount;i++)
        printf("ID:%d %-20s Basic:%.2f Net:%.2f\n",emps[i].id,emps[i].name,emps[i].basic,emps[i].net);
}

/* ──── Main ──── */
int main() {
    int mod, c;
    printf("╔══════════════════════════════╗\n");
    printf("║   GL BAJAJ MINI PROJECT      ║\n");
    printf("║   Arrays + Strings + Structs ║\n");
    printf("╚══════════════════════════════╝\n");
    do {
        printf("\n[1] Students  [2] Library  [3] Payroll  [0] Exit\nModule: ");
        scanf("%d",&mod);
        if(mod==1){
            printf(" 1.Add Student  2.Display\nChoice: "); scanf("%d",&c);
            if(c==1)addStudent(); else displayStudents();
        } else if(mod==2){
            printf(" 1.Add Book  2.Issue  3.Display\nChoice: "); scanf("%d",&c);
            if(c==1)addBook(); else if(c==2)issueBook(); else displayBooks();
        } else if(mod==3){
            printf(" 1.Add Employee  2.Display\nChoice: "); scanf("%d",&c);
            if(c==1)addEmp(); else displayEmp();
        }
    } while(mod != 0);
    printf("\n=== Project Complete! All 30 days done. ===\n");
    return 0;
}
