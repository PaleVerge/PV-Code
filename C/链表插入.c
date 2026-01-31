#include <stdio.h>
#include <stdlib.h>
struct num{
	int val;
	struct num * next;
};
struct num * creat_link(){
	int value;
	struct num *head_p=NULL,*pre_p=NULL,*cur_p=NULL;
	while(scanf("%d",&value)!=EOF){
		if(value==0)break;
		cur_p=(struct num *)malloc(sizeof(struct num));
		if(cur_p==NULL){
			printf("内存分配失败!\n");
			exit(0);
		}
		cur_p->val=value;
		cur_p->next=NULL;
		if(head_p==NULL){
			head_p=cur_p;
		}else{
			pre_p->next=cur_p;
			pre_p=cur_p;
		}
		pre_p=cur_p;
	}
	return head_p;
}
struct num* insert_link(struct num* head,int n){
	struct num* ins,*pre_p;
	struct num* p=head;
	ins=(struct num*)malloc(sizeof(struct num));
	ins->val=n;
	ins->next=NULL;
	if(p==NULL || n<p->val){
		ins->next=head;
		return ins;
	}
	while(p->val<n && p!= NULL){
		pre_p=p;
		p=p->next;
	}
	pre_p->next=ins;
	ins->next=p;
	return head;
}
void list_link(struct num* head){
	struct num* p=head;
	if(p==NULL){
		printf("空链表\n");
	}else{
		while(p!=NULL){
			printf("%d ",p->val);
			p=p->next;
		}
	}
}
int main(void){
	int ins_num;
	struct num * head;
	
	head=creat_link();
	scanf("%d",&ins_num);
	head=insert_link(head,ins_num);
	list_link(head);
	
	return 0;
}
