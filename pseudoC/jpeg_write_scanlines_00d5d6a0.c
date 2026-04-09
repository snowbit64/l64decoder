// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_write_scanlines
// Entry Point: 00d5d6a0
// Size: 320 bytes
// Signature: undefined jpeg_write_scanlines(void)


void jpeg_write_scanlines(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  code **ppcVar3;
  long lVar4;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)((long)param_1 + 0x24) == 0x65) {
    if (*(uint *)((long)param_1 + 0x34) <= *(uint *)(param_1 + 0x29)) {
LAB_00d5d7b4:
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + 0x28) = 0x7e;
      (**(code **)(lVar4 + 8))(param_1,0xffffffff);
      ppcVar3 = (code **)param_1[2];
      goto joined_r0x00d5d6ec;
    }
  }
  else {
    lVar4 = *param_1;
    *(int *)(lVar4 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x15;
    (**ppcVar3)(param_1);
    if (*(uint *)((long)param_1 + 0x34) <= *(uint *)(param_1 + 0x29)) goto LAB_00d5d7b4;
  }
  ppcVar3 = (code **)param_1[2];
joined_r0x00d5d6ec:
  if (ppcVar3 != (code **)0x0) {
    uVar1 = *(uint *)((long)param_1 + 0x34);
    ppcVar3[1] = (code *)(ulong)*(uint *)(param_1 + 0x29);
    ppcVar3[2] = (code *)(ulong)uVar1;
    (**ppcVar3)(param_1);
  }
  if (*(char *)(param_1[0x3c] + 0x18) != '\0') {
    (**(code **)(param_1[0x3c] + 8))(param_1);
  }
  local_3c = 0;
  uVar1 = *(int *)((long)param_1 + 0x34) - *(int *)(param_1 + 0x29);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  (**(code **)(param_1[0x3d] + 8))(param_1,param_2,&local_3c,uVar1);
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + local_3c;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


