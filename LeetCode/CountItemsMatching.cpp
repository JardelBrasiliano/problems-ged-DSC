class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int value = 0;
        int indexRuleKey;

        if (ruleKey == "type")
            indexRuleKey = 0;
        if (ruleKey == "color")
            indexRuleKey = 1;
        if (ruleKey == "name")
            indexRuleKey = 2;

        for (vector<string> options : items)
        {
            if (options[indexRuleKey] == ruleValue)
                value++;
        }
        return value;
    }
};
