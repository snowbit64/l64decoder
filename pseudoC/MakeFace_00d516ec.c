// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeFace
// Entry Point: 00d516ec
// Size: 204 bytes
// Signature: undefined __thiscall MakeFace(ICHull * this, CircularListElement * param_1, CircularListElement * param_2, CircularListElement * param_3, CircularListElement * param_4)


/* HACD::ICHull::MakeFace(HACD::CircularListElement<HACD::TMMVertex>*,
   HACD::CircularListElement<HACD::TMMVertex>*, HACD::CircularListElement<HACD::TMMVertex>*,
   HACD::CircularListElement<HACD::TMMTriangle>*) */

void __thiscall
HACD::ICHull::MakeFace
          (ICHull *this,CircularListElement *param_1,CircularListElement *param_2,
          CircularListElement *param_3,CircularListElement *param_4)

{
  CircularList<HACD::TMMEdge> *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_4 == (CircularListElement *)0x0) {
    this_00 = (CircularList<HACD::TMMEdge> *)(this + 0x30);
    lVar1 = CircularList<HACD::TMMEdge>::Add(this_00,(TMMEdge *)0x0);
    lVar2 = CircularList<HACD::TMMEdge>::Add(this_00,(TMMEdge *)0x0);
    lVar5 = CircularList<HACD::TMMEdge>::Add(this_00,(TMMEdge *)0x0);
  }
  else {
    lVar2 = *(long *)(param_4 + 0x10);
    lVar1 = *(long *)(param_4 + 0x18);
    lVar5 = *(long *)(param_4 + 8);
  }
  *(CircularListElement **)(lVar1 + 0x18) = param_1;
  *(CircularListElement **)(lVar1 + 0x20) = param_2;
  *(CircularListElement **)(lVar2 + 0x18) = param_2;
  *(CircularListElement **)(lVar2 + 0x20) = param_3;
  *(CircularListElement **)(lVar5 + 0x18) = param_3;
  *(CircularListElement **)(lVar5 + 0x20) = param_1;
  lVar3 = CircularList<HACD::TMMTriangle>::Add
                    ((CircularList<HACD::TMMTriangle> *)(this + 0x50),(TMMTriangle *)0x0);
  lVar4 = (ulong)(param_4 != (CircularListElement *)0x0) * 8;
  *(long *)(lVar3 + 8) = lVar1;
  *(long *)(lVar3 + 0x10) = lVar2;
  *(long *)(lVar3 + 0x18) = lVar5;
  *(CircularListElement **)(lVar3 + 0x20) = param_1;
  *(CircularListElement **)(lVar3 + 0x28) = param_2;
  *(CircularListElement **)(lVar3 + 0x30) = param_3;
  *(long *)(lVar5 + lVar4 + 8) = lVar3;
  *(long *)(lVar2 + lVar4 + 8) = lVar3;
  *(long *)(lVar1 + lVar4 + 8) = lVar3;
  return;
}


