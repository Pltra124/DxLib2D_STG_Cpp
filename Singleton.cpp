#include "Singleton.h"

// �B��̃C���X�^���X��NULL�ŏ�����
Singleton *Singleton::p_Instance = NULL;

// �C���X�^���X����
void Singleton::Create()
{
	if (p_Instance == NULL)
	{
		p_Instance = new Singleton;
	}
}

// �C���X�^���X�j��
void Singleton::Destroy()
{
	delete p_Instance;
	p_Instance = NULL;
}

// �R���X�g���N�^
Singleton::Singleton()
{
}

// �f�X�g���N�^
Singleton::~Singleton()
{
}