#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <assert.h>
char* my_strcpy(char* dest ,const char* src){
	char* ret = dest;
	assert(dest != NULL);//���ԣ���ֹ�û�����NULL
	assert(src != NULL);//���ԣ���ֹ�û�����NULL
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while(*dest++ = *src++){
		;
	}
	return ret;
}
int main(){
	//�ַ�������
	char arr1[] = "########";
	char arr2[] = "my";
	printf("%s\n",my_strcpy(arr1,arr2));
	return 0;
}