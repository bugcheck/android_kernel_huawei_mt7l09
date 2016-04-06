/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : amrwb_interface.h
  �� �� ��   : ����
  ��    ��   : л���� 58441
  ��������   : 2011��11��23��
  ����޸�   :
  ��������   : amrwb_interface.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2011��11��23��
    ��    ��   : л���� 58441
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef __AMRWB_INTERFACE_H__
#define __AMRWB_INTERFACE_H__

#include "codec_typedefine.h"
#include "codec_com_codec.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define AMRWB_MAX_SERIAL_SIZE           (477)                                   /*�����AMR��������󳤶ȣ���bitΪ��λ*/
#define AMRWB_SID_FIRST_STUDY_FRM_THD   (9)                                     /*SID_FIRST����������������Ҫѧϰ������֡��*/

#define AMRWB_GetSidFirstFlag()         (g_uhwAmrwbSidFirstFlag)                /*��ȡȫ�ֱ���AMRһ��ͨ���������Ƿ��յ���SID_FIRST֡��־*/
#define AMRWB_GetSidFirstFlagPtr()      (&g_uhwAmrwbSidFirstFlag)               /*��ȡȫ�ֱ���AMRһ��ͨ���������Ƿ��յ���SID_FIRST֡��־ָ��*/
#define AMRWB_GetEncObjPtr()            (g_pstAmrwbEncObj)                      /*��ȡȫ�ֱ���AMR����״̬�ṹ��ָ��*/
#define AMRWB_GetDecObjPtr()            (g_pstAmrwbDecObj)                      /*��ȡȫ�ֱ���AMR����״̬�ṹ��ָ��*/
#define AMRWB_GetPtrOfEncObjPtr()       (&g_pstAmrwbEncObj)                     /*��ȡȫ�ֱ���AMR����״̬�ṹ��ָ���ָ��*/
#define AMRWB_GetPtrOfDecObjPtr()       (&g_pstAmrwbDecObj)                     /*��ȡȫ�ֱ���AMR����״̬�ṹ��ָ���ָ��*/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/
/*****************************************************************************
 ʵ������  : AMRWB_ENCODED_SERIAL_STRU
 ��������  : ���������������нṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwFrameType;                           /* ����֡���� */
    VOS_INT16                           ashwEncSerial[AMRWB_MAX_SERIAL_SIZE];   /* ������������,23.85Kʱ���Ϊ477���� */
    CODEC_AMRWB_MODE_ENUM_UINT16    enAmrMode;                              /* ��ǰ���ʣ�AMR-WB��0-8(SPEECH)��9(NO_DATA) */
    VOS_INT16                           ashwReserved[3];                        /* ������δʹ�� */
}AMRWB_ENCODED_SERIAL_STRU;

/*****************************************************************************
 ʵ������  : AMRWB_ENCODED_SID_FRAME_STRU
 ��������  : AMR SID֡��ʽ�ṹ��
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ashwSidData1[2];                        /*SID֡����,��35����(32+3)*/
    VOS_UINT16                          shwModeIndication:4;                    /*����ģʽָʾ��0-8*/
    VOS_UINT16                          shwSti:1;                               /*SID��־��0��ʾSID_FIRST��1��ʾSID_UPDATE*/
    VOS_UINT16                          shwSidData2:3;                          /*SID֡����,��35����(32+3)*/
    VOS_INT16                           shwReserved;                            /*  */
}AMRWB_ENCODED_SID_FRAME_STRU;

/*****************************************************************************
  7 UNION����
*****************************************************************************/


/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/
extern VOS_UINT16                       g_uhwAmrwbSidFirstFlag;                 /*һ��ͨ�����յ���SID_FIRST��ı��*/


/*****************************************************************************
  10 ��������
*****************************************************************************/

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* end of amrwb_interface.h */