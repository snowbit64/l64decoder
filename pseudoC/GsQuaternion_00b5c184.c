// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsQuaternion
// Entry Point: 00b5c184
// Size: 404 bytes
// Signature: undefined __thiscall GsQuaternion(GsQuaternion * this, Vector3 * param_1)


/* GsQuaternion::GsQuaternion(Vector3 const&) */

void __thiscall GsQuaternion::GsQuaternion(GsQuaternion *this,Vector3 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uStack_80 = 0x3f80000000000000;
  local_88 = 0;
  sincosf(*(float *)(param_1 + 8),&fStack_bc,&local_c0);
  fVar9 = fStack_bc * -0.0;
  uVar10 = NEON_fmadd(fStack_bc,0,local_c0);
  fVar3 = (float)NEON_fnmsub(local_c0,0,fStack_bc);
  fVar13 = fStack_bc + local_c0 * 0.0;
  uVar12 = NEON_fmadd(fStack_bc,0,local_c0 * 0.0);
  fVar2 = (float)NEON_fmadd(local_c0,0,fVar9);
  sincosf(*(float *)(param_1 + 4),&fStack_c4,&local_c8);
  fVar4 = local_c8 * 0.0;
  fVar5 = fStack_c4 * -0.0;
  uVar8 = NEON_fmadd(uVar10,fStack_c4,fVar4);
  uVar7 = NEON_fmadd(uVar10,local_c8,fVar5);
  uVar11 = NEON_fmadd(fVar13,fStack_c4,fVar4);
  uVar6 = NEON_fmadd(fVar13,local_c8,fVar5);
  uVar14 = NEON_fmadd(uVar12,fStack_c4,local_c8);
  local_ac = NEON_fmadd(uVar12,local_c8,fVar5);
  uVar10 = NEON_fnmsub(uVar12,local_c8,fStack_c4);
  uVar12 = NEON_fmadd(uVar12,fStack_c4,fVar4);
  sincosf(*(float *)param_1,&fStack_cc,&local_d0);
  fVar4 = (float)NEON_fnmadd(local_c0,0,-fVar9);
  fVar5 = (float)NEON_fnmadd(local_c0,0,--fStack_bc);
  local_a8 = NEON_fmadd(uVar8,fStack_cc,fVar3 * local_d0);
  uStack_a4 = NEON_fmadd(uVar11,fStack_cc,(local_c0 + fVar9) * local_d0);
  local_a0 = NEON_fmadd(uVar14,fStack_cc,fVar2 * local_d0);
  uStack_8c = NEON_fmadd(uVar12,local_d0,fStack_cc * fVar4);
  uStack_9c = NEON_fmadd(uVar12,fStack_cc,fVar2 * local_d0);
  local_98 = NEON_fmadd(uVar8,local_d0,fStack_cc * fVar5);
  uStack_94 = NEON_fmadd(uVar11,local_d0,fStack_cc * -(local_c0 + fVar9));
  local_90 = NEON_fmadd(uVar14,local_d0,fStack_cc * fVar4);
  local_b8 = uVar7;
  uStack_b4 = uVar6;
  local_b0 = uVar10;
  set(this,(Matrix4x4 *)&local_b8);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


