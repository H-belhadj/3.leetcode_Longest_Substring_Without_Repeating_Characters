#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s)
{
    int i = 0;
    int j = 0;
    int len = 0;
    int max = 0;
    int cnt[256] = {0};  // Array to keep track of character counts, size changed to 256

    while (s[i])
    {
        len = 0;
        memset(cnt, 0, sizeof(cnt));  // Reset character counts to 0
        j = i;
        while (s[j])
        {
            if (cnt[s[j]] == 0)
            {
                cnt[s[j]]++;
                len++;
            }
            else
                break;
            if (len > max)
                max = len;

            j++;
        }
        i++;
    }
    return max;
}
