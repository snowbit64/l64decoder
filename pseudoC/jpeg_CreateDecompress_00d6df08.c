// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_CreateDecompress
// Entry Point: 00d6df08
// Size: 256 bytes
// Signature: undefined jpeg_CreateDecompress(void)


void jpeg_CreateDecompress(long *param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    *(undefined8 *)(*param_1 + 0x28) = 0x5a0000000d;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x278) {
    *(undefined8 *)(*param_1 + 0x28) = 0x27800000016;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  memset(param_1,0,0x278);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined *)(param_1 + 4) = 1;
  jinit_memory_mgr(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x2f] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  jinit_marker_reader(param_1);
  jinit_input_controller(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 200;
  return;
}


