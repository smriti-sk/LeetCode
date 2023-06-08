class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string resS = "";
        int size1 = num1.size(), size2 = num2.size(), minSize, i, carry = 0, resI;
        minSize = (size1 >= size2) ? size2 : size1;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for (i = 0; i < minSize; ++i)
        {
            resI = (int)num1[i] - '0' + (int)num2[i] - '0' + carry;
            if (resI > 9)
            {
                carry = resI / 10;
                resI %= 10;
            }
            else
            {
                carry = 0;
            }
            resS.push_back('0' + resI);
        }
        if (size1 > size2)
        {
            for (i = size2; i < size1; ++i)
            {
                resI = (int)num1[i] - '0' + carry;
                if (resI > 9)
                {
                    carry = resI / 10;
                    resI %= 10;
                }
                else
                {
                    carry = 0;
                }
                resS.push_back('0' + resI);
            }
        }
        else if (size1 < size2)
        {
            for (i = size1; i < size2; ++i)
            {
                resI = (int)num2[i] - '0' + carry;
                if (resI > 9)
                {
                    carry = resI / 10;
                    resI %= 10;
                }
                else
                {
                    carry = 0;
                }
                resS.push_back('0' + resI);
            }
        }
        if (carry > 0)
        {
            resS.push_back('0' + carry);
        }
        reverse(resS.begin(), resS.end());
        return resS;
    }
};