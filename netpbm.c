/* File: netpbm.c */
#include <stdio.h>

int main(void){
	int ch=getchar(),
		binary,
		height,
		width,
		pixel,
		r,b,g,
		max,
		val,
		sum,
		i,j;

	if((ch == 'P' )||(ch== 'p')){
		ch = getchar();
		/*
        =======================================
        #############  P = 2  #################
        =======================================
        */
		if(ch == '2'){
			ch= getchar();
			/*CLEAR WHITE SPACE*/
			while((ch == ' ')||(ch == '\t')||(ch == '\n')||(ch == '#')){
				if(ch == '#'){
					while(ch!= '\n')
						ch = getchar();
				} else
					ch = getchar();
			}
			/*FINDS WIDTH*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			width = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS HEIGHT*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			height = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS MAX VALUE*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			max = val;
			/*OUTPUT*/
			putchar('P');
			putchar('1');
			putchar('\n');
			printf("%d",width); putchar(' ');
			printf("%d",height); putchar('\n');
			while(ch != EOF){
				/*CLEAR WHITE SPACE*/
				while((ch == ' ')||(ch == '\t')||(ch == '\n'))
					ch=getchar();
				/*FINDS GRAYSCALE PIXEL*/
				val = 0;
				while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
					if (ch >= '0' && ch <= '0'+9)
						val = 10*val + (ch-'0');
					ch = getchar();
				}
				/*DECIDE VALUE*/
				if(val > (max+1)/2)
					putchar('0');
				else
					putchar('1');
				putchar(' ');
				/*CLEAR WHITE SPACE*/
				while((ch == ' ')||(ch == '\t')||(ch == '\n'))
					ch=getchar();
			}
		}
		/*
        =======================================
        #############  P = 3  #################
        =======================================
        */
		if(ch == '3'){
			ch= getchar();
			/*CLEAR WHITE SPACE*/
			while((ch == ' ')||(ch == '\t')||(ch == '\n')||(ch == '#')){
				if(ch == '#'){
					while(ch!= '\n')
						ch = getchar();
				} else
					ch = getchar();
			}
			/*FINDS WIDTH*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			width = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS HEIGHT*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			height = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS MAX VALUE*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			max = val;
			/*OUTPUT*/
			putchar('P');
			putchar('2');
			putchar('\n');
			printf("%d",width); putchar(' ');
			printf("%d",height); putchar('\n');
			printf("%d",max); putchar('\n');
			while(ch != EOF){
				/*CLEAR WHITE SPACE*/
				while((ch == ' ')||(ch == '\t')||(ch == '\n'))
					ch=getchar();
				/*FINDS RED*/
				val = 0;
				while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
					if (ch >= '0' && ch <= '0'+9)
						val = 10*val + (ch-'0');
					ch = getchar();
				}
				r = val;
				/*CLEAR WHITE SPACE*/
				while((ch == ' ')||(ch == '\t')||(ch == '\n'))
					ch=getchar();
				/*FINDS GREEN*/
				val = 0;
				while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
					if (ch >= '0' && ch <= '0'+9)
						val = 10*val + (ch-'0');
					ch = getchar();
				}
				g = val;
				/*CLEAR WHITE SPACE*/
				while((ch == ' ')||(ch == '\t')||(ch == '\n'))
					ch=getchar();
				/*FINDS BLUE*/
				val = 0;
				while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
					if (ch >= '0' && ch <= '0'+9)
						val = 10*val + (ch-'0');
					ch = getchar();
				}
				b = val;
				pixel=(299*r + 587*g + 114*b) / 1000;
				printf("%d ",pixel);
				/*CLEAR WHITE SPACE*/
				while((ch == ' ')||(ch == '\t')||(ch == '\n'))
					ch=getchar();
			}
		}
		/*
        =======================================
        #############  P = 5  #################
        =======================================
        */
		if(ch == '5'){
			ch= getchar();
			/*CLEAR WHITE SPACE*/
			while((ch == ' ')||(ch == '\t')||(ch == '\n')||(ch == '#')){
				if(ch == '#'){
					while(ch!= '\n')
						ch = getchar();
				} else
					ch = getchar();
			}
			/*FINDS WIDTH*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			width = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS HEIGHT*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			height = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS MAX VALUE*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			max = val;
			ch = getchar();
			/*OUTPUT*/
			putchar('P');
			putchar('4');
			putchar('\n');
			printf("%d",width); putchar(' ');
			printf("%d",height); putchar('\n');
			i=1;
			while(i<=height){
				sum=255;
				binary=128;
				j=1;
				while(j<=width){
					if(ch>((max+1)/2))
						sum=sum^binary;
					binary=binary/2;
					if((binary<1)||(j==width)){
						putchar(sum);
						sum = 255;
						binary = 128;
					}
					ch = getchar();
					j++;
				}
				i++;
			}
		}
		/*
        =======================================
        #############  P = 6  #################
        =======================================
        */
		if(ch == '6'){
			ch= getchar();
			/*CLEAR WHITE SPACE*/
			while((ch == ' ')||(ch == '\t')||(ch == '\n')||(ch == '#')){
				if(ch == '#'){
					while(ch!= '\n')
						ch = getchar();
				} else
					ch = getchar();
			}
			/*FINDS WIDTH*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			width = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS HEIGHT*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			height = val;
			/*CLEAR WHITE SPACE*/
			if((ch == ' ')||(ch == '\t')||(ch == '\n')){
				ch=getchar();
			}
			/*FINDS MAX VALUE*/
			val = 0;
			while((ch != ' ')&&(ch != '\t')&&(ch != '\n')){
				val = 10*val + (ch-'0');
				ch = getchar();
			}
			max = val;
			/*OUTPUT*/
			putchar('P');
			putchar('5');
			putchar('\n');
			printf("%d",width); putchar(' ');
			printf("%d",height); putchar('\n');
			printf("%d",max); putchar('\n');
			ch = getchar();
			while(ch != EOF){
				r = ch;
				g = getchar();
				b = getchar();
				pixel=(299*r + 587*g + 114*b) / 1000;
				putchar(pixel);
				ch = getchar();
			}
		}
	}
}