#include<stdio.h>
#include<stdlib.h>

struct node
	{
	int x;
	struct node *next;
	};
//for adding elerment to the linked list
void append(struct node **q, int n)
{
	struct node *temp, *r;
	if(*q == NULL)  //if list is empty
	{
		temp = (struct node *) malloc (sizeof(struct node));
		temp -> x = n;
		temp -> next = NULL;
		*q = temp;
	}
	else
	{
		temp = *q;
		while(temp -> next != NULL)
			temp = temp->next;
		r = (struct node *) malloc (sizeof(struct node));
		r -> x = n;
		r -> next = NULL;
		temp -> next = r;
	}
}//sorting linked list
void sort(struct node **h)
{
	int i,j,a;

	struct node *temp1;
	struct node *temp2;

	for(temp1=*h;temp1!=NULL;temp1=temp1->next)
	{
		for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
		{ 
			if(temp2->x < temp1->x)
			{
				a = temp1->x;
				temp1->x = temp2->x;
				temp2->x = a;
			}
		}
	}
}
//function sum returning array of pointer of type struct node
struct node** sum(struct node *q, int k, int *n)
{
	struct node **arr;
	arr = (struct node **)malloc((*n)*sizeof(struct node *));
	for(int i=0; i < *n; i++)
	{
		arr[i] = (struct node *) malloc (sizeof(struct node));
	}
	struct node *i, *j, *temp;
	int a = 0, sum = 0;
	temp = NULL;
	for(i = q; i != NULL; )
	{
		
		if(sum + (i->x) < k) //if current index value(x) + previous sum < k 
		{
			append(&temp, i->x);
			sum += i->x;
			i = i-> next;
		}
		else
		{
			arr[a] = temp;
			a++;
			sum = 0;
			temp = NULL;
		}
	}
	arr[a] = temp;
	a++;
	*n = a;
	return arr; //returning array of pointer
}

int display(struct node *q)
{
	int n = 0;
	printf("\n");
	while(q != NULL)
	{
		printf("%d-->",q->x);
		n++;
		q = q->next;
	}
	printf("NULL\n");
	return n;
}
int main()
{
	struct node *p, **arr;
	int n, k, ch, a;
	p = NULL;
	while(1)
	{
		printf("Enter negative value of end of input: ");
		scanf("%d",&a);
		if(a < 0)
			break;
		append(&p, a);
	}
	printf("Enter the value of k: ");
	scanf("%d",&k);
	printf("------------------------------------");
	printf("\nAfter input in the linked list...\n");
	n = display(p);
	sort(&p);
//	printf("After Sorting...\n");
//	n = display(p);
	arr = sum(p, k, &n);
	printf("------------------------------------");
	printf("\nlinked list whose sum is less than %d...\n",k);
	for(int i = 0; i < n; i++)
	{
		int temp = display(arr[i]);
	}
	return 0;
}

