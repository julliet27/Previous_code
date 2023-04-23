class ListNode{
    int val;
    ListNode next;
    public ListNode (int element,ListNode link){
        val=element;
        next=link;
    }
    public ListNode(ListNode link){
        next=link;
    }
}
public class singlelinkedlist {
    ListNode head;
    ListNode tail;
    public  singlelinkedlist(int arr1[]){
        for (int i=0;i<arr1.length;i++){
            ListNode newnode=new ListNode(arr1[i],null);
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
    public void practice() {
        int idx1=0,count=0,b=0;
        int idx2=1;
        ListNode a=head;
        while (head!=null){
            head=head.next;
            count++;
        }
        int arr1[]=new int[count];
        int arr2[]=new int[count];
        while(a.next!=null){
            if(a.val<a.next.val){
                arr1[idx1]=a.next.val;
                idx1++;
                arr2[idx2]=0;
            }
            else if()
            else if(a.next.next==null){
                arr2[idx2]=0;
            }
            else{
                arr2[idx2]=1;
            }
            a=a.next;
            idx2++;
        }
        for(int j=0,k=0;j<idx2;j++){
            if((arr2[j]==0) && (arr1[k]<arr1[k+1])){
                arr2[j]=arr1[k+1];
                k++;
            }
            else if(arr2[j]==0){
                k++;
            }
            if(arr2[j]==1){
                arr2[j]=arr1[k];
            }
        }
        for(int i=0;i<idx2;i++){
            System.out.print(arr2[i]+" ");
        }

    }
    public static void main (String[] args){
        int a[]={1,7,5,1,9,2,5,1};
        singlelinkedlist result=new singlelinkedlist(a);
        result.practice();
    }
}
