// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_start_compress
// Entry Point: 00d5d5f0
// Size: 176 bytes
// Signature: undefined jpeg_start_compress(void)


void jpeg_start_compress(long *param_1,char param_2)

{
  undefined4 uVar1;
  code **ppcVar2;
  long lVar3;
  
  if (*(int *)((long)param_1 + 0x24) != 100) {
    lVar3 = *param_1;
    *(int *)(lVar3 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x15;
    (**ppcVar2)(param_1);
  }
  if (param_2 != '\0') {
    jpeg_suppress_tables(param_1,0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  jinit_compress_master(param_1);
  (**(code **)param_1[0x3c])(param_1);
  *(undefined4 *)(param_1 + 0x29) = 0;
  uVar1 = 0x65;
  if (*(char *)(param_1 + 0x24) != '\0') {
    uVar1 = 0x66;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  return;
}


