// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateFromConvexHull
// Entry Point: 00f90b14
// Size: 1264 bytes
// Signature: undefined __cdecl CreateFromConvexHull(btSoftBodyWorldInfo * param_1, btVector3 * param_2, int param_3, bool param_4)


/* btSoftBodyHelpers::CreateFromConvexHull(btSoftBodyWorldInfo&, btVector3 const*, int, bool) */

btSoftBody *
btSoftBodyHelpers::CreateFromConvexHull
          (btSoftBodyWorldInfo *param_1,btVector3 *param_2,int param_3,bool param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  btSoftBody *pbVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  btVector3 *pbVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 local_170;
  int iStack_16c;
  btVector3 *local_168;
  undefined8 uStack_160;
  int local_158;
  HullLibrary aHStack_150 [4];
  undefined8 local_14c;
  long local_140;
  char local_138;
  undefined8 local_12c;
  long local_120;
  char local_118;
  HullResult local_110 [4];
  int local_10c;
  undefined8 local_104;
  btVector3 *local_f8;
  char local_f0;
  ulong local_e8;
  undefined8 local_dc;
  long local_d0;
  char local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_170 = 1;
  local_f0 = '\x01';
  local_f8 = (btVector3 *)0x0;
  uStack_160 = 0x3a83126f00000010;
  local_104 = 0;
  local_c8 = '\x01';
  local_d0 = 0;
  local_dc = 0;
  local_110[0] = (HullResult)0x1;
  local_10c = 0;
  local_e8 = 0;
  local_138 = '\x01';
  local_140 = 0;
  local_14c = 0;
  local_118 = '\x01';
  local_120 = 0;
  local_12c = 0;
  iStack_16c = param_3;
  local_168 = param_2;
  local_158 = param_3;
  HullLibrary::CreateConvexHull(aHStack_150,(HullDesc *)&local_170,local_110);
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  pbVar8 = (btSoftBody *)(*(code *)PTR_FUN_01048e38)(0x690,0x10);
  pbVar14 = local_f8;
  btSoftBody::btSoftBody(pbVar8,param_1,local_10c,local_f8,(float *)0x0);
  lVar16 = (long)(int)local_e8;
  if (0 < (int)local_e8) {
    piVar17 = (int *)(local_d0 + 8);
    do {
      iVar2 = piVar17[-2];
      iVar3 = *piVar17;
      iVar4 = *piVar17;
      if (iVar2 < iVar3) {
        lVar13 = *(long *)(pbVar8 + 0x380) + (long)iVar2 * 0x78;
        lVar15 = *(long *)(pbVar8 + 0x380) + (long)iVar3 * 0x78;
        btSoftBody::appendLink(pbVar8,-1,(Material *)0x0);
        lVar9 = *(long *)(pbVar8 + 0x3a0) + (long)*(int *)(pbVar8 + 0x394) * 0x48;
        *(long *)(lVar9 + -0x38) = lVar13;
        *(long *)(lVar9 + -0x30) = lVar15;
        fVar18 = *(float *)(lVar13 + 0x10) - *(float *)(lVar15 + 0x10);
        fVar25 = *(float *)(lVar13 + 0x14) - *(float *)(lVar15 + 0x14);
        fVar22 = *(float *)(lVar13 + 0x18) - *(float *)(lVar15 + 0x18);
        uVar19 = NEON_fmadd(fVar25,fVar25,fVar18 * fVar18);
        fVar18 = (float)NEON_fmadd(fVar22,fVar22,uVar19);
        *(float *)(lVar9 + -0x28) = SQRT(fVar18);
        pbVar8[0x4b4] = (btSoftBody)0x1;
      }
      if (iVar3 < iVar4) {
        lVar13 = *(long *)(pbVar8 + 0x380) + (long)iVar3 * 0x78;
        lVar15 = *(long *)(pbVar8 + 0x380) + (long)iVar4 * 0x78;
        btSoftBody::appendLink(pbVar8,-1,(Material *)0x0);
        lVar9 = *(long *)(pbVar8 + 0x3a0) + (long)*(int *)(pbVar8 + 0x394) * 0x48;
        *(long *)(lVar9 + -0x38) = lVar13;
        *(long *)(lVar9 + -0x30) = lVar15;
        fVar18 = *(float *)(lVar13 + 0x10) - *(float *)(lVar15 + 0x10);
        fVar25 = *(float *)(lVar13 + 0x14) - *(float *)(lVar15 + 0x14);
        fVar22 = *(float *)(lVar13 + 0x18) - *(float *)(lVar15 + 0x18);
        uVar19 = NEON_fmadd(fVar25,fVar25,fVar18 * fVar18);
        fVar18 = (float)NEON_fmadd(fVar22,fVar22,uVar19);
        *(float *)(lVar9 + -0x28) = SQRT(fVar18);
        pbVar8[0x4b4] = (btSoftBody)0x1;
      }
      if (iVar4 < iVar2) {
        lVar13 = *(long *)(pbVar8 + 0x380) + (long)iVar4 * 0x78;
        lVar15 = *(long *)(pbVar8 + 0x380) + (long)iVar2 * 0x78;
        btSoftBody::appendLink(pbVar8,-1,(Material *)0x0);
        lVar9 = *(long *)(pbVar8 + 0x3a0) + (long)*(int *)(pbVar8 + 0x394) * 0x48;
        *(long *)(lVar9 + -0x38) = lVar13;
        *(long *)(lVar9 + -0x30) = lVar15;
        fVar18 = *(float *)(lVar13 + 0x10) - *(float *)(lVar15 + 0x10);
        fVar25 = *(float *)(lVar13 + 0x14) - *(float *)(lVar15 + 0x14);
        fVar22 = *(float *)(lVar13 + 0x18) - *(float *)(lVar15 + 0x18);
        uVar19 = NEON_fmadd(fVar25,fVar25,fVar18 * fVar18);
        fVar18 = (float)NEON_fmadd(fVar22,fVar22,uVar19);
        *(float *)(lVar9 + -0x28) = SQRT(fVar18);
        pbVar8[0x4b4] = (btSoftBody)0x1;
      }
      btSoftBody::appendFace(pbVar8,iVar2,iVar3,iVar4,(Material *)0x0);
      lVar16 = lVar16 + -1;
      piVar17 = piVar17 + 3;
    } while (lVar16 != 0);
  }
  if ((int)local_104 == 0) {
  }
  else {
    local_10c = 0;
    if ((pbVar14 != (btVector3 *)0x0) && (local_f0 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    pbVar14 = (btVector3 *)0x0;
    local_f8 = (btVector3 *)0x0;
    local_104 = 0;
    local_f0 = '\x01';
  }
  if ((int)local_dc != 0) {
    local_e8 = local_e8 & 0xffffffff;
    if ((local_d0 != 0) && (local_c8 != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    local_d0 = 0;
    local_dc = 0;
    local_c8 = '\x01';
  }
  if (param_4) {
    uVar5 = *(uint *)(pbVar8 + 0x394);
    uVar10 = 0x3b7f7;
    if (0 < (int)uVar5) {
      lVar16 = 0;
      do {
        uVar6 = (int)uVar10 * 0x19660d + 0x3c6ef35f;
        uVar10 = (ulong)uVar6;
        iVar2 = 0;
        if ((long)(int)uVar5 != 0) {
          iVar2 = (int)(uVar10 / (ulong)(long)(int)uVar5);
        }
        puVar1 = (undefined8 *)(*(long *)(pbVar8 + 0x3a0) + lVar16);
        lVar16 = lVar16 + 0x48;
        uStack_98 = puVar1[5];
        local_a0 = puVar1[4];
        uStack_88 = puVar1[7];
        uStack_90 = puVar1[6];
        puVar11 = (undefined8 *)
                  (*(long *)(pbVar8 + 0x3a0) + (long)(int)(uVar6 - iVar2 * uVar5) * 0x48);
        local_80 = puVar1[8];
        uStack_b8 = puVar1[1];
        local_c0 = *puVar1;
        uStack_a8 = puVar1[3];
        uStack_b0 = puVar1[2];
        uVar12 = *puVar11;
        puVar1[1] = puVar11[1];
        *puVar1 = uVar12;
        uVar26 = puVar11[2];
        uVar24 = puVar11[5];
        uVar23 = puVar11[4];
        uVar21 = puVar11[7];
        uVar20 = puVar11[6];
        uVar12 = puVar11[8];
        puVar1[3] = puVar11[3];
        puVar1[2] = uVar26;
        puVar1[5] = uVar24;
        puVar1[4] = uVar23;
        puVar1[7] = uVar21;
        puVar1[6] = uVar20;
        puVar1[8] = uVar12;
        puVar11[1] = uStack_b8;
        *puVar11 = local_c0;
        puVar11[3] = uStack_a8;
        puVar11[2] = uStack_b0;
        puVar11[5] = uStack_98;
        puVar11[4] = local_a0;
        puVar11[7] = uStack_88;
        puVar11[6] = uStack_90;
        puVar11[8] = local_80;
      } while (((ulong)uVar5 + (ulong)uVar5 * 8) * 8 - lVar16 != 0);
    }
    uVar5 = *(uint *)(pbVar8 + 0x3b4);
    if (0 < (int)uVar5) {
      lVar16 = 0;
      do {
        uVar6 = (int)uVar10 * 0x19660d + 0x3c6ef35f;
        uVar10 = (ulong)uVar6;
        iVar2 = 0;
        if ((long)(int)uVar5 != 0) {
          iVar2 = (int)(uVar10 / (ulong)(long)(int)uVar5);
        }
        puVar1 = (undefined8 *)(*(long *)(pbVar8 + 0x3c0) + lVar16);
        lVar16 = lVar16 + 0x48;
        uStack_98 = puVar1[5];
        local_a0 = puVar1[4];
        uStack_88 = puVar1[7];
        uStack_90 = puVar1[6];
        puVar11 = (undefined8 *)
                  (*(long *)(pbVar8 + 0x3c0) + (long)(int)(uVar6 - iVar2 * uVar5) * 0x48);
        local_80 = puVar1[8];
        uStack_b8 = puVar1[1];
        local_c0 = *puVar1;
        uStack_a8 = puVar1[3];
        uStack_b0 = puVar1[2];
        uVar12 = *puVar11;
        puVar1[1] = puVar11[1];
        *puVar1 = uVar12;
        uVar26 = puVar11[2];
        uVar24 = puVar11[5];
        uVar23 = puVar11[4];
        uVar21 = puVar11[7];
        uVar20 = puVar11[6];
        uVar12 = puVar11[8];
        puVar1[3] = puVar11[3];
        puVar1[2] = uVar26;
        puVar1[5] = uVar24;
        puVar1[4] = uVar23;
        puVar1[7] = uVar21;
        puVar1[6] = uVar20;
        puVar1[8] = uVar12;
        puVar11[1] = uStack_b8;
        *puVar11 = local_c0;
        puVar11[3] = uStack_a8;
        puVar11[2] = uStack_b0;
        puVar11[5] = uStack_98;
        puVar11[4] = local_a0;
        puVar11[7] = uStack_88;
        puVar11[6] = uStack_90;
        puVar11[8] = local_80;
      } while (((ulong)uVar5 + (ulong)uVar5 * 8) * 8 - lVar16 != 0);
    }
  }
  if ((local_120 != 0) && (local_118 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((local_140 != 0) && (local_138 != '\0')) {
    pbVar8 = (btSoftBody *)FUN_00fa8630(&gNumAlignedFree);
    return pbVar8;
  }
  if ((local_d0 != 0) && (local_c8 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((pbVar14 != (btVector3 *)0x0) && (local_f0 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pbVar14);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return pbVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


