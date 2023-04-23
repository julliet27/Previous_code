class arraystack {
    Object arr[];
    int idx;
    public arraystack(){
        arr=new Object[10];
        idx=0;
    }
    public void push(int a){
        if(arr.length==idx){
            System.out.print("Stack overflow!");
        }
        else{
            arr[idx]=a;
            idx++;
        }
        // for(int i=0;i<arr.length;i++){
        //     System.out.print(arr[i]+" ");
        // }
        // System.out.println();
    }
    public Object pop(){
        Object val=0;
        if(idx<=0){
            System.out.print("Stack underflow!");
            return null;
        }
        else{
            val=arr[idx-1];
            arr[idx-1]=null;
            idx--;
        }
        return val;
        
    }
    public Object peek(){
        Object val=0;
        if(idx<=0){
            System.out.print("Stack underflow!");
            return null;
        }
        else{
            val=arr[idx-1];
            return val;
        }
    }
    public static void main(String args[]){
        arraystack element=new arraystack();
        element.pop();
        element.peek();


    }

}
