class KeyIndex{
    int index_arr[];
    public  KeyIndex(int arr[]){
        int min=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        int temp_arr[]=new int[arr.length];
        int max=0;
        if(min<0){
            for(int i=0;i<arr.length;i++){
                temp_arr[i]=arr[i]+min*-1; //-1+(-3)*(-1);
                if(temp_arr[i]>max){
                    max=temp_arr[i];
                }
            }
        }
        index_arr=new int[max+2];  // 11 12 11 index=min
        for(int i=0;i<temp_arr.length;i++){
            int b=temp_arr[i]; // 0,1,2,-3
            index_arr[b]++;
        }
        index_arr[max+1]=min;
    }
    public boolean search(int num){
        if(index_arr[num-index_arr[index_arr.length-1]]>0){
            return true;
        }
        return false;
    }
    public void sort(){
        int arr[]=new int[index_arr.length-1];
        int k=0;
        for(int i=0;i<index_arr.length-1 ;i++){
            for(int j=0;j<index_arr[i];j++){
                if(index_arr[i]>0){
                    arr[k]=i+index_arr[index_arr.length-1];
                    k++;
                }
                if(k==arr.length-1){
                    break;
                }
            }
        }
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args[]){
        int arr[]={-2,0,1,3,6,5,2,-2,9,-1};
        KeyIndex r1=new KeyIndex(arr);
        // System.out.print(r1.search(5));
        r1.sort();
    }
}
