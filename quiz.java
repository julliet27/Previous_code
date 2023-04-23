class Node{
    int val;
    Node next;
    public Node (int element,Node link){
        val=element;
        next=link;
    }
}
public class quiz {
    Node head;
    Node tail;
    public  quiz(int arr[]){
        for (int i=0;i<arr.length;i++){
            Node newnode=new Node(arr[i],null);
            if (head==null){
                head=newnode;
                tail=newnode;
            }
            else{
                tail.next=newnode;
                tail=tail.next;
                
            }
        }
    }
    public static void main(String[] args){
        int arr[]={10,20,30,40,50,60};
        quiz result=new quiz(arr);
    }
}
