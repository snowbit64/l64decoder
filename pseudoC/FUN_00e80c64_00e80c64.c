// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e80c64
// Entry Point: 00e80c64
// Size: 144 bytes
// Signature: undefined FUN_00e80c64(void)


int FUN_00e80c64(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = 48000 / param_3;
  }
  iVar1 = param_4 * 0x28 + 0x14;
  iVar3 = 0;
  if (iVar2 + 0xf0 != 0) {
    iVar3 = ((param_1 * 8 + iVar1 * -2) * 0xf0) / (iVar2 + 0xf0);
  }
  iVar3 = iVar3 + iVar1;
  iVar2 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar1 = ((param_2 + iVar1 * (200 - param_3)) * 3) / 0xc80;
  if (iVar2 >> 3 <= iVar1) {
    iVar1 = iVar2 >> 3;
  }
  iVar2 = iVar1;
  if (0x100 < iVar1) {
    iVar2 = 0x101;
  }
  if (iVar1 <= (int)(param_4 << 3 | 4U)) {
    iVar2 = 0;
  }
  return iVar2;
}


