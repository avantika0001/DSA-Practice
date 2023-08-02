#include<iostream>
using namespace std;
class Node {
	public:
		int key;
		int data;
		Node* next; //pointer of type node
		
		Node(){ //default constructor
			key=0;
			data=0;
			next=NULL;
		}
		Node(int k, int d){ //parametrized constructor
			key=k;
			data=d;
		}
};

class SinglyLinkedList{
	public:
		Node* head;
		SinglyLinkedList(){ //default constructor(gets called by default)
			head=NULL;
		}
		SinglyLinkedList(Node *n){
			head=n;
		}
		
		//METHOD 1: Check if node exists using key value
		Node* nodeExists(int k){ //traversal to find
			Node* temp= NULL;
			Node* ptr=head;
			while(ptr!=NULL){ //this value won't be null if this list has some values
				if(ptr->key==k){ //n1
				//key of ptr
				//-> "Give me the value of the thing pointed at the address stored at ptr". 
				//In this example, ptr is pointing to a list item so ptr->next returns the value of the object's next property.
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
		}
		
		//METHOD 2: Append a node to the list
		void appendNode(Node* n){ //pass by address
			if(nodeExists(n->key)!=NULL){
				cout<<"Node already exists with key value: "<<n->key<<". Append another node with different Key value!"<<endl;
			}else{
				if(head==NULL){ //Node being appended is the first node in singly LL(there are no previous values in it)
					head = n;
					cout<<"Node Appended."<<endl;
				}else{
					Node* ptr=head;
					while(ptr->next!=NULL){
						ptr=ptr->next; //jumping to next nodes till we reach last
					}
					//reached the end of the list
					ptr->next=n;
					cout<<"Node Appended."<<endl;
				}
			}
		}
		
		//METHOD 3: Prepend a node to the list (add node at start)
		void prependNode(Node* n){
			if(nodeExists(n->key)!=NULL){
				cout<<"Node already exists with key value: "<<n->key<<". Append another node with different Key value!"<<endl;
			}else{
				n->next=head;  
				head=n;
				cout<<"Node Prepended."<<endl;
			}
		}
		
		//METHOD 4: Insert a node to the list (add node after given key)
		void insertNodeAfter(int k, Node* n){
			Node* ptr= nodeExists(k);
			if(ptr==NULL){
				cout<<"No node exists with key value: "<<k<<endl;
			}else{
				//key value of new node also unique or not
				if(nodeExists(n->key)!=NULL)
				{
					cout<<"Node already exists with key value: "<<n->key<<". Append another node with different Key value!"<<endl;
				}
				else
				{
				//n1-n2 n4-n3
				//n2-n3
					n->next=ptr->next; //n of next = ptr of next n4 to n3
					ptr->next=n; //n2-n4
					 cout<<"Node Inserted"<<endl;
				}
			}
			
		}
		
		//METHOD 5: Delete a node by unique key
		void deleteNodeByKey(int k){
			if(head==NULL){
				cout<<"Singly Linked List already empty. Can't delete!"<<endl;
			}else if(head!=NULL){
				if(head->key==k){ //key to be deleted is of head node
					head=head->next;
					cout<<"Node UNLINKED with key value :"<<k<<endl;
				}else{
					Node* temp=NULL;
					Node* prevptr= head;
					Node* currentptr=head->next;
					while(currentptr!=NULL){
						if(currentptr->key=k){
							temp=currentptr;
							currentptr=NULL;
						}else{
							prevptr=prevptr->next;
							currentptr=currentptr->next;
						}
					}
					if(temp!=NULL){
							prevptr->next=temp->next;
							cout<<"Node UNLINKED with key value :"<<k<<endl;
						}else{
							cout<<"Node doesn't exist with key value: "<<k<<endl;
						}
					}
				}
			}
		
			
			
			//METHOD 6: Update a node
			void updateNode(int k, int d){
				Node* ptr= nodeExists(k); //return a ptr to a particular node of key 'k'
				if(ptr!=NULL){
					ptr->data=d;
					cout<<"Node Data Updated successfully!"<<endl;
				}
				else{
					cout<<"Node doesn't exist with key value: "<<k<<endl;
				}
			}
			
			//METHOD 7: Print the Linked list
			void printList(){
				if(head==NULL){
					cout<<"No nodes in Singly Linked List!"<<endl;
				}
				else{
					cout<<endl<<"Singly Linked List values are: ";
					Node* temp=head;
					while(temp!=NULL){
						cout<<"("<<temp->key<<","<<temp->data<<")-->";
						temp=temp->next;
					}
				}
			}
			
			
		
		
		
			
};

int main(){
	
  SinglyLinkedList s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node(); //heap memory so that it exist in every iteration
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      s.insertNodeAfter(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deleteNodeByKey(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      s.updateNode(key1, data1);

      break;
    case 6:
      s.printList();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

	return 0;
}
