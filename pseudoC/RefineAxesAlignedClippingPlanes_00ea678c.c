// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RefineAxesAlignedClippingPlanes
// Entry Point: 00ea678c
// Size: 872 bytes
// Signature: undefined __cdecl RefineAxesAlignedClippingPlanes(VoxelSet * param_1, Plane * param_2, short param_3, SArray * param_4)


/* VHACD::RefineAxesAlignedClippingPlanes(VHACD::VoxelSet const&, VHACD::Plane const&, short,
   VHACD::SArray<VHACD::Plane, 64ul>&) */

void VHACD::RefineAxesAlignedClippingPlanes
               (VoxelSet *param_1,Plane *param_2,short param_3,SArray *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  SArray *pSVar4;
  int iVar5;
  short sVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  SArray *pSVar10;
  undefined8 *puVar11;
  ulong uVar12;
  SArray *pSVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  double dVar17;
  
  if (*(int *)(param_2 + 0x20) == 1) {
    iVar5 = (int)*(short *)(param_2 + 0x24) - (int)param_3;
    iVar3 = (int)*(short *)(param_2 + 0x24) + (int)param_3;
    iVar2 = (int)*(short *)(param_1 + 0xa52);
    if (*(short *)(param_1 + 0xa52) <= iVar5) {
      iVar2 = iVar5;
    }
    iVar5 = (int)*(short *)(param_1 + 0xa58);
    if (iVar3 <= *(short *)(param_1 + 0xa58)) {
      iVar5 = iVar3;
    }
    sVar1 = (short)iVar2;
    while (sVar1 <= (short)iVar5) {
      uVar14 = *(ulong *)(param_4 + 0xa08);
      uVar15 = *(ulong *)(param_4 + 0xa10);
      uVar16 = *(undefined8 *)(param_1 + 0x9b8);
      dVar17 = *(double *)(param_1 + 0x9a8);
      if (uVar14 == uVar15) {
        uVar15 = uVar14 << 1;
        uVar12 = uVar14 * 0x50;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        if (SUB168(auVar8 * ZEXT816(0x28),8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        pSVar10 = (SArray *)operator_new__(uVar12);
        pSVar13 = *(SArray **)(param_4 + 0xa00);
        pSVar4 = param_4;
        if (uVar14 != 0x40) {
          pSVar4 = pSVar13;
        }
        memcpy(pSVar10,pSVar4,uVar14 * 0x28);
        if (pSVar13 != (SArray *)0x0) {
          operator_delete__(pSVar13);
          uVar14 = *(ulong *)(param_4 + 0xa08);
        }
        *(SArray **)(param_4 + 0xa00) = pSVar10;
        *(ulong *)(param_4 + 0xa10) = uVar15;
      }
      else {
        pSVar10 = *(SArray **)(param_4 + 0xa00);
      }
      sVar6 = (short)iVar2;
      pSVar4 = param_4;
      if (uVar15 != 0x40) {
        pSVar4 = pSVar10;
      }
      puVar11 = (undefined8 *)(pSVar4 + uVar14 * 0x28);
      *(ulong *)(param_4 + 0xa08) = uVar14 + 1;
      *(short *)((long)puVar11 + 0x24) = sVar6;
      iVar2 = iVar2 + 1;
      puVar11[1] = 0x3ff0000000000000;
      *puVar11 = 0;
      sVar1 = (short)iVar2;
      puVar11[2] = 0;
      uVar16 = NEON_fnmadd((double)(int)sVar6 + 0.5,uVar16,-dVar17);
      *(undefined4 *)(puVar11 + 4) = 1;
      puVar11[3] = uVar16;
    }
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    iVar5 = (int)*(short *)(param_2 + 0x24) - (int)param_3;
    iVar3 = (int)*(short *)(param_2 + 0x24) + (int)param_3;
    iVar2 = (int)*(short *)(param_1 + 0xa50);
    if (*(short *)(param_1 + 0xa50) <= iVar5) {
      iVar2 = iVar5;
    }
    iVar5 = (int)*(short *)(param_1 + 0xa56);
    if (iVar3 <= *(short *)(param_1 + 0xa56)) {
      iVar5 = iVar3;
    }
    sVar1 = (short)iVar2;
    while (sVar1 <= (short)iVar5) {
      uVar14 = *(ulong *)(param_4 + 0xa08);
      uVar15 = *(ulong *)(param_4 + 0xa10);
      uVar16 = *(undefined8 *)(param_1 + 0x9b8);
      dVar17 = *(double *)(param_1 + 0x9a0);
      if (uVar14 == uVar15) {
        uVar15 = uVar14 << 1;
        uVar12 = uVar14 * 0x50;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        if (SUB168(auVar7 * ZEXT816(0x28),8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        pSVar10 = (SArray *)operator_new__(uVar12);
        pSVar13 = *(SArray **)(param_4 + 0xa00);
        pSVar4 = param_4;
        if (uVar14 != 0x40) {
          pSVar4 = pSVar13;
        }
        memcpy(pSVar10,pSVar4,uVar14 * 0x28);
        if (pSVar13 != (SArray *)0x0) {
          operator_delete__(pSVar13);
          uVar14 = *(ulong *)(param_4 + 0xa08);
        }
        *(SArray **)(param_4 + 0xa00) = pSVar10;
        *(ulong *)(param_4 + 0xa10) = uVar15;
      }
      else {
        pSVar10 = *(SArray **)(param_4 + 0xa00);
      }
      sVar6 = (short)iVar2;
      pSVar4 = param_4;
      if (uVar15 != 0x40) {
        pSVar4 = pSVar10;
      }
      puVar11 = (undefined8 *)(pSVar4 + uVar14 * 0x28);
      *(ulong *)(param_4 + 0xa08) = uVar14 + 1;
      *(short *)((long)puVar11 + 0x24) = sVar6;
      iVar2 = iVar2 + 1;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0x3ff0000000000000;
      sVar1 = (short)iVar2;
      *(undefined4 *)(puVar11 + 4) = 0;
      uVar16 = NEON_fnmadd((double)(int)sVar6 + 0.5,uVar16,-dVar17);
      puVar11[3] = uVar16;
    }
  }
  else {
    iVar5 = (int)*(short *)(param_2 + 0x24) - (int)param_3;
    iVar3 = (int)*(short *)(param_2 + 0x24) + (int)param_3;
    iVar2 = (int)*(short *)(param_1 + 0xa54);
    if (*(short *)(param_1 + 0xa54) <= iVar5) {
      iVar2 = iVar5;
    }
    iVar5 = (int)*(short *)(param_1 + 0xa5a);
    if (iVar3 <= *(short *)(param_1 + 0xa5a)) {
      iVar5 = iVar3;
    }
    sVar1 = (short)iVar2;
    while (sVar1 <= (short)iVar5) {
      uVar15 = *(ulong *)(param_4 + 0xa08);
      uVar14 = *(ulong *)(param_4 + 0xa10);
      uVar16 = *(undefined8 *)(param_1 + 0x9b8);
      dVar17 = *(double *)(param_1 + 0x9b0);
      if (uVar15 == uVar14) {
        uVar14 = uVar15 << 1;
        uVar12 = uVar15 * 0x50;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar14;
        if (SUB168(auVar9 * ZEXT816(0x28),8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        pSVar10 = (SArray *)operator_new__(uVar12);
        pSVar13 = *(SArray **)(param_4 + 0xa00);
        pSVar4 = param_4;
        if (uVar15 != 0x40) {
          pSVar4 = pSVar13;
        }
        memcpy(pSVar10,pSVar4,uVar15 * 0x28);
        if (pSVar13 != (SArray *)0x0) {
          operator_delete__(pSVar13);
          uVar15 = *(ulong *)(param_4 + 0xa08);
        }
        *(SArray **)(param_4 + 0xa00) = pSVar10;
        *(ulong *)(param_4 + 0xa10) = uVar14;
      }
      else {
        pSVar10 = *(SArray **)(param_4 + 0xa00);
      }
      sVar6 = (short)iVar2;
      pSVar4 = param_4;
      if (uVar14 != 0x40) {
        pSVar4 = pSVar10;
      }
      puVar11 = (undefined8 *)(pSVar4 + uVar15 * 0x28);
      *(ulong *)(param_4 + 0xa08) = uVar15 + 1;
      *(short *)((long)puVar11 + 0x24) = sVar6;
      iVar2 = iVar2 + 1;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0x3ff0000000000000;
      sVar1 = (short)iVar2;
      *(undefined4 *)(puVar11 + 4) = 2;
      uVar16 = NEON_fnmadd((double)(int)sVar6 + 0.5,uVar16,-dVar17);
      puVar11[3] = uVar16;
    }
  }
  return;
}


