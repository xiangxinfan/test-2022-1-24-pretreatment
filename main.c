#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//预处理
	//本章重点：
		//宏的深度理解与使用
		//条件编译的基本使用与理解
		//文件包含的本质
		//预处理符号 - 选学
		// # VS ##


//宏定义
  //1.1数值定义
//#define PI 3.14159
//int main()
//{
//	double a = PI;
//	double b = PI;
//	double c = PI;
//	printf("%d\n", a);
//	return 0;
//}


// 1.2 字符串宏常量

/*
第一个宏，字符串没有带双引号，直接报错
#define PATH E:\VS编译器存储代码\C语言代码\C语言深度剖析\test 2022-1-24  pretreatment

第二个宏，字符串带上双引号，有警告，能够编译通过，不过，windows中路径分隔符需要\\，输出乱码，改过来之后，正常
#define PATH "E:\\VS编译器存储代码\\C语言代码\\C语言深度剖析\\test 2022-1-24  pretreatment"
第三个宏，不带双引号，进行\续行
#define PATH E:\\VS编译器存储代码\\C语言代码\\C语言深度剖析\\test 2022-1-24  pretreatment
第四个宏，带双引号，进行\续行
#define PATH "E:\\VS编译器存储代码\\C语言代码\\C语言深度剖析\\test 2022-1-24  pretreatment"

*/

////#define PATH E:\VS编译器存储代码\C语言代码\C语言深度剖析\test 2022-1-24  pretreatment
////#define PATH "E:\\VS编译器存储代码\\C语言代码\\C语言深度剖析\\test 2022-1-24  pretreatment"
////#define PATH E:\\VS编译器存储代码\\C语言代码\\C语言深度剖析\\test 2022-1-24  pretreatment
//#define PATH "E:\\VS编译器存储代码\\C语言代码\\C语言深度剖析\\test 2022-1-24  pretreatment"
//int main()
//{
//	const char* path = PATH;
//	printf("%s\n", PATH);
//	return 0;
//}

//结论：宏定义代表字符串的时候，一定要带上双引号，可以用\续行


// 1.3 使用宏定义充当注释符号

//程序翻译过程：
//预处理 -E ：头文件展开，去注释，宏替换
//编译   -S ：将干净的C语言，编译成为汇编语言
//汇编   -c ：将汇编翻译成为目标二进制文件
//链接      ：将目标二进制文件与相关库链接，形成可执行程序

//程序的翻译是什么？
	//将文本式的代码 翻译 成为二进制代码
//为什么经过翻译编程二进制？
	//计算机只认识二进制->必须经过某种编译器->翻译成二进制
//如何进行翻译呢？
	//1、预处理：头文件展开，去注释，宏替换，条件编译
			//预处理 -E ：头文件展开，去注释，宏替换		
	//2、编译（预处理完后，C语言不再是C语言，而是转换成相应的汇编语言）
			//编译   -S ：将干净的C语言，编译成为汇编语言
	//3、汇编（将汇编语言转化成为二进制文件（不能严格叫做可执行文件）（专业名字：可重定向目标文件）（可被链接））
			//汇编   -c ：将汇编翻译成为目标二进制文件
	//4、链接（将自身程序和库文件进行关联，形成可执行程序）
			//关联中含有动态链接和静态链接

	
//为什么要有库：（库函数或者库）  
	//1、提高效率
	//2、健壮性or鲁棒性


//去注释和宏替换是谁先谁后呢？？
//用BSC来充当C++风格的注释

//这里要在Linux中进行相应的测试
//gcc -E main.c -o main.i

//test.i是生成的一个临时文件
//这是一个程序的翻译，在预处理阶段，就停下来  头文件展开，去注释，宏替换，条件编译 做完就停下来
//生成之后打开test.i
//vim test.i

//在最下面进行  vs main.c  就可以把原来写的代码进行调出，进行对比

//进行编译的时候用的是gcc main.c

//#define BSC //
//int main()
//{
//	BSC printf("Hello World\n");
//	return 0;
//}
////我们发现，这里并没有报错
////而且还没有被注释掉

//如果：宏替换是先于去注释，这样的话就看不到Hello World
 
		//先进行宏替换的话就是   // printf("Hello World\n");
 

  //实验证明，先 去注释，再 进行宏替换

// #define BSC //    这个双斜杠本身就是注释
//所以进行去掉，所以没有明显进行BSC的替换，所以进行替换的是  空的


//进行一下C语言的注释风格

//#define BMC /*
//#define EMC */     //细心的就会发现这里已经被注释掉了
//
//int main()
//{
//	BMC printf("Hello World!\n"); EMC//所以这里会直接报错
//	printf("you can see me !\n");
//	return 0;
//}

//gcc -E main.c -o main.i
//生成的时候并没有报错
//所以一定不是在预处理阶段出现错误，一定是在编译的时候出现错误

////预处理处理的结果是：
//int main()
//{
//	printf("Hello World!\n"); EMC
//	printf("you can see me !\n");
//	return 0;
//}

//剩下了个EMC，BMC用空来替换了

//结论：预处理期间：先执行去注释，在进行宏替换，并且，强烈不要这样子写注释！


// 1.4  用define 宏定义表达式


//问题：打印上述宏定义的值：printf（“SUM(x)”）；结果是什么？

//#define SUM(x) (x)+(x)
//int main()
//{
//	printf("%d\n", SUM(10));
//	printf("SUM(20)");//这个直接当成字符串输出了
//	return 0;
//}

//./a.out    进行运行

//gcc -E main.c -o main.i  //进行预处理
//vim test.i

//最终预处理出来的结果是：
//int main()
//{
//	printf("%d\n", (10) + (10));
//	printf("SUM(20)");//编译出来的这个并没有被替换掉
//	return 0;
//}



//问题："#define M 100"是宏定义吗？

//"#define M 100"
//int main()
//{
//	printf("%d\n", M);//编译的时候这里的M是不会被替换掉的
//	return 0;
//}
////这里直接报错


////改正的办法：虽然这个不报错，但是没意义
//int main()
//{
//	"#define M 100";//这就不是宏了，这是字符串常量
//	printf("%d\n", M);//编译的时候这里的M是不会被替换掉的
//	return 0;
//}

//字符串常量，要么配上指针，要么配上数组，但是这里没有任何意义

//问题：这样写，什么时候会出现问题，问题怎么修改

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

////编译出来的代码是：
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("before:%d,%d\n", x, y);
//	x = 0; y = 0;;//这里多出一个分号是因为在宏定义哪里的时候最后加了;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}


////这样写：
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
//		INIT_VAL(x, y);//这里只能进行一条有效数据
//	else
//		x = 100, y = 200;
//	return 0;
//}
////这样就会出现错误
//
////原因是什么呢：
////在这里
//
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag)
//		x = 0; y = 0;;//错误就在这里，不带花括号的话，就只能执行一条语句，但是这里出现了两条，所以就直接报错了
//	else
//		x = 100, y = 200;
//	return 0;
//}

//怎么修改成正确的：

////加上大括号，是一种解决方案
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int flag = 0;
//	scanf("%d", &flag);
//	printf("before:%d,%d\n", x, y);
//	if (flag)
//	{
//		x = 0; y = 0;;//错误就在这里，不带花括号的话，就只能执行一条语句，但是这里出现了两条，所以就直接报错了
//	}
//	else
//	{
//		x = 100, y = 200;
//	}
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}
//这样就没错了


//第二种解决方案：
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
//		{x = 0; y = 0;};//这里出现了问题，大括号外面出现了;这是不允许的
//	else
//		x = 100, y = 200;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}

//最终方案：

//#define INIT_VAL(a,b) do{a=0;b=0;}while(0)//这个是可以的
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
//		do { x = 0; y = 0; } while (0);//最后一个分号充分当了循环的结束，刚刚好
//	else
//		x = 100, y = 200;
//	printf("before:%d,%d\n", x, y);
//	return 0;
//}

//还可以继续分装：

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
//这样也是可以的

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

//为什么是do...while 呢？？
//因为do...while 有大括号，只要有大括号，就可以在里面写多条语句

//规则 1、
	//C的宏只能扩展为用大括号括起来的初始化、常量、小括号括起来的表达式、类型限定符、存储类标识符或
//do - while - zero结构
//规则2、
	//函数宏的调用不能缺少参数，如果此函数宏有参数的话。
//这是一个约束错误，但是预处理器知道并忽略此问题。函数
//宏中的每个参数的组成必须至少有一个预处理标记，否则其行为是未定义
//规则3、
	//传递给函数宏的参数不能包含看似预处理指令的标记。
//如果任何参数的行为类似预处理指令，使用宏替换代函数时的行为将是不可期的
//规则4、
	//在定义函数宏时，每个参数示例都应该以小括号括起来，除非我们做为#或##的操作数


// 1.5  宏定义中的空格
//# define //#和define 之间是有个空格，这个空格是不影响编译的


// 1.6 #undef

//宏只能在main上面定义吗？
//在一个源文件内，宏的有效范围是多少？


//问题1：下面代码能编译通过吗？

//#define M 10
//int main()
//{
//#define N 100
//	printf("%d,%d\n", M, N);
//	return 0;
//}

//结论：宏，在哪里都可以，习惯放在最上面

//问题2：

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

//这里是可以进行打印的
//宏定义与是否在函数体内，函数体外，没有任何关系

//在源文件的任何地方，宏都可以定义，与是否在函数内外，无关



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

//宏的作用范围：从定义chu处开始，往后都是有效的


//int main()
//{
//#define M 10
//	printf("before:%d\n", M);
//#undef M  //取消宏
//	printf("after:%d\n", M);//这里直接报错,未定义的M
//	return 0;
//}
//
////gcc -E main.c -o main.i
//int main()
//{
//
//	printf("before:%d\n", 10);//只有这里才是宏的合法范围
//
//	printf("after:%d\n", M);
//	return 0;
//}


////看看下面这份代码：
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
//	int z = 2*2;//并非2*3
//	printf("%d\n", z);
//	return 0;
//}


//规则 6、宏不能在块中进行#define 和 #undef
	//C语言中，尽管在代码文件中的任何位置放置#define或#undef 是合法的，但是把他们放在块中会使人误解为好像
//他们存在于作用域
//规则 8、尽量使用普通的函数，而不要使用“宏定义函数”。可以减少代码空间的占用（ROM空间）
//规则 9、预处理指令中所有宏标识符在使用前都应先定义，除了#ifdef和#ifndef指令以及defined()操作符

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
//可以运行
//宏替换在函数调用之前

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




//条件编译（本质是一个代码裁剪的工具）

//1、条件编译如何使用？
//2、为何要有条件编译？
//3、条件编译都在哪些地方使用？


//	条件编译如何使用？
		//大概就是一种代码裁剪
//1、第一种情况：
	//#ifdef 标识符
	//程序段1
	//#else
	//程序段2
	//#endif

////宏是否被定义 VS 宏是否为真
//#define DEBUG
//#define DEBUG 1    //这个宏为真
//#define DEBUG 0    //这个宏为假

//#ifdef:判定的是宏是否被定义  
	//如果是定义的话，后面的代码就会被保留 
//#ifndef：判定的是宏是否被定义
	//如果没有被定义，后面的代码就会被保留

//这三种都是宏被定义，
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


//这下定义一下宏
//
//int main()
//{
//#define DEBUG 0//宏定义与宏定义为真为假是没有任何关系的
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



//2、第二种情况：
	//#if 标识符
	//程序段1
	//#else
	//程序段2
	//#endif

//int main()
//{
//#if C//存在，就保留下面的代码
//	printf("hello C!\n");
//#else//如果不存在，就会保留下面
//	printf("Hello other!\n");
//#endif
//	return 0;
//}

//这种情况打印出来的是Hello other

//#define C
//int main()
//{
//#if C//存在，就保留下面的代码
//	printf("hello C!\n");
//#else//如果不存在，就会保留下面
//	printf("Hello other!\n");
//#endif
//	return 0;
//}

//这样子是不行的，因为仅仅只是定义了一个C，但是没有给C进行替换
//这种就是在预处理阶段就会直接报错

//#define C  1
//int main()
//{
//#if C//存在，就保留下面的代码
//	printf("Hello C!\n");
//#else//如果不存在，就会保留下面
//	printf("Hello other!\n");
//#endif
//	return 0;
//}
////当#define C 1  这种时，打印出来的是Hello C
////当#define C 0  这种时，打印出来的是Hello other



//免费版与收费版也就可以用条件编译来将这部分给屏蔽掉

//为何要有条件编译？通过裁剪代码，快速实现某种目的（版本维护（免费版、收费版），功能裁剪，跨平台性）

//可以在解决方案处理器中------>属性------>C/C++ ------> 预处理器，里面的加标识符的名字
//换句话说也就是可以在系统配置中增添宏的定义，不用在代码中加了而已
//例如：在系统配置中加一个：PRINT=1/0就可以了

//多条件：

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
////有#define VERSION，编译结果就是hello 1
////没有#define VERSION，编译结果就是hello other



//#ifdef  ---->  #if defined()
//#ifndef ---->  #if !defined()

//最终要以#endif来结束

//多条件进行级联：

//#define C
//#define CPP
//int main()
//{
//#if defined(C)&&defined(CPP)//必须同时成立才行
//	printf("Hello C && CPP!\n");
//#else
//	printf("Hello other!\n");
//#endif
//	return 0;
//}

//#define C    //只会出来Hello C！
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

////那这样呢?
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
//这个代码只会保留Hello C，这是从上往下进行编译，保留了C下面就不会再进行保留了
//这个其实就是if else的问题


//为何要有条件编译：
	//本质认识：条件编译，其实就是编译器根据实际情况，对代码进行剪裁。而这里“实际情况”
//取决于运行平台，代码本身的业务逻辑等。

//可以认为有两个好处：
	//1、可以只保留当前最需要的代码逻辑，其他去掉，可以减少生成代码的大小
	//2、可以写出跨平台的代码，让一个具体的业务，在不同平台编译的时候，可以有同样的表现



////文件包含
////这里就要进行多文件进行运行，创建一个	main.h
//
//#include "main.h"
//int main()
//{
//
//	return 0;
//}
////什么叫做头文件展开？
//	//把头文件的内容拷贝到目标源文件
//重复包含一定会报错吗？？，不会！！
//重复包含，会引起多次拷贝，主要影响编译效果！同时，也可能引起一些未定义错误，但是特别少


//#error 预处理符号 - 选学

//#define _CPP
//int main()
//{
//#ifndef _CPP
//#error 你的编译器现在不是C++类型的编译器  
//	//当没有进行CPP定义的时候，上面就会报错，简而言之就是 自定义 一个报错信息
//	//当进行了定义之后，这里就不会进行报错
//#endif
//	return 0;
//}


//#line  预处理 - 选学

////本质其实是可以定制化你的文件名称和代码行号，很少使用
//int main()
//{
//	printf("%s,%d\n", __FILE__, __LINE__);//C预定义符号，代表当前文件名和代码行号
//#line 60 "hehe.c"                     //定制完成
//	printf("%s,%d\n", __FILE__, __LINE__);//这里都是四个下划线
//	return 0;
//}

//__FILE__  //这个表示的是文件名的位置，这个是可以修改的
//__LINE__  //这个表示的是当前__LINE__行的行号，这个是可以修改的



//#pragma  预处理 - 选学

//#pragma message() 作用：可以用来进行对代码中特定的符号（比如其他宏定义）进行是否存在进行编译时消息提醒
//
//#define M
//int main()
//{
//#ifdef M
//#pragma message("M宏已经被定义了")
//	//M并没有被定义，所以什么都没有
//	//当加上#define M,将M一定义之后，就会打印出来，但是打印出来的地方不是黑框中，而是输出框中
//#endif
//	return 0;
//}
////#pragma pack()  与  内存对齐相关


//#和##运算符

//1、#运算符

//int main()
//{
//	printf("hello world!\n");
//	printf("hello world!""hello world!\n");
//	const char* str = "hello 1""hello 2\n";
//	printf(str);//这一行可以的原因就查阅相关的printf文档
//	//这个代码是可以编译过的
//
//	//这中就叫做相邻字符串具有自动连接特性
//	return 0;
//}


//#define STR(s) #s    //#的作用就是将参数符号s对应的文本内容转换成为【字符串】！
//					 //如果没有#s这个，打印出来的只有个PI：
//int main()
//{
//	printf("PI:"STR(3.1415926)"\n");//这里的数字是字符串
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


//#define TOSTRING(s) #s  //也就是让编译器帮我们弄成字符串
//int main()
//{
//	int abc = 123456;
//	char str[64] = { 0 };
//	strcpy(str, TOSTRING(abc));
//		//属于预处理过程，给变量开辟空间是运行之后的工作，所以在预处理阶段只能打印出abc
//		//所以就进行了一个简单的替换，也就是将字符串abc弄成字符串abc
//	printf("%s\n", str);//打印出来就是一个abc
//	return 0;
//}


//2、##运算符

  //将宏参和特定的符号组合形成一个全新的符号（这是符号，不是字符串）


//#define XNAME(n) student##n  //用双#将左右两个符号连接起来
//int main()
//{
//	XNAME(1);
//	XNAME(2);
//	XNAME(3);
//	XNAME(4);
//	XNAME(5);
//	XNAME(6);
//	return 0;
//}//这里会直接报错，原因如下：
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

//例如浮点数的科学计数法
//int main()
//{
//	printf("%lf\n", 3.14e2);//314.000000//base * 10 ^ 2
//	return 0;
//}

////用上面双#来连接呢？
//#define COUNT(base,n) base##e##n
//
//int main()
//{
//	printf("%lf\n", COUNT(3.14, 2));
//	return 0;
//}

//上面两个是等价的

//gcc -E main.c -o main.i

//int main()
//{
//	printf("lf\n", 3.14e2);
//	return 0;
//}