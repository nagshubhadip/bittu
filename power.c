#include<stdio.h>
int main()
{
	int x, y, z;
	scanf("%d %d %d",&x,&y,&z);
int result_x_Power_y = 1;
for (int i = 1 ; i <= y ; i++)
    result_x_Power_y = result_x_Power_y * x;
int result_x_Power_y_power_z = 1;
for (int i = 1 ; i <= z ; i++)
    result_x_Power_y_power_z = result_x_Power_y_power_z * result_x_Power_y;
printf("%d %d\n",result_x_Power_y, result_x_Power_y_power_z);
}
