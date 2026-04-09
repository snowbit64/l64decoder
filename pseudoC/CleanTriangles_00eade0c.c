// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanTriangles
// Entry Point: 00eade0c
// Size: 240 bytes
// Signature: undefined CleanTriangles(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::ICHull::CleanTriangles() */

undefined8 VHACD::ICHull::CleanTriangles(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  TMMTriangle *pTVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(in_x0 + 0x670);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      lVar2 = in_x0 + 0x468;
      if (*(long *)(in_x0 + 0x678) != 0x40) {
        lVar2 = *(long *)(in_x0 + 0x668);
      }
      pTVar3 = *(TMMTriangle **)(lVar2 + lVar5 * 8);
      if (pTVar3 != (TMMTriangle *)0x0) {
        if (*(ulong *)(in_x0 + 0x30) < 2) {
          if (*(ulong *)(in_x0 + 0x30) == 1) {
            pTVar3 = *(TMMTriangle **)(in_x0 + 0x28);
            if (pTVar3 == (TMMTriangle *)0x0) {
              lVar2 = 0;
            }
            else {
              TMMTriangle::~TMMTriangle(pTVar3);
              operator_delete(pTVar3);
              lVar2 = *(long *)(in_x0 + 0x30) + -1;
            }
            *(undefined8 *)(in_x0 + 0x28) = 0;
            *(long *)(in_x0 + 0x30) = lVar2;
          }
        }
        else {
          lVar2 = *(long *)(pTVar3 + 0x40);
          lVar1 = *(long *)(pTVar3 + 0x48);
          TMMTriangle::~TMMTriangle(pTVar3);
          operator_delete(pTVar3);
          *(long *)(in_x0 + 0x30) = *(long *)(in_x0 + 0x30) + -1;
          if (*(TMMTriangle **)(in_x0 + 0x28) == pTVar3) {
            *(long *)(in_x0 + 0x28) = lVar2;
          }
          *(long *)(lVar2 + 0x48) = lVar1;
          *(long *)(lVar1 + 0x40) = lVar2;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
  }
  *(undefined8 *)(in_x0 + 0x670) = 0;
  return 1;
}


