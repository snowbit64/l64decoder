// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f235c4
// Entry Point: 00f235c4
// Size: 156 bytes
// Signature: undefined FUN_00f235c4(void)


void FUN_00f235c4(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
                 int param_6)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  uVar2 = 0xffffffff;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_4 < 3) && (0 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) == 3) {
      dVar3 = frexp(*param_3,&local_2c);
      uVar2 = 2;
      *param_2 = dVar3;
      *(undefined4 *)((long)param_2 + 0xc) = 3;
      *(undefined4 *)((long)param_2 + 0x1c) = 3;
      param_2[2] = (double)(long)local_2c;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


