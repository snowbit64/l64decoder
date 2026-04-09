// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_GoogleCloudDevice_nativeCallbackOnReadFileFinished
// Entry Point: 00b2e4a0
// Size: 596 bytes
// Signature: undefined Java_com_giantssoftware_GoogleCloudDevice_nativeCallbackOnReadFileFinished(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void Java_com_giantssoftware_GoogleCloudDevice_nativeCallbackOnReadFileFinished
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               char param_6,long param_7,undefined4 param_8,int param_9)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  }
  if (param_5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*param_1 + 0x548))(param_1,param_5,0);
  }
  local_70 = param_6 != '\0';
  local_88 = uVar6;
  uStack_80 = uVar7;
  local_78 = uVar8;
  if (param_7 == 0) {
    uVar9 = 0;
    uVar5 = 0;
  }
  else {
    uVar9 = (**(code **)(*param_1 + 0x5c0))(param_1,param_7,0);
    uVar5 = (**(code **)(*param_1 + 0x558))(param_1,param_7);
  }
  lVar4 = s_pAndroidCloudDevice;
  lVar1 = *(long *)(s_pAndroidCloudDevice + 0x20);
  lVar2 = *(long *)(s_pAndroidCloudDevice + 0x28) - lVar1;
  if (lVar2 != 0) {
    uVar10 = 0;
    do {
      piVar11 = *(int **)(lVar1 + uVar10 * 8);
      if (*piVar11 == param_9) {
        __dest = (void *)(lVar1 + uVar10 * 8);
        __n = *(long *)(s_pAndroidCloudDevice + 0x28) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(lVar4 + 0x28) = (long)__dest + __n;
        (**(code **)(**(long **)(*(long *)(piVar11 + 2) + 0x18) + 0x18))
                  (*(long **)(*(long *)(piVar11 + 2) + 0x18),&local_88,uVar9,uVar5,param_8,
                   *(undefined8 *)(piVar11 + 4));
        operator_delete(piVar11);
        break;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar2 >> 3));
  }
  (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar6);
  if (param_4 != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_4,uVar7);
  }
  if (param_5 != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_5,uVar8);
  }
  if (param_7 != 0) {
    (**(code **)(*param_1 + 0x600))(param_1,param_7,uVar9,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


