// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCVs
// Entry Point: 00b5f614
// Size: 524 bytes
// Signature: undefined __thiscall setCVs(Spline * this, uint param_1, float * param_2, Matrix4x4 * param_3)


/* Spline::setCVs(unsigned int, float const*, Matrix4x4 const&) */

void __thiscall Spline::setCVs(Spline *this,uint param_1,float *param_2,Matrix4x4 *param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  float fVar35;
  
  if (*(uint *)(this + 0x28) == param_1) {
    pvVar3 = *(void **)(this + 0x18);
    iVar7 = *(int *)(this + 0x20);
  }
  else {
    *(uint *)(this + 0x28) = param_1;
    uVar4 = param_1;
    if (*(void **)(this + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x18));
      uVar4 = *(uint *)(this + 0x28);
    }
    iVar7 = *(int *)(this + 0x20);
    pvVar3 = operator_new__((ulong)((iVar7 + uVar4 + *(int *)(this + 0x24)) * 3) << 2);
    *(void **)(this + 0x18) = pvVar3;
  }
  if (param_1 == 0) goto LAB_00b5f800;
  uVar4 = param_1 - 1;
  puVar9 = (undefined8 *)((long)pvVar3 + (ulong)(uint)(iVar7 * 3) * 4);
  if (uVar4 < 3) {
LAB_00b5f794:
    uVar8 = 0;
    puVar5 = puVar9;
    pfVar6 = param_2;
  }
  else {
    lVar1 = (ulong)uVar4 + (ulong)uVar4 * 2;
    pfVar6 = (float *)((long)pvVar3 + (lVar1 + (ulong)(uint)(iVar7 * 3)) * 4 + 0xc);
    if ((puVar9 < param_2 + lVar1 + 3 && param_2 < pfVar6) ||
       (puVar9 < param_3 + 0x3c && param_3 < pfVar6)) goto LAB_00b5f794;
    uVar2 = (ulong)uVar4 + 1;
    uVar8 = uVar2 & 0x1fffffffc;
    puVar5 = (undefined8 *)((long)puVar9 + uVar8 * 0xc);
    pfVar6 = param_2 + uVar8 * 3;
    uVar10 = uVar8;
    do {
      fVar11 = *param_2;
      fVar14 = param_2[1];
      fVar18 = param_2[2];
      fVar19 = param_2[3];
      fVar15 = param_2[4];
      fVar20 = param_2[5];
      fVar24 = param_2[6];
      fVar16 = param_2[7];
      fVar21 = param_2[8];
      fVar29 = param_2[9];
      fVar17 = param_2[10];
      fVar22 = param_2[0xb];
      param_2 = param_2 + 0xc;
      uVar10 = uVar10 - 4;
      fVar23 = (float)*(undefined8 *)(param_3 + 0x10);
      fVar25 = (float)*(undefined8 *)(param_3 + 0x14);
      fVar30 = (float)*(undefined8 *)(param_3 + 0x18);
      fVar31 = (float)*(undefined8 *)param_3;
      fVar34 = (float)*(undefined8 *)(param_3 + 4);
      fVar26 = (float)*(undefined8 *)(param_3 + 8);
      fVar32 = (float)*(undefined8 *)(param_3 + 0x20);
      fVar27 = (float)*(undefined8 *)(param_3 + 0x24);
      fVar33 = (float)*(undefined8 *)(param_3 + 0x28);
      fVar35 = (float)*(undefined8 *)(param_3 + 0x30);
      fVar28 = (float)*(undefined8 *)(param_3 + 0x34);
      fVar13 = (float)*(undefined8 *)(param_3 + 0x38);
      *(float *)puVar9 = fVar35 + fVar14 * fVar23 + fVar11 * fVar31 + fVar18 * fVar32;
      *(float *)((long)puVar9 + 4) = fVar28 + fVar14 * fVar25 + fVar11 * fVar34 + fVar18 * fVar27;
      *(float *)(puVar9 + 1) = fVar13 + fVar14 * fVar30 + fVar11 * fVar26 + fVar18 * fVar33;
      *(float *)((long)puVar9 + 0xc) = fVar35 + fVar15 * fVar23 + fVar19 * fVar31 + fVar20 * fVar32;
      *(float *)(puVar9 + 2) = fVar28 + fVar15 * fVar25 + fVar19 * fVar34 + fVar20 * fVar27;
      *(float *)((long)puVar9 + 0x14) = fVar13 + fVar15 * fVar30 + fVar19 * fVar26 + fVar20 * fVar33
      ;
      *(float *)(puVar9 + 3) = fVar35 + fVar16 * fVar23 + fVar24 * fVar31 + fVar21 * fVar32;
      *(float *)((long)puVar9 + 0x1c) = fVar28 + fVar16 * fVar25 + fVar24 * fVar34 + fVar21 * fVar27
      ;
      *(float *)(puVar9 + 4) = fVar13 + fVar16 * fVar30 + fVar24 * fVar26 + fVar21 * fVar33;
      *(float *)((long)puVar9 + 0x24) = fVar35 + fVar17 * fVar23 + fVar29 * fVar31 + fVar22 * fVar32
      ;
      *(float *)(puVar9 + 5) = fVar28 + fVar17 * fVar25 + fVar29 * fVar34 + fVar22 * fVar27;
      *(float *)((long)puVar9 + 0x2c) = fVar13 + fVar17 * fVar30 + fVar29 * fVar26 + fVar22 * fVar33
      ;
      puVar9 = puVar9 + 6;
    } while (uVar10 != 0);
    if (uVar2 == uVar8) goto LAB_00b5f800;
  }
  iVar7 = param_1 - (int)uVar8;
  do {
    fVar24 = *pfVar6;
    fVar11 = pfVar6[1];
    iVar7 = iVar7 + -1;
    fVar29 = pfVar6[2];
    pfVar6 = pfVar6 + 3;
    uVar12 = NEON_fmadd(fVar24,*(undefined4 *)(param_3 + 8),fVar11 * *(float *)(param_3 + 0x18));
    fVar13 = (float)NEON_fmadd(fVar29,*(undefined4 *)(param_3 + 0x28),uVar12);
    fVar19 = *(float *)(param_3 + 0x38);
    *puVar5 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) * fVar11 +
                       (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar24 +
                       (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) * fVar29,
                       (float)*(undefined8 *)(param_3 + 0x30) +
                       (float)*(undefined8 *)(param_3 + 0x10) * fVar11 +
                       (float)*(undefined8 *)param_3 * fVar24 +
                       (float)*(undefined8 *)(param_3 + 0x20) * fVar29);
    *(float *)(puVar5 + 1) = fVar19 + fVar13;
    puVar5 = (undefined8 *)((long)puVar5 + 0xc);
  } while (iVar7 != 0);
LAB_00b5f800:
                    /* WARNING: Could not recover jumptable at 0x00b5f81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x40))(this);
  return;
}


