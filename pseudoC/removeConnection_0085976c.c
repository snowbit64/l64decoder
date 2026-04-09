// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeConnection
// Entry Point: 0085976c
// Size: 420 bytes
// Signature: undefined __thiscall removeConnection(DensityMapSyncer * this, uint param_1)


/* DensityMapSyncer::removeConnection(unsigned int) */

void __thiscall DensityMapSyncer::removeConnection(DensityMapSyncer *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  void **ppvVar16;
  long lVar17;
  
  lVar17 = *(long *)(this + 0x40);
  iVar8 = (int)((ulong)(*(long *)(this + 0x48) - lVar17) >> 4);
  iVar9 = iVar8 + -1;
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + iVar9;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = iVar1 >> 1;
      uVar15 = (ulong)uVar2;
      uVar4 = *(uint *)(lVar17 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4));
      if (uVar4 < param_1) {
        iVar8 = uVar2 + 1;
      }
      else {
        if (uVar4 <= param_1) {
          ppvVar16 = *(void ***)(lVar17 + (ulong)uVar2 * 0x10 + 8);
          uVar6 = (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 4) * -0x5555555555555555;
          if ((int)uVar6 != 0) {
            lVar17 = 0;
            do {
              if (*(void **)((long)*ppvVar16 + lVar17) != (void *)0x0) {
                operator_delete__(*(void **)((long)*ppvVar16 + lVar17));
              }
              lVar17 = lVar17 + 8;
            } while ((uVar6 & 0xffffffff) * 8 - lVar17 != 0);
          }
          if (*ppvVar16 != (void *)0x0) {
            operator_delete__(*ppvVar16);
          }
          if (ppvVar16[1] != (void *)0x0) {
            operator_delete__(ppvVar16[1]);
          }
          lVar17 = *(long *)(this + 0x40);
          pvVar5 = *(void **)(lVar17 + uVar15 * 0x10 + 8);
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
            lVar17 = *(long *)(this + 0x40);
          }
          puVar10 = *(undefined4 **)(this + 0x48);
          puVar7 = (undefined4 *)(lVar17 + uVar15 * 0x10);
          puVar11 = puVar7 + 4;
          if (puVar11 != puVar10) {
            uVar6 = (long)puVar10 + (uVar15 * -0x10 - lVar17) + -0x20;
            if (0xf < uVar6) {
              uVar6 = (uVar6 >> 4) + 1;
              uVar14 = uVar6 & 0x1ffffffffffffffe;
              puVar7 = puVar7 + uVar14 * 4;
              puVar11 = puVar11 + uVar14 * 4;
              puVar12 = (undefined8 *)(lVar17 + uVar15 * 0x10 + 0x18);
              uVar15 = uVar14;
              do {
                uVar15 = uVar15 - 2;
                *(undefined4 *)(puVar12 + -3) = *(undefined4 *)(puVar12 + -1);
                *(undefined4 *)(puVar12 + -1) = *(undefined4 *)(puVar12 + 1);
                puVar12[-2] = *puVar12;
                *puVar12 = puVar12[2];
                puVar12 = puVar12 + 4;
              } while (uVar15 != 0);
              if (uVar6 == uVar14) goto LAB_008598f8;
            }
            do {
              uVar3 = *puVar11;
              uVar13 = *(undefined8 *)(puVar11 + 2);
              puVar11 = puVar11 + 4;
              *puVar7 = uVar3;
              *(undefined8 *)(puVar7 + 2) = uVar13;
              puVar7 = puVar7 + 4;
            } while (puVar11 != puVar10);
          }
LAB_008598f8:
          *(undefined4 **)(this + 0x48) = puVar7;
          return;
        }
        iVar9 = uVar2 - 1;
      }
    } while (iVar8 <= iVar9);
  }
  return;
}


