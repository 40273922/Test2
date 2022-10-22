#include<stdio.h>
int main (void)
{	
	int a,b,c,d,e,f,g,h,j ;
	for (a=1;a<=16;a++)
	{
	    j = 31 + a;
		h = j - 33;
		b = j - 29;
		d = j - 28;
		c = j - b - 19;
		e = j - c - h - 16;
		g = j - e - 13;
		f = j - a - c - d;
			if(h > 0 & h < 16)
		   {
		
			if(b > 0 & b < 16)
			{
				
				if(d > 0 & d < 16)
				{
					
					if(c > 0 & c < 16)
					{
						
						if(e > 0 & e < 16)
						{
							
							if(g > 0 & g < 16)
							{
							
								if(f > 0 & f < 16)
								{
									printf("16 %2d  2 13\n",a);
									printf("%2d %2d 11  8\n",b,c);
									printf(" 9 %2d %2d 12\n",d,e);
									printf(" 4 %2d %2d %2d\n",f,g,h);
									printf("\n");
								}
							}
						}
					}
				}
			}
		}
	}
}	
//		16   a    2   13
// 		b    c   11    8
//		9    d    e   12
//		4    f    g    h
//		
	
//	 } 


