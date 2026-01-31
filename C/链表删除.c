#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct num{
	char val[25];
	struct num * next;
};
struct num * creat_link(){
	char value[25];
	struct num *head_p=NULL,*pre_p=NULL,*cur_p=NULL;
	while(scanf("%s",value)!=EOF){
		if(value[0]=='#')break;
		cur_p=(struct num *)malloc(sizeof(struct num));
		if(cur_p==NULL){
			printf("内存分配失败!\n");
			exit(0);
		}
		strcpy(cur_p->val,value);
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
struct num* delete_link(struct num* head,char del[]){
	if(head==NULL)return NULL;
	
	while(head!=NULL && strcmp(head->val,del)==0){
		struct num* tmp=head;
		head=head->next;
		free(tmp);
	}
	struct num* p=head;
	
	while(p!=NULL && p->next!=NULL){
		if(strcmp(p->next->val,del)==0){
			struct num* tmp=p->next;
			p->next=tmp->next;
			free(tmp);
		}else{
			p=p->next;
		}
	}
	return head;
}
void list_link(struct num* head){
	struct num* p=head;
	int count=0;
	if(!p){
		printf("空链表\n");
		return;
	}
	
	while(p!=NULL){
		printf("%s\n",p->val);
		count++;
		p=p->next;
	}
	printf("%d\n",count);
}
int main(void){
	char del[25];
	struct num * head;
	head=creat_link();
	list_link(head);
	scanf("%s",del);
	head=delete_link(head,del);
	list_link(head);
	
	return 0;
}

