//solution codility counting PermCheck

int solution(vector<int> &A) {
    std::vector<int> B(A.size());

    for(unsigned int i = 0; i<A.size(); i++){
        if(A[i]>A.size()){
            return 0;
        }else{
            B[A[i]] +=1;
        }
    }
    
    for(unsigned int i = 1; i<B.size(); i++){
        if(B[i]!=1){
            return 0;
        }
    }
    
    return 1;
}