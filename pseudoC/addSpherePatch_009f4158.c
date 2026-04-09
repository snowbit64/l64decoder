// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSpherePatch
// Entry Point: 009f4158
// Size: 1196 bytes
// Signature: undefined __thiscall addSpherePatch(DeferredDebugRenderer * this, float * param_1, float * param_2, float * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, bool param_10, float * param_11, CATEGORY param_12)


/* DeferredDebugRenderer::addSpherePatch(float const*, float const*, float const*, float, float,
   float, float, float, float, bool, float const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addSpherePatch
          (DeferredDebugRenderer *this,float *param_1,float *param_2,float *param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,bool param_10,
          float *param_11,CATEGORY param_12)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  undefined *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  undefined8 local_7e0;
  float local_7d8;
  undefined8 local_7d0;
  float local_7c8;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined local_7b0 [888];
  undefined auStack_438 [888];
  undefined8 local_c0;
  float local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  local_7d0 = *(undefined8 *)param_1;
  local_7c8 = param_1[2];
  fVar32 = *param_2;
  fVar33 = param_2[1];
  fVar34 = param_2[2];
  local_7c0._0_4_ = (undefined4)local_7d0;
  local_7c0._4_4_ = (undefined4)((ulong)local_7d0 >> 0x20);
  uVar30 = NEON_fmadd(fVar32,param_4,(undefined4)local_7c0);
  uVar25 = NEON_fmadd(fVar33,param_4,local_7c0._4_4_);
  uVar29 = NEON_fmadd(fVar34,param_4,local_7c8);
  fVar35 = param_5;
  if (param_5 <= -1.570796) {
    fVar35 = param_9 + -1.570796;
  }
  uVar30 = NEON_fmsub(fVar32,param_4,uVar30);
  uVar25 = NEON_fmsub(fVar33,param_4,uVar25);
  fVar26 = *param_3;
  fVar27 = param_3[1];
  fVar31 = param_6;
  if (1.570796 <= param_6) {
    fVar31 = 1.570796 - param_9;
  }
  local_7b8 = NEON_fmsub(fVar34,param_4,uVar29);
  local_7c0 = CONCAT44(uVar25,uVar30);
  fVar17 = param_3[2];
  bVar1 = fVar31 < fVar35;
  if (bVar1) {
    fVar31 = 1.570796 - param_9;
    fVar35 = param_9 + -1.570796;
  }
  iVar8 = (int)((fVar31 - fVar35) / param_9);
  uVar10 = 2;
  if (2 < iVar8 + 1U) {
    uVar10 = iVar8 + 1;
  }
  if (0x49 < uVar10) {
    uVar10 = 0x4a;
  }
  uVar3 = uVar10 - 1;
  if (param_7 <= param_8) {
    if (6.283185 <= param_8 - param_7) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    bVar5 = true;
    param_8 = 3.141593;
    param_7 = param_9 + -3.141593;
  }
  uVar15 = 0;
  iVar8 = (int)((param_8 - param_7) / param_9);
  uVar11 = 2;
  if (2 < iVar8 + 1U) {
    uVar11 = iVar8 + 1;
  }
  if (0x49 < uVar11) {
    uVar11 = 0x4a;
  }
  lVar12 = (ulong)(uVar11 - 1) * 0xc;
  uVar25 = NEON_fmadd(fVar33,fVar17,fVar27 * -fVar34);
  uVar29 = NEON_fmadd(fVar34,fVar26,fVar17 * -fVar32);
  uVar30 = NEON_fmadd(fVar32,fVar27,fVar26 * -fVar33);
  puVar6 = auStack_438;
  puVar16 = local_7b0;
  local_c0 = local_7d0;
  local_b8 = local_7c8;
  do {
    puVar9 = puVar6;
    fVar18 = (float)NEON_fmadd((float)(ulong)uVar15,(fVar31 - fVar35) / (float)(ulong)uVar3,fVar35);
    sincosf(fVar18,&fStack_7e4,&local_7e8);
    lVar14 = 0;
    uVar13 = 0;
    fVar18 = fStack_7e4 * param_4;
    fVar28 = local_7e8 * param_4;
    do {
      fVar19 = (float)NEON_fmadd((float)(ulong)uVar13,
                                 (param_8 - param_7) / (float)(ulong)(uVar11 - 1),param_7);
      sincosf(fVar19,&fStack_7ec,&local_7f0);
      fVar19 = local_b8;
      puVar2 = (undefined8 *)(puVar16 + lVar14);
      *puVar2 = local_c0;
      fVar20 = fVar28 * local_7f0;
      *(float *)(puVar2 + 1) = fVar19;
      fVar19 = fVar28 * fStack_7ec;
      uVar21 = NEON_fmadd(fVar26,fVar20,*(float *)puVar2);
      uVar24 = NEON_fmadd(fVar27,fVar20,*(float *)((long)puVar2 + 4));
      uVar22 = NEON_fmadd(uVar25,fVar19,uVar21);
      uVar21 = NEON_fmadd(fVar17,fVar20,*(float *)(puVar2 + 1));
      uVar24 = NEON_fmadd(uVar29,fVar19,uVar24);
      uVar21 = NEON_fmadd(uVar30,fVar19,uVar21);
      fVar20 = (float)NEON_fmadd(fVar32,fVar18,uVar22);
      fVar23 = (float)NEON_fmadd(fVar33,fVar18,uVar24);
      fVar19 = (float)NEON_fmadd(fVar34,fVar18,uVar21);
      *(float *)puVar2 = fVar20;
      *(float *)((long)puVar2 + 4) = fVar23;
      *(float *)(puVar2 + 1) = fVar19;
      if (uVar15 == 0) {
        if (bVar1 || 1.570796 <= param_6) {
          puVar7 = &local_7d0;
          goto LAB_009f4500;
        }
      }
      else {
        puVar7 = (undefined8 *)(puVar9 + lVar14);
LAB_009f4500:
        addLine(this,(float *)puVar7,param_11,(float *)puVar2,param_11,param_12);
      }
      if (lVar14 == 0) {
        local_7d8 = *(float *)(puVar2 + 1);
        local_7e0 = *puVar2;
      }
      else {
        addLine(this,(float *)(puVar16 + (ulong)(uVar13 - 1) * 0xc),param_11,(float *)puVar2,
                param_11,param_12);
      }
      if ((bVar1 || param_5 <= -1.570796) && uVar15 == uVar3) {
        addLine(this,(float *)&local_7c0,param_11,(float *)puVar2,param_11,param_12);
      }
      if (param_10) {
        if (bVar5) {
          if (lVar12 == lVar14) {
            puVar7 = &local_7e0;
LAB_009f443c:
            addLine(this,(float *)puVar7,param_11,(float *)puVar2,param_11,param_12);
          }
        }
        else if ((uVar15 == 0 || uVar15 == uVar3) &&
                ((puVar7 = &local_c0, lVar14 == 0 || (lVar12 == lVar14)))) goto LAB_009f443c;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0xc;
    } while ((ulong)uVar11 * 0xc - lVar14 != 0);
    uVar15 = uVar15 + 1;
    puVar6 = puVar16;
    puVar16 = puVar9;
    if (uVar15 == uVar10) {
      if (*(long *)(lVar4 + 0x28) == local_b0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


