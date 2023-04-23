class Node{
    int val;
    Node prev;
    Node next;
    public Node(int ele,Node linkprev,Node linknext){
        val=ele;
        prev=linkprev;
        next=linknext;
    }
    public Node(Node linkdummy){
        Node dummynode=linkdummy;
    }
}
class doublylist {
    Node head;
    Node tail;
    public doublylist(Node node){
        Node newnode=new Node(node);
    }
    public doublylist(int arr[]){
        for (int i=0;i<arr.length;i++){
            Node newnode=new Node(arr[i],null,null);
            if (head==null){
                head=newnode;
                tail=newnode;
            }
            else{
                newnode.prev=tail;
                tail.next=newnode;
                tail=tail.next;
            }

        }
    }
    public void showlist(){
        if (head.next!=null){
            for(Node link=head;link!=null;link=link.next){
                System.out.print(link.val+" ");
            }
            System.out.println( );
            for(Node link=tail;link!=head.prev;link=link.prev){
                System.out.print(link.val+" ");
            }
        }
        else{
            System.out.print("Emptylist");
        }
    }
    public boolean check(int element){
        for(Node link=head;link!=null;link=link.next){
            if(link.val==element){
                return true;
            }
        }
        return false;
    }
    public void insert(Node newelement){
        boolean result=check(newelement.val);
        if (result==false){
            for(Node link=head;link!=null;link=link.next){
                if(link.next==null){
                    newelement.prev=tail;
                    tail.next=newelement;
                    tail=tail.next;
                    link=link.next;
                }
                
            }
            showlist();
        }
        else{
            System.out.print("element already exist");
        }
        
    }
    public void insert(int element,int index){
        Node newnode1=new Node(element,null,null);
        boolean result=check(element);
        if (result==false && index>=0){
            int count=0;
            for(Node link=head;link!=null;link=link.next){
                if (count==index){
                    newnode1.prev=link.prev;
                    link.prev.next=newnode1;
                    link.prev=newnode1;
                    newnode1.next=link;
                    
                    
                }
                count++;
            }
            showlist();
        }
        else{
            System.out.print("element already exist");
        }
    }
    public void remove(int index){
        if(index>0){
            int count=0;
            for(Node link=head;link!=null;link=link.next){
                if(count==index){
                   link.next.prev=link.prev;
                   link.prev.next=link.next;
                }
                count++;
            }
            showlist();
        }
    }
    public void removekey(int deletekey){
        for(Node link=head;link!=null;link=link.next){
            if(link.val==deletekey){
                link.next.prev=link.prev;
                link.prev.next=link.next;
            }
        }
        showlist();
    }
    public static void main(String[] args){
        int arr[]={10,20,30,40,50,60};
        doublylist result=new doublylist(arr);
        // result.showlist();
        Node newnode=new Node(70,null,null);
        // result.insert(newnode);
        // result.insert(11,4);
        // result.remove(3);
        // result.removekey(20);
    }

}
