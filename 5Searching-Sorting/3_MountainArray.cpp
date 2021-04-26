    // int peakIndexInMountainArray(vector<int>& arr) {
    //     int high = arr.size()-1;
    //     int low = 0;
    //     int mid;
    //     while(low<=high){
    //         mid = low +(high-low)/2;
    //         if(mid  ==0 && arr[mid]>arr[mid+1]){
    //             break;
    //         }
    //         else if(mid  ==0 && arr[mid]<arr[mid+1]){
    //             low = mid+1;
    //         }
    //         else if(mid == arr.size()-1 && arr[mid]>arr[mid-1]){
    //             break;
    //         }
    //         else if(mid == arr.size()-1 && arr[mid]>arr[mid-1]){
    //             high = mid-1;
    //         }   
    //         else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
    //             break;
    //         }
    //         else if(arr[mid]>arr[mid-1]){
    //             low = mid+1;
    //         }
    //         else{
    //             high = mid-1;
    //         }
    //     }
    //     return mid;
    // }