// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Delete
// Entry Point: 00d51af4
// Size: 288 bytes
// Signature: undefined __thiscall Delete(CircularList<HACD::TMMEdge> * this, CircularListElement * param_1)


/* HACD::CircularList<HACD::TMMEdge>::Delete(HACD::CircularListElement<HACD::TMMEdge>*) */

undefined8 __thiscall
HACD::CircularList<HACD::TMMEdge>::Delete
          (CircularList<HACD::TMMEdge> *this,CircularListElement *param_1)

{
  long lVar1;
  CircularListElement *pCVar2;
  long lVar3;
  TMMEdge *this_00;
  long lVar4;
  
  if (param_1 != (CircularListElement *)0x0) {
    if (1 < *(ulong *)(this + 0x10)) {
      lVar1 = *(long *)(param_1 + 0x30);
      lVar3 = *(long *)(param_1 + 0x38);
      lVar4 = *(long *)(this + 0x18);
      TMMEdge::~TMMEdge((TMMEdge *)param_1);
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
      *(long *)(lVar1 + 0x38) = lVar3;
      *(long *)(lVar3 + 0x30) = lVar1;
      return 1;
    }
    if (*(ulong *)(this + 0x10) == 1) {
      if (*(long *)(this + 0x18) == 0) {
        this_00 = *(TMMEdge **)(this + 8);
        if (this_00 != (TMMEdge *)0x0) {
          TMMEdge::~TMMEdge(this_00);
          operator_delete(this_00);
        }
      }
      else {
        TMMEdge::~TMMEdge((TMMEdge *)param_1);
        heap_free(*(HeapManager **)(this + 0x18),*(void **)(this + 8));
      }
      *(undefined8 *)(this + 8) = 0;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      return 1;
    }
  }
  return 0;
}


