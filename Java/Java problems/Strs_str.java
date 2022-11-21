public class Strs_str {
    public static void main(String[] args){
        System.out.println(strStr(
            "mississippi",
            "sippia"));
       }
    public static int strStr(String haystack, String needle) {
        if(needle.isEmpty() || needle.equals(haystack)){
            return 0;
        }
        if(needle.length()>haystack.length()){
                return -1;
            }
        int count,j;
        for(int i = 0; i < haystack.length(); i++) {
            count = 0;
            if(haystack.charAt(i)!=needle.charAt(0)){
                continue;
            }
            if((haystack.length()-i)<(needle.length()-1)){
                    return -1;
            }
            j = i;
            while(haystack.charAt(j)==needle.charAt(count)){
                if(j==haystack.length()-2){
                    return -1;
                }
                if(count == needle.length()-1){
                    return i;
                }
                count++;
                j++;
            }
        }
        return -1;
    }
}
