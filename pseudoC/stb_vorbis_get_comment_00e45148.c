// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_comment
// Entry Point: 00e45148
// Size: 28 bytes
// Signature: undefined stb_vorbis_get_comment(void)


void stb_vorbis_get_comment(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar2;
  return;
}


