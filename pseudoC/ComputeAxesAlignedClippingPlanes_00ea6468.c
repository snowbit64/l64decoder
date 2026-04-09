// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeAxesAlignedClippingPlanes
// Entry Point: 00ea6468
// Size: 804 bytes
// Signature: undefined __cdecl ComputeAxesAlignedClippingPlanes(VoxelSet * param_1, short param_2, SArray * param_3)


/* VHACD::ComputeAxesAlignedClippingPlanes(VHACD::VoxelSet const&, short,
   VHACD::SArray<VHACD::Plane, 64ul>&) */

void VHACD::ComputeAxesAlignedClippingPlanes(VoxelSet *param_1,short param_2,SArray *param_3)

{
  SArray *pSVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  short sVar10;
  SArray *pSVar11;
  undefined8 *puVar12;
  ulong uVar13;
  SArray *pSVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  double dVar18;
  
  sVar2 = *(short *)(param_1 + 0xa58);
  sVar3 = *(short *)(param_1 + 0xa56);
  sVar4 = *(short *)(param_1 + 0xa52);
  sVar5 = *(short *)(param_1 + 0xa54);
  sVar6 = *(short *)(param_1 + 0xa5a);
  sVar10 = *(short *)(param_1 + 0xa50);
  while (sVar10 <= sVar3) {
    uVar16 = *(ulong *)(param_3 + 0xa08);
    uVar15 = *(ulong *)(param_3 + 0xa10);
    uVar17 = *(undefined8 *)(param_1 + 0x9b8);
    dVar18 = *(double *)(param_1 + 0x9a0);
    if (uVar16 == uVar15) {
      uVar15 = uVar16 << 1;
      uVar13 = uVar16 * 0x50;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      if (SUB168(auVar7 * ZEXT816(0x28),8) != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      pSVar11 = (SArray *)operator_new__(uVar13);
      pSVar14 = *(SArray **)(param_3 + 0xa00);
      pSVar1 = param_3;
      if (uVar16 != 0x40) {
        pSVar1 = pSVar14;
      }
      memcpy(pSVar11,pSVar1,uVar16 * 0x28);
      if (pSVar14 != (SArray *)0x0) {
        operator_delete__(pSVar14);
        uVar16 = *(ulong *)(param_3 + 0xa08);
      }
      *(SArray **)(param_3 + 0xa00) = pSVar11;
      *(ulong *)(param_3 + 0xa10) = uVar15;
    }
    else {
      pSVar11 = *(SArray **)(param_3 + 0xa00);
    }
    pSVar1 = param_3;
    if (uVar15 != 0x40) {
      pSVar1 = pSVar11;
    }
    puVar12 = (undefined8 *)(pSVar1 + uVar16 * 0x28);
    *(ulong *)(param_3 + 0xa08) = uVar16 + 1;
    *(short *)((long)puVar12 + 0x24) = sVar10;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0x3ff0000000000000;
    *(undefined4 *)(puVar12 + 4) = 0;
    uVar17 = NEON_fnmadd((double)(int)sVar10 + 0.5,uVar17,-dVar18);
    puVar12[3] = uVar17;
    sVar10 = sVar10 + param_2;
  }
  while (sVar4 <= sVar2) {
    uVar16 = *(ulong *)(param_3 + 0xa08);
    uVar15 = *(ulong *)(param_3 + 0xa10);
    uVar17 = *(undefined8 *)(param_1 + 0x9b8);
    dVar18 = *(double *)(param_1 + 0x9a8);
    if (uVar16 == uVar15) {
      uVar15 = uVar16 << 1;
      uVar13 = uVar16 * 0x50;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      if (SUB168(auVar8 * ZEXT816(0x28),8) != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      pSVar11 = (SArray *)operator_new__(uVar13);
      pSVar14 = *(SArray **)(param_3 + 0xa00);
      pSVar1 = param_3;
      if (uVar16 != 0x40) {
        pSVar1 = pSVar14;
      }
      memcpy(pSVar11,pSVar1,uVar16 * 0x28);
      if (pSVar14 != (SArray *)0x0) {
        operator_delete__(pSVar14);
        uVar16 = *(ulong *)(param_3 + 0xa08);
      }
      *(SArray **)(param_3 + 0xa00) = pSVar11;
      *(ulong *)(param_3 + 0xa10) = uVar15;
    }
    else {
      pSVar11 = *(SArray **)(param_3 + 0xa00);
    }
    pSVar1 = param_3;
    if (uVar15 != 0x40) {
      pSVar1 = pSVar11;
    }
    puVar12 = (undefined8 *)(pSVar1 + uVar16 * 0x28);
    *(ulong *)(param_3 + 0xa08) = uVar16 + 1;
    *(short *)((long)puVar12 + 0x24) = sVar4;
    puVar12[1] = 0x3ff0000000000000;
    *puVar12 = 0;
    puVar12[2] = 0;
    uVar17 = NEON_fnmadd((double)(int)sVar4 + 0.5,uVar17,-dVar18);
    *(undefined4 *)(puVar12 + 4) = 1;
    puVar12[3] = uVar17;
    sVar4 = sVar4 + param_2;
  }
  while (sVar5 <= sVar6) {
    uVar16 = *(ulong *)(param_3 + 0xa08);
    uVar15 = *(ulong *)(param_3 + 0xa10);
    uVar17 = *(undefined8 *)(param_1 + 0x9b8);
    dVar18 = *(double *)(param_1 + 0x9b0);
    if (uVar16 == uVar15) {
      uVar15 = uVar16 << 1;
      uVar13 = uVar16 * 0x50;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar15;
      if (SUB168(auVar9 * ZEXT816(0x28),8) != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      pSVar11 = (SArray *)operator_new__(uVar13);
      pSVar14 = *(SArray **)(param_3 + 0xa00);
      pSVar1 = param_3;
      if (uVar16 != 0x40) {
        pSVar1 = pSVar14;
      }
      memcpy(pSVar11,pSVar1,uVar16 * 0x28);
      if (pSVar14 != (SArray *)0x0) {
        operator_delete__(pSVar14);
        uVar16 = *(ulong *)(param_3 + 0xa08);
      }
      *(SArray **)(param_3 + 0xa00) = pSVar11;
      *(ulong *)(param_3 + 0xa10) = uVar15;
    }
    else {
      pSVar11 = *(SArray **)(param_3 + 0xa00);
    }
    pSVar1 = param_3;
    if (uVar15 != 0x40) {
      pSVar1 = pSVar11;
    }
    puVar12 = (undefined8 *)(pSVar1 + uVar16 * 0x28);
    *(ulong *)(param_3 + 0xa08) = uVar16 + 1;
    *(short *)((long)puVar12 + 0x24) = sVar5;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0x3ff0000000000000;
    uVar17 = NEON_fnmadd((double)(int)sVar5 + 0.5,uVar17,-dVar18);
    *(undefined4 *)(puVar12 + 4) = 2;
    puVar12[3] = uVar17;
    sVar5 = sVar5 + param_2;
  }
  return;
}


