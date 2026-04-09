// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7bb90
// Entry Point: 00d7bb90
// Size: 300 bytes
// Signature: undefined FUN_00d7bb90(void)


void FUN_00d7bb90(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                 uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar6 = *(long *)(param_1 + 0x260);
  if (*(char *)(lVar6 + 0x48) == '\0') {
    uVar2 = *(uint *)(lVar6 + 0x50);
    uVar3 = *param_6;
    if (1 < uVar2) {
      uVar2 = 2;
    }
    local_58 = *(undefined8 *)(param_5 + (ulong)uVar3 * 8);
    uVar1 = param_7 - uVar3;
    if (uVar2 <= param_7 - uVar3) {
      uVar1 = uVar2;
    }
    if (uVar1 < 2) {
      local_50 = *(undefined8 *)(lVar6 + 0x40);
      *(undefined *)(lVar6 + 0x48) = 1;
    }
    else {
      local_50 = *(undefined8 *)(param_5 + (ulong)(uVar3 + 1) * 8);
    }
    (**(code **)(lVar6 + 0x18))(param_1,param_2,*param_3,&local_58);
    cVar4 = *(char *)(lVar6 + 0x48);
    *param_6 = *param_6 + uVar1;
    *(uint *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) - uVar1;
    if (cVar4 != '\0') goto LAB_00d7bc90;
  }
  else {
    jcopy_sample_rows(lVar6 + 0x40,0,param_5 + (ulong)*param_6 * 8,0,1,*(undefined4 *)(lVar6 + 0x4c)
                     );
    *(undefined *)(lVar6 + 0x48) = 0;
    *param_6 = *param_6 + 1;
    *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + -1;
  }
  *param_3 = *param_3 + 1;
LAB_00d7bc90:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


