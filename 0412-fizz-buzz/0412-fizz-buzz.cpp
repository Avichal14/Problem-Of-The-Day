using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n)
    {   
        vector<string> answer(n);
        int i = 0;
        int num = i + 1;

        for (i; i < n; i++)
        {
            if (num % 3 == 0 && num % 5 == 0)
            {
                answer[i] = "FizzBuzz";
            }
            else if (num % 3 == 0)
            {
                answer[i] = "Fizz";
            }
            else if (num % 5 == 0)
            {
                answer[i] = "Buzz";
            }
            else
            {
                answer[i] = to_string(num);
            }

            num += 1;
        }
    
        return answer;  
    }
};