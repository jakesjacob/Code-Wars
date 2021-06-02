#include <string>
#include <vector>

class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k)
    {

        int kk = k - 1;

        int length = sizeof(strarr);
        int newLength = length - kk;
        std::string newarr[newLength];

        std::cerr << "Hello world" << std::endl;
        std::cerr << k << std::endl;
        std::cerr << length << std::endl;

        //cycles through the array list but stops on the one that cant make a full concatanation attempt
        for (int i = 0; i < newLength; i++)
        {
            int temp = 0;

            //cycles through
            for (int j = 0; j < k; j++)
            {
                newarr[i] = newarr[i] + strarr[i + temp];
                temp++;
                std::cerr << temp << std::endl;
            }
        }
        //std::cerr << length;
        int largestIndex = 0;
        unsigned long largestNumber = 0;

        for (int i = 0; i < newLength; i++)
        {

            if (sizeof(newarr[i]) > largestNumber)
            {
                largestIndex = i;
                largestNumber = sizeof(newarr[i]);
            }
        }
        std::cerr << largestIndex << std::endl;
        std::cerr << largestNumber << std::endl;
        std::cerr << newLength << std::endl;

        return newarr[largestIndex];
    }
};
