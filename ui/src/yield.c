#include <stdio.h>

int calculateFromTemp(int temp);
int calculateFromRain(int rain, int days);

int main(void)
{
    int temp = 0;
    int tempScore = 0;
    int days = 90; //90 days is minimum days of growth
    int rain = 0;
    int rainScore = 0;
    printf("Input average temprature: ");
    scanf("%d", &temp);
    tempScore = calculateFromTemp(temp);
    printf("Input days: ");
    scanf("%d", &days);
    printf("Input rainy days: ");
    scanf("%d", &rain);
    rainScore = calculateFromRain(rain, days);
    printf("Your yield score is: %d", tempScore+rainScore);

    // if(conditions==0)
    // {
    //     printf("Impossible conditions");
    // }

    return 0;
}
int calculateFromTemp(int temp)
{
    //prompt the user to input the predicted avg temp and return level 1-5 of yield
    //make this switch cases (arbitrary values for now)
    if(temp<20 || temp>110)
    {
        return 1;
    }
    if(temp<40 || temp>100)
    {
        return 2;
    }
    if(temp<60 || temp>90)
    {
        return 3;
    }
    if(temp<70 || temp>80)
    {
        return 4;
    }
    if(temp<80)
    {
        return 5;
    }
}
int calculateFromRain(int rain, int days)
{
    //prompt the user to input how many days it is expected to rain of the total days and return level 1-5 of yield
    
    if(days-rain<0)
    {
        return 0;
    }
    if(days-rain<10)
    {
        return 4;
    }
    if(days-rain<30)
    {
    return 5;
    }
    if(days-rain<50)
    {
        return 4;
    }
    if(days-rain<70)
    {
        return 3;
    }
    if(days-rain<90)
    {
        return 2;
    }
    return 1;

}