// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_write_marker
// Entry Point: 00d5d440
// Size: 160 bytes
// Signature: undefined jpeg_write_marker(void)


void jpeg_write_marker(long *param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  code **ppcVar1;
  long lVar2;
  code *pcVar3;
  
  if ((*(int *)(param_1 + 0x29) != 0) || (2 < *(int *)((long)param_1 + 0x24) - 0x65U)) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    (**ppcVar1)(param_1);
  }
  (**(code **)(param_1[0x40] + 0x28))(param_1,param_2,param_4);
  if (param_4 != 0) {
    pcVar3 = *(code **)(param_1[0x40] + 0x30);
    do {
      param_4 = param_4 + -1;
      (*pcVar3)(param_1,*param_3);
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}


