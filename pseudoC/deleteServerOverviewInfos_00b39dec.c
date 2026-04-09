// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteServerOverviewInfos
// Entry Point: 00b39dec
// Size: 192 bytes
// Signature: undefined deleteServerOverviewInfos(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::deleteServerOverviewInfos() */

void MasterServerManager::deleteServerOverviewInfos(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(in_x0 + 0x438);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + -8);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      lVar5 = 0;
      lVar2 = lVar2 * 0x80;
      do {
        lVar1 = lVar4 + lVar2;
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -8));
        }
        if ((*(byte *)(lVar1 + -0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar4 + lVar2 + -0x20));
        }
        lVar1 = lVar4 + lVar2;
        if ((*(byte *)(lVar1 + -0x58) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x48));
        }
        if ((*(byte *)(lVar1 + -0x78) & 1) != 0) {
          operator_delete(*(void **)(lVar4 + lVar2 + -0x68));
        }
        lVar4 = lVar4 + -0x80;
        lVar5 = lVar5 + 0x80;
      } while (lVar2 - lVar5 != 0);
    }
    operator_delete__(plVar3);
  }
  *(undefined8 *)(in_x0 + 0x438) = 0;
  *(undefined4 *)(in_x0 + 0x430) = 0;
  return;
}


