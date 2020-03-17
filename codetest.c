/**
*switch_h - select to print the hexa character
*@numbr: numbr to analyze
*@h: arrai
*@i: spaces of the array
*Return: number of chars of element calld
*/

int switch_h(int numbr, int *he, int i)
{
	switch (numbr)
		{

		case 10:
			he[i] = 'a';
			break;

		case 11:

			he[i] = 'b';
			break;

		case 12:
			he[i] = 'c';
			break;

		case 13:
			he[i] = 'd';
			break;

		case 14:
			he[i] = 'e';
			break;

		case 15:
			he[i] = 'f';
			break;
		default:
			he[i] = numbr;
		}
	return (he[i]);
}
