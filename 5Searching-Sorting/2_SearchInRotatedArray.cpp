// int search(vector<int>& nums, int target) {
//         //finding pivot
//         int high =nums.size()-1;
//         int low = 0;
//         int d = nums[high];
        
//         int pivot;
//         if(nums.size() == 1){
//             if(nums[0]==target){
//                 return 0;
//             }
//             else{
//                 return -1;
//             }
//         }
//         while(low<=high){
//             int mid = low+(high-low)/2;
//             if(nums[mid]>nums[mid+1]){
//                 pivot = mid;
//                 break;
//             }
//             else if(nums[mid]>d){
//                 low = mid+1;
//             }
//             else if(nums[mid]<=d){
//                 high =mid-1;
//             }
            
//         }
//         cout<<pivot<<": "<<nums[pivot];
        
//         if(low>high){
//             int loww = 0;
//             int highh = nums.size()-1;
//             while(loww<=highh){
//                 int midd = loww+ (highh-loww)/2;
//                 if(nums[midd]==target){
//                     return midd;
//                 }
//                 else if(nums[midd]<target){
//                     loww= midd+1;
//                 }
//                 else{
//                     highh = midd-1;
//                 }
//             }
//         }
        
//         else if(target<=d){
//             int loww = pivot+1;
//             int highh = nums.size()-1;
//             while(loww<=highh){
//                 int midd = loww+ (highh-loww)/2;
//                 if(nums[midd]==target){
//                     return midd;
//                 }
//                 else if(nums[midd]<target){
//                     loww= midd+1;
//                 }
//                 else{
//                     highh = midd-1;
//                 }
//             }
//         }
//         else{
//             int loww = 0;
//             int highh = pivot;
//             while(loww<=highh){
//                 int midd = loww+ (highh-loww)/2;
//                 if(nums[midd]==target){
//                     return midd;
//                 }
//                 else if(nums[midd]<target){
//                     loww= midd+1;
//                 }
//                 else{
//                     highh = midd-1;
//                 }
//             }
            
//         }
        
//         return -1;
        
//     }