// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanEdges
// Entry Point: 00eadcb8
// Size: 340 bytes
// Signature: undefined CleanEdges(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::ICHull::CleanEdges() */

undefined8 VHACD::ICHull::CleanEdges(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  TMMEdge *pTVar7;
  
  lVar2 = *(long *)(in_x0 + 0x458);
  if (lVar2 != 0) {
    lVar3 = 0;
    lVar4 = *(long *)(in_x0 + 0x460);
    do {
      lVar5 = in_x0 + 0x250;
      if (lVar4 != 0x40) {
        lVar5 = *(long *)(in_x0 + 0x450);
      }
      lVar5 = *(long *)(lVar5 + lVar3 * 8);
      lVar6 = *(long *)(lVar5 + 0x28);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar5 + 0x28) = 0;
        lVar1 = 0x10;
        if (*(char *)(*(long *)(lVar5 + 8) + 0x38) != '\0') {
          lVar1 = 8;
        }
        *(long *)(lVar5 + lVar1) = lVar6;
      }
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  lVar2 = *(long *)(in_x0 + 0x240);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      lVar4 = in_x0 + 0x38;
      if (*(long *)(in_x0 + 0x248) != 0x40) {
        lVar4 = *(long *)(in_x0 + 0x238);
      }
      pTVar7 = *(TMMEdge **)(lVar4 + lVar3 * 8);
      if (pTVar7 != (TMMEdge *)0x0) {
        if (*(ulong *)(in_x0 + 0x20) < 2) {
          if (*(ulong *)(in_x0 + 0x20) == 1) {
            pTVar7 = *(TMMEdge **)(in_x0 + 0x18);
            if (pTVar7 == (TMMEdge *)0x0) {
              lVar4 = 0;
            }
            else {
              TMMEdge::~TMMEdge(pTVar7);
              operator_delete(pTVar7);
              lVar4 = *(long *)(in_x0 + 0x20) + -1;
            }
            *(undefined8 *)(in_x0 + 0x18) = 0;
            *(long *)(in_x0 + 0x20) = lVar4;
          }
        }
        else {
          lVar4 = *(long *)(pTVar7 + 0x30);
          lVar5 = *(long *)(pTVar7 + 0x38);
          TMMEdge::~TMMEdge(pTVar7);
          operator_delete(pTVar7);
          *(long *)(in_x0 + 0x20) = *(long *)(in_x0 + 0x20) + -1;
          if (*(TMMEdge **)(in_x0 + 0x18) == pTVar7) {
            *(long *)(in_x0 + 0x18) = lVar4;
          }
          *(long *)(lVar4 + 0x38) = lVar5;
          *(long *)(lVar5 + 0x30) = lVar4;
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  *(undefined8 *)(in_x0 + 0x240) = 0;
  *(undefined8 *)(in_x0 + 0x458) = 0;
  return 1;
}


