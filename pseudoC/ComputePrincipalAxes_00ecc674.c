// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputePrincipalAxes
// Entry Point: 00ecc674
// Size: 520 bytes
// Signature: undefined ComputePrincipalAxes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::VoxelSet::ComputePrincipalAxes() */

void VHACD::VoxelSet::ComputePrincipalAxes(void)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  long in_x0;
  ulong uVar9;
  short *psVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  long local_28;
  
  lVar8 = tpidr_el0;
  local_28 = *(long *)(lVar8 + 0x28);
  uVar9 = *(ulong *)(in_x0 + 0xa08);
  if (uVar9 == 0) goto LAB_00ecc858;
  lVar6 = in_x0 + 0x9c0;
  if (*(long *)(in_x0 + 0xa10) != 8) {
    lVar6 = *(long *)(in_x0 + 0xa00);
  }
  *(undefined8 *)(in_x0 + 0xb08) = 0;
  *(undefined8 *)(in_x0 + 0xb00) = 0;
  *(undefined8 *)(in_x0 + 0xaf8) = 0;
  if (uVar9 == 1) {
    dVar14 = 0.0;
    dVar16 = 0.0;
    dVar15 = 0.0;
    uVar11 = 0;
LAB_00ecc74c:
    lVar12 = uVar9 - uVar11;
    psVar10 = (short *)(lVar6 + uVar11 * 8 + 2);
    do {
      psVar2 = psVar10 + -1;
      lVar12 = lVar12 + -1;
      sVar7 = *psVar10;
      psVar1 = psVar10 + 1;
      psVar10 = psVar10 + 4;
      dVar14 = dVar14 + (double)(int)*psVar2;
      dVar16 = dVar16 + (double)(int)sVar7;
      dVar15 = dVar15 + (double)(int)*psVar1;
    } while (lVar12 != 0);
  }
  else {
    uVar11 = uVar9 & 0xfffffffffffffffe;
    dVar14 = 0.0;
    dVar16 = 0.0;
    dVar15 = 0.0;
    psVar10 = (short *)(lVar6 + 8);
    uVar13 = uVar11;
    do {
      psVar3 = psVar10 + -4;
      uVar13 = uVar13 - 2;
      psVar4 = psVar10 + -3;
      psVar5 = psVar10 + -2;
      sVar7 = *psVar10;
      psVar1 = psVar10 + 1;
      psVar2 = psVar10 + 2;
      psVar10 = psVar10 + 8;
      dVar14 = dVar14 + (double)(int)*psVar3 + (double)(int)sVar7;
      dVar16 = dVar16 + (double)(int)*psVar4 + (double)(int)*psVar1;
      dVar15 = dVar15 + (double)(int)*psVar5 + (double)(int)*psVar2;
    } while (uVar13 != 0);
    if (uVar9 != uVar11) goto LAB_00ecc74c;
  }
  dVar17 = (double)(unkuint9)uVar9;
  local_50 = 0.0;
  dStack_30 = 0.0;
  dStack_68 = 0.0;
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  psVar10 = (short *)(lVar6 + 2);
  local_70 = 0.0;
  *(double *)(in_x0 + 0xaf8) = dVar14 / dVar17;
  local_60 = 0.0;
  dStack_48 = 0.0;
  *(double *)(in_x0 + 0xb00) = dVar16 / dVar17;
  *(double *)(in_x0 + 0xb08) = dVar15 / dVar17;
  do {
    psVar2 = psVar10 + -1;
    uVar9 = uVar9 - 1;
    sVar7 = *psVar10;
    psVar1 = psVar10 + 1;
    psVar10 = psVar10 + 4;
    dVar14 = (double)((int)*psVar2 - (int)*(short *)(in_x0 + 0xa5c));
    dVar15 = (double)((int)sVar7 - (int)*(short *)(in_x0 + 0xa5e));
    dVar16 = (double)((int)*psVar1 - (int)*(short *)(in_x0 + 0xa60));
    local_70 = (double)NEON_fmadd(dVar14,dVar14,local_70);
    local_50 = (double)NEON_fmadd(dVar15,dVar15,local_50);
    dStack_68 = (double)NEON_fmadd(dVar14,dVar15,dStack_68);
    dStack_30 = (double)NEON_fmadd(dVar16,dVar16,dStack_30);
    local_60 = (double)NEON_fmadd(dVar14,dVar16,local_60);
    dStack_48 = (double)NEON_fmadd(dVar15,dVar16,dStack_48);
  } while (uVar9 != 0);
  local_70 = local_70 / dVar17;
  local_50 = local_50 / dVar17;
  dStack_30 = dStack_30 / dVar17;
  dStack_68 = dStack_68 / dVar17;
  dStack_48 = dStack_48 / dVar17;
  local_60 = local_60 / dVar17;
  dStack_58 = dStack_68;
  local_40 = local_60;
  local_38 = dStack_48;
  Diagonalize(&local_70,(double *)(in_x0 + 0xa68),(double *)(in_x0 + 0xab0));
LAB_00ecc858:
  if (*(long *)(lVar8 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


