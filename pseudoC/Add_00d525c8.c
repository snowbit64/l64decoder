// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Add
// Entry Point: 00d525c8
// Size: 480 bytes
// Signature: undefined __thiscall Add(CircularList<HACD::TMMVertex> * this, TMMVertex * param_1)


/* HACD::CircularList<HACD::TMMVertex>::Add(HACD::TMMVertex const*) */

undefined8 __thiscall
HACD::CircularList<HACD::TMMVertex>::Add(CircularList<HACD::TMMVertex> *this,TMMVertex *param_1)

{
  HeapManager *pHVar1;
  undefined8 uVar2;
  TMMVertex *pTVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(this + 0x10) == 0) {
    pHVar1 = *(HeapManager **)(this + 0x18);
    if (param_1 == (TMMVertex *)0x0) {
      if (pHVar1 == (HeapManager *)0x0) {
        pTVar3 = (TMMVertex *)operator_new(0x48);
        TMMVertex::TMMVertex(pTVar3);
        *(TMMVertex **)(this + 8) = pTVar3;
      }
      else {
        uVar2 = heap_malloc(pHVar1,0x48);
        *(undefined8 *)(this + 8) = uVar2;
        TMMVertex::Initialize();
      }
    }
    else if (pHVar1 == (HeapManager *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x48);
      TMMVertex::TMMVertex((TMMVertex *)puVar4);
      uVar2 = *(undefined8 *)param_1;
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x2a);
      uVar10 = *(undefined8 *)(param_1 + 0x22);
      puVar4[1] = *(undefined8 *)(param_1 + 8);
      *puVar4 = uVar2;
      puVar4[2] = uVar7;
      puVar4[4] = uVar9;
      puVar4[3] = uVar8;
      *(undefined8 *)((long)puVar4 + 0x2a) = uVar11;
      *(undefined8 *)((long)puVar4 + 0x22) = uVar10;
      *(undefined8 **)(this + 8) = puVar4;
    }
    else {
      uVar2 = heap_malloc(pHVar1,0x48);
      *(undefined8 *)(this + 8) = uVar2;
      TMMVertex::Initialize();
      puVar4 = *(undefined8 **)(this + 8);
      *puVar4 = *(undefined8 *)param_1;
      puVar4[1] = *(undefined8 *)(param_1 + 8);
      puVar4[2] = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x22);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)((long)puVar4 + 0x2a) = *(undefined8 *)(param_1 + 0x2a);
      *(undefined8 *)((long)puVar4 + 0x22) = uVar2;
      puVar4[4] = uVar8;
      puVar4[3] = uVar7;
    }
    lVar5 = *(long *)(this + 8);
    *(long *)(lVar5 + 0x40) = lVar5;
    *(long *)(*(long *)(this + 8) + 0x38) = lVar5;
  }
  else {
    lVar5 = *(long *)(this + 8);
    pHVar1 = *(HeapManager **)(this + 0x18);
    lVar6 = *(long *)(lVar5 + 0x38);
    if (param_1 == (TMMVertex *)0x0) {
      if (pHVar1 == (HeapManager *)0x0) {
        pTVar3 = (TMMVertex *)operator_new(0x48);
        TMMVertex::TMMVertex(pTVar3);
        *(TMMVertex **)(this + 8) = pTVar3;
      }
      else {
        uVar2 = heap_malloc(pHVar1,0x48);
        *(undefined8 *)(this + 8) = uVar2;
        TMMVertex::Initialize();
      }
    }
    else if (pHVar1 == (HeapManager *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x48);
      TMMVertex::TMMVertex((TMMVertex *)puVar4);
      uVar2 = *(undefined8 *)param_1;
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x2a);
      uVar10 = *(undefined8 *)(param_1 + 0x22);
      puVar4[1] = *(undefined8 *)(param_1 + 8);
      *puVar4 = uVar2;
      puVar4[2] = uVar7;
      puVar4[4] = uVar9;
      puVar4[3] = uVar8;
      *(undefined8 *)((long)puVar4 + 0x2a) = uVar11;
      *(undefined8 *)((long)puVar4 + 0x22) = uVar10;
      *(undefined8 **)(this + 8) = puVar4;
    }
    else {
      uVar2 = heap_malloc(pHVar1,0x48);
      *(undefined8 *)(this + 8) = uVar2;
      TMMVertex::Initialize();
      puVar4 = *(undefined8 **)(this + 8);
      *puVar4 = *(undefined8 *)param_1;
      puVar4[1] = *(undefined8 *)(param_1 + 8);
      puVar4[2] = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x22);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)((long)puVar4 + 0x2a) = *(undefined8 *)(param_1 + 0x2a);
      *(undefined8 *)((long)puVar4 + 0x22) = uVar2;
      puVar4[4] = uVar8;
      puVar4[3] = uVar7;
    }
    *(long *)(*(long *)(this + 8) + 0x38) = lVar6;
    *(long *)(*(long *)(this + 8) + 0x40) = lVar5;
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(this + 8);
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(this + 8);
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return *(undefined8 *)(this + 8);
}


