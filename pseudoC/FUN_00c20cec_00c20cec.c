// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c20cec
// Entry Point: 00c20cec
// Size: 120 bytes
// Signature: undefined FUN_00c20cec(void)


int FUN_00c20cec(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return 0;
  }
  iVar5 = 0;
  pbVar3 = param_1 + 1;
  do {
    uVar4 = (uint)bVar1;
    uVar2 = uVar4 - 0x30;
    if ((uVar2 < 10) && ((int)uVar2 < param_2)) {
      iVar5 = uVar2 + iVar5 * param_2;
    }
    else if (0x40 < uVar4) {
      if ((int)(uVar4 - 0x41) < param_2) {
        iVar5 = (uVar4 - 0x41) + iVar5 * param_2;
      }
      else {
        if ((uVar4 < 0x61) || (param_2 <= (int)(uVar4 - 0x61))) goto LAB_00c20d08;
        iVar5 = (uVar4 - 0x61) + iVar5 * param_2;
      }
      iVar5 = iVar5 + 10;
    }
LAB_00c20d08:
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if (bVar1 == 0) {
      return iVar5;
    }
  } while( true );
}


