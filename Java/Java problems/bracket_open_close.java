public class bracket_open_close {
    public static void main(String[] args){
        String clauses = "{()}";
        System.out.println(isValid(clauses));
       }
    static boolean isValid(String s){
        if((s.charAt(0)==')' || s.charAt(0)=='}' || s.charAt(0)==']') || s.length()%2==1){
            return false;
        }
        int clause = 0, parentheses = 0, square_bracket = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i)=='('){
                clause++;
                continue;
            }
            else if(s.charAt(i)=='{'){
                parentheses++;
                continue;
            }
            else if(s.charAt(i)=='['){
                square_bracket++;
                continue;
            }
            if((i+1)%2==1){
                return false;
            }
            if(s.charAt(i)==')'){
                clause--;
            }
            else if(s.charAt(i)=='}'){
                parentheses--;
            }
            else if(s.charAt(i)==']'){
                square_bracket--;
            }
        }
        return clause == 0 && parentheses == 0 && square_bracket == 0;
    }
}
