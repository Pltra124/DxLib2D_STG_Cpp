/*--+----1----+----2----+----3----+----4----+----5-----+----6----+----7----+----8----+----9----+---*/
/* Singleton.cpp   																				   */
/* �C���X�^���X������������Ă��Ȃ��N���X														   */
/* �Q�l�Fhttps://qiita.com/narumi_/items/b205e59e7fc81695f380									   */

//########## �w�b�_�[�t�@�C���ǂݍ��� ##########
#include "Singleton.hpp"

//########## �N���X�̒�` ##########

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