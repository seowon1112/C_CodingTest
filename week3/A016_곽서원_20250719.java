package week2;

import java.util.*;

class Solution {
    public int solution(int[] people, int limit) {
        int answer = 0; //어떻게 할거냐. 첫번째 반복문에서 limit - people[i]번째 사람의 몸무게
        //두 번째 반복문에서 limit - people[i]>=people[j]
        int sum=0;
        int start=0;
        int end=people.length-1;
        Arrays.sort(people);
        while(start<=end){

            sum=people[start]+people[end];

            if(sum<=limit){
                start++;
                end--;
            }
            else{
                end--;
            }
            answer++;
        }

        return answer;


    }
}
