/*--+----1----+----2----+----3----+----4----+----5-----+----6----+----7----+----8----+----9----+---*/
/* Singleton.h     																				   */
/* �C���X�^���X������������Ă��Ȃ��N���X														   */
/* �Q�l�Fhttps://qiita.com/narumi_/items/b205e59e7fc81695f380									   */

#pragma once

//########## �w�b�_�[�t�@�C���ǂݍ��� ##########
#include <stdio.h>

//########## �N���X�̒�` ##########
//�V���O���g���N���X
class Singleton
{
public:
	
	//�C���X�^���X�𓾂�
	//�߂�l�F�V���O���g���N���X�̃|�C���^
	static Singleton *GetInstance()
	{
		return p_Instance;	//�C���X�^���X�̃|�C���^��Ԃ�
	}

	static void Create();	//�C���X�^���X����
	static void Destroy();	//�C���X�^���X�p��

protected:
	static Singleton *p_Instance;	//�C���X�^���X

	Singleton();			//�B���R���X�g���N�^
	virtual ~Singleton();	//�B���f�X�g���N�^
};