#include<bits/stdc++.h>
using namespace std;
int main()
{

    int hour,month,second;
    char time[3];
    scanf("%d:%d:%d%s", &hour, &month, &second,time);

    if (strcmp(time, "PM") == 0 && hour != 12)
      hour += 12;
    if (strcmp(time, "AM") == 0 && hour == 12)
      hour = 0;

    printf("%02d:%02d:%02d", hour, month, second);
    return 0;

}

