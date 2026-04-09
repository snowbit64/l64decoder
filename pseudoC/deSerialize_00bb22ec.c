// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deSerialize
// Entry Point: 00bb22ec
// Size: 488 bytes
// Signature: undefined __thiscall deSerialize(BtTriangleInfoMap * this, BtTriangleInfoMapData * param_1)


/* BtTriangleInfoMap::deSerialize(BtTriangleInfoMapData&) */

void __thiscall
BtTriangleInfoMap::deSerialize(BtTriangleInfoMap *this,BtTriangleInfoMapData *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar15 = *(undefined8 *)param_1;
  uVar14 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar15;
  uVar15 = NEON_rev64(uVar14,4);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = uVar15;
  if (*(void **)(this + 0x28) == (void *)0x0) {
    uVar1 = (uint)uVar14;
  }
  else {
    operator_delete__(*(void **)(this + 0x28));
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  uVar12 = (ulong)(int)uVar1;
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if (uVar12 >> 0x3d != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar3 = (undefined8 *)operator_new__(uVar5);
  if (uVar1 == 0) {
    *(undefined8 **)(this + 0x28) = puVar3;
    goto LAB_00bb241c;
  }
  uVar5 = uVar12 - 1 & 0x1fffffffffffffff;
  puVar6 = puVar3;
  if (uVar5 == 0) {
LAB_00bb23b0:
    do {
      *(undefined4 *)((long)puVar6 + 2) = 0x7fff7fff;
      *(undefined2 *)((long)puVar6 + 6) = 0x7fff;
      puVar7 = puVar6 + 1;
      *(undefined *)puVar6 = 0;
      puVar6 = puVar7;
    } while (puVar7 != puVar3 + uVar12);
  }
  else {
    uVar5 = uVar5 + 1;
    uVar11 = uVar5 & 0x3ffffffffffffffe;
    puVar6 = puVar3 + 1;
    uVar13 = uVar11;
    do {
      uVar13 = uVar13 - 2;
      *(undefined4 *)((long)puVar6 + -6) = 0x7fff7fff;
      *(undefined2 *)((long)puVar6 + 2) = 0x7fff;
      *(undefined4 *)((long)puVar6 + 4) = 0x7fff7fff;
      *(undefined2 *)((long)puVar6 + -2) = 0x7fff;
      *(undefined *)(puVar6 + -1) = 0;
      *(undefined *)puVar6 = 0;
      puVar6 = puVar6 + 2;
    } while (uVar13 != 0);
    puVar6 = puVar3 + uVar11;
    if (uVar5 != uVar11) goto LAB_00bb23b0;
  }
  *(undefined8 **)(this + 0x28) = puVar3;
  if ((0 < (int)uVar1) &&
     (iVar2 = *(int *)(param_1 + 0x14), *puVar3 = **(undefined8 **)(param_1 + 0x20), 1 < iVar2)) {
    lVar8 = 1;
    do {
      lVar10 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      *(undefined8 *)(*(long *)(this + 0x28) + lVar10) =
           *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10);
    } while (lVar8 < *(int *)(param_1 + 0x14));
  }
LAB_00bb241c:
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar12 = (ulong)(int)uVar1;
  uVar13 = uVar12 * 4;
  uVar5 = uVar13;
  if (uVar12 >> 0x3e != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new__(uVar5);
  *(void **)(this + 0x30) = pvVar4;
  if (0 < (int)uVar1) {
    pvVar9 = *(void **)(param_1 + 0x28);
    if (uVar1 < 8) {
      uVar5 = 0;
    }
    else if ((pvVar4 < (void *)((long)pvVar9 + uVar13)) &&
            (pvVar9 < (void *)((long)pvVar4 + uVar13))) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar12 & 0xfffffffffffffff8;
      puVar3 = (undefined8 *)((long)pvVar9 + 0x10);
      puVar6 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar13 = uVar5;
      do {
        puVar7 = puVar3 + -1;
        uVar14 = puVar3[-2];
        uVar16 = puVar3[1];
        uVar15 = *puVar3;
        puVar3 = puVar3 + 4;
        uVar13 = uVar13 - 8;
        puVar6[-1] = *puVar7;
        puVar6[-2] = uVar14;
        puVar6[1] = uVar16;
        *puVar6 = uVar15;
        puVar6 = puVar6 + 4;
      } while (uVar13 != 0);
      if (uVar5 == uVar12) {
        return;
      }
    }
    do {
      lVar8 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)((long)pvVar4 + lVar8) = *(undefined4 *)((long)pvVar9 + lVar8);
    } while ((long)uVar5 < (long)uVar12);
  }
  return;
}


