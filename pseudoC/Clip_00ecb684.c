// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clip
// Entry Point: 00ecb684
// Size: 1172 bytes
// Signature: undefined __thiscall Clip(VoxelSet * this, Plane * param_1, PrimitiveSet * param_2, PrimitiveSet * param_3)


/* VHACD::VoxelSet::Clip(VHACD::Plane const&, VHACD::PrimitiveSet*, VHACD::PrimitiveSet*) const */

void __thiscall
VHACD::VoxelSet::Clip(VoxelSet *this,Plane *param_1,PrimitiveSet *param_2,PrimitiveSet *param_3)

{
  PrimitiveSet *pPVar1;
  PrimitiveSet *pPVar2;
  VoxelSet *pVVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  PrimitiveSet *pPVar8;
  PrimitiveSet *pPVar9;
  PrimitiveSet *pPVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  
  uVar11 = *(ulong *)(this + 0xa08);
  if (uVar11 == 0) {
    return;
  }
  uVar15 = *(undefined8 *)(this + 0x9a0);
  uVar12 = *(ulong *)(param_2 + 0xa10);
  *(undefined8 *)(param_2 + 0x9a0) = uVar15;
  pPVar1 = param_2 + 0x9c0;
  *(undefined8 *)(param_3 + 0x9a0) = uVar15;
  uVar15 = *(undefined8 *)(this + 0x9a8);
  *(undefined8 *)(param_2 + 0xa08) = 0;
  *(undefined8 *)(param_3 + 0xa08) = 0;
  *(undefined8 *)(param_2 + 0x9a8) = uVar15;
  *(undefined8 *)(param_3 + 0x9a8) = uVar15;
  uVar15 = *(undefined8 *)(this + 0x9b0);
  *(undefined8 *)(param_2 + 0x9b0) = uVar15;
  *(undefined8 *)(param_3 + 0x9b0) = uVar15;
  if (uVar12 < uVar11) {
    uVar5 = uVar11 << 3;
    if (uVar11 >> 0x3d != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5);
    pPVar8 = *(PrimitiveSet **)(param_2 + 0xa00);
    pPVar2 = pPVar1;
    if (uVar12 != 8) {
      pPVar2 = pPVar8;
    }
    memcpy(pvVar4,pPVar2,*(long *)(param_2 + 0xa08) << 3);
    if (pPVar8 != (PrimitiveSet *)0x0) {
      operator_delete__(pPVar8);
    }
    *(void **)(param_2 + 0xa00) = pvVar4;
    *(ulong *)(param_2 + 0xa10) = uVar11;
  }
  uVar12 = *(ulong *)(param_3 + 0xa10);
  pPVar2 = param_3 + 0x9c0;
  if (uVar12 < uVar11) {
    uVar5 = uVar11 << 3;
    if (uVar11 >> 0x3d != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5);
    pPVar9 = *(PrimitiveSet **)(param_3 + 0xa00);
    pPVar8 = pPVar2;
    if (uVar12 != 8) {
      pPVar8 = pPVar9;
    }
    memcpy(pvVar4,pPVar8,*(long *)(param_3 + 0xa08) << 3);
    if (pPVar9 != (PrimitiveSet *)0x0) {
      operator_delete__(pPVar9);
    }
    *(void **)(param_3 + 0xa00) = pvVar4;
    *(ulong *)(param_3 + 0xa10) = uVar11;
  }
  uVar15 = *(undefined8 *)(this + 0x9b8);
  uVar17 = *(undefined8 *)(this + 0xa18);
  lVar13 = 0;
  *(undefined8 *)(param_2 + 0x9b8) = uVar15;
  *(undefined8 *)(param_3 + 0x9b8) = uVar15;
  dVar19 = *(double *)(this + 0x9b8);
  *(undefined8 *)(param_2 + 0xa18) = uVar17;
  *(undefined8 *)(param_3 + 0xa18) = uVar17;
  *(undefined8 *)(param_2 + 0x998) = 0;
  *(undefined8 *)(param_2 + 0x990) = 0;
  *(undefined8 *)(param_3 + 0x998) = 0;
  *(undefined8 *)(param_3 + 0x990) = 0;
  dVar16 = dVar19;
  do {
    pVVar3 = this + 0x9c0;
    if (*(long *)(this + 0xa10) != 8) {
      pVVar3 = *(VoxelSet **)(this + 0xa00);
    }
    uVar12 = *(ulong *)(pVVar3 + lVar13 * 8);
    dVar18 = (double)NEON_fmadd((double)((int)uVar12 >> 0x10),dVar16,*(undefined8 *)(this + 0x9a8));
    uVar17 = NEON_fmadd((double)(int)(short)uVar12,dVar16,*(undefined8 *)(this + 0x9a0));
    uVar15 = NEON_fmadd((double)(int)(short)(uVar12 >> 0x20),dVar16,*(undefined8 *)(this + 0x9b0));
    uVar17 = NEON_fmadd(*(undefined8 *)param_1,uVar17,dVar18 * *(double *)(param_1 + 8));
    dVar16 = (double)NEON_fmadd(*(undefined8 *)(param_1 + 0x10),uVar15,uVar17);
    dVar16 = *(double *)(param_1 + 0x18) + dVar16;
    if (0.0 <= dVar16) {
      uVar14 = *(ulong *)(param_2 + 0xa08);
      uVar5 = *(ulong *)(param_2 + 0xa10);
      if (((uVar12 & 0xffff000000000000) != 0x4000000000000) && (dVar19 < dVar16)) {
        if (uVar14 == uVar5) {
          uVar5 = uVar14 << 1;
          uVar6 = uVar14 << 4;
          if (uVar5 >> 0x3d != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          pPVar8 = (PrimitiveSet *)operator_new__(uVar6);
          pPVar10 = *(PrimitiveSet **)(param_2 + 0xa00);
          pPVar9 = pPVar1;
          if (uVar14 != 8) {
            pPVar9 = pPVar10;
          }
          memcpy(pPVar8,pPVar9,uVar14 << 3);
          if (pPVar10 != (PrimitiveSet *)0x0) {
            operator_delete__(pPVar10);
            uVar14 = *(ulong *)(param_2 + 0xa08);
          }
          *(PrimitiveSet **)(param_2 + 0xa00) = pPVar8;
          *(ulong *)(param_2 + 0xa10) = uVar5;
        }
        else {
          pPVar8 = *(PrimitiveSet **)(param_2 + 0xa00);
        }
        pPVar9 = pPVar1;
        if (uVar5 != 8) {
          pPVar9 = pPVar8;
        }
        *(ulong *)(param_2 + 0xa08) = uVar14 + 1;
        plVar7 = (long *)(param_2 + 0x998);
        goto LAB_00ecba50;
      }
      if (uVar14 == uVar5) {
        uVar5 = uVar14 << 1;
        uVar6 = uVar14 << 4;
        if (uVar5 >> 0x3d != 0) {
          uVar6 = 0xffffffffffffffff;
        }
        pPVar8 = (PrimitiveSet *)operator_new__(uVar6);
        pPVar10 = *(PrimitiveSet **)(param_2 + 0xa00);
        pPVar9 = pPVar1;
        if (uVar14 != 8) {
          pPVar9 = pPVar10;
        }
        memcpy(pPVar8,pPVar9,uVar14 << 3);
        if (pPVar10 != (PrimitiveSet *)0x0) {
          operator_delete__(pPVar10);
          uVar14 = *(ulong *)(param_2 + 0xa08);
        }
        *(PrimitiveSet **)(param_2 + 0xa00) = pPVar8;
        *(ulong *)(param_2 + 0xa10) = uVar5;
      }
      else {
        pPVar8 = *(PrimitiveSet **)(param_2 + 0xa00);
      }
      pPVar9 = pPVar1;
      if (uVar5 != 8) {
        pPVar9 = pPVar8;
      }
      *(ulong *)(param_2 + 0xa08) = uVar14 + 1;
      *(ulong *)(pPVar9 + uVar14 * 8) = uVar12 & 0xffffffffffff | 0x4000000000000;
      *(long *)(param_2 + 0x990) = *(long *)(param_2 + 0x990) + 1;
    }
    else {
      uVar14 = *(ulong *)(param_3 + 0xa08);
      uVar5 = *(ulong *)(param_3 + 0xa10);
      if (((uVar12 & 0xffff000000000000) == 0x4000000000000) || (-dVar16 <= dVar19)) {
        if (uVar14 == uVar5) {
          uVar5 = uVar14 << 1;
          uVar6 = uVar14 << 4;
          if (uVar5 >> 0x3d != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          pPVar8 = (PrimitiveSet *)operator_new__(uVar6);
          pPVar10 = *(PrimitiveSet **)(param_3 + 0xa00);
          pPVar9 = pPVar2;
          if (uVar14 != 8) {
            pPVar9 = pPVar10;
          }
          memcpy(pPVar8,pPVar9,uVar14 << 3);
          if (pPVar10 != (PrimitiveSet *)0x0) {
            operator_delete__(pPVar10);
            uVar14 = *(ulong *)(param_3 + 0xa08);
          }
          *(PrimitiveSet **)(param_3 + 0xa00) = pPVar8;
          *(ulong *)(param_3 + 0xa10) = uVar5;
        }
        else {
          pPVar8 = *(PrimitiveSet **)(param_3 + 0xa00);
        }
        pPVar9 = pPVar2;
        if (uVar5 != 8) {
          pPVar9 = pPVar8;
        }
        *(ulong *)(param_3 + 0xa08) = uVar14 + 1;
        *(ulong *)(pPVar9 + uVar14 * 8) = uVar12 & 0xffffffffffff | 0x4000000000000;
        *(long *)(param_3 + 0x990) = *(long *)(param_3 + 0x990) + 1;
      }
      else {
        if (uVar14 == uVar5) {
          uVar5 = uVar14 << 1;
          uVar6 = uVar14 << 4;
          if (uVar5 >> 0x3d != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          pPVar8 = (PrimitiveSet *)operator_new__(uVar6);
          pPVar10 = *(PrimitiveSet **)(param_3 + 0xa00);
          pPVar9 = pPVar2;
          if (uVar14 != 8) {
            pPVar9 = pPVar10;
          }
          memcpy(pPVar8,pPVar9,uVar14 << 3);
          if (pPVar10 != (PrimitiveSet *)0x0) {
            operator_delete__(pPVar10);
            uVar14 = *(ulong *)(param_3 + 0xa08);
          }
          *(PrimitiveSet **)(param_3 + 0xa00) = pPVar8;
          *(ulong *)(param_3 + 0xa10) = uVar5;
        }
        else {
          pPVar8 = *(PrimitiveSet **)(param_3 + 0xa00);
        }
        pPVar9 = pPVar2;
        if (uVar5 != 8) {
          pPVar9 = pPVar8;
        }
        *(ulong *)(param_3 + 0xa08) = uVar14 + 1;
        plVar7 = (long *)(param_3 + 0x998);
LAB_00ecba50:
        *(ulong *)(pPVar9 + uVar14 * 8) = uVar12;
        *plVar7 = *plVar7 + 1;
      }
    }
    if (uVar11 - 1 == lVar13) {
      return;
    }
    dVar16 = *(double *)(this + 0x9b8);
    lVar13 = lVar13 + 1;
  } while( true );
}


