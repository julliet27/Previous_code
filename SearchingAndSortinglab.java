import java.util.*;
class Node{
    int val;
    Node next;
    public Node(int a,Node link){
        val=a;
        next=link;
    }
}
class Node1{
    int val;
    Node1 next;
    Node1 prev;
    public Node1(int a,Node1 link1,Node1 link2){
        val=a;
        next=link1;
        prev=link2;
    }
}
public class SearchingAndSortinglab {
    public static Node makeList(int arr[],int idx,Node head,Node tail){
        Node newnode=new Node(arr[idx],null);
        if (head==null){
            head=newnode;
            tail=newnode;
        }
        else{
            tail.next=newnode;
            tail=tail.next;
        }
        idx++;
        if(idx==arr.length){
            return head;
        }
        return makeList(arr,idx,head,tail);
    }
    public static Node1 makeDoubleList(int arr[],int idx,Node1 head,Node1 tail,Node1 prev){
        Node1 doublenode=new Node1(arr[idx],null,null);
        if (head==null){
            head=doublenode;
            tail=doublenode;
        }
        else{
            doublenode.prev=tail;
            tail.next=doublenode;
            tail=tail.next;
        }
        idx++;
        if(idx==arr.length){
            return head;
        }
        return makeDoubleList(arr,idx,head,tail,prev);
    }
    public static void SelectionSort(int arr[],int size,int i){
        if(size-1>i){
            int min_idx=indexing(arr,i+1,i,size);
            swap(arr,min_idx,i);
            SelectionSort(arr,size,i+1);
        }
    }
    public static void swap(int arr[],int min_idx,int i){
        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
    public static int indexing(int arr[],int j,int min_idx1,int size){
        if(size>j){
            if(arr[j]<arr[min_idx1]){
                min_idx1=j;
            }
            return indexing(arr,j+1,min_idx1,size);
        }
        return min_idx1;
    }
    public static void InsertionSort(int arr[],int size,int i){
        if(size>i){
            int key=arr[i];
            calculate(arr,i-1,key);
            InsertionSort(arr,size,i+1);
        }
    }
    public static void calculate(int arr[],int j,int key){
        if(j>=0 && arr[j]>key){
            swap(arr,j+1,j);
            calculate(arr,j-1,key);
        }
    }
    public static void BubbleSort(Node head,int i,int j,int size){
        if(size-1>i){
            checking(head,size-i-1,j);
            BubbleSort(head,i+1,j,size);
        }
    }
    public static void checking(Node head,int i,int j){
        if(i>j && head.next!=null){
            if(head.val<head.next.val){
               int temp=head.val;
               head.val=head.next.val;
               head.next.val=temp;
            }
            checking(head.next,i,j+1);
        }
    }
    public static void SelectionSortList(Node head,int i, int size){
        int min_val=head.val;
        if(size-1>i && head!=null){
            int min_val1=indexinglist(head,min_val,i,size);
            swaplist(head,head,min_val1);
            SelectionSortList(head.next,i+1,size);
        }
    }
    public static int indexinglist(Node head,int min_val,int j,int size){
        if(head!=null){
            if(size>=j){
                if(head.val<min_val){
                    min_val=head.val;
                }
            }
            return indexinglist(head.next,min_val,j+1,size);
        }
        return min_val;
    }
    public static void swaplist(Node head,Node head1,int min_val){
        if(head!=null){
            if(head.val==min_val){
                int temp=head.val;
                head.val=head1.val;
                head1.val=temp;
            }
            swaplist(head.next,head1,min_val);
        }
    }
    public static void InsertionSortlist(Node1 head){
        if(head!=null){
            if(head.val>head.next.val){
                calculateing(head.next,head);
            }
            // System.out.println(head.val+" "+key);
            // System.out.print("LAMIA");
            InsertionSortlist(head.next);
        }
    }
    public static void calculateing(Node1 key,Node1 head){
        if(head!=null ){
            if(head.val>key.val){
                // System.out.println(head.val+" ");
                int temp=key.val;
                key.val=head.val;
                head.val=temp;
                  // System.out.println(head.val+" "+key);
            }
            calculateing(head.prev,key);
        }
    }
    public static int Binarysearch(int arr[],int l,int r, int num){
        if(r>=l){
            int mid=l+(r-l)/2;
            if(arr[mid]==num){
                return mid;
            }
            if(arr[mid]>num){
                return Binarysearch(arr,l,mid-1,num);
            }
            return Binarysearch(arr,mid+1,r,num);
            
        }
        return 0;
    }
    public static int fibonacci(int n,int arr[]){
        if(arr[n]>0){
            return arr[n];
        }
        if(n==1 || n==2){
            return arr[n]=1;
        }
        return fibonacci(n-1,arr)+fibonacci(n-2,arr);
    }
    public static void print(int arr[],int size){
        if(size>-1){
            print(arr,size-1);
            System.out.print(arr[size]+" ");
        }
    }
    public static void printlist(Node head){
        if(head!=null){
            System.out.print(head.val+" ");
            printlist(head.next);
        }
    }
    public static void printlist1(Node1 head){
        if(head!=null){
            System.out.print(head.val+" ");
            printlist1(head.next);
        }
    }

    public static void main(String[] args){
        int arr[]={9,2,5,3,10,4,8,1,6,7};
        int size=arr.length;
        int index=0;
        // SelectionSort(arr,size,index);
        // print(arr,size-1);
        // InsertionSort(arr,size,index+1);
        // print(arr,size-1);
        Node head=null;
        Node tail=null;
        Node a=makeList(arr,index,head,tail);
        Node1 head1=null;
        Node1 tail1=null;
        Node1 prev1=null;
        Node1 b=makeDoubleList(arr,index,head1,tail1,prev1);
        // BubbleSort(a,index,index,size);
        // printlist(a);
        // SelectionSortList(a,index,size);
        // printlist(a);
        InsertionSortlist(b);
        printlist1(b);
        // int arr1[]={1,2,3,4,5,6,7,8,9,10};
        // int result=Binarysearch(arr1,index,size,8);
        // if(result!=0){System.out.print("element is found");}
        // int arr2[]=new int[10];
        // System.out.print(fibonacci(7,arr2));

        
        
    }
}
