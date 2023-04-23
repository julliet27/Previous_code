class Node{
    Node next;
    int val;
    public Node(int element,Node link){
        val=element;
        next=link;
    }
}
class liststack {
    Node head;
    Node tail=null;
    public void push(int num){
        Node ele=new Node(num,null);
        if (ele==null){
            head=ele;
            tail=ele;
        }
        else{
            head=ele;
            head.next=tail;
            tail=head;
        }
    }
    public Node peek(){
        if (tail==null){
            System.out.print("Stack underflow!");
            return null;
        }
        return tail;
    }
    public void pop(){
        Node a=null;
        if (tail==null){
            System.out.print("Stack underflow!");
        }
        else{
            a=tail.next;
            tail=null;
            tail=a;
        }
    }
    public static void main(String args[]){
        liststack ele1=new liststack();
        ele1.push(10);
        ele1.push(20);
        ele1.push(30);
        ele1.push(40);
        ele1.pop();
        ele1.pop();
        ele1.pop();
        ele1.pop();
        Node ele2=ele1.peek();
        System.out.print(ele2.val+" ");
    }
}
