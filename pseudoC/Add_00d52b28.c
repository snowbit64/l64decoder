// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Add
// Entry Point: 00d52b28
// Size: 400 bytes
// Signature: undefined __thiscall Add(CircularList<HACD::TMMEdge> * this, TMMEdge * param_1)


/* HACD::CircularList<HACD::TMMEdge>::Add(HACD::TMMEdge const*) */

undefined8 __thiscall
HACD::CircularList<HACD::TMMEdge>::Add(CircularList<HACD::TMMEdge> *this,TMMEdge *param_1)

{
  HeapManager *pHVar1;
  undefined8 uVar2;
  TMMEdge *pTVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(long *)(this + 0x10) == 0) {
    pHVar1 = *(HeapManager **)(this + 0x18);
    if (param_1 == (TMMEdge *)0x0) {
      if (pHVar1 == (HeapManager *)0x0) {
        pTVar3 = (TMMEdge *)operator_new(0x40);
        TMMEdge::TMMEdge(pTVar3);
        *(TMMEdge **)(this + 8) = pTVar3;
      }
      else {
        uVar2 = heap_malloc(pHVar1,0x40);
        *(undefined8 *)(this + 8) = uVar2;
        TMMEdge::Initialize();
      }
    }
    else if (pHVar1 == (HeapManager *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x40);
      TMMEdge::TMMEdge((TMMEdge *)puVar4);
      uVar2 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      puVar4[1] = *(undefined8 *)(param_1 + 8);
      *puVar4 = uVar2;
      puVar4[3] = uVar8;
      puVar4[2] = uVar7;
      *(undefined8 **)(this + 8) = puVar4;
      puVar4[5] = uVar10;
      puVar4[4] = uVar9;
    }
    else {
      uVar2 = heap_malloc(pHVar1,0x40);
      *(undefined8 *)(this + 8) = uVar2;
      TMMEdge::Initialize();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = *(undefined8 **)(this + 8);
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)param_1;
      puVar4[3] = *(undefined8 *)(param_1 + 0x18);
      puVar4[2] = uVar8;
      puVar4[5] = uVar7;
      puVar4[4] = uVar2;
      puVar4[1] = uVar10;
      *puVar4 = uVar9;
    }
    lVar5 = *(long *)(this + 8);
    *(long *)(lVar5 + 0x38) = lVar5;
    *(long *)(*(long *)(this + 8) + 0x30) = lVar5;
  }
  else {
    lVar5 = *(long *)(this + 8);
    pHVar1 = *(HeapManager **)(this + 0x18);
    lVar6 = *(long *)(lVar5 + 0x30);
    if (param_1 == (TMMEdge *)0x0) {
      if (pHVar1 == (HeapManager *)0x0) {
        pTVar3 = (TMMEdge *)operator_new(0x40);
        TMMEdge::TMMEdge(pTVar3);
        *(TMMEdge **)(this + 8) = pTVar3;
      }
      else {
        uVar2 = heap_malloc(pHVar1,0x40);
        *(undefined8 *)(this + 8) = uVar2;
        TMMEdge::Initialize();
      }
    }
    else if (pHVar1 == (HeapManager *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x40);
      TMMEdge::TMMEdge((TMMEdge *)puVar4);
      uVar2 = *(undefined8 *)param_1;
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      puVar4[1] = *(undefined8 *)(param_1 + 8);
      *puVar4 = uVar2;
      puVar4[3] = uVar8;
      puVar4[2] = uVar7;
      *(undefined8 **)(this + 8) = puVar4;
      puVar4[5] = uVar10;
      puVar4[4] = uVar9;
    }
    else {
      uVar2 = heap_malloc(pHVar1,0x40);
      *(undefined8 *)(this + 8) = uVar2;
      TMMEdge::Initialize();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = *(undefined8 **)(this + 8);
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar9 = *(undefined8 *)param_1;
      puVar4[3] = *(undefined8 *)(param_1 + 0x18);
      puVar4[2] = uVar8;
      puVar4[5] = uVar7;
      puVar4[4] = uVar2;
      puVar4[1] = uVar10;
      *puVar4 = uVar9;
    }
    *(long *)(*(long *)(this + 8) + 0x30) = lVar6;
    *(long *)(*(long *)(this + 8) + 0x38) = lVar5;
    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(this + 8);
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(this + 8);
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return *(undefined8 *)(this + 8);
}


