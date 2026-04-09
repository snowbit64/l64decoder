// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Add
// Entry Point: 00d527a8
// Size: 896 bytes
// Signature: undefined __thiscall Add(CircularList<HACD::TMMTriangle> * this, TMMTriangle * param_1)


/* HACD::CircularList<HACD::TMMTriangle>::Add(HACD::TMMTriangle const*) */

undefined8 __thiscall
HACD::CircularList<HACD::TMMTriangle>::Add
          (CircularList<HACD::TMMTriangle> *this,TMMTriangle *param_1)

{
  undefined8 *puVar1;
  TMMTriangle *pTVar2;
  HeapManager *pHVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TMMTriangle TVar6;
  ulong uVar7;
  TMMTriangle *pTVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(long *)(this + 0x10) == 0) {
    pHVar3 = *(HeapManager **)(this + 0x18);
    if (param_1 == (TMMTriangle *)0x0) {
      if (pHVar3 == (HeapManager *)0x0) {
        pTVar8 = (TMMTriangle *)operator_new(0xe8);
        TMMTriangle::TMMTriangle(pTVar8);
        *(TMMTriangle **)(this + 8) = pTVar8;
      }
      else {
        uVar4 = heap_malloc(pHVar3,0xe8);
        *(undefined8 *)(this + 8) = uVar4;
        TMMTriangle::Initialize();
      }
    }
    else {
      if (pHVar3 == (HeapManager *)0x0) {
        puVar9 = (undefined8 *)operator_new(0xe8);
        TMMTriangle::TMMTriangle((TMMTriangle *)puVar9);
        uVar4 = *(undefined8 *)param_1;
        uVar15 = *(undefined8 *)(param_1 + 0x18);
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        uVar12 = puVar9[0x19];
        puVar9[1] = *(undefined8 *)(param_1 + 8);
        *puVar9 = uVar4;
        puVar9[3] = uVar15;
        puVar9[2] = uVar14;
        uVar13 = *(ulong *)(param_1 + 0xc0);
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        puVar5 = (undefined8 *)puVar9[0x17];
        puVar9[5] = *(undefined8 *)(param_1 + 0x28);
        puVar9[4] = uVar14;
        puVar9[6] = uVar4;
        if (uVar12 < uVar13) {
          if (puVar5 != (undefined8 *)0x0) {
            operator_delete__(puVar5);
            uVar13 = *(ulong *)(param_1 + 0xc0);
          }
          uVar12 = *(ulong *)(param_1 + 200);
          uVar7 = uVar12 << 3;
          if (uVar12 >> 0x3d != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          puVar9[0x19] = uVar12;
          puVar5 = (undefined8 *)operator_new__(uVar7);
          puVar9[0x17] = puVar5;
          uVar7 = uVar12;
        }
        else {
          uVar7 = *(ulong *)(param_1 + 200);
        }
        pTVar8 = *(TMMTriangle **)(param_1 + 0xb8);
        puVar1 = puVar9 + 7;
        if (uVar12 != 0x10) {
          puVar1 = puVar5;
        }
        puVar9[0x18] = uVar13;
        pTVar2 = param_1 + 0x38;
        if (uVar7 != 0x10) {
          pTVar2 = pTVar8;
        }
        memcpy(puVar1,pTVar2,uVar13 << 3);
        TVar6 = param_1[0xd0];
        *(undefined8 **)(this + 8) = puVar9;
      }
      else {
        uVar4 = heap_malloc(pHVar3,0xe8);
        *(undefined8 *)(this + 8) = uVar4;
        TMMTriangle::Initialize();
        uVar16 = *(undefined8 *)(param_1 + 0x10);
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        puVar9 = *(undefined8 **)(this + 8);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)param_1;
        puVar9[3] = *(undefined8 *)(param_1 + 0x18);
        puVar9[2] = uVar16;
        puVar9[5] = uVar15;
        puVar9[4] = uVar14;
        uVar13 = puVar9[0x19];
        puVar9[6] = uVar4;
        puVar5 = (undefined8 *)puVar9[0x17];
        puVar9[1] = uVar18;
        *puVar9 = uVar17;
        uVar12 = *(ulong *)(param_1 + 0xc0);
        if (uVar13 < uVar12) {
          if (puVar5 != (undefined8 *)0x0) {
            operator_delete__(puVar5);
            uVar12 = *(ulong *)(param_1 + 0xc0);
          }
          uVar13 = *(ulong *)(param_1 + 200);
          uVar7 = uVar13 << 3;
          if (uVar13 >> 0x3d != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          puVar9[0x19] = uVar13;
          puVar5 = (undefined8 *)operator_new__(uVar7);
          puVar9[0x17] = puVar5;
        }
        puVar9[0x18] = uVar12;
        puVar1 = puVar9 + 7;
        if (uVar13 != 0x10) {
          puVar1 = puVar5;
        }
        pTVar8 = param_1 + 0x38;
        if (*(long *)(param_1 + 200) != 0x10) {
          pTVar8 = *(TMMTriangle **)(param_1 + 0xb8);
        }
        memcpy(puVar1,pTVar8,uVar12 << 3);
        TVar6 = param_1[0xd0];
      }
      *(TMMTriangle *)(puVar9 + 0x1a) = TVar6;
    }
    lVar10 = *(long *)(this + 8);
    *(long *)(lVar10 + 0xe0) = lVar10;
    *(long *)(*(long *)(this + 8) + 0xd8) = lVar10;
  }
  else {
    lVar10 = *(long *)(this + 8);
    pHVar3 = *(HeapManager **)(this + 0x18);
    lVar11 = *(long *)(lVar10 + 0xd8);
    if (param_1 == (TMMTriangle *)0x0) {
      if (pHVar3 == (HeapManager *)0x0) {
        pTVar8 = (TMMTriangle *)operator_new(0xe8);
        TMMTriangle::TMMTriangle(pTVar8);
        *(TMMTriangle **)(this + 8) = pTVar8;
      }
      else {
        uVar4 = heap_malloc(pHVar3,0xe8);
        *(undefined8 *)(this + 8) = uVar4;
        TMMTriangle::Initialize();
      }
    }
    else {
      if (pHVar3 == (HeapManager *)0x0) {
        puVar9 = (undefined8 *)operator_new(0xe8);
        TMMTriangle::TMMTriangle((TMMTriangle *)puVar9);
        uVar4 = *(undefined8 *)param_1;
        uVar15 = *(undefined8 *)(param_1 + 0x18);
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        uVar12 = puVar9[0x19];
        puVar9[1] = *(undefined8 *)(param_1 + 8);
        *puVar9 = uVar4;
        puVar9[3] = uVar15;
        puVar9[2] = uVar14;
        uVar13 = *(ulong *)(param_1 + 0xc0);
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        puVar5 = (undefined8 *)puVar9[0x17];
        puVar9[5] = *(undefined8 *)(param_1 + 0x28);
        puVar9[4] = uVar14;
        puVar9[6] = uVar4;
        if (uVar12 < uVar13) {
          if (puVar5 != (undefined8 *)0x0) {
            operator_delete__(puVar5);
            uVar13 = *(ulong *)(param_1 + 0xc0);
          }
          uVar12 = *(ulong *)(param_1 + 200);
          uVar7 = uVar12 << 3;
          if (uVar12 >> 0x3d != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          puVar9[0x19] = uVar12;
          puVar5 = (undefined8 *)operator_new__(uVar7);
          puVar9[0x17] = puVar5;
          uVar7 = uVar12;
        }
        else {
          uVar7 = *(ulong *)(param_1 + 200);
        }
        pTVar8 = *(TMMTriangle **)(param_1 + 0xb8);
        puVar1 = puVar9 + 7;
        if (uVar12 != 0x10) {
          puVar1 = puVar5;
        }
        puVar9[0x18] = uVar13;
        pTVar2 = param_1 + 0x38;
        if (uVar7 != 0x10) {
          pTVar2 = pTVar8;
        }
        memcpy(puVar1,pTVar2,uVar13 << 3);
        TVar6 = param_1[0xd0];
        *(undefined8 **)(this + 8) = puVar9;
      }
      else {
        uVar4 = heap_malloc(pHVar3,0xe8);
        *(undefined8 *)(this + 8) = uVar4;
        TMMTriangle::Initialize();
        uVar16 = *(undefined8 *)(param_1 + 0x10);
        uVar15 = *(undefined8 *)(param_1 + 0x28);
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        puVar9 = *(undefined8 **)(this + 8);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        uVar18 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)param_1;
        puVar9[3] = *(undefined8 *)(param_1 + 0x18);
        puVar9[2] = uVar16;
        puVar9[5] = uVar15;
        puVar9[4] = uVar14;
        uVar13 = puVar9[0x19];
        puVar9[6] = uVar4;
        puVar5 = (undefined8 *)puVar9[0x17];
        puVar9[1] = uVar18;
        *puVar9 = uVar17;
        uVar12 = *(ulong *)(param_1 + 0xc0);
        if (uVar13 < uVar12) {
          if (puVar5 != (undefined8 *)0x0) {
            operator_delete__(puVar5);
            uVar12 = *(ulong *)(param_1 + 0xc0);
          }
          uVar13 = *(ulong *)(param_1 + 200);
          uVar7 = uVar13 << 3;
          if (uVar13 >> 0x3d != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          puVar9[0x19] = uVar13;
          puVar5 = (undefined8 *)operator_new__(uVar7);
          puVar9[0x17] = puVar5;
        }
        puVar9[0x18] = uVar12;
        puVar1 = puVar9 + 7;
        if (uVar13 != 0x10) {
          puVar1 = puVar5;
        }
        pTVar8 = param_1 + 0x38;
        if (*(long *)(param_1 + 200) != 0x10) {
          pTVar8 = *(TMMTriangle **)(param_1 + 0xb8);
        }
        memcpy(puVar1,pTVar8,uVar12 << 3);
        TVar6 = param_1[0xd0];
      }
      *(TMMTriangle *)(puVar9 + 0x1a) = TVar6;
    }
    *(long *)(*(long *)(this + 8) + 0xd8) = lVar11;
    *(long *)(*(long *)(this + 8) + 0xe0) = lVar10;
    *(undefined8 *)(lVar10 + 0xd8) = *(undefined8 *)(this + 8);
    *(undefined8 *)(lVar11 + 0xe0) = *(undefined8 *)(this + 8);
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return *(undefined8 *)(this + 8);
}


