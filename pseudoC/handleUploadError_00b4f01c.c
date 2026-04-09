// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleUploadError
// Entry Point: 00b4f01c
// Size: 740 bytes
// Signature: undefined __thiscall handleUploadError(CloudCallbacks * this, MetaData * param_1, CLOUD_ERROR param_2)


/* GenericSaveGameUtil::CloudCallbacks::handleUploadError(ICloudDevice::MetaData const&,
   ICloudDevice::CLOUD_ERROR) */

void __thiscall
GenericSaveGameUtil::CloudCallbacks::handleUploadError
          (CloudCallbacks *this,MetaData *param_1,CLOUD_ERROR param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  void *__src;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  void *__dest;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *pcVar13;
  size_t __n;
  MetaData MVar14;
  uint local_7c;
  void *local_78 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar7 = strrchr(*(char **)param_1,0x5f);
  if ((((pcVar7 == (char *)0x0) || (iVar6 = sscanf(pcVar7 + 1,"%u",&local_7c), iVar6 != 1)) ||
      ((param_2 & 0xfffffffe) != 2)) || (s_cloudErrorPTData._24_8_ == 0)) goto LAB_00b4f28c;
  pcVar12 = *(char **)(param_1 + 0x10);
  pcVar7 = pcVar12;
  if ((param_2 == 2) && (s_state != 1)) {
    pcVar13 = *(char **)(param_1 + 8);
    MVar14 = param_1[0x18];
    CloudDeviceManager::getInstance();
    plVar8 = (long *)CloudDeviceManager::getCloudDevice();
    if (pcVar12 == (char *)0x0) goto LAB_00b4f150;
    if (pcVar13 == (char *)0x0) {
LAB_00b4f100:
      iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8,s_pCloudSession,*(undefined8 *)param_1,local_78);
      if (iVar6 == 0) {
        pcVar13 = pcVar12;
        if (local_78[0] == (void *)0x0) {
          MVar14 = (MetaData)0x0;
          pcVar7 = (char *)0x0;
        }
        else {
          operator_delete__(local_78[0]);
          MVar14 = (MetaData)0x0;
          pcVar7 = (char *)0x0;
        }
      }
    }
    else if (MVar14 == (MetaData)0x0) {
      if (*pcVar13 == '\0') goto LAB_00b4f100;
      if (*pcVar12 == '\0') {
        iVar6 = (**(code **)(*plVar8 + 0x58))(plVar8,s_pCloudSession,*(undefined8 *)param_1);
        MVar14 = (MetaData)0x0;
        pcVar7 = (char *)0x0;
        if (iVar6 != 0) {
          pcVar7 = pcVar12;
        }
      }
      else {
        MVar14 = (MetaData)0x0;
      }
    }
    else {
      if ((*pcVar12 == '\0') || (*pcVar13 == '\0')) goto LAB_00b4f100;
      MVar14 = (MetaData)0x1;
    }
LAB_00b4f150:
    setSaveGameData(local_7c,pcVar13,pcVar7,MVar14 != (MetaData)0x0);
  }
  __src = s_uploadErrors;
  if ((param_2 != 2) || (pcVar7 != (char *)0x0)) {
    if (s_state == 0) {
      uVar9 = 0xc;
      if (param_2 != 2) {
        uVar9 = 7;
      }
      uVar4 = 0xe;
      if (param_2 != 3) {
        uVar4 = uVar9;
      }
      FUN_00b4d19c(local_78,0x10,0x10,&DAT_004cf2ba,local_7c);
      (*(code *)s_cloudErrorPTData._24_8_)(uVar4,local_78);
    }
    else if (DAT_0211c5e0 < DAT_0211c5e8) {
      *DAT_0211c5e0 = CONCAT44(local_7c,param_2);
      DAT_0211c5e0 = DAT_0211c5e0 + 1;
    }
    else {
      __n = (long)DAT_0211c5e0 - (long)s_uploadErrors;
      uVar1 = ((long)__n >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar10 = (long)DAT_0211c5e8 - (long)s_uploadErrors >> 2;
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)DAT_0211c5e8 - (long)s_uploadErrors)) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 3);
      }
      puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
      puVar3 = (undefined8 *)((long)__dest + uVar1 * 8);
      puVar11 = puVar2 + 1;
      *puVar2 = CONCAT44(local_7c,param_2);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      s_uploadErrors = __dest;
      DAT_0211c5e0 = puVar11;
      DAT_0211c5e8 = puVar3;
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
  }
LAB_00b4f28c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


