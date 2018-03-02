#ifndef __AEI_UTILES_H__
#define __AEI_UTILES_H__
#include "mdm_object.h"
int AEI_get_value_by_file(char *file, int size, char *value);
UINT16 AEI_get_interface_mtu(char *ifname);
void AEI_createFile(char *filename, char *content);
int AEI_removeFile(char *filename);
int AEI_isFileExist(char *filename);
int AEI_get_mac_addr(char *ifname, char *mac);
int AEI_convert_space(char *src,char *dst);
int AEI_convert_spec_chars(char *src,char *dst);
char* AEI_SpeciCharEncode(char *s, int len);
pid_t* find_pid_by_name( char* pidName);
int AEI_GetPid(char * command);
#if defined(AEI_CONFIG_JFFS) && defined(SUPPORT_GPL_UNDEFINED)
CmsRet AEI_writeDualPartition(char *imagePtr, UINT32 imageLen, void *msgHandle, int partition);
#endif
#if defined(SUPPORT_GPL_UNDEFINED)
int AEI_save_syslog();
#endif
#endif
