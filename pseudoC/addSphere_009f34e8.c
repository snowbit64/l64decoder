// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSphere
// Entry Point: 009f34e8
// Size: 1416 bytes
// Signature: undefined __cdecl addSphere(float * param_1, float param_2, float * param_3, CATEGORY param_4, Matrix4x4 * param_5, uint param_6, bool param_7, Vector3 * param_8)


/* DeferredDebugRenderer::addSphere(float const*, float, float const*,
   DeferredDebugRenderer::CATEGORY, Matrix4x4*, unsigned int, bool, Vector3*) */

void DeferredDebugRenderer::addSphere
               (float *param_1,float param_2,float *param_3,CATEGORY param_4,Matrix4x4 *param_5,
               uint param_6,bool param_7,Vector3 *param_8)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *in_x7;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  ulong in_d1;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float unaff_s11;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_114;
  ulong local_110;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  ulong local_bc;
  long local_b0;
  
  uVar7 = (uint)param_7;
  puVar6 = (undefined4 *)(ulong)param_6;
  pfVar5 = (float *)(ulong)param_4;
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  uVar2 = (uint)param_5;
  fVar17 = *param_3;
  local_110 = *(ulong *)(param_3 + 1);
  fVar20 = (float)(local_110 >> 0x20);
  fVar9 = param_2;
  if (((ulong)param_8 & 1) != 0) {
    fVar9 = fVar17;
    in_d1 = local_110;
    if (puVar6 != (undefined4 *)0x0) {
      fVar15 = (float)local_110;
      fVar9 = (float)NEON_fmadd(fVar17,*puVar6,(float)puVar6[4] * fVar15);
      fVar9 = (float)puVar6[0xc] + fVar9 + (float)puVar6[8] * fVar20;
      in_d1 = CONCAT44((float)((ulong)*(undefined8 *)(puVar6 + 0xd) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(puVar6 + 5) >> 0x20) * fVar15 +
                       (float)((ulong)*(undefined8 *)(puVar6 + 1) >> 0x20) * fVar17 +
                       (float)((ulong)*(undefined8 *)(puVar6 + 9) >> 0x20) * fVar20,
                       (float)*(undefined8 *)(puVar6 + 0xd) +
                       (float)*(undefined8 *)(puVar6 + 5) * fVar15 +
                       (float)*(undefined8 *)(puVar6 + 1) * fVar17 +
                       (float)*(undefined8 *)(puVar6 + 9) * fVar20);
    }
    unaff_s11 = (float)(in_d1 >> 0x20);
    local_114 = fVar9;
    local_c0 = fVar9;
    local_bc = in_d1;
  }
  if ((uVar2 != 0x7ff) && (((uint)param_1[0xa8] & uVar2) == 0)) {
LAB_009f35e4:
    if (((ulong)param_8 & 1) != 0) {
      fVar9 = (float)addCircle((DeferredDebugRenderer *)param_1,&local_c0,param_2,in_x7,0.0,
                               (float *)&DAT_0051b018,0x20,uVar2);
    }
    if (*(long *)(lVar1 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(fVar9);
    }
    return;
  }
  if (param_7) {
    if (!param_7) goto LAB_009f35e4;
  }
  else {
    uVar7 = (uint)(param_2 * 8.0);
    if (0x7f < (int)uVar7) {
      uVar7 = 0x80;
    }
    if ((int)uVar7 < 9) {
      uVar7 = 8;
    }
  }
  iVar8 = 0;
  do {
    fVar9 = (6.283185 / (float)uVar7) * (float)iVar8;
    sincosf(fVar9,&fStack_e4,&local_e8);
    fVar4 = fStack_e4;
    fVar3 = local_e8;
    sincosf(6.283185 / (float)uVar7 + fVar9,&fStack_ec,&local_f0);
    fVar15 = fStack_ec;
    fVar9 = local_f0;
    fStack_cc = (float)local_110;
    fVar13 = (float)NEON_fmadd(param_2,fVar4,fStack_cc);
    local_d0 = (float)NEON_fmadd(param_2,fVar3,fVar17);
    local_e0 = (float)NEON_fmadd(param_2,local_f0,fVar17);
    fStack_dc = (float)NEON_fmadd(param_2,fStack_ec,fStack_cc);
    fVar11 = (float)in_d1;
    if (puVar6 == (undefined4 *)0x0) {
      local_c8 = fVar20;
      local_d8 = fVar20;
      if (((ulong)param_8 & 1) != 0) goto LAB_009f37b0;
LAB_009f37e4:
      fStack_cc = fVar13;
      addLine((DeferredDebugRenderer *)param_1,&local_d0,pfVar5,&local_e0,pfVar5,uVar2);
      fVar17 = *param_3;
      fStack_cc = param_3[1];
      fVar20 = param_3[2];
    }
    else {
      uVar19 = NEON_fmadd(local_d0,*puVar6,fVar13 * (float)puVar6[4]);
      uVar21 = NEON_fmadd(local_d0,puVar6[1],fVar13 * (float)puVar6[5]);
      uVar10 = NEON_fmadd(local_d0,puVar6[2],fVar13 * (float)puVar6[6]);
      uVar16 = NEON_fmadd(local_e0,*puVar6,fStack_dc * (float)puVar6[4]);
      uVar18 = NEON_fmadd(local_e0,puVar6[1],fStack_dc * (float)puVar6[5]);
      local_d0 = (float)NEON_fmadd(fVar20,puVar6[8],uVar19);
      fVar13 = (float)NEON_fmadd(fVar20,puVar6[9],uVar21);
      local_c8 = (float)NEON_fmadd(fVar20,puVar6[10],uVar10);
      uVar10 = NEON_fmadd(local_e0,puVar6[2],fStack_dc * (float)puVar6[6]);
      local_e0 = (float)NEON_fmadd(fVar20,puVar6[8],uVar16);
      fStack_dc = (float)NEON_fmadd(fVar20,puVar6[9],uVar18);
      local_d0 = (float)puVar6[0xc] + local_d0;
      fVar13 = (float)puVar6[0xd] + fVar13;
      local_c8 = (float)puVar6[0xe] + local_c8;
      local_d8 = (float)NEON_fmadd(fVar20,puVar6[10],uVar10);
      local_e0 = (float)puVar6[0xc] + local_e0;
      fStack_dc = (float)puVar6[0xd] + fStack_dc;
      local_d8 = (float)puVar6[0xe] + local_d8;
      if (((ulong)param_8 & 1) == 0) goto LAB_009f37e4;
LAB_009f37b0:
      uVar10 = NEON_fmadd(local_d0 - local_114,*in_x7,(fVar13 - fVar11) * in_x7[1]);
      fVar14 = (float)NEON_fmadd(local_c8 - unaff_s11,in_x7[2],uVar10);
      if (0.0 <= fVar14) goto LAB_009f37e4;
    }
    fVar13 = (float)NEON_fmadd(param_2,fVar3,fStack_cc);
    local_c8 = (float)NEON_fmadd(param_2,fVar4,fVar20);
    fStack_dc = (float)NEON_fmadd(param_2,fVar9,fStack_cc);
    local_d8 = (float)NEON_fmadd(param_2,fVar15,fVar20);
    if (puVar6 == (undefined4 *)0x0) {
      fVar14 = local_c8;
      local_d0 = fVar17;
      local_e0 = fVar17;
      if (((ulong)param_8 & 1) != 0) goto LAB_009f38d4;
LAB_009f3908:
      local_c8 = fVar14;
      fStack_cc = fVar13;
      addLine((DeferredDebugRenderer *)param_1,&local_d0,pfVar5 + 4,&local_e0,pfVar5 + 4,uVar2);
      fStack_cc = param_3[1];
      fVar20 = param_3[2];
      fVar17 = *param_3;
      local_c8 = (float)NEON_fmadd(param_2,fVar4,fVar20);
    }
    else {
      uVar21 = NEON_fmadd(fVar17,*puVar6,fVar13 * (float)puVar6[4]);
      uVar22 = NEON_fmadd(fVar17,puVar6[1],fVar13 * (float)puVar6[5]);
      uVar16 = NEON_fmadd(fVar17,puVar6[2],fVar13 * (float)puVar6[6]);
      uVar18 = NEON_fmadd(fVar17,*puVar6,fStack_dc * (float)puVar6[4]);
      uVar19 = NEON_fmadd(fVar17,puVar6[1],fStack_dc * (float)puVar6[5]);
      uVar10 = NEON_fmadd(fVar17,puVar6[2],fStack_dc * (float)puVar6[6]);
      local_d0 = (float)NEON_fmadd(local_c8,puVar6[8],uVar21);
      fVar13 = (float)NEON_fmadd(local_c8,puVar6[9],uVar22);
      fVar14 = (float)NEON_fmadd(local_c8,puVar6[10],uVar16);
      local_e0 = (float)NEON_fmadd(local_d8,puVar6[8],uVar18);
      fStack_dc = (float)NEON_fmadd(local_d8,puVar6[9],uVar19);
      local_d8 = (float)NEON_fmadd(local_d8,puVar6[10],uVar10);
      local_d0 = (float)puVar6[0xc] + local_d0;
      fVar13 = (float)puVar6[0xd] + fVar13;
      fVar14 = (float)puVar6[0xe] + fVar14;
      local_e0 = (float)puVar6[0xc] + local_e0;
      fStack_dc = (float)puVar6[0xd] + fStack_dc;
      local_d8 = (float)puVar6[0xe] + local_d8;
      if (((ulong)param_8 & 1) == 0) goto LAB_009f3908;
LAB_009f38d4:
      uVar10 = NEON_fmadd(local_d0 - local_114,*in_x7,(fVar13 - fVar11) * in_x7[1]);
      fVar12 = (float)NEON_fmadd(fVar14 - unaff_s11,in_x7[2],uVar10);
      if (0.0 <= fVar12) goto LAB_009f3908;
    }
    local_d0 = (float)NEON_fmadd(param_2,fVar3,fVar17);
    local_e0 = (float)NEON_fmadd(param_2,fVar9,fVar17);
    local_d8 = (float)NEON_fmadd(param_2,fVar15,fVar20);
    if (puVar6 == (undefined4 *)0x0) {
      fStack_dc = fStack_cc;
      if (((ulong)param_8 & 1) != 0) goto LAB_009f39fc;
LAB_009f3a30:
      fVar9 = (float)addLine((DeferredDebugRenderer *)param_1,&local_d0,pfVar5 + 8,&local_e0,
                             pfVar5 + 8,uVar2);
    }
    else {
      uVar16 = NEON_fmadd(local_d0,*puVar6,fStack_cc * (float)puVar6[4]);
      uVar21 = NEON_fmadd(local_d0,puVar6[1],fStack_cc * (float)puVar6[5]);
      uVar10 = NEON_fmadd(local_d0,puVar6[2],fStack_cc * (float)puVar6[6]);
      uVar18 = NEON_fmadd(local_e0,*puVar6,fStack_cc * (float)puVar6[4]);
      uVar19 = NEON_fmadd(local_e0,puVar6[1],fStack_cc * (float)puVar6[5]);
      local_d0 = (float)NEON_fmadd(local_c8,puVar6[8],uVar16);
      fStack_cc = (float)NEON_fmadd(local_c8,puVar6[9],uVar21);
      uVar16 = NEON_fmadd(local_e0,puVar6[2],fStack_cc * (float)puVar6[6]);
      local_c8 = (float)NEON_fmadd(local_c8,puVar6[10],uVar10);
      local_e0 = (float)NEON_fmadd(local_d8,puVar6[8],uVar18);
      fStack_dc = (float)NEON_fmadd(local_d8,puVar6[9],uVar19);
      local_d0 = (float)puVar6[0xc] + local_d0;
      fStack_cc = (float)puVar6[0xd] + fStack_cc;
      local_c8 = (float)puVar6[0xe] + local_c8;
      local_d8 = (float)NEON_fmadd(local_d8,puVar6[10],uVar16);
      local_e0 = (float)puVar6[0xc] + local_e0;
      fStack_dc = (float)puVar6[0xd] + fStack_dc;
      local_d8 = (float)puVar6[0xe] + local_d8;
      if (((ulong)param_8 & 1) == 0) goto LAB_009f3a30;
LAB_009f39fc:
      uVar10 = NEON_fmadd(local_d0 - local_114,*in_x7,(fStack_cc - fVar11) * in_x7[1]);
      fVar9 = (float)NEON_fmadd(local_c8 - unaff_s11,in_x7[2],uVar10);
      if (0.0 <= fVar9) goto LAB_009f3a30;
    }
    if (uVar7 - 1 == iVar8) goto LAB_009f35e4;
    fVar20 = param_3[2];
    fVar17 = *param_3;
    iVar8 = iVar8 + 1;
    local_110 = (ulong)(uint)param_3[1];
  } while( true );
}


