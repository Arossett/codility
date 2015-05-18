//solution codility counting FrogRiverOne

int solution(int X, vector<int> &A) {
 vector<int> B(X+1);
    int min = -1;
    int r = 0;
    for(int i = 0; i<A.size(); i++){
        B[A[i]] += 1;
        if(B[A[i]]==1){
            min = i;
            r++;
        }
    }
    if(r<X){
        min = -1;
    }
    
    return min;
}