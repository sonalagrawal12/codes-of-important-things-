class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        if(n==0 || n==1)
            return n;
        int count = 0;
        int ans =0;
        int j=0,i;
        Map<Character,Integer>map = new HashMap<>();
        for( i=0;i<n;i++){
            if(!map.containsKey(s.charAt(i))){
                map.put(s.charAt(i),i);
            }
            else{
                if(map.get(s.charAt(i))>=j){
                     ans = Math.max(ans,i-j);
                     j = map.get(s.charAt(i))+1;
                }
                map.replace(s.charAt(i),i);
            }
        }
        return Math.max(ans,i-j);
    }
}
