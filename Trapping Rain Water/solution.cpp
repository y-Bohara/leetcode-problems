class Solution {
public:
    int trap(vector<int>& height) {
        int left=0 ;
        int right=height.size()-1;
        int Maxleft = 0 ;
        int Maxright = 0 ;

        int water = 0;

        while(left < right)
        {
            if ( height[left] <= height[right])
            {
                if(height[left]>Maxleft)
                {
                    Maxleft = height[left];
                    
                }
                else
                {
                    water+= Maxleft - height[left];
                }
                left++;
            }

            else
            {
                if(height[right]>=Maxright){
                    Maxright=height[right];
                }
                else{
                    water+=Maxright-height[right];
                }
                right--;
            }
        }   
        return water;
    }
};