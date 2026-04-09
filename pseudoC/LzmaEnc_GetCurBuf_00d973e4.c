// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_GetCurBuf
// Entry Point: 00d973e4
// Size: 56 bytes
// Signature: undefined LzmaEnc_GetCurBuf(void)


long LzmaEnc_GetCurBuf(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x30));
  return lVar1 - (ulong)*(uint *)(param_1 + 0x32f74);
}


