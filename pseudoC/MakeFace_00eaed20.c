// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeFace
// Entry Point: 00eaed20
// Size: 596 bytes
// Signature: undefined __thiscall MakeFace(ICHull * this, CircularListElement * param_1, CircularListElement * param_2, CircularListElement * param_3, CircularListElement * param_4)


/* VHACD::ICHull::MakeFace(VHACD::CircularListElement<VHACD::TMMVertex>*,
   VHACD::CircularListElement<VHACD::TMMVertex>*, VHACD::CircularListElement<VHACD::TMMVertex>*,
   VHACD::CircularListElement<VHACD::TMMTriangle>*) */

TMMTriangle * __thiscall
VHACD::ICHull::MakeFace
          (ICHull *this,CircularListElement *param_1,CircularListElement *param_2,
          CircularListElement *param_3,CircularListElement *param_4)

{
  TMMTriangle *pTVar1;
  TMMEdge *pTVar2;
  TMMEdge *pTVar3;
  long lVar4;
  TMMEdge *pTVar5;
  long lVar6;
  long lVar7;
  
  if (param_4 != (CircularListElement *)0x0) {
    pTVar3 = *(TMMEdge **)(param_4 + 0x10);
    pTVar2 = *(TMMEdge **)(param_4 + 0x18);
    lVar6 = 1;
    pTVar5 = *(TMMEdge **)(param_4 + 8);
    lVar4 = *(long *)(this + 0x30);
    *(CircularListElement **)(pTVar2 + 0x18) = param_1;
    *(CircularListElement **)(pTVar2 + 0x20) = param_2;
    *(CircularListElement **)(pTVar3 + 0x18) = param_2;
    *(CircularListElement **)(pTVar3 + 0x20) = param_3;
    *(CircularListElement **)(pTVar5 + 0x18) = param_3;
    *(CircularListElement **)(pTVar5 + 0x20) = param_1;
    goto joined_r0x00eaeefc;
  }
  if (*(long *)(this + 0x20) == 0) {
    pTVar2 = (TMMEdge *)operator_new(0x40);
    TMMEdge::TMMEdge(pTVar2);
    *(TMMEdge **)(pTVar2 + 0x30) = pTVar2;
    *(TMMEdge **)(pTVar2 + 0x38) = pTVar2;
    lVar6 = *(long *)(this + 0x20);
    *(TMMEdge **)(this + 0x18) = pTVar2;
    *(long *)(this + 0x20) = lVar6 + 1;
    if (lVar6 == -1) goto LAB_00eaee14;
LAB_00eaee8c:
    lVar6 = *(long *)(pTVar2 + 0x30);
    pTVar3 = (TMMEdge *)operator_new(0x40);
    TMMEdge::TMMEdge(pTVar3);
    *(TMMEdge **)(this + 0x18) = pTVar3;
    *(long *)(pTVar3 + 0x30) = lVar6;
    *(TMMEdge **)(pTVar3 + 0x38) = pTVar2;
    *(TMMEdge **)(pTVar2 + 0x30) = pTVar3;
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(this + 0x18);
    pTVar3 = *(TMMEdge **)(this + 0x18);
    lVar6 = *(long *)(this + 0x20);
    *(long *)(this + 0x20) = lVar6 + 1;
    if (lVar6 != -1) goto LAB_00eaee38;
LAB_00eaeec4:
    pTVar5 = (TMMEdge *)operator_new(0x40);
    TMMEdge::TMMEdge(pTVar5);
    *(TMMEdge **)(this + 0x18) = pTVar5;
    *(TMMEdge **)(pTVar5 + 0x30) = pTVar5;
    *(TMMEdge **)(pTVar5 + 0x38) = pTVar5;
  }
  else {
    lVar6 = *(long *)(this + 0x18);
    lVar4 = *(long *)(lVar6 + 0x30);
    pTVar2 = (TMMEdge *)operator_new(0x40);
    TMMEdge::TMMEdge(pTVar2);
    *(TMMEdge **)(this + 0x18) = pTVar2;
    *(long *)(pTVar2 + 0x30) = lVar4;
    *(long *)(pTVar2 + 0x38) = lVar6;
    *(TMMEdge **)(lVar6 + 0x30) = pTVar2;
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(this + 0x18);
    pTVar2 = *(TMMEdge **)(this + 0x18);
    lVar6 = *(long *)(this + 0x20);
    *(long *)(this + 0x20) = lVar6 + 1;
    if (lVar6 != -1) goto LAB_00eaee8c;
LAB_00eaee14:
    pTVar3 = (TMMEdge *)operator_new(0x40);
    TMMEdge::TMMEdge(pTVar3);
    *(TMMEdge **)(pTVar3 + 0x30) = pTVar3;
    *(TMMEdge **)(pTVar3 + 0x38) = pTVar3;
    lVar6 = *(long *)(this + 0x20);
    *(TMMEdge **)(this + 0x18) = pTVar3;
    *(long *)(this + 0x20) = lVar6 + 1;
    if (lVar6 == -1) goto LAB_00eaeec4;
LAB_00eaee38:
    lVar6 = *(long *)(pTVar3 + 0x30);
    pTVar5 = (TMMEdge *)operator_new(0x40);
    TMMEdge::TMMEdge(pTVar5);
    *(TMMEdge **)(this + 0x18) = pTVar5;
    *(long *)(pTVar5 + 0x30) = lVar6;
    *(TMMEdge **)(pTVar5 + 0x38) = pTVar3;
    *(TMMEdge **)(pTVar3 + 0x30) = pTVar5;
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(this + 0x18);
    pTVar5 = *(TMMEdge **)(this + 0x18);
  }
  lVar6 = 0;
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
  lVar4 = *(long *)(this + 0x30);
  *(CircularListElement **)(pTVar2 + 0x18) = param_1;
  *(CircularListElement **)(pTVar2 + 0x20) = param_2;
  *(CircularListElement **)(pTVar3 + 0x18) = param_2;
  *(CircularListElement **)(pTVar3 + 0x20) = param_3;
  *(CircularListElement **)(pTVar5 + 0x18) = param_3;
  *(CircularListElement **)(pTVar5 + 0x20) = param_1;
joined_r0x00eaeefc:
  if (lVar4 == 0) {
    pTVar1 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar1);
    *(TMMTriangle **)(this + 0x28) = pTVar1;
    *(TMMTriangle **)(pTVar1 + 0x40) = pTVar1;
    *(TMMTriangle **)(pTVar1 + 0x48) = pTVar1;
  }
  else {
    lVar7 = *(long *)(this + 0x28);
    lVar4 = *(long *)(lVar7 + 0x40);
    pTVar1 = (TMMTriangle *)operator_new(0x50);
    TMMTriangle::TMMTriangle(pTVar1);
    *(TMMTriangle **)(this + 0x28) = pTVar1;
    *(long *)(pTVar1 + 0x40) = lVar4;
    *(long *)(pTVar1 + 0x48) = lVar7;
    *(TMMTriangle **)(lVar7 + 0x40) = pTVar1;
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(this + 0x28);
    pTVar1 = *(TMMTriangle **)(this + 0x28);
  }
  lVar4 = *(long *)(this + 0x30);
  lVar6 = lVar6 * 8;
  *(TMMEdge **)(pTVar1 + 8) = pTVar2;
  *(TMMEdge **)(pTVar1 + 0x10) = pTVar3;
  *(TMMEdge **)(pTVar1 + 0x18) = pTVar5;
  *(CircularListElement **)(pTVar1 + 0x20) = param_1;
  *(CircularListElement **)(pTVar1 + 0x28) = param_2;
  *(CircularListElement **)(pTVar1 + 0x30) = param_3;
  *(long *)(this + 0x30) = lVar4 + 1;
  *(TMMTriangle **)(pTVar5 + lVar6 + 8) = pTVar1;
  *(TMMTriangle **)(pTVar3 + lVar6 + 8) = pTVar1;
  *(TMMTriangle **)(pTVar2 + lVar6 + 8) = pTVar1;
  return pTVar1;
}


