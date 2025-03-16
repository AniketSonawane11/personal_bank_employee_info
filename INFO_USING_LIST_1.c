#include <stdio.h>

struct P_INFO
{
    char name[15];
    long mob;
    char email[25];
};

struct BANK_INFO
{
    long acc_no;
    int acc_type;
    long acc_bal;
};

struct EMP_INFO
{
    char com[15];
    char post[15];
    char dep[20];
    long sal;
};

struct INFO
{
    struct P_INFO *p_info;
    struct BANK_INFO *bank_info;
    struct EMP_INFO *emp_info;
    struct INFO *next;
};
struct INFO *first = NULL;
struct P_INFO *p_info = NULL;
struct BANK_INFO *bank_info = NULL;
struct EMP_INFO *emp_info = NULL;

void get_p_info()
{

    struct P_INFO *nn1;
    struct INFO *nn2, *temp;

    nn1 = (struct P_INFO *)malloc(sizeof(struct P_INFO));
    nn2 = (struct INFO *)malloc(sizeof(struct INFO));
    temp = first;
    nn2->next = NULL;

    printf("ENTER YOUR NAME : ");
    scanf(" %[^\n]c", &nn1->name);

    printf("ENTER MOB NO.   : ");
    scanf("%ld", &nn1->mob);

    printf("ENTER E_MAIL.   :");
    scanf(" %s", &nn1->email);

    printf("\n");

    if (first == NULL)
    {
        first = nn2;
        if (first->p_info == NULL)
        {
            first->p_info = nn1;
        }
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->p_info = nn1;
    }

    printf("---------------------------------------\n");
}

void get_bank_info()
{
    struct BANK_INFO *nn1;
    struct INFO *temp, *nn2;

    nn1 = (struct BANK_INFO *)malloc(sizeof(struct BANK_INFO));
    nn2 = (struct INFO *)malloc(sizeof(struct INFO));
    temp = first;
    nn2->next = NULL;

    printf("ENTER YOUR ACC_NO : ");
    scanf(" %ld", &nn1->acc_no);

    printf("\n");
    printf("1 - SAVING\n2 - CURRENT\n\n");

    printf("ENTER ACC_TYPE.   : ");
    scanf("%d", &nn1->acc_type);

    printf("ENTER ACC_BALENCE : ");
    scanf(" %ld", &nn1->acc_bal);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->bank_info = nn1;

    printf("\n\n");
    printf("---------------------------------------\n");
}

void get_emp_info()
{

    struct EMP_INFO *nn1;
    struct INFO *temp, *nn2;

    nn1 = (struct BANK_INFO *)malloc(sizeof(struct BANK_INFO));
    nn2 = (struct INFO *)malloc(sizeof(struct INFO));
    temp = first;
    nn2->next = NULL;

    printf("ENTER COMPANY NAME : ");
    scanf(" %[^\n]c", &nn1->com);

    printf("ENTER POST.        : ");
    scanf(" %[^\n]c", &nn1->post);

    printf("ENTER DEPARTMENT.  : ");
    scanf(" %[^\n]c", &nn1->dep);

    printf("ENTER SALARY.      : ");
    scanf("%ld", &nn1->sal);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->emp_info = nn1;

    printf("\n\n");
    printf("---------------------------------------\n");
}

void display_info()
{
    struct INFO *temp;
    temp = first;

    if (first == NULL)
    {
        printf("LIST IS EMPTY!\nNOTHING TO DISPLAY\n");
    }
    else
    {

        while (temp != NULL)
        {
            printf("PERSONAL DETAILS\n\n");
            printf("NAME   : %s\n", temp->p_info->name);
            printf("MOB NO : %ld\n", temp->p_info->mob);
            printf("E_MAIL : %s\n", temp->p_info->email);

            printf("BANK DETAILS\n\n");
            printf("ACC_NO : %ld\n", temp->bank_info->acc_no);
            printf("ACC_TYPE : ");

            if (temp->bank_info->acc_type == 1)
            {
                printf("SAVING ACC\n");
            }
            else
            {
                printf("CURRENT ACC\n");
            }
            printf("ACC_BALENCE : %ld\n", temp->bank_info->acc_bal);

            printf("COMPANY DETAILS\n\n");
            printf("COMPANY NAME.  : %s\n", temp->emp_info->com);
            printf("POST.          : %s\n", temp->emp_info->post);
            printf("DEPARTMENT.    : %s\n", temp->emp_info->dep);
            printf("SALERY.        : %s\n", temp->emp_info->dep);

            temp = temp->next;
        }
    }

    printf("\n\n");
    printf("---------------------------------------\n");
}

int main()
{
    int EXIT = 1, ch;
    long mob;
    struct EMP_INFO *temp;
    struct BANK_INFO temp2;

    do
    {

        printf("1 - ADD ANOTHER PERSON'S INFO\n");
        printf("2 - DISPLAY INFO\n");
        printf("3 - EXIT\n\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: // ADD INFO

            printf("PERSON INFO\n\n");
            get_p_info();

            printf("BANK_INFO\n\n");
            get_bank_info();

            printf("EMPLOYEE INFO\n\n");
            get_emp_info();

            break;

        case 2: // DISPLAY_INFO

            printf("iama\n");
            display_info();
            printf("2hab\n");

            break;

        case 3: // EXIT

            EXIT = 0;
            break;

        default: // INVALID
            printf("INVALID CHOICE\n");
        }

    } while (EXIT);

    printf("\n\n");
    printf("---------------------------------------\n");

    return 0;
}
