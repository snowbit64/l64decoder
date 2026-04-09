// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onReadFileFinished
// Entry Point: 00b4ee24
// Size: 504 bytes
// Signature: undefined __thiscall onReadFileFinished(CloudCallbacks * this, MetaData * param_1, uchar * param_2, uint param_3, CLOUD_ERROR param_4, void * param_5)


/* GenericSaveGameUtil::CloudCallbacks::onReadFileFinished(ICloudDevice::MetaData const&, unsigned
   char const*, unsigned int, ICloudDevice::CLOUD_ERROR, void*) */

void __thiscall
GenericSaveGameUtil::CloudCallbacks::onReadFileFinished
          (CloudCallbacks *this,MetaData *param_1,uchar *param_2,uint param_3,CLOUD_ERROR param_4,
          void *param_5)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  MetaData MVar10;
  void *local_260;
  char acStack_258 [512];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = DAT_0211c558;
  if ((s_saveGameDirectoryBase & 1) == 0) {
    uVar6 = 0x211c549;
  }
  FUN_00b4d19c(acStack_258,0x200,0x200,"%stempsavegame",uVar6);
  if (param_4 == 3) {
    uVar6 = 0xe;
LAB_00b4ef9c:
    pcVar7 = *(code **)((long)param_5 + 8);
    s_state = 0;
    if (pcVar7 == (code *)0x0) goto LAB_00b4efbc;
  }
  else {
    if (param_4 == 2) {
      pcVar9 = *(char **)(param_1 + 8);
      pcVar1 = *(char **)(param_1 + 0x10);
      MVar10 = param_1[0x18];
      CloudDeviceManager::getInstance();
      plVar5 = (long *)CloudDeviceManager::getCloudDevice();
      pcVar8 = pcVar1;
      if (pcVar1 == (char *)0x0) goto LAB_00b4ef80;
      if (pcVar9 == (char *)0x0) {
LAB_00b4ef48:
        iVar3 = (**(code **)(*plVar5 + 0x60))
                          (plVar5,s_pCloudSession,*(undefined8 *)param_1,&local_260);
        if (iVar3 == 0) {
          if (local_260 != (void *)0x0) {
            operator_delete__(local_260);
          }
          MVar10 = (MetaData)0x0;
          pcVar8 = (char *)0x0;
          pcVar9 = pcVar1;
        }
      }
      else if (MVar10 == (MetaData)0x0) {
        if (*pcVar9 == '\0') goto LAB_00b4ef48;
        if (*pcVar1 == '\0') {
          iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,s_pCloudSession,*(undefined8 *)param_1);
          MVar10 = (MetaData)0x0;
          pcVar8 = (char *)0x0;
          if (iVar3 != 0) {
            pcVar8 = pcVar1;
          }
        }
        else {
          MVar10 = (MetaData)0x0;
        }
      }
      else {
        if ((*pcVar1 == '\0') || (*pcVar9 == '\0')) goto LAB_00b4ef48;
        MVar10 = (MetaData)0x1;
      }
LAB_00b4ef80:
                    /* WARNING: Load size is inaccurate */
      setSaveGameData(*param_5,pcVar9,pcVar8,MVar10 != (MetaData)0x0);
      uVar6 = 0xc;
      goto LAB_00b4ef9c;
    }
    if ((param_4 != 0) ||
       (uVar4 = SaveGameArchiveUtil::extractSaveGameArchive(acStack_258,param_2,param_3),
       (uVar4 & 1) == 0)) {
      uVar6 = 9;
      goto LAB_00b4ef9c;
    }
                    /* WARNING: Load size is inaccurate */
    setSaveGameData(*param_5,*(char **)(param_1 + 8),(char *)0x0,false);
    pcVar7 = *(code **)((long)param_5 + 8);
    s_state = 0;
    if (pcVar7 == (code *)0x0) goto LAB_00b4efbc;
    uVar6 = 0;
    s_state = 3;
  }
  (*pcVar7)(*(undefined8 *)((long)param_5 + 0x10),uVar6,acStack_258);
LAB_00b4efbc:
  operator_delete(param_5);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


