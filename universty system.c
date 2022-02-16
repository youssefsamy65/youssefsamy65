#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint8;
struct Node
{
uint8 StudentID;
uint8 StudentYear;
uint8 Course_1ID;
uint8 Course_1Grade;
uint8 Course_2ID;
uint8 Course_2Grade;
uint8 Course_3ID;
uint8 Course_3Grade;
struct Node *link;
};
int length=0;
void SDB_isfull(){
  if(length==0)
  printf("List Is Empty\n");
  else if (length==10)
  printf("List Is full\n");
  else
  printf("List Is Not full but not Empty\n");
}
void push(struct Node** head_ref,uint8 StudentID,uint8 StudentYear,uint8 Course_1ID,uint8 Course_1Grade,uint8 Course_2ID,uint8 Course_2Grade,uint8 Course_3ID,uint8 Course_3Grade)
{
    struct Node* p_1 = (struct Node*) malloc(sizeof(struct Node));
    p_1->StudentID  = StudentID;
    p_1->StudentYear  = StudentYear;
    p_1->Course_1ID  = Course_1ID;
    p_1->Course_1Grade  = Course_1Grade;
    p_1->Course_2ID  = Course_2ID;
    p_1->Course_2Grade  = Course_2Grade;
    p_1->Course_3ID  = Course_3ID;
    p_1->Course_3Grade  = Course_3Grade;
    p_1->link = (*head_ref);
    (*head_ref)    = p_1;
length=length+1;
}
void insertAfter(struct Node* prev_node,uint8 StudentID,uint8 StudentYear,uint8 Course_1ID,uint8 Course_1Grade,uint8 Course_2ID,uint8 Course_2Grade,uint8 Course_3ID,uint8 Course_3Grade)
{
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
    struct Node* p_1 =(struct Node*) malloc(sizeof(struct Node));
    p_1->StudentID  = StudentID;
    p_1->StudentYear  = StudentYear;
    p_1->Course_1ID  = Course_1ID;
    p_1->Course_1Grade  = Course_1Grade;
    p_1->Course_2ID  = Course_2ID;
    p_1->Course_2Grade  = Course_2Grade;
    p_1->Course_3ID  = Course_3ID;
    p_1->Course_3Grade  = Course_3Grade;
    p_1->link = prev_node->link;
    prev_node->link = p_1;
length=length+1;
}
void append(struct Node** head_ref,uint8 StudentID,uint8 StudentYear,uint8 Course_1ID,uint8 Course_1Grade,uint8 Course_2ID,uint8 Course_2Grade,uint8 Course_3ID,uint8 Course_3Grade)
{
    struct Node* p_1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    p_1->StudentID  = StudentID;
    p_1->StudentYear  = StudentYear;
    p_1->Course_1ID  = Course_1ID;
    p_1->Course_1Grade  = Course_1Grade;
    p_1->Course_2ID  = Course_2ID;
    p_1->Course_2Grade  = Course_2Grade;
    p_1->Course_3ID  = Course_3ID;
    p_1->Course_3Grade  = Course_3Grade;
    p_1->link = NULL;
length=length+1;
    if (*head_ref == NULL)
    {
       *head_ref = p_1;
       return;
    }
    while (last->link != NULL)
        last = last->link;
    last->link = p_1;
    return;
}
void deleteNode(struct Node** head_ref, int id)
{
  struct Node* temp=*head_ref,*prev;
  if(temp!=NULL&&temp->StudentID==id)
  {
        *head_ref = temp->link;
    free(temp);
length=length-1;
    return;
  }
  while(temp!=NULL&&temp->StudentID!=id)
  {
    prev=temp;
    temp=temp->link;
  }
}
void search(struct Node** head_ref, int id)
{
  struct Node* temp=*head_ref,*prev;
  if(temp!=NULL&&temp->StudentID==id)
  {
    *head_ref = temp->link;
    printf("StudentID is:%d\n",temp->StudentID);
    printf("StudentYear is:%d\n",temp->StudentYear);
    printf("Course_1ID is:%d\n",temp->Course_1ID);
    printf("Course_1Grade is:%d\n",temp->Course_1Grade);
    printf("Course_2ID is:%d\n",temp->Course_2ID);
    printf("Course_2Grade is:%d\n",temp->Course_2Grade);
    printf("Course_3ID is:%d\n",temp->Course_3ID);
    printf("Course_3Grade is:%d\n",temp->Course_3Grade);

    return;
  }
  while(temp!=NULL&&temp->StudentID!=id)
  {
    prev=temp;
    temp=temp->link;
  }
}
void is_exist(struct Node** head_ref, int id)
{
  struct Node* temp=*head_ref,*prev;
  if(temp!=NULL&&temp->StudentID==id)
  {
        *head_ref = temp->link;
    printf("  StudentID is Exist \n");
    return;
  }
  while(temp!=NULL&&temp->StudentID!=id)
  {
    prev=temp;
    temp=temp->link;
  }
}
void lengther()
{
  printf("Number of students in database = %d \n",length);
}
void printID(struct Node *node)
{
  while (node != NULL)
  {
    printf("StudentID Number %d is:%d\n",length,node->StudentID);
     node = node->link;
  }}
void printList(struct Node *node)
{
  while (node != NULL)
  {
    node = node->link;
    printf("Student Number %d StudentID is:%d\n",length,node->StudentID);
    printf("Student Number %d StudentYear is:%d\n",length,node->StudentYear);
    printf("Student Number %d Course_1ID is:%d\n",length,node->Course_1ID);
    printf("Student Number %d Course_1Grade is:%d\n",length,node->Course_1Grade);
    printf("Student Number %d Course_2ID is:%d\n",length,node->Course_2ID);
    printf("Student Number %d Course_2Grade is:%d\n",length,node->Course_2Grade);
    printf("Student Number %d Course_3ID is:%d\n",length,node->Course_3ID);
    printf("Student Number %d Course_3Grade is:%d\n",length,node->Course_3Grade);

  }
}
int main()
{
  struct Node* head = NULL;
uint8 StID;uint8 StYear;uint8 C_1ID;uint8 C_1Grade;uint8 C_2ID;uint8 C_2Grade;uint8 C_3ID;uint8 C_3Grade;
uint8 x,id;
A:printf("      >>Welcome to university System\n<<   ");
 printf("if you want to insert student in middle press 1:\n");
  printf("if you want to insert student in first press 2:\n");
  printf("if you want to insert student in last press 3:\n");
  printf("if you want to delete student press 4:\n");
  printf("if you want to search student press 5:\n");
  printf("if you want to print students Data press 6:\n");
  printf("if you want to print students ID press 7:\n");
  printf("if you want to search student id is exist or not press 8:\n");
  printf("if you want to know how many student in database press 9:\n");
  printf("if you want to know database is full or not press 10:\n");
  printf("if you want to Exit System press 0:\n");
  scanf("%d",&x);
  while(x!=0){
  switch(x)
  {
  case 1:
  {
    printf("Enter Student ID: ");
    scanf("%d",&StID);
    printf("Enter Student Year: ");
    scanf("%d",&StYear);
    printf("Enter Course_1 ID: ");
    scanf("%d",&C_1ID);
    printf("Enter Course_1 Grade: ");
    scanf("%d",&C_1Grade);
    printf("Enter Course_2 ID: ");
    scanf("%d",&C_2ID);
    printf("Enter Course_2 Grade: ");
    scanf("%d",&C_2Grade);
    printf("Enter Course_3 ID: ");
    scanf("%d",&C_3ID);
    printf("Enter Course_3 Grade: ");
    scanf("%d",&C_3Grade);
  append(&head,StID,StYear,C_1ID,C_1Grade,C_2ID,C_2Grade,C_3ID,C_3Grade);
  break; }
  case 2:
  {
    printf("Enter Student ID: ");
    scanf("%d",&StID);
    printf("Enter Student Year: ");
    scanf("%d",&StYear);
    printf("Enter Course_1 ID: ");
    scanf("%d",&C_1ID);
    printf("Enter Course_1 Grade: ");
    scanf("%d",&C_1Grade);
    printf("Enter Course_2 ID: ");
    scanf("%d",&C_2ID);
    printf("Enter Course_2 Grade: ");
    scanf("%d",&C_2Grade);
    printf("Enter Course_3 ID: ");
    scanf("%d",&C_3ID);
    printf("Enter Course_3 Grade: ");
    scanf("%d",&C_3Grade);
  push(&head,StID,StYear,C_1ID,C_1Grade,C_2ID,C_2Grade,C_3ID,C_3Grade);
  break;}
  case 3:
  {
    printf("Enter Student ID: ");
    scanf("%d",&StID);
    printf("Enter Student Year: ");
    scanf("%d",&StYear);
    printf("Enter Course_1 ID: ");
    scanf("%d",&C_1ID);
    printf("Enter Course_1 Grade: ");
    scanf("%d",&C_1Grade);
    printf("Enter Course_2 ID: ");
    scanf("%d",&C_2ID);
    printf("Enter Course_2 Grade: ");
    scanf("%d",&C_2Grade);
    printf("Enter Course_3 ID: ");
    scanf("%d",&C_3ID);
    printf("Enter Course_3 Grade: ");
    scanf("%d",&C_3Grade);
 insertAfter(head->link,StID,StYear,C_1ID,C_1Grade,C_2ID,C_2Grade,C_3ID,C_3Grade);
  break; }
  case 4:
  {
    printf("Enter Student id to delete it");
    scanf("%d",&id);
  deleteNode(&head,id);
  break;}
  case 5:
  {
  printf("Enter Student id to search it");
  scanf("%d",&id);
  search(&head,id);
  break;}
  case 6:
  {
    printList(head);
  break;}
   case 7:
  {
    printID(head);
  break;}
 case 8:
  {
  printf("Enter Student id to search it");
  scanf("%d",&id);
  is_exist(&head,id);
  break;}
 case 9:
  {
  lengther();
  break;}
   case 10:
  {
  SDB_isfull();
  break;}
  default:
  break;
    }
  goto A;
  }
  printf("Think you for using universty System \n");
  return 0;
}
