// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onGetMetaDataFinished
// Entry Point: 00b4eaf8
// Size: 564 bytes
// Signature: undefined __thiscall onGetMetaDataFinished(CloudCallbacks * this, vector * param_1, CLOUD_ERROR param_2, void * param_3)


/* GenericSaveGameUtil::CloudCallbacks::onGetMetaDataFinished(std::__ndk1::vector<ICloudDevice::MetaData,
   std::__ndk1::allocator<ICloudDevice::MetaData> > const&, ICloudDevice::CLOUD_ERROR, void*) */

void __thiscall
GenericSaveGameUtil::CloudCallbacks::onGetMetaDataFinished
          (CloudCallbacks *this,vector *param_1,CLOUD_ERROR param_2,void *param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  uint local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (s_state == 1) {
    CloudDeviceManager::getInstance();
    plVar4 = (long *)CloudDeviceManager::getCloudDevice();
    lVar8 = *(long *)param_1;
    if (*(long *)(param_1 + 8) != lVar8) {
      uVar12 = 0;
      do {
        lVar7 = *(long *)(lVar8 + uVar12 * 0x20);
        if (lVar7 != 0) {
          lVar8 = lVar8 + uVar12 * 0x20;
          pcVar11 = *(char **)(lVar8 + 8);
          pcVar10 = *(char **)(lVar8 + 0x10);
          cVar9 = *(char *)(lVar8 + 0x18);
          if (pcVar10 == (char *)0x0) {
joined_r0x00b4ebf8:
            if (pcVar11 != (char *)0x0) {
              cVar1 = *pcVar11;
joined_r0x00b4ebbc:
              if (cVar1 != '\0') goto LAB_00b4ec04;
            }
          }
          else {
            if (pcVar11 == (char *)0x0) {
LAB_00b4ebdc:
              iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,s_pCloudSession,lVar7,&local_70);
              if (iVar3 == 0) {
                if ((void *)CONCAT44(uStack_6c,local_70) != (void *)0x0) {
                  operator_delete__((void *)CONCAT44(uStack_6c,local_70));
                }
                cVar9 = '\0';
                pcVar11 = pcVar10;
                pcVar10 = (char *)0x0;
              }
              goto joined_r0x00b4ebf8;
            }
            if (cVar9 != '\0') {
              if ((*pcVar10 == '\0') || (*pcVar11 == '\0')) goto LAB_00b4ebdc;
              cVar9 = '\x01';
              cVar1 = *pcVar11;
              goto joined_r0x00b4ebbc;
            }
            if (*pcVar11 == '\0') goto LAB_00b4ebdc;
            if (*pcVar10 == '\0') {
              iVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,s_pCloudSession);
              cVar9 = '\0';
              pcVar5 = (char *)0x0;
              if (iVar3 != 0) {
                pcVar5 = pcVar10;
              }
              cVar1 = *pcVar11;
              pcVar10 = pcVar5;
              goto joined_r0x00b4ebbc;
            }
            cVar9 = '\0';
            if (*pcVar11 == '\0') goto LAB_00b4eb6c;
LAB_00b4ec04:
            pcVar5 = strrchr(*(char **)(*(long *)param_1 + uVar12 * 0x20),0x5f);
            if ((pcVar5 != (char *)0x0) && (iVar3 = sscanf(pcVar5 + 1,"%u",&local_70), iVar3 == 1))
            {
              setSaveGameData(local_70,pcVar11,pcVar10,cVar9 != '\0');
            }
          }
        }
LAB_00b4eb6c:
        lVar8 = *(long *)param_1;
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar12 < (ulong)(*(long *)(param_1 + 8) - lVar8 >> 5));
    }
    if (param_2 < 4) {
      uVar6 = *(undefined4 *)(&DAT_004c47d0 + (long)(int)param_2 * 4);
    }
    else {
      uVar6 = 5;
    }
    s_pGetMetaDataOperation = 0;
    s_state = 0;
    if (*(code **)((long)param_3 + 8) != (code *)0x0) {
      (**(code **)((long)param_3 + 8))(*(undefined8 *)((long)param_3 + 0x10),uVar6,0);
    }
  }
  else if (param_3 == (void *)0x0) goto LAB_00b4ecf8;
  operator_delete(param_3);
LAB_00b4ecf8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


