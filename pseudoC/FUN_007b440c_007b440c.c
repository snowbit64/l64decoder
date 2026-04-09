// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b440c
// Entry Point: 007b440c
// Size: 168 bytes
// Signature: undefined FUN_007b440c(void)


void FUN_007b440c(long param_1,char **param_2)

{
  char *__s2;
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *__s1;
  long *plVar4;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x548);
  plVar4 = *(long **)(param_1 + 0x540);
  *(undefined4 *)(param_2 + 0x21) = 1;
  uVar3 = lVar2 - (long)plVar4;
  if ((int)(uVar3 >> 3) != 0) {
    __s1 = *param_2;
    uVar3 = uVar3 >> 3 & 0xffffffff;
    do {
      lVar2 = *plVar4;
      __s2 = (char *)(lVar2 + 0x29);
      if ((*(byte *)(lVar2 + 0x28) & 1) != 0) {
        __s2 = *(char **)(lVar2 + 0x38);
      }
      iVar1 = strcmp(__s1,__s2);
      if (iVar1 == 0) {
        lVar2 = TerrainDataPlane::getAssociatedTransformGroup();
        if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) {
          return;
        }
        *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar2 + 0x18);
        *(undefined4 *)(param_2 + 0x21) = 1;
        return;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
  }
  return;
}


