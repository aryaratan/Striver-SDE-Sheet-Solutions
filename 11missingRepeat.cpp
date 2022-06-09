https://www.interviewbit.com/problems/repeat-and-missing-number-array/


vector<int> Solution::repeatedNumber(const vector<int> &nums) {

    int n = nums.size();
    long long int sum = 0;
    vector<int> output;
    for(int i=0;i<n;i++){
        sum += (long)nums[i];
    }
    long long int S = (long)n*(n+1)/2;

    long long int a = S - sum;            // x-y

    long long int square = 0;
    for(int i=0;i<n;i++){
        square += (long)nums[i]*nums[i];
    }

    long long int P = (long)n*(n+1)*(2*n+1)/6;
    long long int b = P - square ;           // x2 - y2

    long long int c = b/a;          // x + y


    int missing = (int) (a + c) / 2;
    int repeat = (int)(c-a)/2;
    //cout << repeat << " " << missing << endl;
    output.push_back(repeat);
    output.push_back(missing);
    return output;
}