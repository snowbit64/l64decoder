// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d31ce8
// Entry Point: 00d31ce8
// Size: 236 bytes
// Signature: undefined FUN_00d31ce8(void)


void FUN_00d31ce8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)(param_1 + 0x18);
  local_50 = param_3;
  if (*plVar6 != 0) goto LAB_00d31d38;
  do {
    cVar2 = FUN_00d328e8(param_1);
    if (cVar2 == '\0') goto LAB_00d31da8;
LAB_00d31d38:
    uVar3 = (**(code **)(param_2 + 0x70))
                      (param_2,&local_50,param_4,plVar6,*(undefined8 *)(param_1 + 0x10));
  } while (1 < uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_00d31da8:
    uVar4 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x18);
    if (puVar5 == *(undefined **)(param_1 + 0x10)) {
      cVar2 = FUN_00d328e8(param_1);
      if (cVar2 == '\0') goto LAB_00d31da8;
      puVar5 = (undefined *)*plVar6;
    }
    *(undefined **)(param_1 + 0x18) = puVar5 + 1;
    *puVar5 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


