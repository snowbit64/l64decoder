// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shiftGridCells
// Entry Point: 00a6bc64
// Size: 888 bytes
// Signature: undefined __thiscall shiftGridCells(DensityAnimationMap * this, int param_1, int param_2, bool param_3)


/* DensityAnimationMap::shiftGridCells(int, int, bool) */

void __thiscall
DensityAnimationMap::shiftGridCells(DensityAnimationMap *this,int param_1,int param_2,bool param_3)

{
  RefreshTile **this_00;
  long lVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  RefreshTile *local_90;
  RefreshTile *local_88;
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  undefined local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar15 = *(uint *)(this + 0x20);
  fVar20 = *(float *)(this + 0x28);
  local_90 = (RefreshTile *)0x0;
  local_88 = (RefreshTile *)0x0;
  uVar7 = 0;
  if (uVar15 != 0) {
    uVar7 = (uint)param_1 / uVar15;
  }
  local_80 = 0;
  uVar13 = *(uint *)(this + 0x50);
  uVar10 = *(int *)(this + 0x48) + uVar7;
  uVar5 = 0;
  if (uVar15 != 0) {
    uVar5 = (uint)param_2 / uVar15;
  }
  uVar11 = *(int *)(this + 0x4c) + uVar5;
  *(uint *)(this + 0x48) = uVar10;
  *(uint *)(this + 0x4c) = uVar11;
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + param_1;
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + param_2;
  lVar4 = *(long *)(this + 0x410);
  lVar6 = *(long *)(this + 0x408);
  uVar19 = NEON_fmadd((float)(ulong)uVar10,fVar20,*(undefined4 *)(this + 0x54));
  uVar21 = NEON_fmadd((float)(ulong)uVar11,fVar20,*(undefined4 *)(this + 0x58));
  *(undefined4 *)(this + 0x5c) = uVar19;
  *(undefined4 *)(this + 0x60) = uVar21;
  *(float *)(this + 100) = (fVar20 * (float)(ulong)uVar10) / *(float *)(this + 0x18);
  *(float *)(this + 0x68) = (fVar20 * (float)(ulong)uVar11) / *(float *)(this + 0x18);
  if (lVar4 != lVar6) {
    uVar16 = 0;
    if (uVar13 != 0) {
      uVar16 = *(uint *)(this + 0x6c) / uVar13;
    }
    uVar12 = 0;
    uVar9 = 0;
    if (uVar13 != 0) {
      uVar9 = uVar10 / uVar13;
    }
    uVar10 = 0;
    if (uVar13 != 0) {
      uVar10 = uVar11 / uVar13;
    }
    do {
      piVar3 = (int *)(lVar6 + uVar12 * 0xc);
      iVar14 = *piVar3 - uVar9;
      if ((-1 < iVar14) && (iVar18 = piVar3[1] - uVar10, -1 < iVar18)) {
        bVar2 = false;
        if (iVar14 < (int)uVar16) {
          bVar2 = (int)(iVar18 - uVar16) < 0;
        }
        if (bVar2 != (iVar14 < (int)uVar16 && SBORROW4(iVar18,uVar16))) {
                    /* try { // try from 00a6bd80 to 00a6bd87 has its CatchHandler @ 00a6bfe0 */
          FUN_00a6cce8(&local_90);
          lVar4 = *(long *)(this + 0x410);
          lVar6 = *(long *)(this + 0x408);
        }
      }
      uVar12 = (ulong)((int)uVar12 + 1);
      uVar8 = (lVar4 - lVar6 >> 2) * -0x5555555555555555;
    } while (uVar12 <= uVar8 && uVar8 - uVar12 != 0);
  }
  this_00 = (RefreshTile **)(this + 0x408);
  if (this_00 != &local_90) {
                    /* try { // try from 00a6bda8 to 00a6bdaf has its CatchHandler @ 00a6bfdc */
    std::__ndk1::
    vector<DensityAnimationMap::RefreshTile,std::__ndk1::allocator<DensityAnimationMap::RefreshTile>>
    ::assign<DensityAnimationMap::RefreshTile*>
              ((vector<DensityAnimationMap::RefreshTile,std::__ndk1::allocator<DensityAnimationMap::RefreshTile>>
                *)this_00,local_90,local_88);
  }
  uVar13 = *(uint *)(this + 0x6c);
  uVar10 = uVar13;
  uVar11 = uVar13;
  if ((((param_3) || (iVar14 = uVar13 - uVar7, iVar14 == 0 || (int)uVar13 < (int)uVar7)) ||
      (uVar16 = -uVar13, uVar5 == uVar16 || (int)(uVar5 + uVar13) < 0 != SBORROW4(uVar5,uVar16))) ||
     ((uVar7 == uVar16 || (int)(uVar7 + uVar13) < 0 != SBORROW4(uVar7,uVar16) ||
      (iVar18 = uVar13 - uVar5, iVar18 == 0 || (int)uVar13 < (int)uVar5)))) {
    iVar14 = 0;
    iVar18 = 0;
  }
  else {
    if ((int)uVar7 < 1) {
      iVar14 = 0;
      uVar10 = -uVar7 & (int)uVar7 >> 0x1f;
    }
    if ((int)uVar5 < 1) {
      iVar18 = 0;
      uVar11 = 0;
      if (uVar15 <= (uint)param_2) {
        uVar11 = -uVar5;
      }
    }
  }
  uVar7 = *(uint *)(this + 0x4c);
  uVar5 = *(uint *)(this + 0x50);
  uVar15 = 0;
  if (uVar5 != 0) {
    uVar15 = (uVar7 + iVar18) / uVar5;
  }
  uVar16 = 0;
  if (uVar5 != 0) {
    uVar16 = (uVar7 + uVar11) / uVar5;
  }
  uVar9 = *(uint *)(this + 0x48);
  if (uVar15 < uVar16) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar13 = 0;
    if (uVar5 != 0) {
      uVar13 = (uVar9 + uVar13) / uVar5;
    }
    do {
      uVar5 = uVar7;
      if (uVar7 < uVar13) {
        do {
          local_70 = 1;
                    /* try { // try from 00a6be80 to 00a6be8b has its CatchHandler @ 00a6bfec */
          local_78 = uVar5;
          uStack_74 = uVar15;
          FUN_00a6ca90(this_00,&local_78);
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar13);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar16);
    uVar7 = *(uint *)(this + 0x4c);
    uVar5 = *(uint *)(this + 0x50);
    uVar9 = *(uint *)(this + 0x48);
    uVar15 = 0;
    if (uVar5 != 0) {
      uVar15 = (uVar7 + iVar18) / uVar5;
    }
  }
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar13 = uVar7 / uVar5;
  }
  uVar16 = 0;
  if (uVar5 != 0) {
    uVar16 = (uVar9 + iVar14) / uVar5;
  }
  uVar17 = 0;
  if (uVar5 != 0) {
    uVar17 = (uVar9 + uVar10) / uVar5;
  }
  if (uVar13 < uVar15) {
    do {
      uVar7 = uVar16;
      if (uVar16 < uVar17) {
        do {
          local_70 = 1;
                    /* try { // try from 00a6befc to 00a6bf07 has its CatchHandler @ 00a6bfe8 */
          local_78 = uVar7;
          uStack_74 = uVar13;
          FUN_00a6ca90(this_00,&local_78);
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar17);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar15);
    uVar7 = *(uint *)(this + 0x4c);
    uVar5 = *(uint *)(this + 0x50);
    uVar16 = 0;
    if (uVar5 != 0) {
      uVar16 = (uint)(*(int *)(this + 0x48) + iVar14) / uVar5;
    }
    uVar17 = 0;
    if (uVar5 != 0) {
      uVar17 = (*(int *)(this + 0x48) + uVar10) / uVar5;
    }
  }
  uVar15 = 0;
  if (uVar5 != 0) {
    uVar15 = (uVar7 + uVar11) / uVar5;
  }
  uVar10 = 0;
  if (uVar5 != 0) {
    uVar10 = (uVar7 + *(int *)(this + 0x6c)) / uVar5;
  }
  if (uVar15 < uVar10) {
    do {
      uVar7 = uVar16;
      if (uVar16 < uVar17) {
        do {
          local_70 = 1;
                    /* try { // try from 00a6bf78 to 00a6bf83 has its CatchHandler @ 00a6bfe4 */
          local_78 = uVar7;
          uStack_74 = uVar15;
          FUN_00a6ca90(this_00,&local_78);
          uVar7 = uVar7 + 1;
        } while (uVar17 != uVar7);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar10);
  }
  if (local_90 != (RefreshTile *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


