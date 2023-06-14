#define _CRT_SECURE_NO_WARNINGS 1
 int g_val = 2022;//全局变量

 /*    注意：static修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c)内部可以使用
 其它源文件不能使用！！！  
 全局变量在其它源文件内部可以被使用，是因为全局变量具有外部链接属性
 但是被static修饰后，就变成内部链接属性
 其它源文件就不能链接到这个静态的全局变量了         */

 /*     static修饰函数，同样的道理             */
 int Add(int x, int y)
 {
	 return x + y;
 }