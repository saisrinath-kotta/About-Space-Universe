package SinglelinckedList;
import java.util.*;
class SLLnode{
	int data;
	SLLnode next;
}
class singlelinkedlist{
	SLLnode head=null,cnode=null,newnode=null;
	void createlist() {
		System.out.println("Enter number of nodes");
		Scanner sc =new Scanner (System.in);
		int c=sc.nextInt();
		for (int i=1;i<=c;i++) {
			newnode= new SLLnode();
			System.out.println("enter data");
			newnode.data=sc.nextInt();
			newnode.next=null;
			if(head==null) {
				head=newnode;
			}
			else {
				cnode=head;
				while(cnode.next!=null) {
					cnode=cnode.next;
				}
				cnode.next=newnode;
			}
		}
		System.out.println("list is created");
	}
	void display() {
		if(head==null) {
			System.out.println("list is empty");
		}
		else {
			cnode=head;
			while(cnode!=null) {
				System.out.print(cnode.data+"-->");
				cnode=cnode.next;
			}
		}
	}

	
}
public class single_linked_list_creationanddsiplay {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       singlelinkedlist obj =new singlelinkedlist();
       obj.createlist();
       obj.display();
	}

}