// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f27050
// Entry Point: 00f27050
// Size: 324 bytes
// Signature: undefined FUN_00f27050(void)


void FUN_00f27050(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)((long)param_4 + 0xc) == 3) {
LAB_00f270bc:
    if (*(int *)((long)param_2 + 0xc) != 3) {
      if ((*(int *)((long)param_2 + 0xc) != 5) ||
         (iVar2 = FUN_00f11180(*param_2 + 0x18,&local_50), iVar2 == 0)) goto LAB_00f27168;
      *param_2 = local_50;
      *(undefined4 *)((long)param_2 + 0xc) = 3;
    }
    if (*(int *)((long)param_3 + 0xc) != 3) {
      if ((*(int *)((long)param_3 + 0xc) != 5) ||
         (iVar2 = FUN_00f11180(*param_3 + 0x18,&local_50), iVar2 == 0)) goto LAB_00f2717c;
      *param_3 = local_50;
      *(undefined4 *)((long)param_3 + 0xc) = 3;
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if ((*(int *)((long)param_4 + 0xc) == 5) &&
       (iVar2 = FUN_00f11180(*param_4 + 0x18,&local_50), iVar2 != 0)) {
      *param_4 = local_50;
      *(undefined4 *)((long)param_4 + 0xc) = 3;
      goto LAB_00f270bc;
    }
    FUN_00f09c00(param_1,param_4,"initial value");
LAB_00f27168:
    FUN_00f09c00(param_1,param_2,"limit");
LAB_00f2717c:
    FUN_00f09c00(param_1,param_3,&DAT_004ec50e);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


