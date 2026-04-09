// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAABB
// Entry Point: 009fae04
// Size: 1068 bytes
// Signature: undefined __thiscall addAABB(DeferredDebugRenderer * this, BoundingAxisAlignedBox * param_1, Matrix4x4 * param_2, float * param_3, CATEGORY param_4)


/* DeferredDebugRenderer::addAABB(BoundingAxisAlignedBox const*, Matrix4x4 const*, float const*,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addAABB
          (DeferredDebugRenderer *this,BoundingAxisAlignedBox *param_1,Matrix4x4 *param_2,
          float *param_3,CATEGORY param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  local_e8 = *(undefined8 *)(param_1 + 0x1c);
  local_a0 = *(float *)(param_1 + 0x1c);
  local_a8 = *(float *)(param_1 + 0x20);
  local_9c = *(float *)(param_1 + 0x2c);
  local_a4 = *(float *)(param_1 + 0x30);
  local_98 = *(float *)(param_1 + 0x24);
  local_94 = *(float *)(param_1 + 0x28);
  local_e0 = *(float *)(param_1 + 0x24);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_d4 = *(float *)(param_1 + 0x30);
  local_dc = uVar2;
  local_d0 = local_a0;
  fStack_cc = local_a8;
  local_c8 = local_a4;
  fStack_c4 = local_a0;
  local_c0 = local_9c;
  fStack_bc = local_a4;
  local_b8 = local_94;
  fStack_b4 = local_a8;
  local_b0 = local_98;
  local_ac = local_94;
  local_90 = local_9c;
  local_8c = local_98;
  if (param_2 != (Matrix4x4 *)0x0) {
    local_e8._4_4_ = (float)((ulong)local_e8 >> 0x20);
    fVar8 = *(float *)(param_2 + 0x10);
    fVar7 = *(float *)(param_2 + 0x14);
    uVar5 = *(undefined4 *)param_2;
    uVar4 = *(undefined4 *)(param_2 + 4);
    local_dc._4_4_ = (float)((ulong)uVar2 >> 0x20);
    fVar6 = *(float *)(param_2 + 0x18);
    local_dc._0_4_ = (undefined4)uVar2;
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    uVar12 = *(undefined4 *)(param_2 + 0x24);
    uVar14 = NEON_fmadd((undefined4)local_e8,uVar5,local_e8._4_4_ * fVar8);
    uVar13 = NEON_fmadd((undefined4)local_e8,uVar4,local_e8._4_4_ * fVar7);
    uVar10 = *(undefined4 *)(param_2 + 8);
    uVar16 = NEON_fmadd((undefined4)local_dc,uVar5,local_dc._4_4_ * fVar8);
    local_8c = *(float *)(param_2 + 0x38);
    fVar19 = (float)NEON_fmadd(local_e0,uVar3,uVar14);
    uVar14 = NEON_fmadd((undefined4)local_e8,uVar10,local_e8._4_4_ * fVar6);
    fVar9 = (float)NEON_fmadd(local_e0,uVar12,uVar13);
    uVar15 = *(undefined4 *)(param_2 + 0x28);
    fVar11 = *(float *)(param_2 + 0x30);
    local_90 = *(float *)(param_2 + 0x34);
    fVar17 = (float)NEON_fmadd(local_d4,uVar3,uVar16);
    uVar13 = NEON_fmadd((undefined4)local_dc,uVar4,local_dc._4_4_ * fVar7);
    local_e0 = (float)NEON_fmadd(local_e0,uVar15,uVar14);
    uVar14 = NEON_fmadd((undefined4)local_dc,uVar10,local_dc._4_4_ * fVar6);
    local_e0 = local_8c + local_e0;
    local_e8 = CONCAT44(local_90 + fVar9,fVar19 + fVar11);
    fVar9 = (float)NEON_fmadd(local_d4,uVar12,uVar13);
    local_d4 = (float)NEON_fmadd(local_d4,uVar15,uVar14);
    uVar14 = NEON_fmadd(local_a0,uVar5,local_a8 * fVar8);
    uVar16 = NEON_fmadd(local_a0,uVar4,local_a8 * fVar7);
    uVar13 = NEON_fmadd(local_a0,uVar10,local_a8 * fVar6);
    local_d0 = (float)NEON_fmadd(local_a4,uVar3,uVar14);
    local_d4 = local_8c + local_d4;
    fStack_cc = (float)NEON_fmadd(local_a4,uVar12,uVar16);
    uVar16 = NEON_fmadd(local_a0,uVar5,local_9c * fVar8);
    local_c8 = (float)NEON_fmadd(local_a4,uVar15,uVar13);
    uVar13 = NEON_fmadd(local_a0,uVar4,local_9c * fVar7);
    local_d0 = local_d0 + fVar11;
    local_dc = CONCAT44(local_90 + fVar9,fVar17 + fVar11);
    fStack_cc = local_90 + fStack_cc;
    uVar14 = NEON_fmadd(local_a0,uVar10,local_9c * fVar6);
    fStack_c4 = (float)NEON_fmadd(local_a4,uVar3,uVar16);
    local_c8 = local_8c + local_c8;
    local_c0 = (float)NEON_fmadd(local_a4,uVar12,uVar13);
    uVar18 = NEON_fmadd(local_94,uVar5,local_a8 * fVar8);
    uVar16 = NEON_fmadd(local_94,uVar4,local_a8 * fVar7);
    fStack_bc = (float)NEON_fmadd(local_a4,uVar15,uVar14);
    fStack_c4 = fStack_c4 + fVar11;
    local_c0 = local_90 + local_c0;
    uVar13 = NEON_fmadd(local_94,uVar10,local_a8 * fVar6);
    local_b8 = (float)NEON_fmadd(local_98,uVar3,uVar18);
    fStack_b4 = (float)NEON_fmadd(local_98,uVar12,uVar16);
    fStack_bc = local_8c + fStack_bc;
    local_b0 = (float)NEON_fmadd(local_98,uVar15,uVar13);
    local_b8 = local_b8 + fVar11;
    fStack_b4 = local_90 + fStack_b4;
    uVar16 = NEON_fmadd(local_94,uVar5,local_a8 * fVar8);
    local_b0 = local_8c + local_b0;
    uVar13 = NEON_fmadd(local_94,uVar4,local_a8 * fVar7);
    uVar14 = NEON_fmadd(local_94,uVar10,local_a8 * fVar6);
    local_ac = (float)NEON_fmadd(local_a4,uVar3,uVar16);
    local_a8 = (float)NEON_fmadd(local_a4,uVar12,uVar13);
    local_a4 = (float)NEON_fmadd(local_a4,uVar15,uVar14);
    local_ac = local_ac + fVar11;
    local_a8 = local_90 + local_a8;
    uVar18 = NEON_fmadd(local_a0,uVar5,local_9c * fVar8);
    uVar14 = NEON_fmadd(local_a0,uVar4,local_9c * fVar7);
    uVar16 = NEON_fmadd(local_a0,uVar10,local_9c * fVar6);
    uVar5 = NEON_fmadd(local_94,uVar5,local_9c * fVar8);
    uVar4 = NEON_fmadd(local_94,uVar4,local_9c * fVar7);
    uVar13 = NEON_fmadd(local_94,uVar10,local_9c * fVar6);
    local_a4 = local_8c + local_a4;
    local_a0 = (float)NEON_fmadd(local_98,uVar3,uVar18);
    local_9c = (float)NEON_fmadd(local_98,uVar12,uVar14);
    fVar8 = (float)NEON_fmadd(local_98,uVar15,uVar16);
    local_94 = (float)NEON_fmadd(local_98,uVar3,uVar5);
    fVar6 = (float)NEON_fmadd(local_98,uVar12,uVar4);
    fVar7 = (float)NEON_fmadd(local_98,uVar15,uVar13);
    local_a0 = local_a0 + fVar11;
    local_9c = local_90 + local_9c;
    local_98 = local_8c + fVar8;
    local_94 = local_94 + fVar11;
    local_90 = local_90 + fVar6;
    local_8c = local_8c + fVar7;
  }
  addLine(this,(float *)&local_e8,param_3,&local_d0,param_3,param_4);
  addLine(this,(float *)&local_e8,param_3,&local_b8,param_3,param_4);
  addLine(this,(float *)&local_e8,param_3,&local_a0,param_3,param_4);
  addLine(this,(float *)&local_dc,param_3,&fStack_c4,param_3,param_4);
  addLine(this,(float *)&local_dc,param_3,&local_ac,param_3,param_4);
  addLine(this,(float *)&local_dc,param_3,&local_94,param_3,param_4);
  addLine(this,&local_d0,param_3,&fStack_c4,param_3,param_4);
  addLine(this,&local_d0,param_3,&local_ac,param_3,param_4);
  addLine(this,&local_b8,param_3,&local_ac,param_3,param_4);
  addLine(this,&local_b8,param_3,&local_94,param_3,param_4);
  addLine(this,&local_a0,param_3,&fStack_c4,param_3,param_4);
  addLine(this,&local_a0,param_3,&local_94,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


