import java.util.*; 
class Node{
    Node next;
    char val;
    int idx;
    public Node(char element,Node link){
        val=element;
        next=link;
    }
}
class stack{
    char arr[]=new char[100000];
    int idx=0;
    Node head;
    Node tail=null;
    public void pusharr(char a){
        if(arr.length==idx){
            System.out.print("Stack overflow!");
        }
        else{
            arr[idx]=a;
            idx++;
        }
    }
    public void pushlist(char a){
        Node ele=new Node(a,null);
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
    public char poparr(){
        char val='\0';
        if(idx<=0){
            return '\0';
        }
        else{
            val=arr[idx-1];
            arr[idx-1]='\0';
            idx--;
        }
        return val;
        
    }
    public Node poplist(){
        Node a=null;
        if (tail==null){
            return null;
        }
        else{
            a=tail.next;
            tail=null;
            tail=a;
        }
        return tail;
    }
    public char peekarr(){
        char val=0;
        if(idx<=0){
            return '\0';
        }
        else{
            val=arr[idx-1];
        }
        return val;
    }
    public Node peeklist(){
        if (tail==null){
            return null;
        }
        return tail;
    }
}
class labstack {
    int idx1=1;
    stack chari=new stack();
    Map<Character, Integer> map= new HashMap<Character,Integer>();
    public void calculating(String str){
        String strj="({[";
        for(int i=0;i<str.length();i++,idx1++){
            for(int j=0;j<strj.length();j++){
                if (str.charAt(i)==strj.charAt(j)){
                    chari.pusharr(str.charAt(i));
                    chari.pushlist(str.charAt(i));
                    map.put(str.charAt(i),idx1);
                }
            }
            if(str.charAt(i)==')' || str.charAt(i)=='}' || str.charAt(i)==']' ){
                char aarr=chari.peekarr();
                Node alist=chari.peeklist();
                if(aarr=='\0' || alist==null){
                    System.out.println("This expression is NOT correct.");
                    System.out.print("Error at character # "+idx1+"."+str.charAt(i)+ "- not opened.");
                    break;
                }
                else if((aarr=='(' && str.charAt(i)==')') || (alist.val=='(' && str.charAt(i)==')')){
                    chari.poparr();
                    chari.poplist();
                }
                else if((aarr=='{' && str.charAt(i)=='}') || (alist.val=='{' && str.charAt(i)=='}')){

                    chari.poparr();
                    chari.poplist();
                }
                else if((aarr=='[' && str.charAt(i)==']') || (alist.val=='[' && str.charAt(i)==']')){
                    chari.poparr();
                    chari.poplist();
                }
                else{
                    System.out.println("This expression is NOT correct.");
                    for (Map.Entry<Character, Integer> me : map.entrySet()) {
                       if(aarr==me.getKey()){
                            System.out.print("Error at character # "+me.getValue()+"."+me.getKey()+ "- not closed.");
                            break;
                       }
                    
                    }
                }
            }
            if(str.length()==idx1){
                char exarr=chari.peekarr();
                Node exlist=chari.peeklist();
                if((exarr!='\0') && (exlist!=null)){
                    System.out.println("This expression is NOT correct.");
                    for (Map.Entry<Character, Integer> me : map.entrySet()) {
                             System.out.print("Error at character # "+me.getValue()+"."+me.getKey()+ "- not closed.");
                             break;
                     }
                }
            }
        }
        System.out.print("This expression is correct");
    }
    public static void main(String args[]){
        Scanner inputstring = new Scanner(System.in);
        String name = inputstring.nextLine();
        labstack strname=new labstack();
        strname.calculating(name);
    }
}
