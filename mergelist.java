class Node{
    int val;
    Node next;
    public Node (int element,Node link){
        val=element;
        next=link;
    }
}
class mergelist {
    Node head;
    Node tail;
    public  mergelist(int arr[]){
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
    public void mergelist1(Node list2){
        int count=0;
        Node a1=null;
        Node b1=null;
        Node newhead=head;
        Node newhead1=list2;
        while(head!=null){
            if (count==2){
               a1=head;
            }
            if (count==6){
                b1=head;
            }
            count++;
            head=head.next;
        }
        a1.next=newhead1;
        while(list2!=null){
            if(list2.next==null){
                list2.next=b1;
                break;
            }
            list2=list1.next;
        }
    }
    
    public static void main (String[] args){
        int a[]={0,1,2,3,4,5,6,7,8,9};
        int b[]={1001,1002,1003,1004};
        mergelist ele1=new mergelist(a);
        mergelist ele2=new mergelist(b);
        ele1.mergelist1(ele2.head);
    }
}
