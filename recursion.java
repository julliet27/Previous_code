import java.util.*;
class Node{
    int val;
    Node next;
    public Node(int a,Node b){
        val=a;
        next=b;
    }
}
class recursion {
    public static int fact(int n){
        if (n==0){
            return 1;
        }
        return n*fact(n-1);
    }
    public static int fibonacci(int n,int x,int y,int sum){
        if(n==0){
            return sum;
        }
        return fibonacci(n-1,x=y,y=sum,sum=x+y);
    }
    public static int print(int arr[],int n){
        if(n==arr.length){
            return 1;
        }
        System.out.print(arr[n]+" ");
        return print(arr,n+1);
    }
    public static int power(int base,int n){
        if (n==0){
            return 1;
        }
        return base*power(base,n-1);
    }
    public static int DecimalToBinary(int n){
        if(n==0){
            return 0;
        }
        return n%2+10*DecimalToBinary(n/2);
    }
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
        if(idx==5){
            return head;
        }
        return makeList(arr,idx,head,tail);
    }
    public static int add(Node b,int sum){
        if(b==null){
            return sum;
        }
        sum+=b.val;
        b=b.next;
        return add(b,sum);
    }
    public static void reverselist(Node b){
        if(b.next!=null){
            reverselist(b.next);
        }
        System.out.print(b.val+" ");
    }
    public static Node printNode(Node newnode){
        if (newnode==null){
            return null;
        }
        System.out.print(newnode.val+" ");
        newnode=newnode.next;
        return printNode(newnode);
    }
    public static int cardhouse(int height){
        if(height==1){
            return 8;
        }
        if (height==0){
            return 0;
        }
        return 5+cardhouse(height-1);
    }
    public static void print(int num){
        if(num!=0){
            print(num-1);
            System.out.print(num);
        }
    }
    public static void triangle(int height,int num){
        if(height!=0){
            print(num);
            System.out.println();
            triangle(height-1,num+1);
        }
    }
    public static void spaceprint(int space){
        if(space!=0){
            spaceprint(space-1);
            System.out.print(" ");
        }
    }
    public static void reversetriangle(int height,int num,int space){
        if(height!=0){
            spaceprint(space);
            print(num);
            System.out.println();
            reversetriangle(height-1,num+1,space-1);
        }
    }
    public static double countprof(double num){
        if(num==0){
            return 0.0;
        }
        return 8+countprof(num-100);
    }
    public static double count75000(double num){
        if(num<=25000){
            return 0.0;
        }
        return 4.5+count75000(num-100);
    }
    public static double calProfit(double num){
        if(num==25000){
            return 0.0;
        }
        if ((100000>=num) && (num>25000)){
            double num1=count75000(num);
            return num1;
        }
        if(num>100000){
            double num1=count75000(100000);
            double num2=countprof(num-100000);
            return num1+num2;
        }
        return 0.0;
    }
    public static void printprofit(int arr[],int idx){
        if(idx<arr.length){
            double profit=calProfit(arr[idx]);
            System.out.println("Investment:"+arr[idx]+";Profit:"+profit);
            printprofit(arr,idx+1);
        }
    }
    public static void main(String args[]){
        // Scanner inputinteger= new Scanner(System.in);
        // int n = inputinteger.nextInt();
        // System.out.print(fact(n));
        // int sum=0,x=0,y=1;
        // System.out.print(fibonacci(n,x,y,sum));
        // int arr[]={1,2,3,4,5};
        // int n=0;
        // print(arr,n);
        // System.out.print(power(3,3));
        // System.out.println(DecimalToBinary(n));
        // DecimalToBinary(n);
        int arr[]={10,20,30,40,50};
        Node head=null;
        Node tail=null;
        int idx=0,sum=0;
        Node a=makeList(arr,idx,head,tail);
        for(Node link=a;link!=null;link=link.next){
            System.out.print()
        }
        // // System.out.print(add(a,sum));
        // reverselist(a);
        // System.out.print(cardhouse(n));
        // int num=1;
        // triangle(n,1);
        // reversetriangle(n,1,n-1);
        int arr[]={25000,100000,250000,350000};
        printprofit(arr,0);


    } 
}
