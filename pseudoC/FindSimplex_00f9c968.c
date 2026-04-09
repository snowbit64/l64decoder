// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FindSimplex
// Entry Point: 00f9c968
// Size: 1084 bytes
// Signature: undefined __thiscall FindSimplex(HullLibrary * this, btVector3 * param_1, int param_2, btAlignedObjectArray * param_3)


/* HullLibrary::FindSimplex(btVector3*, int, btAlignedObjectArray<int>&) */

undefined  [16] __thiscall
HullLibrary::FindSimplex
          (HullLibrary *this,btVector3 *param_1,int param_2,btAlignedObjectArray *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined auVar25 [16];
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  ulong uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_98 = 0x3ca3d70a3c23d70a;
  local_90 = 0x3f800000;
  uVar6 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_98,param_3);
  local_a8 = CONCAT44(-(float)((ulong)local_98 >> 0x20),-(float)local_98);
  local_a0 = -(float)local_90;
  local_9c = 0;
  uVar7 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_a8,param_3);
  puVar1 = (undefined8 *)(param_1 + (long)(int)uVar6 * 0x10);
  puVar2 = (undefined8 *)(param_1 + (long)(int)uVar7 * 0x10);
  puVar14 = puVar1 + 1;
  fVar16 = (float)*puVar1 - (float)*puVar2;
  fVar18 = (float)((ulong)*puVar1 >> 0x20) - (float)((ulong)*puVar2 >> 0x20);
  local_98 = CONCAT44(fVar18,fVar16);
  fVar15 = *(float *)puVar14 - *(float *)(puVar2 + 1);
  local_90 = (ulong)(uint)fVar15;
  if ((uVar6 != uVar7) && (((fVar15 != 0.0 || (fVar18 != 0.0)) || (fVar16 != 0.0)))) {
    uStack_6c = 0;
    fStack_74 = fVar15 * 0.02;
    fVar20 = (float)NEON_fmadd(fVar16,0xbca3d70a,fVar18);
    fStack_70 = (float)NEON_fnmsub(fVar18,0xbca3d70a,fVar16);
    uVar22 = NEON_fmadd(fVar15,fVar15,fStack_74 * fStack_74);
    fVar18 = (float)NEON_fmadd(fVar20,fVar20,uVar22);
    fVar16 = (float)NEON_fmadd(fStack_70,fStack_70,uVar22);
    if (SQRT(fVar18) <= SQRT(fVar16)) {
      uVar22 = NEON_fmadd(fStack_74,fStack_74,fVar15 * fVar15);
      fVar16 = (float)NEON_fmadd(fStack_70,fStack_70,uVar22);
      fVar16 = 1.0 / SQRT(fVar16);
      fVar20 = fVar16 * fStack_70;
      local_88 = CONCAT44(fVar16 * fStack_74,fVar16 * fVar15);
    }
    else {
      fVar16 = 1.0 / SQRT(fVar18);
      fVar20 = fVar16 * fVar20;
      local_88 = CONCAT44(fVar16 * -fVar15,fVar16 * fStack_74);
    }
    uStack_80 = (ulong)(uint)fVar20;
    local_78 = fVar15;
    uVar8 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_88,param_3);
    if ((uVar8 == uVar6) || (uVar8 == uVar7)) {
      local_a8 = CONCAT44(-(float)((ulong)local_88 >> 0x20),-(float)local_88);
      local_9c = 0;
      local_a0 = -(float)uStack_80;
      uVar8 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_a8,param_3);
    }
    uVar10 = 0xffffffff;
    if (uVar8 != uVar6) {
      uVar11 = 0xffffffff;
      uVar12 = 0xffffffff;
      uVar13 = 0xffffffff;
      if (uVar8 == uVar7) goto LAB_00f9ca68;
      puVar3 = (undefined8 *)(param_1 + (long)(int)uVar8 * 0x10);
      fVar16 = (float)*puVar3 - (float)*puVar1;
      fVar18 = (float)((ulong)*puVar3 >> 0x20) - (float)((ulong)*puVar1 >> 0x20);
      local_88 = CONCAT44(fVar18,fVar16);
      fVar15 = *(float *)(puVar3 + 1) - *(float *)puVar14;
      uStack_6c = 0;
      uStack_80 = (ulong)(uint)fVar15;
      local_78 = -(local_98._4_4_ * fVar15) + (float)local_90 * fVar18;
      fStack_74 = (float)NEON_fnmsub((float)local_98,fVar15,(float)local_90 * fVar16);
      fVar16 = -((float)local_98 * fVar18) + local_98._4_4_ * fVar16;
      uVar22 = NEON_fmadd(fStack_74,fStack_74,local_78 * local_78);
      fVar15 = (float)NEON_fmadd(fVar16,fVar16,uVar22);
      fStack_70 = 1.0 / SQRT(fVar15);
      local_78 = fStack_70 * local_78;
      fStack_74 = fStack_70 * fStack_74;
      fStack_70 = fStack_70 * fVar16;
      uVar9 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_78,param_3);
      if (((uVar9 == uVar8) || (uVar9 == uVar6)) || (uVar9 == uVar7)) {
        local_a8 = CONCAT44(-fStack_74,-local_78);
        local_9c = 0;
        local_a0 = -fStack_70;
        uVar9 = maxdirsterid<btVector3>(param_1,param_2,(btVector3 *)&local_a8,param_3);
      }
      uVar10 = 0xffffffff;
      if ((uVar9 != uVar8) && (uVar9 != uVar6)) {
        uVar11 = 0xffffffff;
        uVar12 = 0xffffffff;
        uVar13 = 0xffffffff;
        if (uVar9 != uVar7) {
          fVar15 = *(float *)puVar1;
          fVar16 = *(float *)puVar14;
          fVar20 = *(float *)((long)puVar1 + 4);
          fVar19 = *(float *)((long)puVar2 + 4) - fVar20;
          pfVar4 = (float *)(param_1 + (long)(int)uVar9 * 0x10);
          fVar21 = *(float *)(puVar2 + 1) - fVar16;
          fVar23 = *(float *)((long)puVar3 + 4) - fVar20;
          uVar10 = (ulong)uVar6;
          fVar18 = *(float *)(puVar3 + 1) - fVar16;
          fVar24 = (float)NEON_fnmsub(fVar23,*(float *)puVar2 - fVar15,
                                      (*(float *)puVar3 - fVar15) * fVar19);
          uVar22 = NEON_fnmsub(fVar18,fVar19,fVar23 * fVar21);
          uVar17 = NEON_fnmsub(*(float *)puVar3 - fVar15,fVar21,fVar18 * (*(float *)puVar2 - fVar15)
                              );
          uVar22 = NEON_fmadd(uVar22,*pfVar4 - fVar15,fVar24 * (pfVar4[2] - fVar16));
          fVar15 = (float)NEON_fmadd(uVar17,pfVar4[1] - fVar20,uVar22);
          uVar11 = (ulong)uVar7;
          if (0.0 <= fVar15) {
            uVar12 = (ulong)uVar8;
            uVar13 = (ulong)uVar9;
          }
          else {
            uVar12 = (ulong)uVar9;
            uVar13 = (ulong)uVar8;
          }
        }
        goto LAB_00f9ca68;
      }
    }
  }
  uVar10 = 0xffffffff;
  uVar11 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar13 = 0xffffffff;
LAB_00f9ca68:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar25._8_8_ = uVar12 | uVar13 << 0x20;
  auVar25._0_8_ = uVar10 | uVar11 << 0x20;
  return auVar25;
}


