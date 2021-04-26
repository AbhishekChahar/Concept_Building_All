// // Given four integer arrays nums1, nums2, nums3, and nums4 all of length n, return the number of tuples (i, j, k, l) such that:

// // 0 <= i, j, k, l < n
// // nums1[i] + nums2[j] + nums3[k] + nums[l] == 0





//     // int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//     //     int count=0;
//     //     int n = nums1.size();
//     //     // for(int i=0; i< n;i++){
//     //     //     for(int j=0; j< n;j++){
//     //     //         for(int k=0; k< n;k++){
//     //     //             for(int l=0; l< n;l++){
//     //     //                 if(nums1[i]+nums2[j]+nums3[k]+nums4[l]==0){
//     //     //                     count++;
//     //     //                 }
//     //     //             }
//     //     //         }
//     //     //     }   
//     //     // }

//     *******************************************
//     //     unordered_map<int,int>mm;
//     //     for(int i=0; i<n;i++){
//     //         for(int j=0; j<n ; j++){
//     //             mm[nums1[i]+nums2[j]]++;
//     //         }
//     //     }
//     //     for(int i=0; i<n;i++){
//     //         for(int j=0; j<n ; j++){
//     //             count += mm[-nums3[i]-nums4[j]];
//     //         }
//     //     }
        
//     //     return count;*/