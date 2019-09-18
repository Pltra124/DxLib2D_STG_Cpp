/*--+----1----+----2----+----3----+----4----+----5-----+----6----+----7----+----8----+----9----+---*/
/* Singleton.hpp   																				   */
/* �C���X�^���X������������Ă��Ȃ��e���v���[�g�N���X											   */
/*���ӁF�N���X�e���v���[�g�́A�N���X�ł͂Ȃ��̂ŁA���̉����Ȃ���΂����Ȃ�						�@ */
/*�Q�l�Fhttps://qiita.com/narumi_/items/b205e59e7fc81695f380 									   */

#pragma once

//########## �w�b�_�[�t�@�C���ǂݍ��� ##########
#include <stdio.h>

//########## �N���X�̒�` ##########
//�V���O���g���̃e���v���[�g�N���X
template<class Temp> class Singleton_T
{
public:

	//�C���X�^���X�𓾂�
	//�߂�l�F�f�t�H���g�R���X�g���N�^�ō쐬�����C���X�^���X
	static inline Singleton_T& GetInstance()
	{
		static Temp Instance;	//�C���X�^���X
		return Instance;		//�C���X�^���X���Q�Ɠn���ŕԂ�
	}

protected:

	Singleton_T();				//�B���R���X�g���N�^
	virtual ~Singleton_T();		//�B���f�X�g���N�^

private:
	void operator=(const Singleton_T& obj) {}	// ������Z�q�֎~
												//const Singleton_T&�́A�R���X�g���N�^���쐬
	Singleton_T(const Singleton &obj) {}		// �R�s�[�R���X�g���N�^�֎~

};