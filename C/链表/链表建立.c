#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct num)
struct num{
	int val;
	struct num* next;
};
struct num* create_link_tail(void){
	struct num* head_p=NULL,*cur_p=NULL,*pre_p=NULL;
	int value;
	while(scanf("%d",&value)!=EOF){
		if(value==-1)break;
		cur_p=(struct num*)malloc(LEN);
		if(cur_p==NULL){
			printf("内存分配失败！\n");
			exit(0);
		}
		cur_p->val=value;
		cur_p->next=NULL;
		if(head_p==NULL){
			head_p=cur_p;
		}else{
			pre_p->next=cur_p;
		}
		pre_p=cur_p;
	}
	return head_p;
}
struct num* create_link_head(void){
	struct num* head_p=NULL,*cur_p=NULL;
	int value;
	while(scanf("%d",&value)!=EOF){
		if(value==-1)break;
		cur_p=(struct num*)malloc(LEN);
		if(cur_p==NULL){
			printf("内存分配失败！\n");
			exit(0);
		}
		cur_p->val=value;
		cur_p->next=head_p;
		head_p=cur_p;
	}
	return head_p;
}
void list_link(struct num* head){
	struct num* p;
	p=head;
	if(head==NULL){
		printf("空链表\n");
	}else{
		while(p!=NULL){
			printf("%d ",p->val);
			p=p->next;
		}
	}
}
int main(void){
	struct num* head;
	head=create_link_head();
	list_link(head);
	return 0;
}

