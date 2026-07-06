package libraries;

/**
 * ------------------------------------------------------------
 * StringX
 * ------------------------------------------------------------
 * A custom utility library containing commonly used string
 * manipulation and analysis methods implemented from scratch.
 *
 * Author : Shraddha Khetmalis
 * Repository :
 * https://github.com/shraddhaa09/LOGIC_BUILDING
 * ------------------------------------------------------------
 */

public class StringX
{
    public int CountCapital(String str)
    {
        int count = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                count++;
            }
        }

        return count;
    }

    public int CountSmall(String str)
    {
        int count = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
            {
                count++;
            }
        }

        return count;
    }

    public int CountDigits(String str)
    {
        int count = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= '0' && str.charAt(i) <= '9')
            {
                count++;
            }
        }

        return count;
    }

    public int CountSpace(String str)
    {
        int count = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ' ')
            {
                count++;
            }
        }

        return count;
    }

    public int CountSpecial(String str)
    {
        int count = 0;

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if((ch >= '!' && ch <= '/') ||
               (ch >= ':' && ch <= '@') ||
               (ch >= '[' && ch <= '`') ||
               (ch >= '{' && ch <= '~'))
            {
                count++;
            }
        }

        return count;
    }
}