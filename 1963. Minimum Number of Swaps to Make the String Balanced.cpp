class Solution {
public:
    int minSwaps(string s) {
        stack<char> rem;
       rem.push(s[0]);
		for (int i=1; i<s.size(); i++)
		{
			if (rem.empty())
				rem.push(s[i]);
			else
			{
				if (s[i]==']'&& rem.top()=='[')
					rem.pop();
				else
					rem.push(s[i]);
			}
		}

		return (rem.size()/2+1)/2;
	}
};
