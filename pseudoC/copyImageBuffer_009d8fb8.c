// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyImageBuffer
// Entry Point: 009d8fb8
// Size: 208 bytes
// Signature: undefined __thiscall copyImageBuffer(ProceduralPlacementMask * this, ProceduralPlacementMask * param_1)


/* ProceduralPlacementMask::copyImageBuffer(ProceduralPlacementMask&) const */

void __thiscall
ProceduralPlacementMask::copyImageBuffer
          (ProceduralPlacementMask *this,ProceduralPlacementMask *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (*(long *)(this + 0x58) != 0) {
    uVar1 = *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x50);
    uVar13 = (ulong)uVar1;
    if (*(void **)(param_1 + 0x58) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x58));
    }
    uVar12 = uVar13 * 4;
    pvVar4 = operator_new__(uVar12);
    *(void **)(param_1 + 0x58) = pvVar4;
    if (uVar1 != 0) {
      pvVar5 = *(void **)(this + 0x58);
      if ((uVar1 < 8) ||
         (bVar3 = (void *)((long)pvVar5 + uVar12) <= pvVar4,
         (!bVar3 && pvVar5 <= (void *)((long)pvVar4 + uVar12)) &&
         (bVar3 || (void *)((long)pvVar4 + uVar12) != pvVar5))) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar13 & 0xfffffff8;
        puVar8 = (undefined8 *)((long)pvVar5 + 0x10);
        puVar10 = (undefined8 *)((long)pvVar4 + 0x10);
        uVar11 = uVar12;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar16 = puVar8[1];
          uVar15 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar11 = uVar11 - 8;
          puVar10[-1] = *puVar2;
          puVar10[-2] = uVar14;
          puVar10[1] = uVar16;
          *puVar10 = uVar15;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        if (uVar12 == uVar13) {
          return;
        }
      }
      lVar7 = uVar13 - uVar12;
      puVar6 = (undefined4 *)((long)pvVar5 + uVar12 * 4);
      puVar9 = (undefined4 *)((long)pvVar4 + uVar12 * 4);
      do {
        lVar7 = lVar7 + -1;
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar7 != 0);
    }
  }
  return;
}


