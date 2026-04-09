// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateRope
// Entry Point: 00f8f424
// Size: 868 bytes
// Signature: undefined __cdecl CreateRope(btSoftBodyWorldInfo * param_1, btVector3 * param_2, btVector3 * param_3, int param_4, int param_5)


/* btSoftBodyHelpers::CreateRope(btSoftBodyWorldInfo&, btVector3 const&, btVector3 const&, int, int)
    */

btSoftBody *
btSoftBodyHelpers::CreateRope
          (btSoftBodyWorldInfo *param_1,btVector3 *param_2,btVector3 *param_3,int param_4,
          int param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  btSoftBody *this;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined auVar24 [16];
  float fVar26;
  undefined auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  uVar1 = param_4 + 2;
  uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
  if ((ulong)(long)(int)uVar1 >> 0x3c != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar4 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(uVar7,0x10);
  uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  if ((ulong)(long)(int)uVar1 >> 0x3e != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  puVar5 = (undefined8 *)operator_new__(uVar7);
  if (param_4 + 1 < 0 == SCARRY4(param_4,1)) {
    fVar13 = (float)(int)((long)param_4 + 1);
    uVar3 = uVar1;
    if ((int)uVar1 < 2) {
      uVar3 = 1;
    }
    uVar7 = (ulong)uVar3;
    if (uVar3 < 4) {
      uVar8 = 0;
    }
    else {
      puVar9 = (undefined8 *)((long)puVar5 + uVar7 * 4);
      puVar10 = puVar4 + uVar7 * 2;
      uVar8 = 0;
      if ((((puVar9 <= puVar4 || puVar10 <= puVar5) &&
           (param_2 + 0xc <= puVar4 || puVar10 <= param_2)) &&
          (param_3 + 0xc <= puVar4 || puVar10 <= param_3)) &&
         ((param_2 + 0xc <= puVar5 || puVar9 <= param_2 &&
          (param_3 + 0xc <= puVar5 || puVar9 <= param_3)))) {
        uVar8 = uVar7 & 0x7ffffffc;
        fVar15 = 1.0 / fVar13;
        iVar18 = 2;
        iVar19 = 3;
        iVar16 = 0;
        iVar17 = 1;
        auVar24 = NEON_fmov(0x3f800000,4);
        puVar9 = puVar4;
        puVar10 = puVar5;
        uVar11 = uVar8;
        do {
          auVar25._4_4_ = iVar17;
          auVar25._0_4_ = iVar16;
          auVar25._8_4_ = iVar18;
          auVar25._12_4_ = iVar19;
          auVar25 = NEON_scvtf(auVar25,4);
          iVar16 = iVar16 + 4;
          iVar17 = iVar17 + 4;
          iVar18 = iVar18 + 4;
          iVar19 = iVar19 + 4;
          uVar11 = uVar11 - 4;
          fVar27 = (float)*(undefined8 *)param_2;
          fVar22 = auVar25._0_4_ * fVar15;
          fVar20 = auVar25._4_4_ * fVar15;
          fVar26 = auVar25._8_4_ * fVar15;
          fVar23 = auVar25._12_4_ * fVar15;
          fVar29 = (float)*(undefined8 *)param_3 - fVar27;
          fVar31 = (float)*(undefined8 *)(param_2 + 4);
          fVar32 = (float)*(undefined8 *)(param_3 + 4) - fVar31;
          fVar28 = (float)*(undefined8 *)(param_2 + 8);
          fVar30 = (float)*(undefined8 *)(param_3 + 8) - fVar28;
          *(float *)puVar9 = fVar27 + fVar22 * fVar29;
          *(float *)((long)puVar9 + 4) = fVar31 + fVar22 * fVar32;
          *(float *)(puVar9 + 1) = fVar28 + fVar22 * fVar30;
          *(float *)((long)puVar9 + 0xc) = 0.0;
          *(float *)(puVar9 + 2) = fVar27 + fVar20 * fVar29;
          *(float *)((long)puVar9 + 0x14) = fVar31 + fVar20 * fVar32;
          *(float *)(puVar9 + 3) = fVar28 + fVar20 * fVar30;
          *(float *)((long)puVar9 + 0x1c) = 0.0;
          *(float *)(puVar9 + 4) = fVar27 + fVar26 * fVar29;
          *(float *)((long)puVar9 + 0x24) = fVar31 + fVar26 * fVar32;
          *(float *)(puVar9 + 5) = fVar28 + fVar26 * fVar30;
          *(float *)((long)puVar9 + 0x2c) = 0.0;
          *(float *)(puVar9 + 6) = fVar27 + fVar23 * fVar29;
          *(float *)((long)puVar9 + 0x34) = fVar31 + fVar23 * fVar32;
          *(float *)(puVar9 + 7) = fVar28 + fVar23 * fVar30;
          *(float *)((long)puVar9 + 0x3c) = 0.0;
          puVar9 = puVar9 + 8;
          puVar10[1] = auVar24._8_8_;
          *puVar10 = auVar24._0_8_;
          puVar10 = puVar10 + 2;
        } while (uVar11 != 0);
        if (uVar8 == uVar7) goto LAB_00f8f634;
      }
    }
    puVar9 = puVar4 + uVar8 * 2 + 1;
    do {
      fVar20 = (float)*(undefined8 *)param_2;
      fVar26 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      uVar21 = *(undefined8 *)param_3;
      fVar22 = *(float *)(param_2 + 8);
      fVar23 = *(float *)(param_3 + 8);
      *(float *)((long)puVar9 + 4) = 0.0;
      fVar15 = (float)(int)uVar8 / fVar13;
      fVar22 = (float)NEON_fmadd(fVar23 - fVar22,fVar15,fVar22);
      puVar9[-1] = CONCAT44(fVar26 + ((float)((ulong)uVar21 >> 0x20) - fVar26) * fVar15,
                            fVar20 + ((float)uVar21 - fVar20) * fVar15);
      *(float *)puVar9 = fVar22;
      *(float *)((long)puVar5 + uVar8 * 4) = 1.0;
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 2;
    } while (uVar7 != uVar8);
  }
LAB_00f8f634:
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this = (btSoftBody *)(*(code *)PTR_FUN_01048e38)(0x690,0x10);
  btSoftBody::btSoftBody(this,param_1,uVar1,(btVector3 *)puVar4,(float *)puVar5);
  if ((param_5 & 1U) != 0) {
    *(undefined4 *)(*(long *)(this + 0x380) + 0x60) = 0;
    this[0x4b4] = (btSoftBody)0x1;
  }
  if (((uint)param_5 >> 1 & 1) != 0) {
    this[0x4b4] = (btSoftBody)0x1;
    *(undefined4 *)(*(long *)(this + 0x380) + ((long)param_4 + 1) * 0x78 + 0x60) = 0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(puVar4);
  }
  operator_delete__(puVar5);
  if (-1 < param_4) {
    if ((int)uVar1 < 3) {
      uVar1 = 2;
    }
    lVar12 = 0x78;
    do {
      lVar2 = *(long *)(this + 0x380) + lVar12;
      btSoftBody::appendLink(this,-1,(Material *)0x0);
      fVar13 = *(float *)(lVar2 + 0x10);
      fVar20 = *(float *)(lVar2 + 0x14);
      fVar15 = *(float *)(lVar2 + -0x68);
      fVar22 = *(float *)(lVar2 + -100);
      lVar12 = lVar12 + 0x78;
      this[0x4b4] = (btSoftBody)0x1;
      fVar15 = fVar15 - fVar13;
      fVar22 = fVar22 - fVar20;
      lVar6 = *(long *)(this + 0x3a0) + (long)*(int *)(this + 0x394) * 0x48;
      fVar13 = *(float *)(lVar2 + -0x60) - *(float *)(lVar2 + 0x18);
      *(long *)(lVar6 + -0x38) = lVar2 + -0x78;
      *(long *)(lVar6 + -0x30) = lVar2;
      uVar14 = NEON_fmadd(fVar22,fVar22,fVar15 * fVar15);
      fVar13 = (float)NEON_fmadd(fVar13,fVar13,uVar14);
      *(float *)(lVar6 + -0x28) = SQRT(fVar13);
    } while ((ulong)uVar1 * 0x78 - lVar12 != 0);
  }
  return this;
}


