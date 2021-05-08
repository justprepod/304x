#ifndef __LIST__
#define __LIST__

typedef struct {
	void	*data;
	void	*next;
} TListItem;

typedef void *TFunc(void*);

//������ ������
TListItem *list_create();

//������ � ������ ����� ������� � ��������� � ����� ������
TListItem *list_append(TListItem *head, void *data);

//������ � ������ ����� ������� � ��������� ��� ����� ���������
TListItem *list_insert(TListItem *item, void *data);

//��������������� ������� ������, �������� � ������� �������� ������� f
void list_traverse(TListItem *head, TFunc f);

//������� �� ������ ������
void list_free(TListItem **head);

//���� � ������ ������� �� ��������� needle, ���������� ��������� �� ������ ���������, ���� NULL
TListItem *list_search(TListItem *head, int needle);

//������� �� ������ ������� item
void *list_delete(TListItem *head, TListItem *item);

#endif // !__LIST__

