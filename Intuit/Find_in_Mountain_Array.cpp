int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int l = 0;
        int r = n - 1;
        int peak = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            int m_ele = mountainArr.get(mid);
            int prev_ele = INT_MIN;
            int nex_ele = INT_MAX;
            if(mid>0)
                prev_ele = mountainArr.get(mid - 1);
            if(mid<n-1)
                nex_ele = mountainArr.get(mid + 1);
            if(m_ele>prev_ele && m_ele>nex_ele){
                peak = mid;
                break;
            }
            if(m_ele>prev_ele) 
                l = mid + 1;
            else
                r = mid - 1;
        }
        l = 0;
        r = peak;
        while(l<=r){
            int mid = l + (r-l)/2;
            int m_ele = mountainArr.get(mid);
            if(m_ele == target) 
                return mid;
            if(m_ele < target) 
                l = mid + 1;
            else 
                r = mid - 1;
        }
        l = peak;
        r = n-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int m_ele = mountainArr.get(mid);
            if(m_ele == target) 
                return mid;
            if(m_ele < target) 
                r = mid - 1;
            else 
                l = mid +1;
        }
        return -1;
    }
