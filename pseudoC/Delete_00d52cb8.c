// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Delete
// Entry Point: 00d52cb8
// Size: 252 bytes
// Signature: undefined Delete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::CircularList<HACD::TMMEdge>::Delete() */

undefined8 HACD::CircularList<HACD::TMMEdge>::Delete(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  TMMEdge *pTVar3;
  long lVar4;
  
  if (1 < *(ulong *)(in_x0 + 0x10)) {
    pTVar3 = *(TMMEdge **)(in_x0 + 8);
    lVar4 = *(long *)(in_x0 + 0x18);
    lVar1 = *(long *)(pTVar3 + 0x30);
    lVar2 = *(long *)(pTVar3 + 0x38);
    TMMEdge::~TMMEdge(pTVar3);
    if (lVar4 == 0) {
      operator_delete(pTVar3);
    }
    else {
      heap_free(*(HeapManager **)(in_x0 + 0x18),*(void **)(in_x0 + 8));
    }
    *(long *)(in_x0 + 8) = lVar1;
    *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 0x10) + -1;
    *(long *)(lVar1 + 0x38) = lVar2;
    *(long *)(lVar2 + 0x30) = lVar1;
    return 1;
  }
  if (*(ulong *)(in_x0 + 0x10) == 1) {
    pTVar3 = *(TMMEdge **)(in_x0 + 8);
    if (*(long *)(in_x0 + 0x18) == 0) {
      if (pTVar3 != (TMMEdge *)0x0) {
        TMMEdge::~TMMEdge(pTVar3);
        operator_delete(pTVar3);
      }
    }
    else {
      TMMEdge::~TMMEdge(pTVar3);
      heap_free(*(HeapManager **)(in_x0 + 0x18),*(void **)(in_x0 + 8));
    }
    *(undefined8 *)(in_x0 + 8) = 0;
    *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 0x10) + -1;
    return 1;
  }
  return 0;
}


