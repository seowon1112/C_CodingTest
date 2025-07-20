public class Solution {
    public int solution(String skill, String[] skill_trees){
        int count=0;
        for(int i=0; i<skill_trees.length; i++){
           String str= skill_trees[i].replaceAll("[^"+skill+"]","");
           for(int j=0; j<skill.length()+1; j++){
               String equal_str=skill.substring(0,j);
               if(str.equals(equal_str)){
                   count++;
                   break;
               }
           }

       }

        return count;
    }
}
