  int solve(int i, int j, int count, string str1, string str2)
    {
 
        if (i == 0 || j == 0)
        {
            return count;
        }
 
        if (str1[i - 1] == str2[j - 1])
        {
            count = solve(i - 1, j - 1, count + 1, str1, str2);
        }
        int count1 = solve(i, j - 1, 0, str1, str2);

        int count2 = solve(i - 1, j, 0, str1, str2);

        count = max({count, count1,count2});
        return count;
    }
    void lcsubstr(){
        int ans = solve(N, M, 0, str1, str2);
        return ans;
    }
    int LCSubStr(string str1, string str2, int N, int M)
{
    int LCSuff[N + 1][M + 1];
    int mx = 0;    
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
              if (i == 0 || j == 0){
                LCSuff[i][j] = 0;
              }
 
            else if (str1[i - 1] == str2[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                mx = max(mx, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return mx;
}
