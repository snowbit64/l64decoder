// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3efa0
// Entry Point: 00d3efa0
// Size: 128 bytes
// Signature: undefined FUN_00d3efa0(void)


bool FUN_00d3efa0(undefined8 param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((param_2[3] < '\0') && ((param_2[3] & 0xc0U) != 0xc0)) {
    bVar2 = true;
    if ((param_2[2] < '\0') && ((param_2[2] & 0xc0U) != 0xc0)) {
      bVar1 = param_2[1];
      if (*param_2 == -0x10) {
        return (byte)(bVar1 + 0x40) < 0xd0;
      }
      if (-1 < (char)bVar1) {
        return true;
      }
      bVar2 = 0x8f < bVar1;
      if (*param_2 != -0xc) {
        bVar2 = ((bVar1 ^ 0xff) & 0xc0) == 0;
      }
    }
  }
  return bVar2;
}


