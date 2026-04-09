// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: retrieve
// Entry Point: 00b6f2c4
// Size: 572 bytes
// Signature: undefined __thiscall retrieve(BrepSpatialHash * this, Brep * param_1, Vector3 * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BrepSpatialHash::retrieve(Brep const*, Vector3 const&) const */

ushort __thiscall BrepSpatialHash::retrieve(BrepSpatialHash *this,Brep *param_1,Vector3 *param_2)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  uint local_58 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (((DAT_0211dc60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0211dc60), iVar5 != 0)) {
    _DAT_0211dc08 = 0xba83126f3a83126f;
    _DAT_0211dc00 = 0x3a83126f3a83126f;
    uRam000000000211dc18 = 0xba83126f3a83126f;
    _DAT_0211dc10 = 0x3a83126f3a83126f;
    uRam000000000211dc28 = 0x3a83126fba83126f;
    _DAT_0211dc20 = 0xba83126f3a83126f;
    uRam000000000211dc38 = 0xba83126fba83126f;
    _DAT_0211dc30 = 0x3a83126f3a83126f;
    uRam000000000211dc48 = 0xba83126f3a83126f;
    _DAT_0211dc40 = 0xba83126f3a83126f;
    uRam000000000211dc58 = 0xba83126fba83126f;
    _DAT_0211dc50 = 0xba83126fba83126f;
    __cxa_guard_release(&DAT_0211dc60);
  }
  fVar14 = *(float *)(param_2 + 8);
  fVar15 = 1.596047e-06;
  fVar12 = *(float *)param_2;
  fVar13 = *(float *)(param_2 + 4);
  lVar10 = 0;
  uVar11 = 0;
  uVar8 = 0xffff;
  do {
    fVar16 = (float)NEON_fmadd(fVar12 + (float)(&DAT_0211dc00)[lVar10 * 3],0x42c80000,0x3f000000);
    fVar18 = (float)NEON_fmadd(fVar13 + (float)(&DAT_0211dc04)[lVar10 * 3],0x42c80000,0x3f000000);
    fVar19 = (float)NEON_fmadd(fVar14 + (float)(&DAT_0211dc08)[lVar10 * 3],0x42c80000,0x3f000000);
    uVar3 = (uint)((int)fVar18 * 0x127409f ^ (int)fVar16 * 0x466f45d ^ (int)fVar19 * 0x4f9ffb7) %
            500;
    if (uVar11 != 0) {
      uVar6 = 0;
      do {
        if (local_58[uVar6] == uVar3) goto LAB_00b6f364;
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar11 != uVar1);
    }
    puVar7 = *(ushort **)(this + (ulong)uVar3 * 0x18);
    uVar6 = (long)*(ushort **)((long)(this + (ulong)uVar3 * 0x18) + 8) - (long)puVar7;
    if ((int)(uVar6 >> 1) != 0) {
      uVar6 = uVar6 >> 1 & 0xffffffff;
      uVar9 = uVar8;
      do {
        pfVar2 = (float *)(*(long *)(param_1 + 0x2ef0) + (ulong)*puVar7 * 0x10);
        fVar16 = fVar12 - *pfVar2;
        fVar18 = fVar13 - pfVar2[1];
        uVar17 = NEON_fmadd(fVar18,fVar18,fVar16 * fVar16);
        fVar16 = fVar14 - pfVar2[2];
        fVar16 = (float)NEON_fmadd(fVar16,fVar16,uVar17);
        uVar8 = *puVar7;
        if (fVar15 <= fVar16) {
          uVar8 = uVar9;
          fVar16 = fVar15;
        }
        fVar15 = fVar16;
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 1;
        uVar9 = uVar8;
      } while (uVar6 != 0);
    }
    local_58[uVar11] = uVar3;
    uVar11 = uVar11 + 1;
LAB_00b6f364:
    lVar10 = lVar10 + 1;
    if (lVar10 == 8) {
      if (*(long *)(lVar4 + 0x28) == local_38) {
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


