// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_CreateCompress
// Entry Point: 00d5d134
// Size: 272 bytes
// Signature: undefined jpeg_CreateCompress(void)


void jpeg_CreateCompress(long *param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    *(undefined8 *)(*param_1 + 0x28) = 0x5a0000000d;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x238) {
    *(undefined8 *)(*param_1 + 0x28) = 0x23800000016;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  memset(param_1,0,0x238);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined *)(param_1 + 4) = 0;
  jinit_memory_mgr(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 8;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x3a] = (long)jpeg_natural_order;
  param_1[0x13] = 0x6400000064;
  param_1[0x12] = 0x6400000064;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x45] = 0;
  param_1[8] = 0x3ff0000000000000;
  *(undefined4 *)((long)param_1 + 0x24) = 100;
  return;
}


