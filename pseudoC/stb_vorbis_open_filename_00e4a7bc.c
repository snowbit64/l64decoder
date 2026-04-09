// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_open_filename
// Entry Point: 00e4a7bc
// Size: 164 bytes
// Signature: undefined stb_vorbis_open_filename(void)


undefined8 stb_vorbis_open_filename(char *param_1,undefined4 *param_2,undefined8 param_3)

{
  FILE *__stream;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  __stream = fopen(param_1,"rb");
  if (__stream != (FILE *)0x0) {
    uVar1 = ftell(__stream);
    fseek(__stream,0,2);
    lVar2 = ftell(__stream);
    fseek(__stream,uVar1 & 0xffffffff,0);
    uVar3 = stb_vorbis_open_file_section(__stream,1,param_2,param_3,(int)lVar2 - (int)uVar1);
    return uVar3;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 6;
  }
  return 0;
}


