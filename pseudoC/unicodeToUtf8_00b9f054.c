// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unicodeToUtf8
// Entry Point: 00b9f054
// Size: 188 bytes
// Signature: undefined __cdecl unicodeToUtf8(uint param_1, char * param_2)


/* StringUtil::unicodeToUtf8(unsigned int, char*) */

undefined8 StringUtil::unicodeToUtf8(uint param_1,char *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_1;
  if (param_1 < 0x80) {
    *param_2 = bVar1;
    return 1;
  }
  if (param_1 < 0x800) {
    *param_2 = (byte)(param_1 >> 6) | 0xc0;
    param_2[1] = bVar1 & 0x3f | 0x80;
    return 2;
  }
  if (param_1 >> 0x10 == 0) {
    *param_2 = (byte)(param_1 >> 0xc) | 0xe0;
    param_2[1] = (byte)(param_1 >> 6) & 0x3f | 0x80;
    param_2[2] = bVar1 & 0x3f | 0x80;
    return 3;
  }
  if (param_1 >> 0x15 == 0) {
    *param_2 = (byte)(param_1 >> 0x12) | 0xf0;
    param_2[1] = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
    param_2[2] = (byte)(param_1 >> 6) & 0x3f | 0x80;
    param_2[3] = bVar1 & 0x3f | 0x80;
    return 4;
  }
  return 0;
}


