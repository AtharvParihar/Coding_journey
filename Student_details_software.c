#include<stdio.h>
#include<stdlib.h>

struct Node{//Structure for node
  int roll_no;
  char student_name[20];
  char course_details[20];
  struct Node *next;
};

void Transversal(struct Node *ptr){//Printing the details
    ptr=ptr->next;
    while(ptr!=NULL){
        printf("\nRoll number of student is: %d\n", ptr->roll_no);
        printf("Student name is: %s\n", ptr->student_name);
        printf("Course name is: %s\n\n", ptr->course_details);
        ptr=ptr->next;
    }
    
}

void create_node(struct Node *head){//Function to create node
  struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->next=NULL;
  printf("Enter the roll no: ");
  scanf("%d",&new_node->roll_no);
  printf("Enter the student name: ");
  scanf("%s", &new_node->student_name);
  printf("Enter the course name: ");
  scanf("%s", &new_node->course_details);
  
  struct Node *temp=head;
  
  while(temp->next!=NULL){
      temp=temp->next;
  }
  temp->next=new_node;//Connecting the node
  printf("\nNode created successfully...\n");
}

int main(){
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
    int value;
    MENU:
    printf("\n====MENU====\n");
    printf("1.Add student\n");
    printf("2.Transversal\n");
    printf("3.Exit\n\n");
    printf("Select one of the options above: ");
    scanf("%d",&value);
    
    switch(value){
        case 1: 
        printf("\n");
        create_node(head);
        goto MENU;
        break;
        case 2: 
        Transversal(head);
        goto MENU;
        break;
        case 3: 
        printf("Program exited....");
        printf("\n");
        return 0;
        
    }
    
    
    return 0;
}