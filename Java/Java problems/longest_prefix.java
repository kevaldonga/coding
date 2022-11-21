class longest_prefix{
    public static void main(String[] args){
        String[] strs = new String[]{"flower","flow","flight"};
        char[] prefix = new char[strs[0].length()];
        outerloop:
        for(int i = 0; i < strs[0].length(); i++){
            for(int j = 1; j < strs.length; j++){
                if(strs[0].charAt(i)!=strs[j].charAt(i)){
                    break outerloop;
                }
                if(j==strs.length-1){
                    prefix[i] = strs[0].charAt(i);
                }
            } 
        }
        System.out.println(new String(prefix));
    }
}