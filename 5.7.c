
task main()
{
	clearTimer(T1);

	while (time1[T1] < 5000)
	{
		motor[motorA] = 50;
		motor[motorD] = 50;
	}
	motor[motorA] = 0;
	motor[motorD] = 0;
}
