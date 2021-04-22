class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = new HashSet<Integer>();
        for(int num:nums){
            set.add(num);
        }
        int count = 0;
        for(int num:nums){
            if(!set.contains(num-1)){
                int cnum = num;
                int c1=1;
                while(set.contains(cnum+1)){
                    cnum+=1;
                    c1++;
                }
                count = Math.max(count,c1);
            }
        }
        return count ;
    }
}
