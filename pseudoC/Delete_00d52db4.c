// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Delete
// Entry Point: 00d52db4
// Size: 252 bytes
// Signature: undefined Delete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::CircularList<HACD::TMMTriangle>::Delete() */

undefined8 HACD::CircularList<HACD::TMMTriangle>::Delete(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  TMMTriangle *pTVar3;
  long lVar4;
  
  if (1 < *(ulong *)(in_x0 + 0x10)) {
    pTVar3 = *(TMMTriangle **)(in_x0 + 8);
    lVar4 = *(long *)(in_x0 + 0x18);
    lVar1 = *(long *)(pTVar3 + 0xd8);
    lVar2 = *(long *)(pTVar3 + 0xe0);
    TMMTriangle::~TMMTriangle(pTVar3);
    if (lVar4 == 0) {
      operator_delete(pTVar3);
    }
    else {
      heap_free(*(HeapManager **)(in_x0 + 0x18),*(void **)(in_x0 + 8));
    }
    *(long *)(in_x0 + 8) = lVar1;
    *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 0x10) + -1;
    *(long *)(lVar1 + 0xe0) = lVar2;
    *(long *)(lVar2 + 0xd8) = lVar1;
    return 1;
  }
  if (*(ulong *)(in_x0 + 0x10) == 1) {
    pTVar3 = *(TMMTriangle **)(in_x0 + 8);
    if (*(long *)(in_x0 + 0x18) == 0) {
      if (pTVar3 != (TMMTriangle *)0x0) {
        TMMTriangle::~TMMTriangle(pTVar3);
        operator_delete(pTVar3);
      }
    }
    else {
      TMMTriangle::~TMMTriangle(pTVar3);
      heap_free(*(HeapManager **)(in_x0 + 0x18),*(void **)(in_x0 + 8));
    }
    *(undefined8 *)(in_x0 + 8) = 0;
    *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 0x10) + -1;
    return 1;
  }
  return 0;
}


