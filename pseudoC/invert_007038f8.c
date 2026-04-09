// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invert
// Entry Point: 007038f8
// Size: 844 bytes
// Signature: undefined __thiscall invert(Matrix4x4 * this, Matrix4x4 * param_1)


/* Matrix4x4::invert(Matrix4x4 const&) */

bool __thiscall Matrix4x4::invert(Matrix4x4 *this,Matrix4x4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar31 = *(float *)(param_1 + 0x1c);
  fVar6 = *(float *)(param_1 + 0x38);
  fVar11 = *(float *)(param_1 + 0x3c);
  fVar4 = *(float *)(param_1 + 0x28);
  fVar10 = *(float *)(param_1 + 0x2c);
  fVar24 = *(float *)(param_1 + 0x20);
  fVar25 = *(float *)(param_1 + 0x24);
  fVar26 = *(float *)param_1;
  fVar27 = *(float *)(param_1 + 4);
  fVar8 = fVar6 * fVar31;
  fVar33 = fVar6 * fVar3;
  fVar32 = fVar11 * fVar2;
  fVar39 = fVar11 * fVar1;
  fVar34 = fVar4 * fVar11;
  fVar43 = fVar6 * fVar10;
  fVar29 = *(float *)(param_1 + 0x10);
  fVar30 = *(float *)(param_1 + 0x14);
  uVar37 = NEON_fmadd(fVar34,fVar30,fVar8 * fVar25);
  fVar28 = *(float *)(param_1 + 0x30);
  fVar14 = *(float *)(param_1 + 0x34);
  uVar41 = NEON_fmadd(fVar34,fVar27,fVar33 * fVar25);
  uVar12 = NEON_fmadd(fVar34,fVar29,fVar8 * fVar24);
  uVar35 = NEON_fmadd(fVar34,fVar26,fVar33 * fVar24);
  fVar15 = fVar10 * fVar2;
  uVar45 = NEON_fmadd(fVar43,fVar30,fVar32 * fVar25);
  uVar16 = NEON_fmadd(fVar43,fVar27,fVar39 * fVar25);
  uVar19 = NEON_fmadd(fVar43,fVar29,fVar32 * fVar24);
  uVar44 = NEON_fmadd(fVar43,fVar26,fVar39 * fVar24);
  fVar23 = fVar4 * fVar31;
  uVar21 = NEON_fmadd(fVar8,fVar27,fVar39 * fVar30);
  fVar34 = fVar4 * fVar3;
  fVar38 = (float)NEON_fmadd(fVar15,fVar14,uVar37);
  fVar43 = fVar10 * fVar1;
  fVar46 = (float)NEON_fmadd(fVar23,fVar14,uVar45);
  fVar20 = (float)NEON_fmadd(fVar23,fVar28,uVar19);
  fVar13 = (float)NEON_fmadd(fVar15,fVar28,uVar12);
  uVar12 = NEON_fmadd(fVar32,fVar27,fVar33 * fVar30);
  fVar9 = fVar31 * fVar1;
  fVar5 = fVar2 * fVar3;
  fVar17 = (float)NEON_fmadd(fVar34,fVar14,uVar16);
  fVar42 = (float)NEON_fmadd(fVar43,fVar14,uVar41);
  fVar36 = (float)NEON_fmadd(fVar43,fVar28,uVar35);
  fVar7 = (float)NEON_fmadd(fVar34,fVar28,uVar44);
  fVar18 = (float)NEON_fmadd(fVar9,fVar14,uVar12);
  fVar22 = (float)NEON_fmadd(fVar5,fVar14,uVar21);
  uVar35 = NEON_fmadd(fVar15,fVar27,fVar34 * fVar30);
  fVar40 = fVar14 * fVar29;
  uVar12 = NEON_fmadd(fVar15,fVar26,fVar34 * fVar29);
  uVar16 = NEON_fmadd(fVar23,fVar26,fVar43 * fVar29);
  *(float *)(this + 0x10) = fVar20 - fVar13;
  *(float *)(this + 0x14) = fVar36 - fVar7;
  uVar21 = NEON_fmadd(fVar23,fVar27,fVar43 * fVar30);
  uVar19 = NEON_fmadd(fVar32,fVar26,fVar33 * fVar29);
  fVar23 = fVar30 * fVar28;
  uVar37 = NEON_fmadd(fVar8,fVar26,fVar39 * fVar29);
  fVar32 = fVar25 * fVar28;
  fVar34 = (float)NEON_fmadd(fVar9,fVar24,uVar12);
  fVar43 = (float)NEON_fmadd(fVar5,fVar24,uVar16);
  fVar15 = (float)NEON_fmadd(fVar9,fVar25,uVar35);
  fVar36 = fVar14 * fVar24;
  fVar9 = (float)NEON_fmadd(fVar9,fVar28,uVar19);
  fVar7 = (float)NEON_fmadd(fVar5,fVar25,uVar21);
  fVar33 = (float)NEON_fmadd(fVar5,fVar28,uVar37);
  uVar19 = NEON_fmadd(fVar32,fVar31,fVar10 * fVar40);
  fVar20 = fVar25 * fVar29;
  uVar16 = NEON_fmadd(fVar36,fVar31,fVar10 * fVar23);
  *(float *)this = fVar38 - fVar46;
  *(float *)(this + 4) = fVar17 - fVar42;
  fVar47 = fVar30 * fVar24;
  fVar14 = fVar14 * fVar26;
  fVar13 = fVar27 * fVar28;
  fVar25 = fVar25 * fVar26;
  fVar39 = fVar27 * fVar24;
  uVar12 = NEON_fmadd(fVar26,fVar38 - fVar46,(fVar17 - fVar42) * fVar29);
  fVar5 = (float)NEON_fmadd(fVar20,fVar11,uVar16);
  fVar8 = (float)NEON_fmadd(fVar47,fVar11,uVar19);
  fVar30 = fVar30 * fVar26;
  fVar27 = fVar27 * fVar29;
  uVar12 = NEON_fmadd(fVar24,fVar18 - fVar22,uVar12);
  *(float *)(this + 8) = fVar18 - fVar22;
  *(float *)(this + 0xc) = fVar7 - fVar15;
  *(float *)(this + 0x18) = fVar33 - fVar9;
  *(float *)(this + 0x1c) = fVar34 - fVar43;
  uVar35 = NEON_fmadd(fVar40,fVar3,fVar31 * fVar13);
  uVar37 = NEON_fmadd(fVar23,fVar3,fVar31 * fVar14);
  uVar41 = NEON_fmadd(fVar47,fVar3,fVar31 * fVar25);
  uVar21 = NEON_fmadd(fVar20,fVar3,fVar31 * fVar39);
  uVar16 = NEON_fmadd(fVar32,fVar3,fVar10 * fVar14);
  uVar19 = NEON_fmadd(fVar36,fVar3,fVar10 * fVar13);
  fVar18 = (float)NEON_fmadd(fVar30,fVar11,uVar35);
  fVar15 = (float)NEON_fmadd(fVar28,fVar7 - fVar15,uVar12);
  fVar17 = (float)NEON_fmadd(fVar27,fVar10,uVar41);
  fVar9 = (float)NEON_fmadd(fVar30,fVar10,uVar21);
  fVar3 = (float)NEON_fmadd(fVar39,fVar11,uVar16);
  fVar7 = (float)NEON_fmadd(fVar25,fVar11,uVar19);
  fVar10 = (float)NEON_fmadd(fVar27,fVar11,uVar37);
  uVar21 = NEON_fmadd(fVar40,fVar4,fVar6 * fVar47);
  uVar19 = NEON_fmadd(fVar30,fVar4,fVar1 * fVar20);
  uVar35 = NEON_fmadd(fVar20,fVar6,fVar2 * fVar36);
  uVar41 = NEON_fmadd(fVar30,fVar6,fVar1 * fVar40);
  uVar37 = NEON_fmadd(fVar25,fVar6,fVar1 * fVar36);
  uVar12 = NEON_fmadd(fVar14,fVar4,fVar6 * fVar39);
  uVar16 = NEON_fmadd(fVar14,fVar2,fVar6 * fVar27);
  fVar30 = (float)NEON_fmadd(fVar39,fVar2,uVar19);
  uVar19 = NEON_fmadd(fVar25,fVar2,fVar4 * fVar27);
  fVar6 = (float)NEON_fmadd(fVar32,fVar2,uVar21);
  fVar11 = (float)NEON_fmadd(fVar13,fVar2,uVar41);
  fVar2 = (float)NEON_fmadd(fVar13,fVar4,uVar37);
  fVar4 = (float)NEON_fmadd(fVar23,fVar4,uVar35);
  fVar13 = (float)NEON_fmadd(fVar32,fVar1,uVar12);
  fVar14 = (float)NEON_fmadd(fVar23,fVar1,uVar16);
  fVar1 = (float)NEON_fmadd(fVar47,fVar1,uVar19);
  *(float *)(this + 0x20) = fVar5 - fVar8;
  *(float *)(this + 0x24) = fVar3 - fVar7;
  *(float *)(this + 0x28) = fVar18 - fVar10;
  *(float *)(this + 0x2c) = fVar17 - fVar9;
  *(float *)(this + 0x30) = fVar6 - fVar4;
  *(float *)(this + 0x34) = fVar2 - fVar13;
  *(float *)(this + 0x38) = fVar14 - fVar11;
  *(float *)(this + 0x3c) = fVar30 - fVar1;
  if (1e-36 <= ABS(fVar15)) {
    fVar20 = 1.0 / fVar15;
    *(float *)(this + 0x20) = fVar20 * (fVar5 - fVar8);
    *(float *)(this + 0x24) = fVar20 * (fVar3 - fVar7);
    *(ulong *)(this + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * fVar20,
                  (float)*(undefined8 *)(this + 8) * fVar20);
    *(ulong *)this =
         CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) * fVar20,
                  (float)*(undefined8 *)this * fVar20);
    *(ulong *)(this + 0x10) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar20,
                  (float)*(undefined8 *)(this + 0x10) * fVar20);
    *(float *)(this + 0x18) = fVar20 * *(float *)(this + 0x18);
    *(float *)(this + 0x1c) = fVar20 * (fVar34 - fVar43);
    *(float *)(this + 0x28) = fVar20 * (fVar18 - fVar10);
    *(float *)(this + 0x2c) = fVar20 * (fVar17 - fVar9);
    *(float *)(this + 0x30) = fVar20 * (fVar6 - fVar4);
    *(float *)(this + 0x34) = fVar20 * (fVar2 - fVar13);
    *(float *)(this + 0x38) = fVar20 * (fVar14 - fVar11);
    *(float *)(this + 0x3c) = fVar20 * (fVar30 - fVar1);
  }
  return 1e-36 <= ABS(fVar15);
}


