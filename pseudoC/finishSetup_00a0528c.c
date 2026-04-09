// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishSetup
// Entry Point: 00a0528c
// Size: 924 bytes
// Signature: undefined __thiscall finishSetup(TransformArgs * this, Vector3 * param_1)


/* TransformArgs::finishSetup(Vector3 const*) */

void __thiscall TransformArgs::finishSetup(TransformArgs *this,Vector3 *param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float local_d0;
  float local_cc;
  float fStack_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar1 = (undefined8 *)(this + 0x354);
  fVar15 = 1.0;
  fVar11 = *(float *)(this + 0x40);
  fVar10 = *(float *)(this + 0x44);
  fVar13 = *(float *)(this + 0x48);
  fVar8 = *(float *)(this + 0x58);
  *puVar1 = *(undefined8 *)(this + 0x70);
  *(undefined4 *)(this + 0x35c) = *(undefined4 *)(this + 0x78);
  uVar5 = NEON_fmadd(fVar11,fVar11,fVar10 * fVar10);
  fVar16 = (float)NEON_fmadd(fVar13,fVar13,uVar5);
  fVar6 = *(float *)(this + 0x50);
  fVar7 = *(float *)(this + 0x54);
  fVar9 = 1.0;
  if (1e-06 < fVar16) {
    fVar15 = 1.0 / SQRT(fVar16);
  }
  fVar14 = *(float *)(this + 0x60);
  fVar12 = *(float *)(this + 100);
  uVar5 = NEON_fmadd(fVar6,fVar6,fVar7 * fVar7);
  fVar16 = *(float *)(this + 0x68);
  *(float *)(this + 0x360) = fVar11 * fVar15;
  *(float *)(this + 0x364) = fVar10 * fVar15;
  *(float *)(this + 0x368) = fVar13 * fVar15;
  fVar10 = (float)NEON_fmadd(fVar8,fVar8,uVar5);
  if (1e-06 < fVar10) {
    fVar9 = 1.0 / SQRT(fVar10);
  }
  uVar5 = NEON_fmadd(fVar14,fVar14,fVar12 * fVar12);
  *(float *)(this + 0x36c) = fVar6 * fVar9;
  fVar6 = 1.0;
  *(float *)(this + 0x370) = fVar7 * fVar9;
  *(float *)(this + 0x374) = fVar8 * fVar9;
  fVar7 = (float)NEON_fmadd(fVar16,fVar16,uVar5);
  if (1e-06 < fVar7) {
    fVar6 = 1.0 / SQRT(fVar7);
  }
  pfVar2 = (float *)(this + 0x80);
  *(float *)(this + 0x378) = fVar14 * fVar6;
  *(float *)(this + 0x37c) = fVar12 * fVar6;
  *(float *)(this + 0x380) = fVar16 * fVar6;
  uVar5 = RenderDeviceUtil::getNormalizedDeviceZCoordinate(*(float *)(this + 0xc4),pfVar2);
  *(undefined4 *)(this + 200) = uVar5;
  uStack_88 = *(undefined8 *)(this + 8);
  local_90 = *(undefined8 *)this;
  uStack_78 = *(undefined8 *)(this + 0x18);
  uStack_80 = *(undefined8 *)(this + 0x10);
  puVar3 = puVar1;
  if (param_1 != (Vector3 *)0x0) {
    puVar3 = (undefined8 *)param_1;
  }
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  uStack_68 = *(undefined8 *)(this + 0x28);
  local_70 = *(undefined8 *)(this + 0x20);
  uVar5 = *(undefined4 *)(puVar3 + 1);
  *(undefined8 *)(this + 900) = *puVar3;
  local_60 = 0;
  *(undefined4 *)(this + 0x38c) = uVar5;
  local_58 = *(ulong *)(this + 0x38) & 0xffffffff00000000;
  Matrix4x4::mult((Matrix4x4 *)(this + 0x2d4),(Matrix4x4 *)pfVar2,(Matrix4x4 *)&local_90);
  fVar9 = *(float *)(this + 0x1a8);
  fVar15 = *(float *)(this + 0x194);
  fVar12 = -*(float *)(this + 0x198);
  fVar6 = *(float *)(this + 0x1b4);
  fVar8 = *(float *)(this + 0x1a0);
  uVar17 = *(undefined4 *)(this + 0x1b8);
  fVar10 = *(float *)(this + 0x1a4);
  uVar5 = *(undefined4 *)(this + 400);
  fVar7 = (float)NEON_fmadd(fVar15,uVar17,fVar6 * fVar12);
  fVar11 = (float)NEON_fmadd(fVar10,uVar17,fVar6 * -fVar9);
  fVar13 = (float)NEON_fmadd(fVar15,fVar9,fVar10 * fVar12);
  fVar16 = *(float *)(this + 0x1b0);
  uVar18 = NEON_fmadd(uVar5,fVar11,fVar7 * -fVar8);
  fVar14 = (float)NEON_fmadd(fVar16,fVar13,uVar18);
  if (1e-36 < ABS(fVar14)) {
    fVar14 = 1.0 / fVar14;
    local_c0 = (float)NEON_fmadd(fVar8,uVar17,fVar16 * -fVar9);
    local_c4 = 0;
    fStack_bc = (float)NEON_fmadd(uVar5,uVar17,fVar16 * fVar12);
    local_b8 = (float)NEON_fmadd(uVar5,fVar9,fVar8 * fVar12);
    fVar12 = *(float *)(this + 0x1c0) - *(float *)(this + 0x70);
    fVar19 = *(float *)(this + 0x1c4) - *(float *)(this + 0x74);
    local_b4 = 0;
    local_a4 = 0;
    fStack_a8 = (float)NEON_fmadd(uVar5,fVar10,fVar8 * -fVar15);
    local_94 = 0x3f800000;
    fVar9 = *(float *)(this + 0x1c8) - *(float *)(this + 0x78);
    local_b0 = (float)NEON_fmadd(fVar8,fVar6,fVar16 * -fVar10);
    local_ac = (float)NEON_fmadd(uVar5,fVar6,fVar16 * -fVar15);
    fVar6 = -fVar14;
    fStack_bc = fStack_bc * fVar14;
    local_d0 = fVar11 * fVar14;
    fStack_c8 = fVar13 * fVar14;
    fStack_a8 = fStack_a8 * fVar14;
    local_b0 = local_b0 * fVar14;
    local_c0 = local_c0 * fVar6;
    local_b8 = local_b8 * fVar6;
    local_cc = fVar7 * fVar6;
    local_ac = local_ac * fVar6;
    fVar8 = (float)NEON_fmadd(fVar12,local_cc,fVar19 * fStack_bc);
    fVar7 = (float)NEON_fmadd(fVar12,local_d0,fVar19 * local_c0);
    fVar6 = (float)NEON_fmadd(fVar12,fStack_c8,fVar19 * local_b8);
    uStack_9c = NEON_fnmadd(fVar9,local_ac,-fVar8);
    local_a0 = NEON_fnmadd(fVar9,local_b0,-fVar7);
    local_98 = NEON_fnmadd(fVar9,fStack_a8,-fVar6);
  }
  Matrix4x4::mult((Matrix4x4 *)(this + 0x314),(Matrix4x4 *)pfVar2,(Matrix4x4 *)&local_d0);
  *(undefined8 *)(this + 0x390) = *(undefined8 *)(this + 900);
  *(undefined4 *)(this + 0x398) = *(undefined4 *)(this + 0x38c);
  *(ulong *)(this + 0x390) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x390) >> 0x20) -
                (float)((ulong)*puVar1 >> 0x20),
                (float)*(undefined8 *)(this + 0x390) - (float)*puVar1);
  *(float *)(this + 0x398) = *(float *)(this + 0x398) - *(float *)(this + 0x35c);
  Matrix4x4::invert((Matrix4x4 *)(this + 0x150),(Matrix4x4 *)(this + 0xd0));
  uVar5 = NEON_fmadd(*(float *)(this + 0x354) - *(float *)(this + 0x1d0),
                     *(float *)(this + 0x354) - *(float *)(this + 0x1d0),
                     (*(float *)(this + 0x358) - *(float *)(this + 0x1d4)) *
                     (*(float *)(this + 0x358) - *(float *)(this + 0x1d4)));
  fVar6 = (float)NEON_fmadd(*(float *)(this + 0x35c) - *(float *)(this + 0x1d8),
                            *(float *)(this + 0x35c) - *(float *)(this + 0x1d8),uVar5);
  uVar5 = 0x3f800000;
  if (fVar6 <= 200.0) {
    uVar5 = 0xbf800000;
  }
  *(undefined4 *)(this + 0x2d0) = uVar5;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


