#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    //������ umap ����
    unordered_map<string, string> umap;
    //�� umap ��������¼�ֵ��
    umap.emplace("Python�̳�", "http://c.biancheng.net/python/");
    umap.emplace("Java�̳�", "http://c.biancheng.net/java/");
    umap.emplace("Linux�̳�", "http://c.biancheng.net/linux/");

	for(auto iter = umap.begin(); iter != umap.end(); iter ++)
		if(umap.find("Python�̳�")) cout << "Yes, found!" << endl;

    //��� umap �洢��ֵ�Ե�����
    cout << "umap size = " << umap.size() << endl;
    //ʹ�õ�������� umap �����洢�����м�ֵ��
    for (auto iter = umap.begin(); iter != umap.end(); ++iter) {
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}
