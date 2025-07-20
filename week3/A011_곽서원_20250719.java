class Solution {
    public int[] solution(int N, int[] stages) {


        double [] answer= new double[N];
        double [] fail= new double [N];
        double [] person=new double[N];
        int [] finalanswer=new int[N];



        for(int i=0; i<N; i++){
            person[i]=0;
            for(int j=0; j<stages.length; j++){
                if(stages[j]<i+1){
                    continue;
                }
                if(stages[j]==i+1){
                    fail[i]++;
                }
                person[i]++;

            }
            if(person[i]==0){
                answer[i]=0;
            } else
                answer[i] = fail[i] / person[i];

        }
        //  Arrays.sort(answer, Collections.reverseOrder());
        for(int i=0; i<N; i++){
            double max=-1;
            int index=-1;
            for(int j=0; j<N; j++){
                if(answer[j]>max){
                    max=answer[j];

                    index=j+1;
                }
            }
            finalanswer[i]=index;
            answer[index-1]=-1;
        }
        return finalanswer;
    }
}