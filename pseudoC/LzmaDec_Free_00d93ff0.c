// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaDec_Free
// Entry Point: 00d93ff0
// Size: 72 bytes
// Signature: undefined LzmaDec_Free(void)


void LzmaDec_Free(long param_1,long param_2)

{
  code *pcVar1;
  
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x10));
  pcVar1 = *(code **)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


