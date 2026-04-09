// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b3094
// Entry Point: 007b3094
// Size: 152 bytes
// Signature: undefined FUN_007b3094(void)


void FUN_007b3094(long param_1,char **param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *__s1;
  uint uVar5;
  
  iVar1 = BaseTerrain::getNumInfoLayers();
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      pbVar3 = (byte *)BaseTerrain::getInfoLayer((BaseTerrain *)(param_1 + 0x170),uVar5);
      __s1 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        __s1 = pbVar3 + 1;
      }
      iVar1 = strcmp((char *)__s1,*param_2);
      if (iVar1 == 0) {
        uVar4 = *(ulong *)(pbVar3 + 0x38);
        if (uVar4 != 0) {
          uVar4 = (ulong)*(uint *)(uVar4 + 0x18);
        }
        goto LAB_007b3110;
      }
      uVar5 = uVar5 + 1;
      uVar2 = BaseTerrain::getNumInfoLayers();
    } while (uVar5 < uVar2);
  }
  uVar4 = 0;
LAB_007b3110:
  *(int *)(param_2 + 0x20) = (int)uVar4;
  *(undefined4 *)(param_2 + 0x21) = 1;
  return;
}


