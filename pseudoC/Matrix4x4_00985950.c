// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Matrix4x4
// Entry Point: 00985950
// Size: 556 bytes
// Signature: undefined __thiscall Matrix4x4(Matrix4x4 * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* Matrix4x4::Matrix4x4(Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall
Matrix4x4::Matrix4x4(Matrix4x4 *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_18;
  float fStack_14;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0x3f800000;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x28) = 0x3f800000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)param_3;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_3 + 8);
  sincosf(*(float *)(param_1 + 8),&fStack_14,&local_18);
  fVar2 = fStack_14 * -0.0;
  uVar11 = NEON_fmadd(fStack_14,0,local_18);
  fVar4 = (float)NEON_fnmsub(local_18,0,fStack_14);
  fVar13 = fStack_14 + local_18 * 0.0;
  fVar16 = local_18 + fVar2;
  uVar10 = NEON_fmadd(fStack_14,0,local_18 * 0.0);
  fVar15 = (float)NEON_fmadd(local_18,0,fVar2);
  *(undefined4 *)this = uVar11;
  *(float *)(this + 4) = fVar13;
  *(float *)(this + 0x10) = fVar4;
  *(float *)(this + 0x14) = fVar16;
  *(undefined4 *)(this + 8) = uVar10;
  *(undefined4 *)(this + 0xc) = uVar10;
  *(float *)(this + 0x18) = fVar15;
  *(float *)(this + 0x1c) = fVar15;
  sincosf(*(float *)(param_1 + 4),&fStack_74,&local_78);
  fVar1 = local_78 * 0.0;
  fVar3 = fStack_74 * -0.0;
  uVar9 = NEON_fmadd(uVar11,fStack_74,fVar1);
  uVar8 = NEON_fmadd(fVar13,fStack_74,fVar1);
  fVar5 = (float)NEON_fmadd(uVar11,local_78,fVar3);
  fVar13 = (float)NEON_fmadd(fVar13,local_78,fVar3);
  uVar12 = NEON_fmadd(uVar10,fStack_74,local_78);
  uVar14 = NEON_fmadd(uVar10,fStack_74,fVar1);
  fVar1 = (float)NEON_fnmsub(uVar10,local_78,fStack_74);
  uVar10 = NEON_fmadd(uVar10,local_78,fVar3);
  *(undefined4 *)(this + 0x20) = uVar9;
  *(undefined4 *)(this + 0x24) = uVar8;
  *(float *)this = fVar5;
  *(float *)(this + 4) = fVar13;
  *(undefined4 *)(this + 0x28) = uVar12;
  *(undefined4 *)(this + 0x2c) = uVar14;
  *(float *)(this + 8) = fVar1;
  *(undefined4 *)(this + 0xc) = uVar10;
  sincosf(*(float *)param_1,&fStack_7c,&local_80);
  fVar3 = (float)NEON_fnmadd(local_18,0,--fStack_14);
  fVar7 = (float)NEON_fnmadd(local_18,0,-fVar2);
  fVar2 = (float)NEON_fmadd(uVar9,fStack_7c,fVar4 * local_80);
  fVar6 = (float)NEON_fmadd(uVar8,fStack_7c,fVar16 * local_80);
  fVar17 = (float)NEON_fmadd(uVar12,fStack_7c,fVar15 * local_80);
  uVar11 = NEON_fmadd(uVar14,fStack_7c,fVar15 * local_80);
  fVar4 = (float)NEON_fmadd(uVar8,local_80,fStack_7c * -fVar16);
  fVar3 = (float)NEON_fmadd(uVar9,local_80,fStack_7c * fVar3);
  fVar15 = (float)NEON_fmadd(uVar12,local_80,fStack_7c * fVar7);
  uVar10 = NEON_fmadd(uVar14,local_80,fStack_7c * fVar7);
  *(float *)(this + 0x10) = fVar2;
  *(float *)(this + 0x14) = fVar6;
  *(float *)(this + 0x18) = fVar17;
  *(undefined4 *)(this + 0x1c) = uVar11;
  *(float *)(this + 0x20) = fVar3;
  *(float *)(this + 0x24) = fVar4;
  *(float *)(this + 0x28) = fVar15;
  *(undefined4 *)(this + 0x2c) = uVar10;
  *(float *)this = fVar5 * *(float *)param_2;
  *(float *)(this + 4) = fVar13 * *(float *)param_2;
  *(float *)(this + 8) = fVar1 * *(float *)param_2;
  *(float *)(this + 0x10) = fVar2 * *(float *)(param_2 + 4);
  *(float *)(this + 0x14) = fVar6 * *(float *)(param_2 + 4);
  *(float *)(this + 0x18) = fVar17 * *(float *)(param_2 + 4);
  *(float *)(this + 0x20) = fVar3 * *(float *)(param_2 + 8);
  *(float *)(this + 0x24) = fVar4 * *(float *)(param_2 + 8);
  *(float *)(this + 0x28) = fVar15 * *(float *)(param_2 + 8);
  return;
}


