class Node{
    int val;
    Node next;
    public Node (int element,Node link){
        val=element;
        next=link;
    }
}
class TESTER {
    Node head;
    Node tail;
    public  TESTER(int arr){
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
    
    public static void main (String[] args){
        int a[]={4,1,8,4,5};
        int b[]={5,6,1,8,4,5};
        TESTER ele1=new TESTER(a);
        TESTER ele2=new TESTER(b);
        // Node result=duplicate(ele1,ele2);
        // for (Node link=result;link!=null;link=link.next){
        //     System.out.print(link.val+" ");
        // }
    }
}
