// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeConeFace
// Entry Point: 00d517b8
// Size: 412 bytes
// Signature: undefined __thiscall MakeConeFace(ICHull * this, CircularListElement * param_1, CircularListElement * param_2)


/* HACD::ICHull::MakeConeFace(HACD::CircularListElement<HACD::TMMEdge>*,
   HACD::CircularListElement<HACD::TMMVertex>*) */

void __thiscall
HACD::ICHull::MakeConeFace(ICHull *this,CircularListElement *param_1,CircularListElement *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x28);
  if (lVar7 == 0) {
    lVar7 = CircularList<HACD::TMMEdge>::Add
                      ((CircularList<HACD::TMMEdge> *)(this + 0x30),(TMMEdge *)0x0);
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(CircularListElement **)(lVar7 + 0x20) = param_2;
    *(long *)(*(long *)(param_1 + 0x18) + 0x28) = lVar7;
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  if (lVar8 == 0) {
    lVar8 = CircularList<HACD::TMMEdge>::Add
                      ((CircularList<HACD::TMMEdge> *)(this + 0x30),(TMMEdge *)0x0);
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(CircularListElement **)(lVar8 + 0x20) = param_2;
    *(long *)(*(long *)(param_1 + 0x20) + 0x28) = lVar8;
  }
  lVar3 = CircularList<HACD::TMMTriangle>::Add
                    ((CircularList<HACD::TMMTriangle> *)(this + 0x50),(TMMTriangle *)0x0);
  *(CircularListElement **)(lVar3 + 8) = param_1;
  *(long *)(lVar3 + 0x10) = lVar7;
  *(long *)(lVar3 + 0x18) = lVar8;
  uVar4 = 0;
  lVar6 = 0x10;
  if (*(char *)(*(long *)(param_1 + 8) + 0xd0) != '\0') {
    lVar6 = 8;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  plVar9 = (long *)(*(long *)(param_1 + lVar6) + 0x20);
  do {
    plVar5 = plVar9 + 1;
    lVar6 = *plVar9;
    uVar4 = uVar4 + 1;
    plVar9 = plVar5;
  } while (lVar6 != lVar1);
  if (plVar5[(uVar4 / 3) * -3] == lVar2) {
    *(long *)(lVar3 + 8) = lVar7;
    *(CircularListElement **)(lVar3 + 0x10) = param_1;
    *(long *)(lVar3 + 0x20) = lVar1;
    *(long *)(lVar3 + 0x28) = lVar2;
    *(CircularListElement **)(lVar3 + 0x30) = param_2;
    lVar6 = *(long *)(lVar7 + 8);
  }
  else {
    *(long *)(lVar3 + 0x20) = lVar2;
    *(long *)(lVar3 + 0x28) = lVar1;
    *(CircularListElement **)(lVar3 + 0x30) = param_2;
    lVar6 = *(long *)(lVar7 + 8);
  }
  plVar9 = (long *)(lVar7 + 8);
  if ((lVar6 == 0) || (plVar9 = (long *)(lVar7 + 0x10), *plVar9 == 0)) {
    *plVar9 = lVar3;
    lVar7 = *(long *)(lVar8 + 8);
  }
  else {
    lVar7 = *(long *)(lVar8 + 8);
  }
  plVar9 = (long *)(lVar8 + 8);
  if ((lVar7 != 0) && (plVar9 = (long *)(lVar8 + 0x10), *plVar9 != 0)) {
    return;
  }
  *plVar9 = lVar3;
  return;
}


