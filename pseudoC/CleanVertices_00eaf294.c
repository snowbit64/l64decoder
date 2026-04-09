// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanVertices
// Entry Point: 00eaf294
// Size: 488 bytes
// Signature: undefined __thiscall CleanVertices(ICHull * this, uint * param_1)


/* VHACD::ICHull::CleanVertices(unsigned int&) */

undefined8 __thiscall VHACD::ICHull::CleanVertices(ICHull *this,uint *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  TMMVertex *pTVar5;
  TMMVertex *pTVar6;
  TMMVertex *pTVar7;
  long *plVar4;
  
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != 0) {
    plVar4 = (long *)(this + 0x18);
    do {
      lVar3 = *plVar4;
      lVar2 = lVar2 + -1;
      lVar1 = *(long *)(lVar3 + 0x20);
      plVar4 = (long *)(lVar3 + 0x30);
      *(undefined *)(*(long *)(lVar3 + 0x18) + 0x30) = 1;
      *(undefined *)(lVar1 + 0x30) = 1;
    } while (lVar2 != 0);
  }
  pTVar7 = *(TMMVertex **)(this + 8);
  pTVar6 = *(TMMVertex **)(pTVar7 + 0x40);
  if ((pTVar6[0x31] == (TMMVertex)0x0) || (pTVar6[0x30] != (TMMVertex)0x0)) {
    pTVar5 = *(TMMVertex **)(pTVar6 + 0x40);
    *(undefined8 *)(pTVar6 + 0x28) = 0;
    pTVar6[0x30] = (TMMVertex)0x0;
    if (pTVar5 == pTVar7 || pTVar5[0x31] == (TMMVertex)0x0) {
      return 1;
    }
  }
  else {
    pTVar5 = *(TMMVertex **)(pTVar6 + 0x40);
    if (*(ulong *)(this + 0x10) < 2) {
      if (*(ulong *)(this + 0x10) == 1) {
        pTVar6 = *(TMMVertex **)(this + 8);
        if (pTVar6 == (TMMVertex *)0x0) {
          lVar2 = 0;
        }
        else {
          TMMVertex::~TMMVertex(pTVar6);
          operator_delete(pTVar6);
          lVar2 = *(long *)(this + 0x10) + -1;
        }
        *(undefined8 *)(this + 8) = 0;
        *(long *)(this + 0x10) = lVar2;
      }
    }
    else {
      lVar2 = *(long *)(pTVar6 + 0x38);
      TMMVertex::~TMMVertex(pTVar6);
      operator_delete(pTVar6);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      if (*(TMMVertex **)(this + 8) == pTVar6) {
        *(long *)(this + 8) = lVar2;
      }
      *(TMMVertex **)(lVar2 + 0x40) = pTVar5;
      *(long *)(pTVar5 + 0x38) = lVar2;
    }
    *param_1 = *param_1 - 1;
    if (pTVar5 == pTVar7 || pTVar5[0x31] == (TMMVertex)0x0) {
      return 1;
    }
  }
  do {
    if (pTVar5[0x30] == (TMMVertex)0x0) {
      pTVar6 = *(TMMVertex **)(pTVar5 + 0x40);
      if (*(ulong *)(this + 0x10) < 2) {
        if (*(ulong *)(this + 0x10) == 1) {
          pTVar5 = *(TMMVertex **)(this + 8);
          if (pTVar5 == (TMMVertex *)0x0) {
            lVar2 = 0;
          }
          else {
            TMMVertex::~TMMVertex(pTVar5);
            operator_delete(pTVar5);
            lVar2 = *(long *)(this + 0x10) + -1;
          }
          *(undefined8 *)(this + 8) = 0;
          *(long *)(this + 0x10) = lVar2;
        }
      }
      else {
        lVar2 = *(long *)(pTVar5 + 0x38);
        TMMVertex::~TMMVertex(pTVar5);
        operator_delete(pTVar5);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
        if (*(TMMVertex **)(this + 8) == pTVar5) {
          *(long *)(this + 8) = lVar2;
        }
        *(TMMVertex **)(lVar2 + 0x40) = pTVar6;
        *(long *)(pTVar6 + 0x38) = lVar2;
      }
      *param_1 = *param_1 - 1;
      pTVar5 = pTVar6;
    }
    else {
      *(undefined8 *)(pTVar5 + 0x28) = 0;
      pTVar5[0x30] = (TMMVertex)0x0;
      pTVar5 = *(TMMVertex **)(pTVar5 + 0x40);
    }
  } while ((pTVar5 != pTVar7) && (pTVar5[0x31] != (TMMVertex)0x0));
  return 1;
}


