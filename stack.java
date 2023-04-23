import java.util.*;
class Node{
    Node next;
    int val;
    public Node(int element,Node link){
        val=element;
        next=link;
    }
}
class stack {
    Object arr[];
    int idx;
    Node head;
    Node tail=null;
    public stack(){
        arr=new Object[10];
        idx=0;
    }
    
    public void pusharr(char a){
        if(arr.length==idx){
            System.out.print("Stack overflow!");
        }
        else{
            arr[idx]=a;
            idx++;
        }
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public void pushlst(char num){
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
        for(Node link=head;link!=null;link=link.next){
            System.out.print(link.val+" ");
        }
    }
    public static void calculating(String str){
        for(int i=0;i<str.length();i++){
            System.out.print(str.charAt(i)+ " ");
        }
    }

    public static void main(String args[]){
        Scanner inputstring = new Scanner(System.in);
        String name = inputstring.nextLine();
        calculating(name);
    }
}
