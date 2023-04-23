public class Hash {
    int index=0;
    String arr[]=new String[9];
    public Hash(String arr[]){
        for(int i=0;i<arr.length;i++){
            int count=0;
            int index=0;
            for(int j=0;j<arr[i].length();j++){
                if(Character.isDigit(arr[i].charAt(j))){
                    index+=Character.getNumericValue(arr[i].charAt(j));
                }
                else{
                    if(arr[i].charAt(j)=='A'||arr[i].charAt(j)=='E'||arr[i].charAt(j)=='I'||arr[i].charAt(j)=='O'||arr[i].charAt(j)=='U'){}
                    else{
                        count++;
                    }
                }
            }
            index=(index+(count*24))%9;
            indexing(index,arr[i]);
            print(index);
            System.out.println();
        }
    }
    public void indexing(int index,String str){
       if(arr[index]==null){
           arr[index]=str;
       }
       else{
           if(index==arr.length-1){
               index=0;
           }
           else{
               index++;
           }
           arr[index]=str;
       }
    }
    public  void print(int index){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args[]){
        String arr[]={"TU2F99C9B43","RS0D78A7A23","AB1D89B8A32","ST1E89B8A32","ST1E89B8C32"};
        Hash r1=new Hash(arr);
    }
}
