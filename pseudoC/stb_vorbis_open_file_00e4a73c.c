// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_open_file
// Entry Point: 00e4a73c
// Size: 128 bytes
// Signature: undefined stb_vorbis_open_file(void)


void stb_vorbis_open_file(FILE *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = ftell(param_1);
  fseek(param_1,0,2);
  lVar2 = ftell(param_1);
  fseek(param_1,uVar1 & 0xffffffff,0);
  stb_vorbis_open_file_section(param_1,param_2,param_3,param_4,(int)lVar2 - (int)uVar1);
  return;
}


