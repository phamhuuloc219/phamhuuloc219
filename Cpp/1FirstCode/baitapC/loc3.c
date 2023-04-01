// doi so thanh chu
#include <stdio.h>
int hangchuc,hangdv;
int main()
{
	printf ("nhap so hang chuc: ");
	scanf("%d",&hangchuc);
		printf ("nhap so hang don vi: ");
	scanf("%d",&hangdv);
	switch (hangchuc){
		case 1:{ printf("muoi");
			break;
		}
		case 2:{ printf("hai muoi");
			break;
		}
		case 3:{ printf("ba muoi");
			break;
		}
		case 4:{ printf("bon muoi");
			break;
		}
		case 5:{ printf("nam muoi");
			break;
		}
		case 6:{ printf("sau muoi");
			break;
		}
		case 7:{ printf("bay muoi");
			break;
		}
		case 8:{ printf("tam muoi");
			break;
		}
		case 9:{ printf("chin muoi");
			break;
		}
	}
	switch (hangdv){
		case 1:{ printf(" mot");
			break;
		}
		case 2:{ printf(" hai");
			break;
		}
		case 3:{ printf(" ba");
			break;
		}
		case 4:{ printf(" bon");
			break;
		}
		case 5:{ printf(" nam");
			break;
		}
		case 6:{ printf(" sau");
			break;
		}
		case 7:{ printf(" bay");
			break;
		}
		case 8:{ printf(" tam");
			break;
		}
		case 9:{ printf(" chin");
			break;
		}
	}
	return 0;
}
