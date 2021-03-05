#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <assert.h>
char* my_strcpy(char* dest ,const char* src){
	char* ret = dest;
	assert(dest != NULL);//断言，防止用户输入NULL
	assert(src != NULL);//断言，防止用户输入NULL
	//把src指向的字符串拷贝到dest指向的空间，包括'\0'字符
	while(*dest++ = *src++){
		;
	}
	return ret;
}
int main(){
	//字符串拷贝
	char arr1[] = "########";
	char arr2[] = "my";
	printf("%s\n",my_strcpy(arr1,arr2));
	return 0;
}