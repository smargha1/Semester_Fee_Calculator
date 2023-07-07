#include<stdio.h>
#define size 50
int main(void){
	double credit, credit_fee, waiver, my_waiver, final_waiver;
	int i,semester, month, two_month, three_month, theory_lab, lab, theory_sub, midterm, final_exam;
	char name[size];
	printf("\t\t\t\t \t GLOBAL UNIVERSITY BANGLADESH\n");
	printf("\t\t\t\t \t --Semester Fee Calculation--\n");
	printf("\t\t\t\t \t\t  ~~~~~~~~~~~\n\n");
	
	again:
	printf("\t\t\t\t Enter Your Nickname   (ex. Argha)  : ");
	scanf("%s", &name);
	printf("\n\t\t\t\t Hey %s,\n", name);		
	printf("\t\t\t\t Enter Your Semester Credit         : ");
	scanf("%lf", &credit);
	
	label:
	printf("\t\t\t\t Enter Per Credit Fee \t            : ");
	scanf("%lf", &credit_fee);	
	if(credit_fee == 1500){
		printf("\n\t\t\t\t    Great! You're Evening Batch Student.\n\n");
	}
	else if(credit_fee == 2000){
		printf("\n\t\t\t\t    Great! You're Regular Batch Student.\n\n");
	}
	else{
		printf("\n\t\t\t\t      Please enter valid credit fee!\n\n");
		goto label;
	}
	
	label2:
	printf("\t\t\t\t Enter Your Waiver        (ex. 40)  : ");
	scanf("%lf", &waiver);
	if(waiver>100){
		printf("\t\t\t\t         Please enter valid waiver!\n");
		goto label2;
	}
	else if(waiver == 100)
	
	my_waiver = waiver / 100;
	if(my_waiver == 50){
		semester = credit * credit_fee * my_waiver + 4500;
	}
	else{
		my_waiver = waiver / 100;
		final_waiver = 1 - my_waiver;
		semester = credit * credit_fee * final_waiver + 4500;
	}
/*-------------------------------------------------*/		
	fees:
	int fee;
	printf("\t\t\t\t Do you have exam fee?    (Y=1|N=0) : ");
	scanf("%d", &fee);	
    if(fee == 1){
        goto yes;
    }
    else if(fee == 0){
        goto next;
    }
    else{
        printf("\n\t\t\t\t       Please enter valid selection!\n\n");
        goto fees;
    }  
/*-------------------------------------------------*/	  
    yes:
	printf("\t\t\t\t Enter Your Total Subject (ex. 6)   : ");
    scanf("%d", &theory_lab);       
    printf("\t\t\t\t Enter Your Lab Subjects  (ex. 3)   : ");
    scanf("%d", &lab);   
	theory_sub = theory_lab - lab;  
    midterm = theory_sub * 250;
    final_exam = theory_lab * 500;
	printf("\t\t\t\t ---------------------------------------------\n"); 	
	printf("\t\t\t\t Your Mid-Term Exam Fee is \t    : %d/-\n", midterm);
	printf("\t\t\t\t Your Final Exam Fee is \t    : %d/-\n", final_exam);
	printf("\t\t\t\t ---------------------------------------------\n");
	printf("\t\t\t\t Your Total Exam Fee is \t    : %d/-\n", midterm + final_exam);
	printf("\t\t\t\t ---------------------------------------------\n");
		
	next:
	month = semester / 4;
	two_month = month + month;
	three_month = month + month + month;
	printf("\t\t\t\t ---------------------------------------------\n");
	printf("\t\t\t\t This Semester Per Monthly Fee is   : ");
	printf("%d/-\n", month);	
	printf("\t\t\t\t This Semester Two Month Fee is     : ");
	printf("%d/-\n", two_month);	
	printf("\t\t\t\t This Semester Three Month Fee is   : ");
	printf("%d/-\n", three_month);
	printf("\t\t\t\t ---------------------------------------------\n");
	printf("\t\t\t\t This Semester Total Fee is  \t    : ");
	printf("%d/-\n", semester);
	printf("\t\t\t\t ---------------------------------------------\n\n");	
	printf("\t\t\t\t Good Bye %s.\n", name);
	printf("\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\t\t\t\t \t\t\t\t-Created By 191 Batch\n");
	printf("\t\t\t\t \t\t\t\t       Dept. of C.S.E\n\n\n");
	goto again;
}
