class abrarvai {
        public static void main(String[] args) throws InterruptedException {
            for(int i = 1; i <= 100; i++){
                Thread.sleep(1000);
                System.out.print("\r" + progress(i));
            }
        }
    
        public static String progress(int current){
            StringBuilder sb = new StringBuilder();
            sb.append('[');
            int i = 1;
            for(; i <= current; i++)
                sb.append('#');
            for(; i <= 100; i++)
                sb.append('.');
            sb.append("] Progress Percentage: " + current + "%");
            return sb.toString();
        }
    
}
