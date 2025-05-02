class Solution {
public:
    int findTheWinner(int n, int k) {
        return myJos(n,k)+1;
    }

    private:
    int myJos(int n,int k){
        if(n==1){
            return 0;
        }
        else{
            return (myJos(n-1,k)+k)%n;
        }
    }
};