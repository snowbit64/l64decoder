// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btAlignedObjectArray
// Entry Point: 00baf270
// Size: 444 bytes
// Signature: undefined __thiscall btAlignedObjectArray(btAlignedObjectArray<int> * this, btAlignedObjectArray * param_1)


/* btAlignedObjectArray<int>::btAlignedObjectArray(btAlignedObjectArray<int> const&) */

void __thiscall
btAlignedObjectArray<int>::btAlignedObjectArray
          (btAlignedObjectArray<int> *this,btAlignedObjectArray *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *__s;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  uVar1 = *(uint *)(param_1 + 4);
  uVar14 = (ulong)uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (btAlignedObjectArray<int>)0x1;
  if ((int)uVar1 < 1) {
    *(uint *)(this + 4) = uVar1;
    return;
  }
  uVar13 = uVar14 * 4;
  __s = (void *)btAlignedAllocInternal(uVar13,0x10);
  uVar2 = *(uint *)(this + 4);
  uVar5 = (ulong)uVar2;
  pvVar4 = *(void **)(this + 0x10);
  if ((int)uVar2 < 1) {
    if (pvVar4 == (void *)0x0) goto LAB_00baf36c;
  }
  else {
    if ((uVar2 < 8) ||
       ((__s < (void *)((long)pvVar4 + uVar5 * 4) && (pvVar4 < (void *)((long)__s + uVar5 * 4))))) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar5 & 0xfffffff8;
      puVar10 = (undefined8 *)((long)__s + 0x10);
      puVar11 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar12 = uVar8;
      do {
        puVar3 = puVar11 + -1;
        uVar15 = puVar11[-2];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 8;
        puVar10[-1] = *puVar3;
        puVar10[-2] = uVar15;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar8 == uVar5) goto LAB_00baf360;
    }
    lVar6 = uVar5 - uVar8;
    puVar7 = (undefined4 *)((long)pvVar4 + uVar8 * 4);
    puVar9 = (undefined4 *)((long)__s + uVar8 * 4);
    do {
      lVar6 = lVar6 + -1;
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar6 != 0);
  }
LAB_00baf360:
  if (this[0x18] != (btAlignedObjectArray<int>)0x0) {
    btAlignedFreeInternal(pvVar4);
  }
LAB_00baf36c:
  *(void **)(this + 0x10) = __s;
  this[0x18] = (btAlignedObjectArray<int>)0x1;
  *(uint *)(this + 8) = uVar1;
  memset(__s,0,(long)(int)uVar1 << 2);
  uVar5 = *(ulong *)(this + 0x10);
  *(uint *)(this + 4) = uVar1;
  if (0 < (int)uVar1) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    if ((uVar1 < 8) || ((uVar5 < uVar8 + uVar13 && (uVar8 < uVar5 + uVar13)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar14 & 0xfffffff8;
      puVar10 = (undefined8 *)(uVar5 + 0x10);
      puVar11 = (undefined8 *)(uVar8 + 0x10);
      uVar12 = uVar13;
      do {
        puVar3 = puVar11 + -1;
        uVar15 = puVar11[-2];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 8;
        puVar10[-1] = *puVar3;
        puVar10[-2] = uVar15;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar13 == uVar14) {
        return;
      }
    }
    lVar6 = uVar14 - uVar13;
    puVar7 = (undefined4 *)(uVar5 + uVar13 * 4);
    puVar9 = (undefined4 *)(uVar8 + uVar13 * 4);
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar9;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar6 != 0);
  }
  return;
}


