// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3ef10
// Entry Point: 00d3ef10
// Size: 144 bytes
// Signature: undefined FUN_00d3ef10(void)


bool FUN_00d3ef10(undefined8 param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  
  bVar2 = param_2[2];
  if ((char)bVar2 < '\0') {
    cVar1 = *param_2;
    if (cVar1 == -0x11) {
      bVar4 = param_2[1];
      if (bVar4 == 0xbf) {
        if (0xbd < bVar2) {
          return true;
        }
        bVar4 = 0xbf;
        goto LAB_00d3ef80;
      }
      if (0xbf < bVar2) {
        return true;
      }
    }
    else {
      if (0xbf < bVar2) {
        return true;
      }
      bVar4 = param_2[1];
      if (cVar1 == -0x20) {
        return (byte)(bVar4 + 0x40) < 0xe0;
      }
    }
    if ((char)bVar4 < '\0') {
LAB_00d3ef80:
      bVar3 = 0x9f < bVar4;
      if (cVar1 != -0x13) {
        bVar3 = ((bVar4 ^ 0xff) & 0xc0) == 0;
      }
      return bVar3;
    }
  }
  return true;
}


