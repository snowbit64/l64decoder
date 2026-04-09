// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d378e4
// Entry Point: 00d378e4
// Size: 304 bytes
// Signature: undefined FUN_00d378e4(void)


void FUN_00d378e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x220) = param_2;
  iVar2 = (**(code **)(*(long *)(param_1 + 0x120) + 8))();
  *(undefined8 *)(param_1 + 0x228) = param_2;
  if (iVar2 == -2) {
    if (*(char *)(param_1 + 0x38c) != '\0') {
      uVar3 = 6;
      goto LAB_00d379e8;
    }
  }
  else {
    if (iVar2 != -1) {
      if (iVar2 == 0xc) {
        uVar3 = FUN_00d31770(param_1,1,param_2);
        if ((int)uVar3 != 0) goto LAB_00d379e8;
        if (*(int *)(param_1 + 0x388) == 2) {
          uVar3 = 0x23;
          goto LAB_00d379e8;
        }
        if (*(int *)(param_1 + 0x388) == 3) {
          uVar3 = 0;
          *param_4 = param_2;
          goto LAB_00d379e8;
        }
      }
      *(undefined4 *)(param_1 + 0x24c) = 1;
      *(code **)(param_1 + 0x210) = FUN_00d36e54;
      uVar3 = FUN_00d36e54(param_1,param_2,param_3,param_4);
      goto LAB_00d379e8;
    }
    if (*(char *)(param_1 + 0x38c) != '\0') {
      uVar3 = 5;
      goto LAB_00d379e8;
    }
  }
  uVar3 = 0;
  *param_4 = param_2;
LAB_00d379e8:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


