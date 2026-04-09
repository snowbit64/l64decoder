// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c27ec8
// Entry Point: 00c27ec8
// Size: 184 bytes
// Signature: undefined FUN_00c27ec8(void)


bool FUN_00c27ec8(byte *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *__s2;
  
  bVar2 = *param_1;
  bVar3 = *param_2;
  uVar7 = (ulong)(bVar2 >> 1);
  __n = uVar7;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return false;
      }
      pbVar6 = param_1 + 1;
      do {
        uVar7 = uVar7 - 1;
        bVar2 = *pbVar6;
        bVar3 = *__s2;
        __s2 = __s2 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 == bVar3 && uVar7 != 0);
      bVar4 = bVar2 == bVar3;
    }
    else {
      if (__n == 0) {
        return false;
      }
      iVar5 = memcmp(pbVar6,__s2,__n);
      bVar4 = iVar5 == 0;
    }
    return !bVar4;
  }
  return true;
}


