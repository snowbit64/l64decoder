// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_GoogleCloudDevice_nativeHandleUploadError
// Entry Point: 00b2e6f4
// Size: 416 bytes
// Signature: undefined Java_com_giantssoftware_GoogleCloudDevice_nativeHandleUploadError(void)


void Java_com_giantssoftware_GoogleCloudDevice_nativeHandleUploadError
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               char param_6,undefined4 param_7,int param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  }
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x548))(param_1,param_5,0);
  }
  local_70 = param_6 != '\0';
  lVar1 = *(long *)(s_pAndroidCloudDevice + 0x10) - *(long *)(s_pAndroidCloudDevice + 8);
  local_88 = uVar3;
  local_80 = uVar4;
  uStack_78 = uVar5;
  if (lVar1 != 0) {
    uVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(s_pAndroidCloudDevice + 8) + uVar7 * 8);
      if (*(int *)(lVar8 + 0x20) == param_8) {
        plVar6 = *(long **)(lVar8 + 0x18);
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_88,param_7);
        break;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(lVar1 >> 3));
  }
  (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar3);
  if (param_4 != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_4,uVar4);
  }
  if (param_5 != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_5,uVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


