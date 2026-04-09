// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Delete
// Entry Point: 00d51c14
// Size: 288 bytes
// Signature: undefined __thiscall Delete(CircularList<HACD::TMMTriangle> * this, CircularListElement * param_1)


/* HACD::CircularList<HACD::TMMTriangle>::Delete(HACD::CircularListElement<HACD::TMMTriangle>*) */

undefined8 __thiscall
HACD::CircularList<HACD::TMMTriangle>::Delete
          (CircularList<HACD::TMMTriangle> *this,CircularListElement *param_1)

{
  long lVar1;
  CircularListElement *pCVar2;
  long lVar3;
  TMMTriangle *this_00;
  long lVar4;
  
  if (param_1 != (CircularListElement *)0x0) {
    if (1 < *(ulong *)(this + 0x10)) {
      lVar1 = *(long *)(param_1 + 0xd8);
      lVar3 = *(long *)(param_1 + 0xe0);
      lVar4 = *(long *)(this + 0x18);
      TMMTriangle::~TMMTriangle((TMMTriangle *)param_1);
      if (lVar4 == 0) {
        operator_delete(param_1);
        pCVar2 = *(CircularListElement **)(this + 8);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      }
      else {
        heap_free(*(HeapManager **)(this + 0x18),param_1);
        pCVar2 = *(CircularListElement **)(this + 8);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      }
      if (pCVar2 == param_1) {
        *(long *)(this + 8) = lVar1;
      }
      *(long *)(lVar1 + 0xe0) = lVar3;
      *(long *)(lVar3 + 0xd8) = lVar1;
      return 1;
    }
    if (*(ulong *)(this + 0x10) == 1) {
      if (*(long *)(this + 0x18) == 0) {
        this_00 = *(TMMTriangle **)(this + 8);
        if (this_00 != (TMMTriangle *)0x0) {
          TMMTriangle::~TMMTriangle(this_00);
          operator_delete(this_00);
        }
      }
      else {
        TMMTriangle::~TMMTriangle((TMMTriangle *)param_1);
        heap_free(*(HeapManager **)(this + 0x18),*(void **)(this + 8));
      }
      *(undefined8 *)(this + 8) = 0;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      return 1;
    }
  }
  return 0;
}


