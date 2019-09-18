/*--+----1----+----2----+----3----+----4----+----5-----+----6----+----7----+----8----+----9----+---*/
/* fps.hpp     																					   */
/* FPS(Flame Per Second)�N���X																	   */
/* ��̃C���X�^���X�݂̂ɂ���																	   */

#pragma once

//########## �w�b�_�[�t�@�C���ǂݍ��� ##########
#include "DxLib.h"
#include "Singleton_T.hpp"

//########## �N���X�̒�` ##########
class FPS
{
private:
	int			value;					//FPS�l
	double		drawValue;				//Draw����Ƃ���FPS�l
	DWORD		calcStartTime;			//0�t���[���ڂ̊J�n����
	DWORD		calcEndTime;			//�ݒ肵���t���[���̏I������
	DWORD		flameCount;				//�t���[���̃J�E���g
	double		calcAverage; 			//FPS���v�Z���邽�߂̕��σT���v����

public:

	//�R���X�g���N�^
	//���@���Fint�@�FFPS�l
	FPS(int);

	//�w�肵��FPS�ɂȂ�悤�ɑ҂�
	VOID Wait(VOID);

	//��ʍX�V�̎������擾����
	VOID Update(VOID);

	//FPS�̒l��\������
	//���@���Fint�@�F�l��\������X�ʒu
	//���@���Fint�@�F�l��\������Y�ʒu
	VOID Draw(int, int);

private:

	//�f�X�g���N�^
	virtual ~FPS();
};

/*************************************************************************************************/

class FPS_T : public Singleton_T< FPS_T>
{
private:
	int			value;					//FPS�l
	double		drawValue;				//Draw����Ƃ���FPS�l
	DWORD		calcStartTime;			//0�t���[���ڂ̊J�n����
	DWORD		calcEndTime;			//�ݒ肵���t���[���̏I������
	DWORD		flameCount;				//�t���[���̃J�E���g
	double		calcAverage; 			//FPS���v�Z���邽�߂̕��σT���v����

public:

	friend class Singleton_T<FPS_T>;	//Singleton_T�ł̃C���X�^���X�쐬�͋���

	//�w�肵��FPS�ɂȂ�悤�ɑ҂�
	VOID Wait(VOID);

	//��ʍX�V�̎������擾����
	VOID Update(VOID);

	//FPS�̒l��\������
	//���@���Fint�@�F�l��\������X�ʒu
	//���@���Fint�@�F�l��\������Y�ʒu
	VOID Draw(int, int);

protected:

	//�B���R���X�g���N�^
	//���@���Fint�@�FFPS�l
	FPS_T(int);			

	virtual ~FPS_T();	//�B���f�X�g���N�^

};