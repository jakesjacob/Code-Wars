class Arge
{
public:
    static int nbYear(int p0, double percent, int aug, int p)
    {

        float percent2 = percent / 100;

        bool keepGoing = true;
        int years = 0;

        while (keepGoing)
        {
            p0 = p0 + (p0 * percent2) + aug;

            years++;

            if (p0 >= p)
            {
                keepGoing = false;
            }
        }

        return years;
    }
};