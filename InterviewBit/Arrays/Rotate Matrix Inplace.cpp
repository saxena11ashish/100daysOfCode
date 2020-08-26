void Solution::rotate(vector<vector<int> > &a) {
    int x = a[0].size();
    for(int i = 0, j = x-1; i < j ; i++, j--){
        for(int k=0;k<x;k++){
            int temp = a[i][k];
            a[i][k] = a[j][k];
            a[j][k] = temp;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(i != j){
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
}
