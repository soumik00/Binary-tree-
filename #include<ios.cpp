#include <iostream>
#include<queue>
using namespace std;
// class Node
// {
// 	public:
// 	int data;
// 	Node *next;
// };

// void push(Node** head_ref, int new_data)
// {
// 	Node* new_node = new Node();

// 	new_node->data = new_data;

// 	new_node->next = (*head_ref);

// 	(*head_ref) = new_node;
// }


// void insertAfter(Node* prev_node, int new_data)
// {
// 	if (prev_node == NULL)
// 	{
// 		cout<<"the given previous node cannot be NULL";
// 		return;
// 	}

// 	Node* new_node = new Node();

// 	new_node->data = new_data;

// 	new_node->next = prev_node->next;

// 	prev_node->next = new_node;
// }

// void append(Node** head_ref, int new_data)
// {
// 	Node* new_node = new Node();

// 	Node *last = *head_ref; 

// 	new_node->data = new_data;
// 	new_node->next = NULL;

// 	if (*head_ref == NULL)
// 	{
// 		*head_ref = new_node;
// 		return;
// 	}

// 	while (last->next != NULL)
// 		last = last->next;
// 	last->next = new_node;
// 	return;
// }


// void printList(Node *node)
// {
// 	while (node != NULL)
// 	{
// 		cout<<" "<<node->data;
// 		node = node->next;
// 	}
// }

// int main()
// {
// 	Node* head = NULL;
	
// 	append(&head, 6);
	
// 	push(&head, 7);

// 	push(&head, 1);
	
// 		// linked list becomes 1->7->6->4->NULL
// 	append(&head, 4);
	
// 	// Insert 8, after 7. So linked
// 	// list becomes 1->7->8->6->4->NULL
// 	insertAfter(head->next, 8);
	
// 	cout<<"Created Linked list is: ";
// 	printList(head);
	
// 	return 0;
// }







//pointer 
// void increment(int *a){
// 	*a = *a +1;
// }

// int Sumofelement(int* a,int size){
// 	int sum = 0;

// 	for (int i = 0; i < size; i++)
// 	{
// 		/* code */ sum+=a[i];
// 	};
// 	return sum;
// }


// int main(){
// 	int a;
// 	a =10;
// 	int *p;
// 	p = &a;
// 	*p = 12;
// 	cout<<p<<endl;
// 	cout<<*p<<endl;
// 	cout<<&a<<endl;
// 	cout<<a<<endl;

// 	//point arithmetic


// 	int c = 1025;
// 	int *d;
// 	d = &c;
// 	cout<<*d<<endl;
// 	cout<<(d+1)<<endl;
// 	cout<<*(d+1)<<endl;

// 	int x = 6;
// 	int* ptr = &x;
// 	cout<<*ptr<<endl;
// 	cout<<&x<<endl;
// 	int** q = &ptr;
// 	cout<<**q<<endl;
// 	cout<<*q<<endl;

// 	int y = 10;
// 	increment(&y);
// 	cout<<y<<endl;
// //pointer and array
// 	int m[] = {2,4,5,6,78,8};
// 	int *f = m;
//     cout<<m<<endl;
//     cout<<&m[0]<<endl;
//     cout<<m[0]<<endl;
//     cout<<*m<<endl;    int total = Sumofelement(a);


    // int u[] = {1,23,4,5,6,7};
    // 	int size  = sizeof(u) / sizeof(u[0]); 

    // int total = Sumofelement(u,size);

    // cout<<total<<endl;


// char c[] = "JOHS";
// char* c2;
// c2 = c;
// cout<<c2[1]<<endl;
// c2[1] = 'u';
// cout<<c2[1]<<endl;
// cout<<c<<endl;	
// cout<<sizeof(c)<<endl;

// for(int i ; i<5;i++){
// 	cout<<c2[i]<<endl;
// 	cout<<c2++<<endl;
// }


// };
// int getcounting(int n){
// 	if(n<=1){
// 		return 1;
// 	}
// 	int fun = getcounting(n-1);
// 	int answer = n * fun;
// return answer;

// }


// int main(){
// 	int n;
// 	cout<<"plz enter a number"<<endl;
// 	cin>>n;
// 	cout<<"counting:"<<endl;
// 	 cout<<getcounting(n)<<endl;
// 	}


//array in c++

// int main(){
// 	int arr[4] ={1,2,34,4};
// 	for(int i = 0; i < arr.lenth;i++)
// 	{
// 		cout<<arr[i]<<endl;
// 	}
// }




// int main(){
// 	int array[9] ={12,18,20,42,8,10};
// 	// int num = 0;
// 	int findThenumber =42;
// 	for(int i = 0; i < 9;i++){
// 		if (array[i] == findThenumber){
// 			cout<<i<<endl;
// 			// num++;
// 		}
// 	}
// 	cout<<"-1"<<endl;
// }
// 



// int main(){
// 	// int arr[6] = {2,4,5,6,3};
// 	int n;
// 	cin>>n;
// 	int arr[n];

// for(int i = 0; i<n;i++){
// 	cin>>arr[i];

// };
// for (int j = 0; j < n -1; k++)
// {
// 	/* code */
// 	for (int k = 0; k < n; k++)
// 		th
// 	{
// if(arr[j] <arr[i]){
// int temp = arr[j]
// }		
// 	}
// }

// }n

// int main(){
// 	int n = 5;
// 	int arr[6] = {1,3,4,5,69,8};
// 	for(int i = 0;i <n-1;i++){
// 		for(int j = 0 ; j < n - i -1;i++){
// 			if(arr[i] > arr[i+1]){
// 				int temp = arr[i];
// 				arr[i] = arr[i+1];
// 				arr[i+1] = temp;
// 			}
// 		}
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		/* code */ cout<<arr[i]<<endl;
// 	}
// }
// int main(){
// 	int arr[4] = {1,2,8,4};
// 	for (int i = 0 ; i< 4-1 ; i++){
// 		int imin = i;
// 		for(int j = j+1;j<4;j++){
// 			if(arr[j] < arr[imin]){
// 				imin = j;
// 			}
// 		}
// 		int temp = arr[imin];
// 		arr[imin] = arr[i];
// 		arr[i] = temp;

// 	};

// 	for(int i = 0 ; i< 4 ;i++){
// 		cout<<arr[i]<<endl;
// 	}
// }



// void selectionsort(int arr[],int a){
// 	for(int i = 0; i< a-1; i++){
// 		int imin = i;
// 		for(int j = 1 +i;j<a;j++ ){
// 			if(arr[j] < arr[imin]){
// 				 imin = j;
// 			}
// 		}
// 		int temp = arr[imin];
// 		arr[imin] = arr[i];
// 		arr[i] = temp;

// 	}
// }
// int main(){
	// 	int arr[4] ={3,5,1,4};
// 	selectionsort(arr,4);
// 	for(int i =0; i< 4;i++){
// 		cout<<arr[i]<<endl;
// 	}

// };

// void bubbleSort(int arr[],int n){
// 	for(int i = 0; i < n; ++i) {
// 		/* code */
// 		for(int j = 0 ; j < 6-i - 1;++j){
// 			if(arr[j] > arr[j+1]){
// 				int temp =arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j] = temp;
// 			}
			
// 		}

// 	}
// }

// int main(){
// 	int arr[6] = {3,5,1,4,6,3};
// 	bubbleSort(arr,6);
// 	  for(int i = 0 ; i < 6;++i){
// 			cout<<arr[i]<<endl;
// 		}
// }


//insertionSort

// void insertionSort(int arr[],int size){
// 	for(int i = 1; i<=size-1;i++){
// 		int key = arr[i];
// 		int j = i;
// 		while(arr[j-1]>key && j >=1){
// 			arr[j] = arr[j-1];
// 			j--;
// 		}
// 		arr[j]=key;
// 	}
// }

// int main(){
// 	int arr[4]={4,2,6,1};
// 	insertionSort(arr,4);
// 	for(int i = 0; i< 4;i++){
// 		cout<<arr[i]<<endl;
// 	}
// }

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;

};
BstNode* GetNewNode(int data){
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right=NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data){
	if(root == NULL){
		root = GetNewNode(data);
	}
	else if(data <= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);
	}
	return root;
};

bool Search(BstNode* root,int data){
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int findmin(BstNode* root){
	if(root == NULL){
		cout<<"Error:tree is empty\n";
		return-1;
	}
	BstNode* current = root;
	while(current->left != NULL){
		current = current->left;
	}
	return current->data;
}


void preorder(BstNode* root){
	if(root == NULL) return;
	cout<<root->data<<endl;
	preorder(root->left);
	preorder(root->right);
}


int findMax(BstNode* root){
	if(root == NULL){
		cout<<"Error : tree is empty"<<endl;
		return-1;
	}
	if(root->right == NULL){
		return root->data;
	};
	return findMax(root->right);
}
int findHight(BstNode* root){
	if(root==NULL){
		return -1;
	}
	
	return max(findHight(root->left),findHight(root->right)) +1;
}
//levle inorder traversal
void inorder(BstNode* root){
	if(root == NULL) return;
	inorder(root->left);
	cout<<root->data<<endl;
	inorder(root->right);
}

int main(){

BstNode* root = NULL;
root = Insert(root,15);
root = Insert(root,43);
root= Insert(root,5);
root = Insert(root,6);
int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

	cout<<findmin(root)<<endl;
	cout<<findMax(root)<<endl;
	cout<<findHight(root)<<endl;

preorder(root);
cout<<"+++++++++++++"<<endl;
inorder(root);

}