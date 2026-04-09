// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Delete
// Entry Point: 00eadbe8
// Size: 208 bytes
// Signature: undefined Delete(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::CircularList<VHACD::TMMVertex>::Delete() */

undefined8 VHACD::CircularList<VHACD::TMMVertex>::Delete(void)

{
  long lVar1;
  TMMVertex **in_x0;
  TMMVertex *this;
  TMMVertex *pTVar2;
  
  if ((TMMVertex *)0x1 < in_x0[1]) {
    this = *in_x0;
    pTVar2 = *(TMMVertex **)(this + 0x38);
    lVar1 = *(long *)(this + 0x40);
    TMMVertex::~TMMVertex(this);
    operator_delete(this);
    *in_x0 = pTVar2;
    in_x0[1] = in_x0[1] + -1;
    *(long *)(pTVar2 + 0x40) = lVar1;
    *(TMMVertex **)(lVar1 + 0x38) = pTVar2;
    return 1;
  }
  if (in_x0[1] == (TMMVertex *)0x1) {
    pTVar2 = *in_x0;
    if (pTVar2 != (TMMVertex *)0x0) {
      TMMVertex::~TMMVertex(pTVar2);
      operator_delete(pTVar2);
      *in_x0 = (TMMVertex *)0x0;
      in_x0[1] = in_x0[1] + -1;
      return 1;
    }
    *in_x0 = (TMMVertex *)0x0;
    in_x0[1] = (TMMVertex *)0x0;
    return 1;
  }
  return 0;
}


