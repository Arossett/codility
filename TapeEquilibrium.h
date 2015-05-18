//solution codility Time complexity , TapeEquilibrium

int solution(vector<int> &A) {
    int rightPart = 0;
    int  leftPart = 0;
    int res = 0;
    for(int i = 0; i<A.size(); i++){
            rightPart += A[i];
            res += std::abs(A[i]);
    }
    
    for(int i = 0; i<A.size()-1; i++){
        leftPart += A[i];
        rightPart -= A[i];
        int r = std::abs(leftPart-rightPart); 
        res = std::min(res, r);
    }
    
    return res;
}