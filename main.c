#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ԥ����
	//�����ص㣺
		//�����������ʹ��
		//��������Ļ���ʹ�������
		//�ļ������ı���
		//Ԥ������� - ѡѧ
		// # VS ##


//�궨��
  //1.1��ֵ����
//#define PI 3.14159
//int main()
//{
//	double a = PI;
//	double b = PI;
//	double c = PI;
//	printf("%d\n", a);
//	return 0;
//}


// 1.2 �ַ����곣��

/*
��һ���꣬�ַ���û�д�˫���ţ�ֱ�ӱ���
#define PATH E:\VS�������洢����\C���Դ���\C�����������\test 2022-1-24  pretreatment

�ڶ����꣬�ַ�������˫���ţ��о��棬�ܹ�����ͨ����������windows��·���ָ�����Ҫ\\��������룬�Ĺ���֮������
#define PATH "E:\\VS�������洢����\\C���Դ���\\C�����������\\test 2022-1-24  pretreatment"
�������꣬����˫���ţ�����\����
#define PATH E:\\VS�������洢����\\C���Դ���\\C�����������\\test 2022-1-24  pretreatment
���ĸ��꣬��˫���ţ�����\����
#define PATH "E:\\VS�������洢����\\C���Դ���\\C�����������\\test 2022-1-24  pretreatment"

*/

////#define PATH E:\VS�������洢����\C���Դ���\C�����������\test 2022-1-24  pretreatment
////#define PATH "E:\\VS�������洢����\\C���Դ���\\C�����������\\test 2022-1-24  pretreatment"
////#define PATH E:\\VS�������洢����\\C���Դ���\\C�����������\\test 2022-1-24  pretreatment
//#define PATH "E:\\VS�������洢����\\C���Դ���\\C�����������\\test 2022-1-24  pretreatment"
//int main()
//{
//	const char* path = PATH;
//	printf("%s\n", PATH);
//	return 0;
//}

//���ۣ��궨������ַ�����ʱ��һ��Ҫ����˫���ţ�������\����


// 1.3 ʹ�ú궨��䵱ע�ͷ���

//��������̣�
//Ԥ���� -E ��ͷ�ļ�չ����ȥע�ͣ����滻
//����   -S �����ɾ���C���ԣ������Ϊ�������
//���   -c ������෭���ΪĿ��������ļ�
//����      ����Ŀ��������ļ�����ؿ����ӣ��γɿ�ִ�г���

//����ķ�����ʲô��
	//���ı�ʽ�Ĵ��� ���� ��Ϊ�����ƴ���
//Ϊʲô���������̶����ƣ�
	//�����ֻ��ʶ������->���뾭��ĳ�ֱ�����->����ɶ�����
//��ν��з����أ�
	//1��Ԥ����ͷ�ļ�չ����ȥע�ͣ����滻����������
			//Ԥ���� -E ��ͷ�ļ�չ����ȥע�ͣ����滻		
	//2�����루Ԥ�������C���Բ�����C���ԣ�����ת������Ӧ�Ļ�����ԣ�
			//����   -S �����ɾ���C���ԣ������Ϊ�������
	//3����ࣨ���������ת����Ϊ�������ļ��������ϸ������ִ���ļ�����רҵ���֣����ض���Ŀ���ļ������ɱ����ӣ���
			//���   -c ������෭���ΪĿ��������ļ�
	//4�����ӣ����������Ϳ��ļ����й������γɿ�ִ�г���
			//�����к��ж�̬���Ӻ;�̬����

	
//ΪʲôҪ�п⣺���⺯�����߿⣩  
	//1�����Ч��
	//2����׳��or³����


//ȥע�ͺͺ��滻��˭��˭���أ���
//��BSC���䵱C++����ע��

//����Ҫ��Linux�н�����Ӧ�Ĳ���
//gcc -E main.c -o main.i

//test.i�����ɵ�һ����ʱ�ļ�
//����һ������ķ��룬��Ԥ����׶Σ���ͣ����  ͷ�ļ�չ����ȥע�ͣ����滻���������� �����ͣ����
//����֮���test.i
//vim test.i

//�����������  vs main.c  �Ϳ��԰�ԭ��д�Ĵ�����е��������жԱ�

//���б����ʱ���õ���gcc main.c

//#define BSC //
//int main()
//{
//	BSC printf("Hello World\n");
//	return 0;
//}
////���Ƿ��֣����ﲢû�б���
////���һ�û�б�ע�͵�

//��������滻������ȥע�ͣ������Ļ��Ϳ�����Hello World
 
		//�Ƚ��к��滻�Ļ�����   // printf("Hello World\n");
 

  //ʵ��֤������ ȥע�ͣ��� ���к��滻

// #define BSC //    ���˫б�ܱ������ע��
//���Խ���ȥ��������û�����Խ���BSC���滻�����Խ����滻����  �յ�


//����һ��C���Ե�ע�ͷ��

//#define BMC /*
//#define EMC */     //ϸ�ĵľͻᷢ�������Ѿ���ע�͵���
//
//int main()
//{
//	BMC printf("Hello World!\n"); EMC//���������ֱ�ӱ���
//	printf("you can see me !\n");
//	return 0;
//}

//gcc -E main.c -o main.i
//���ɵ�ʱ��û�б���
//����һ��������Ԥ����׶γ��ִ���һ�����ڱ����ʱ����ִ���

////Ԥ������Ľ���ǣ�
//int main()
//{
//	printf("Hello World!\n"); EMC
//	printf("you can see me !\n");
//	return 0;
//}

//ʣ���˸�EMC��BMC�ÿ����滻��

//���ۣ�Ԥ�����ڼ䣺��ִ��ȥע�ͣ��ڽ��к��滻�����ң�ǿ�Ҳ�Ҫ������дע�ͣ�


// 1.4  ��define �궨����ʽ


//���⣺��ӡ�����궨���ֵ��printf����SUM(x)�����������ʲô��

//#define SUM(x) (x)+(x)
//int main()
//{
//	printf("%d\n", SUM(10));
//	printf("SUM(20)");//���ֱ�ӵ����ַ��������
//	return 0;
//}

//./a.out    ��������

//gcc -E main.c -o main.i  //����Ԥ����
//vim test.i

//����Ԥ��������Ľ���ǣ�
//int main()
//{
//	printf("%d\n", (10) + (10));
//	printf("SUM(20)");//��������������û�б��滻��
//	return 0;
//}



//���⣺"#define M 100"�Ǻ궨����

//"#define M 100"
//int main()
//{
//	printf("%d\n", M);//�����ʱ�������M�ǲ��ᱻ�滻����
//	return 0;
//}
////����ֱ�ӱ���


////�����İ취����Ȼ�������������û����
//int main()
//{
//	"#define M 100";//��Ͳ��Ǻ��ˣ������ַ�������
//	printf("%d\n", M);//�����ʱ�������M�ǲ��ᱻ�滻����
//	return 0;
//}

//�ַ���������Ҫô����ָ�룬Ҫô�������飬��������û���κ�����

//���⣺����д��ʲôʱ���������⣬������ô�޸�

//#define INIT_VAL(a,b)\
//		a=0;\
//		b=0;
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("before:%d,%d\n", x, y);
//	INIT_VAL(x, y);
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}

//gcc -E main.c -o main.i

////��������Ĵ����ǣ�
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("before:%d,%d\n", x, y);
//	x = 0; y = 0;;//������һ���ֺ�����Ϊ�ں궨�������ʱ��������;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}


////����д��
//#define INIT_VAL(a,b)\
//		a=0;\
//		b=0;
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag)
//		INIT_VAL(x, y);//����ֻ�ܽ���һ����Ч����
//	else
//		x = 100, y = 200;
//	return 0;
//}
////�����ͻ���ִ���
//
////ԭ����ʲô�أ�
////������
//
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag)
//		x = 0; y = 0;;//�������������������ŵĻ�����ֻ��ִ��һ����䣬����������������������Ծ�ֱ�ӱ�����
//	else
//		x = 100, y = 200;
//	return 0;
//}

//��ô�޸ĳ���ȷ�ģ�

////���ϴ����ţ���һ�ֽ������
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	printf("before:%d,%d\n", x, y);
//	if (flag)
//	{
//		x = 0; y = 0;;//�������������������ŵĻ�����ֻ��ִ��һ����䣬����������������������Ծ�ֱ�ӱ�����
//	}
//	else
//	{
//		x = 100, y = 200;
//	}
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}
//������û����


//�ڶ��ֽ��������
//#define INIT_VAL(a,b) {a=0;b=0;}
//		
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	printf("before:%d,%d\n", x, y);
//	if (flag)
//		INIT_VAL(x, y);
//	else
//		x = 100, y = 200;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}
////gcc -E main.c -o main.i
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	printf("before:%d,%d\n", x, y);
//	if (flag)
//		{x = 0; y = 0;};//������������⣬���������������;���ǲ������
//	else
//		x = 100, y = 200;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}

//���շ�����

//#define INIT_VAL(a,b) do{a=0;b=0;}while(0)//����ǿ��Ե�
//#define INIT_VAL(a,b) do{\
//					a=0;\
//					b=0;\
//					}while(0)
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	printf("before:%d,%d\n", x, y);
//	if (flag)
//		INIT_VAL(x, y);
//	else
//		x = 100, y = 200;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}

//gcc -E main-c -o main.i

//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	printf("before:%d,%d\n", x, y);
//	if (flag)
//		do { x = 0; y = 0; } while (0);//���һ���ֺų�ֵ���ѭ���Ľ������ոպ�
//	else
//		x = 100, y = 200;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}

//�����Լ�����װ��

//#define INIT_VAL(a,b) do{\
//		printf("before:%d,%d\n", x, y);\
//		a=0;\
//		b=0;\
//		printf("before:%d,%d\n", x, y);\
//}while(0)
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag)
//		INIT_VAL(x, y);
//	else
//		x = 100, y = 200;
//	return 0;
//}
//����Ҳ�ǿ��Ե�

//gcc -E main.c -o main.i

//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	printf("before:%d,%d\n", x, y);
//	if (flag)
//		do { printf("before:%d,%d\n", x, y); x = 0; y = 0; printf("before:%d,%d\n", x, y);
//	} while (0);
//	else
//		x = 100, y = 200;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}

//Ϊʲô��do...while �أ���
//��Ϊdo...while �д����ţ�ֻҪ�д����ţ��Ϳ���������д�������

//���� 1��
	//C�ĺ�ֻ����չΪ�ô������������ĳ�ʼ����������С�����������ı��ʽ�������޶������洢���ʶ����
//do - while - zero�ṹ
//����2��
	//������ĵ��ò���ȱ�ٲ���������˺������в����Ļ���
//����һ��Լ�����󣬵���Ԥ������֪�������Դ����⡣����
//���е�ÿ����������ɱ���������һ��Ԥ�����ǣ���������Ϊ��δ����
//����3��
	//���ݸ�������Ĳ������ܰ�������Ԥ����ָ��ı�ǡ�
//����κβ�������Ϊ����Ԥ����ָ�ʹ�ú��滻������ʱ����Ϊ���ǲ����ڵ�
//����4��
	//�ڶ��庯����ʱ��ÿ������ʾ����Ӧ����С����������������������Ϊ#��##�Ĳ�����


// 1.5  �궨���еĿո�
//# define //#��define ֮�����и��ո�����ո��ǲ�Ӱ������


// 1.6 #undef

//��ֻ����main���涨����
//��һ��Դ�ļ��ڣ������Ч��Χ�Ƕ��٣�


//����1����������ܱ���ͨ����

//#define M 10
//int main()
//{
//#define N 100
//	printf("%d,%d\n", M, N);
//	return 0;
//}

//���ۣ��꣬�����ﶼ���ԣ�ϰ�߷���������

//����2��

//void show()
//{
//#define M 10
//	printf("show:%d\n", M);
//}
//int main()
//{
//	printf("main:%d\n", M);
//	return 0;
//}

//�����ǿ��Խ��д�ӡ��
//�궨�����Ƿ��ں������ڣ��������⣬û���κι�ϵ

//��Դ�ļ����κεط����궼���Զ��壬���Ƿ��ں������⣬�޹�



//void show()
//{
//	printf("show:%d\n", M);
//}
//int main()
//{
//	printf("main:%d\n", M);
//#define M 10
//	printf("main:%d\n", M);
//	return 0;
//}
//
////gcc -E main.c -o main.i
//
//void show()
//{
//	printf("show:%d\n", M);
//}
//int main()
//{
//	printf("main:%d\n", M);
//
//	printf("main:%d\n", 10);
//	return 0;
//}

//������÷�Χ���Ӷ���chu����ʼ����������Ч��


//int main()
//{
//#define M 10
//	printf("before:%d\n", M);
//#undef M  //ȡ����
//	printf("after:%d\n", M);//����ֱ�ӱ���,δ�����M
//	return 0;
//}
//
////gcc -E main.c -o main.i
//int main()
//{
//
//	printf("before:%d\n", 10);//ֻ��������Ǻ�ĺϷ���Χ
//
//	printf("after:%d\n", M);
//	return 0;
//}


////����������ݴ��룺
//int main()
//{
//#define X 3
//#define Y X*2
//#undef X
//#define X 2
//	int z = Y;
//	printf("%d\n", z);
//	return 0;
//}
//
////gcc -E main.c -o main.i
//
//int main()
//{
//
//	int z = 2*2;//����2*3
//	printf("%d\n", z);
//	return 0;
//}


//���� 6���겻���ڿ��н���#define �� #undef
	//C�����У������ڴ����ļ��е��κ�λ�÷���#define��#undef �ǺϷ��ģ����ǰ����Ƿ��ڿ��л�ʹ�����Ϊ����
//���Ǵ�����������
//���� 8������ʹ����ͨ�ĺ���������Ҫʹ�á��궨�庯���������Լ��ٴ���ռ��ռ�ã�ROM�ռ䣩
//���� 9��Ԥ����ָ�������к��ʶ����ʹ��ǰ��Ӧ�ȶ��壬����#ifdef��#ifndefָ���Լ�defined()������

//#define M 10
//void show()
//{
//	printf("%d\n", M);
//}
//int main()
//{
//#undef M
//	show();
//	return 0;
//}
//��������
//���滻�ں�������֮ǰ

////gcc -E main.c -o main.i
//
//void show()
//{
//	printf("%d\n", 10);
//}
//int main()
//{
//
//	show();
//	return 0;
//}




//�������루������һ������ü��Ĺ��ߣ�

//1�������������ʹ�ã�
//2��Ϊ��Ҫ���������룿
//3���������붼����Щ�ط�ʹ�ã�


//	�����������ʹ�ã�
		//��ž���һ�ִ���ü�
//1����һ�������
	//#ifdef ��ʶ��
	//�����1
	//#else
	//�����2
	//#endif

////���Ƿ񱻶��� VS ���Ƿ�Ϊ��
//#define DEBUG
//#define DEBUG 1    //�����Ϊ��
//#define DEBUG 0    //�����Ϊ��

//#ifdef:�ж����Ǻ��Ƿ񱻶���  
	//����Ƕ���Ļ�������Ĵ���ͻᱻ���� 
//#ifndef���ж����Ǻ��Ƿ񱻶���
	//���û�б����壬����Ĵ���ͻᱻ����

//�����ֶ��Ǻ걻���壬
//int main()
//{
//#ifdef DEBUG
//	printf("Hello World!");
//#endif
//	return 0;
//}
//
////gcc -E main.c -o main.i
//
//int main()
//{
//
//	return 0;
//}


//���¶���һ�º�
//
//int main()
//{
//#define DEBUG 0//�궨����궨��Ϊ��Ϊ����û���κι�ϵ��
//#ifdef DEBUG
//	printf("Hello Debug!");
//#endif
//	return 0;
//}

//gcc -E main.c -o main.i

//int main()
//{
//	printf("Hello Debug!");
//	return 0;
//}

////#define DEBUG
//#define RELEASE 1
//int main()
//{
//#ifdef DEBUG
//	printf("Hello Debug!\n");
//#elif RELEASE
//	printf("Hello Release!\n");
//#else
//	printf("Hello unknow!\n");
//#endif
//	return 0;
//}



//2���ڶ��������
	//#if ��ʶ��
	//�����1
	//#else
	//�����2
	//#endif

//int main()
//{
//#if C//���ڣ��ͱ�������Ĵ���
//	printf("hello C!\n");
//#else//��������ڣ��ͻᱣ������
//	printf("Hello other!\n");
//#endif
//	return 0;
//}

//���������ӡ��������Hello other

//#define C
//int main()
//{
//#if C//���ڣ��ͱ�������Ĵ���
//	printf("hello C!\n");
//#else//��������ڣ��ͻᱣ������
//	printf("Hello other!\n");
//#endif
//	return 0;
//}

//�������ǲ��еģ���Ϊ����ֻ�Ƕ�����һ��C������û�и�C�����滻
//���־�����Ԥ����׶ξͻ�ֱ�ӱ���

//#define C  1
//int main()
//{
//#if C//���ڣ��ͱ�������Ĵ���
//	printf("Hello C!\n");
//#else//��������ڣ��ͻᱣ������
//	printf("Hello other!\n");
//#endif
//	return 0;
//}
////��#define C 1  ����ʱ����ӡ��������Hello C
////��#define C 0  ����ʱ����ӡ��������Hello other



//��Ѱ����շѰ�Ҳ�Ϳ������������������ⲿ�ָ����ε�

//Ϊ��Ҫ���������룿ͨ���ü����룬����ʵ��ĳ��Ŀ�ģ��汾ά������Ѱ桢�շѰ棩�����ܲü�����ƽ̨�ԣ�

//�����ڽ��������������------>����------>C/C++ ------> Ԥ������������ļӱ�ʶ��������
//���仰˵Ҳ���ǿ�����ϵͳ�����������Ķ��壬�����ڴ����м��˶���
//���磺��ϵͳ�����м�һ����PRINT=1/0�Ϳ�����

//��������

//#define VERSION 5
//
//int main()
//{
//#if VERSION==1
//	printf("hello 1\n");
//#elif VERSION==2
//	printf("hello 2\n");
//#elif VERSION==3
//	printf("hello 3\n");
//#else
//	printf("hello other");
//#endif
//	return 0;
//}



//#define VERSION
//int main()
//{
//#if defined(VERSION)
//	printf("hello 1\n");
//#else
//	printf("hello other");
//#endif
//	return 0;
//}
////��#define VERSION������������hello 1
////û��#define VERSION������������hello other



//#ifdef  ---->  #if defined()
//#ifndef ---->  #if !defined()

//����Ҫ��#endif������

//���������м�����

//#define C
//#define CPP
//int main()
//{
//#if defined(C)&&defined(CPP)//����ͬʱ��������
//	printf("Hello C && CPP!\n");
//#else
//	printf("Hello other!\n");
//#endif
//	return 0;
//}

//#define C    //ֻ�����Hello C��
////#define CPP
//int main()
//{
//#if defined(C)
//	#if defined(CPP)
//	printf("Hello CPP!\n");
//	#endif
//	printf("Hello C!\n");
//#else
//	printf("Hello other!\n");
//#endif
//	return 0;
//}

////��������?
//#define C 
//#define CPP 
//
//int main()
//{
//#if defined(C)
//	printf("Hello C!\n");
//#elif defined(CPP)
//	printf("Hello CPP!\n");
//#else
//	printf("Hello other!\n");
//#endif
//	return 0;
//}
//�������ֻ�ᱣ��Hello C�����Ǵ������½��б��룬������C����Ͳ����ٽ��б�����
//�����ʵ����if else������


//Ϊ��Ҫ���������룺
	//������ʶ���������룬��ʵ���Ǳ���������ʵ��������Դ�����м��á������ʵ�������
//ȡ��������ƽ̨�����뱾���ҵ���߼��ȡ�

//������Ϊ�������ô���
	//1������ֻ������ǰ����Ҫ�Ĵ����߼�������ȥ�������Լ������ɴ���Ĵ�С
	//2������д����ƽ̨�Ĵ��룬��һ�������ҵ���ڲ�ͬƽ̨�����ʱ�򣬿�����ͬ���ı���



////�ļ�����
////�����Ҫ���ж��ļ��������У�����һ��	main.h
//
//#include "main.h"
//int main()
//{
//
//	return 0;
//}
////ʲô����ͷ�ļ�չ����
//	//��ͷ�ļ������ݿ�����Ŀ��Դ�ļ�
//�ظ�����һ���ᱨ���𣿣������ᣡ��
//�ظ��������������ο�������ҪӰ�����Ч����ͬʱ��Ҳ��������һЩδ������󣬵����ر���


//#error Ԥ������� - ѡѧ

//#define _CPP
//int main()
//{
//#ifndef _CPP
//#error ��ı��������ڲ���C++���͵ı�����  
//	//��û�н���CPP�����ʱ������ͻᱨ�������֮���� �Զ��� һ��������Ϣ
//	//�������˶���֮������Ͳ�����б���
//#endif
//	return 0;
//}


//#line  Ԥ���� - ѡѧ

////������ʵ�ǿ��Զ��ƻ�����ļ����ƺʹ����кţ�����ʹ��
//int main()
//{
//	printf("%s,%d\n", __FILE__, __LINE__);//CԤ������ţ�����ǰ�ļ����ʹ����к�
//#line 60 "hehe.c"                     //�������
//	printf("%s,%d\n", __FILE__, __LINE__);//���ﶼ���ĸ��»���
//	return 0;
//}

//__FILE__  //�����ʾ�����ļ�����λ�ã�����ǿ����޸ĵ�
//__LINE__  //�����ʾ���ǵ�ǰ__LINE__�е��кţ�����ǿ����޸ĵ�



//#pragma  Ԥ���� - ѡѧ

//#pragma message() ���ã������������жԴ������ض��ķ��ţ����������궨�壩�����Ƿ���ڽ��б���ʱ��Ϣ����
//
//#define M
//int main()
//{
//#ifdef M
//#pragma message("M���Ѿ���������")
//	//M��û�б����壬����ʲô��û��
//	//������#define M,��Mһ����֮�󣬾ͻ��ӡ���������Ǵ�ӡ�����ĵط����Ǻڿ��У������������
//#endif
//	return 0;
//}
////#pragma pack()  ��  �ڴ�������


//#��##�����

//1��#�����

//int main()
//{
//	printf("hello world!\n");
//	printf("hello world!""hello world!\n");
//	const char* str = "hello 1""hello 2\n";
//	printf(str);//��һ�п��Ե�ԭ��Ͳ�����ص�printf�ĵ�
//	//��������ǿ��Ա������
//
//	//���оͽ��������ַ��������Զ���������
//	return 0;
//}


//#define STR(s) #s    //#�����þ��ǽ���������s��Ӧ���ı�����ת����Ϊ���ַ�������
//					 //���û��#s�������ӡ������ֻ�и�PI��
//int main()
//{
//	printf("PI:"STR(3.1415926)"\n");//������������ַ���
//	return 0;
//}
//
////gcc -E main.c -o main.i
//
//int main()
//{
//	printf("PI:""3.1415926""\n");
//	return 0;
//}


//#define TOSTRING(s) #s  //Ҳ�����ñ�����������Ū���ַ���
//int main()
//{
//	int abc = 123456;
//	char str[64] = { 0 };
//	strcpy(str, TOSTRING(abc));
//		//����Ԥ������̣����������ٿռ�������֮��Ĺ�����������Ԥ����׶�ֻ�ܴ�ӡ��abc
//		//���Ծͽ�����һ���򵥵��滻��Ҳ���ǽ��ַ���abcŪ���ַ���abc
//	printf("%s\n", str);//��ӡ��������һ��abc
//	return 0;
//}


//2��##�����

  //����κ��ض��ķ�������γ�һ��ȫ�µķ��ţ����Ƿ��ţ������ַ�����


//#define XNAME(n) student##n  //��˫#����������������������
//int main()
//{
//	XNAME(1);
//	XNAME(2);
//	XNAME(3);
//	XNAME(4);
//	XNAME(5);
//	XNAME(6);
//	return 0;
//}//�����ֱ�ӱ���ԭ�����£�
////gcc -E main.c -o main.i
//
//int main()
//{
//	student1;
//	student2;
//	student3;
//	student4;
//	student5;
//	student6;
//	return 0;
//}

//���縡�����Ŀ�ѧ������
//int main()
//{
//	printf("%lf\n", 3.14e2);//314.000000//base * 10 ^ 2
//	return 0;
//}

////������˫#�������أ�
//#define COUNT(base,n) base##e##n
//
//int main()
//{
//	printf("%lf\n", COUNT(3.14, 2));
//	return 0;
//}

//���������ǵȼ۵�

//gcc -E main.c -o main.i

//int main()
//{
//	printf("lf\n", 3.14e2);
//	return 0;
//}