// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_set_marker_processor
// Entry Point: 00d72300
// Size: 76 bytes
// Signature: undefined jpeg_set_marker_processor(void)


void jpeg_set_marker_processor(long *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  code **ppcVar2;
  
  if (param_2 == 0xfe) {
    *(undefined8 *)(param_1[0x49] + 0x28) = param_3;
    return;
  }
  if ((param_2 & 0xfffffff0) == 0xe0) {
    *(undefined8 *)(param_1[0x49] + (ulong)(param_2 - 0xe0) * 8 + 0x30) = param_3;
    return;
  }
  lVar1 = *param_1;
  *(uint *)(lVar1 + 0x2c) = param_2;
  ppcVar2 = (code **)*param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x46;
                    /* WARNING: Could not recover jumptable at 0x00d72348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**ppcVar2)();
  return;
}


