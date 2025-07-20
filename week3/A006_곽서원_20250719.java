public class Solution {
    public boolean solution(String s){
        boolean answer = true;
        int count_p=0;
        int count_y=0;
        s=s.toLowerCase();
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)=='p') count_p++;
            if(s.charAt(i)=='y') count_y++;
        }
        if(count_p!=count_y) answer=false;


        return answer;
    }
}
