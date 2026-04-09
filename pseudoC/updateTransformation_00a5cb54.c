// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTransformation
// Entry Point: 00a5cb54
// Size: 488 bytes
// Signature: undefined updateTransformation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TransformGroup::updateTransformation() */

void TransformGroup::updateTransformation(void)

{
  long lVar1;
  RawTransformGroup *in_x0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((byte)in_x0[0x41] >> 3 & 1) != 0) {
    updateEulerFromMatrix();
  }
  local_78 = *(undefined8 *)(in_x0 + 0x130);
  local_70 = *(undefined4 *)(in_x0 + 0x138);
  local_6c = 0x3f800000;
  sincosf(*(float *)(in_x0 + 0x144),&fStack_ac,&local_b0);
  fVar10 = fStack_ac * -0.0;
  uVar12 = NEON_fmadd(fStack_ac,0,local_b0);
  fVar3 = (float)NEON_fnmsub(local_b0,0,fStack_ac);
  fVar13 = fStack_ac + local_b0 * 0.0;
  uVar11 = NEON_fmadd(fStack_ac,0,local_b0 * 0.0);
  fVar2 = (float)NEON_fmadd(local_b0,0,fVar10);
  sincosf(*(float *)(in_x0 + 0x140),&fStack_b4,&local_b8);
  fVar4 = local_b8 * 0.0;
  fVar5 = fStack_b4 * -0.0;
  uVar9 = NEON_fmadd(uVar12,fStack_b4,fVar4);
  fVar7 = (float)NEON_fmadd(uVar12,local_b8,fVar5);
  uVar12 = NEON_fmadd(fVar13,fStack_b4,fVar4);
  fVar6 = (float)NEON_fmadd(fVar13,local_b8,fVar5);
  uVar14 = NEON_fmadd(uVar11,fStack_b4,local_b8);
  local_9c = NEON_fmadd(uVar11,local_b8,fVar5);
  fVar5 = (float)NEON_fnmsub(uVar11,local_b8,fStack_b4);
  uVar11 = NEON_fmadd(uVar11,fStack_b4,fVar4);
  sincosf(*(float *)(in_x0 + 0x13c),&fStack_bc,&local_c0);
  fVar4 = (float)NEON_fnmadd(local_b0,0,-fVar10);
  local_a0 = *(float *)(in_x0 + 0x148);
  fVar8 = *(float *)(in_x0 + 0x14c);
  fVar13 = (float)NEON_fnmadd(local_b0,0,--fStack_ac);
  fStack_94 = (float)NEON_fmadd(uVar12,fStack_bc,(local_b0 + fVar10) * local_c0);
  local_98 = (float)NEON_fmadd(uVar9,fStack_bc,fVar3 * local_c0);
  uStack_7c = NEON_fmadd(uVar11,local_c0,fStack_bc * fVar4);
  local_a8 = fVar7 * local_a0;
  fStack_a4 = fVar6 * local_a0;
  fStack_84 = (float)NEON_fmadd(uVar12,local_c0,fStack_bc * -(local_b0 + fVar10));
  local_a0 = fVar5 * local_a0;
  local_88 = (float)NEON_fmadd(uVar9,local_c0,fStack_bc * fVar13);
  local_90 = (float)NEON_fmadd(uVar14,fStack_bc,fVar2 * local_c0);
  local_80 = (float)NEON_fmadd(uVar14,local_c0,fStack_bc * fVar4);
  local_98 = local_98 * fVar8;
  fStack_94 = fStack_94 * fVar8;
  fVar5 = *(float *)(in_x0 + 0x150);
  uStack_8c = NEON_fmadd(uVar11,fStack_bc,fVar2 * local_c0);
  local_90 = local_90 * fVar8;
  local_88 = local_88 * fVar5;
  fStack_84 = fStack_84 * fVar5;
  local_80 = local_80 * fVar5;
  RawTransformGroup::setTransformation(in_x0,(Matrix4x4 *)&local_a8,0);
  *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xfffff7ff;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


