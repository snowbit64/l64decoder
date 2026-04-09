// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeBB
// Entry Point: 00eca154
// Size: 500 bytes
// Signature: undefined ComputeBB(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::VoxelSet::ComputeBB() */

void VHACD::VoxelSet::ComputeBB(void)

{
  ushort uVar1;
  long in_x0;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ulong uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar8 = *(ulong *)(in_x0 + 0xa08);
  if (uVar8 != 0) {
    dVar15 = 0.0;
    dVar16 = 0.0;
    dVar17 = 0.0;
    puVar12 = (ushort *)(in_x0 + 0x9c0);
    if (*(long *)(in_x0 + 0xa10) != 8) {
      puVar12 = *(ushort **)(in_x0 + 0xa00);
    }
    uVar11 = (uint)*puVar12;
    *(ushort *)(in_x0 + 0xa50) = *puVar12;
    uVar10 = (uint)*puVar12;
    *(ushort *)(in_x0 + 0xa56) = *puVar12;
    uVar9 = (uint)puVar12[1];
    *(ushort *)(in_x0 + 0xa52) = puVar12[1];
    uVar7 = (uint)puVar12[1];
    *(ushort *)(in_x0 + 0xa58) = puVar12[1];
    puVar12 = puVar12 + 2;
    uVar6 = (uint)*puVar12;
    *(ushort *)(in_x0 + 0xa54) = *puVar12;
    uVar5 = (uint)*puVar12;
    *(ushort *)(in_x0 + 0xa5a) = *puVar12;
    uVar13 = uVar8;
    do {
      uVar1 = puVar12[-2];
      uVar2 = (uint)(short)uVar1;
      uVar14 = (uint)(short)uVar1;
      if ((int)uVar2 < (int)(short)uVar11) {
        *(ushort *)(in_x0 + 0xa50) = uVar1;
        uVar1 = puVar12[-2];
        uVar2 = (uint)uVar1;
        uVar11 = uVar14;
      }
      if ((short)uVar10 < (short)uVar1) {
        *(short *)(in_x0 + 0xa56) = (short)uVar2;
        uVar10 = uVar2;
      }
      uVar1 = puVar12[-1];
      uVar2 = (uint)(short)uVar1;
      uVar3 = (uint)(short)uVar1;
      if ((int)uVar2 < (int)(short)uVar9) {
        *(ushort *)(in_x0 + 0xa52) = uVar1;
        uVar1 = puVar12[-1];
        uVar2 = (uint)uVar1;
        uVar9 = uVar3;
      }
      if ((short)uVar7 < (short)uVar1) {
        *(short *)(in_x0 + 0xa58) = (short)uVar2;
        uVar7 = uVar2;
      }
      uVar1 = *puVar12;
      uVar2 = (uint)(short)uVar1;
      uVar4 = (uint)(short)uVar1;
      if ((int)uVar2 < (int)(short)uVar6) {
        *(ushort *)(in_x0 + 0xa54) = uVar1;
        uVar1 = *puVar12;
        uVar2 = (uint)uVar1;
        uVar6 = uVar4;
      }
      if ((short)uVar5 < (short)uVar1) {
        *(short *)(in_x0 + 0xa5a) = (short)uVar2;
        uVar5 = uVar2;
      }
      puVar12 = puVar12 + 4;
      uVar13 = uVar13 - 1;
      dVar17 = dVar17 + (double)uVar14;
      dVar16 = dVar16 + (double)uVar3;
      dVar15 = dVar15 + (double)uVar4;
    } while (uVar13 != 0);
    dVar18 = (double)(unkuint9)uVar8;
    uVar19 = *(undefined8 *)(in_x0 + 0x9b8);
    uVar20 = NEON_fmadd((double)(int)(short)uVar11,uVar19,*(undefined8 *)(in_x0 + 0x9a0));
    uVar21 = NEON_fmadd((double)(int)(short)uVar10,uVar19,*(undefined8 *)(in_x0 + 0x9a0));
    *(undefined8 *)(in_x0 + 0xa20) = uVar20;
    *(undefined8 *)(in_x0 + 0xa38) = uVar21;
    uVar22 = NEON_fmadd((double)(int)(short)uVar9,uVar19,*(undefined8 *)(in_x0 + 0x9a8));
    uVar21 = NEON_fmadd((double)(int)(short)uVar7,uVar19,*(undefined8 *)(in_x0 + 0x9a8));
    uVar20 = NEON_fmadd((double)(int)(short)uVar6,uVar19,*(undefined8 *)(in_x0 + 0x9b0));
    uVar19 = NEON_fmadd((double)(int)(short)uVar5,uVar19,*(undefined8 *)(in_x0 + 0x9b0));
    *(short *)(in_x0 + 0xa5c) = (short)(int)(dVar17 / dVar18 + 0.5);
    *(undefined8 *)(in_x0 + 0xa28) = uVar22;
    *(undefined8 *)(in_x0 + 0xa40) = uVar21;
    *(short *)(in_x0 + 0xa5e) = (short)(int)(dVar16 / dVar18 + 0.5);
    *(undefined8 *)(in_x0 + 0xa30) = uVar20;
    *(undefined8 *)(in_x0 + 0xa48) = uVar19;
    *(short *)(in_x0 + 0xa60) = (short)(int)(dVar15 / dVar18 + 0.5);
  }
  return;
}


