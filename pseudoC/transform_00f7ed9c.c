// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transform
// Entry Point: 00f7ed9c
// Size: 752 bytes
// Signature: undefined __thiscall transform(btSoftBody * this, btTransform * param_1)


/* btSoftBody::transform(btTransform const&) */

void __thiscall btSoftBody::transform(btSoftBody *this,btTransform *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined4 uVar30;
  
  fVar8 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
  uVar2 = *(uint *)(this + 0x374);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    plVar1 = (long *)(this + 0x4b8);
    do {
      lVar4 = *(long *)(this + 0x380) + uVar7 * 0x78;
      fVar13 = *(float *)(lVar4 + 0x10);
      uVar26 = *(undefined4 *)(lVar4 + 0x14);
      pfVar6 = *(float **)(lVar4 + 0x68);
      uVar9 = NEON_fmadd(*(undefined4 *)(param_1 + 4),uVar26,*(float *)param_1 * fVar13);
      uVar17 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),uVar26,*(float *)(param_1 + 0x10) * fVar13
                         );
      uVar14 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),uVar26,*(float *)(param_1 + 0x20) * fVar13
                         );
      uVar26 = *(undefined4 *)(lVar4 + 0x18);
      fVar13 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar26,uVar9);
      fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),uVar26,uVar17);
      fVar22 = *(float *)(param_1 + 0x30);
      fVar29 = *(float *)(param_1 + 0x34);
      fVar11 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar26,uVar14);
      fVar15 = *(float *)(param_1 + 0x38);
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      fVar13 = fVar13 + fVar22;
      fVar18 = fVar18 + fVar29;
      fVar11 = fVar11 + fVar15;
      uVar10 = *(undefined8 *)(lVar4 + 0x20);
      *(float *)(lVar4 + 0x10) = fVar13;
      uVar20 = NEON_rev64(uVar10,4);
      *(float *)(lVar4 + 0x14) = fVar18;
      *(float *)(lVar4 + 0x18) = fVar11;
      uVar24 = *(undefined8 *)(param_1 + 8);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar16 = *(undefined8 *)param_1;
      fVar25 = *(float *)(param_1 + 0x18);
      uVar28 = NEON_ext(uVar16,uVar12,4,1);
      fVar19 = *(float *)(lVar4 + 0x28);
      fVar22 = (float)((ulong)uVar10 >> 0x20);
      fVar29 = *(float *)(param_1 + 0x38);
      fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar19,
                                 *(float *)(param_1 + 0x20) * (float)uVar10 +
                                 *(float *)(param_1 + 0x24) * fVar22);
      uVar21 = *(undefined8 *)(param_1 + 0x30);
      *(undefined4 *)(lVar4 + 0x2c) = 0;
      *(float *)(lVar4 + 0x28) = fVar15 + fVar29;
      fVar15 = *(float *)(lVar4 + 0x50);
      uVar9 = *(undefined4 *)(lVar4 + 0x54);
      *(ulong *)(lVar4 + 0x20) =
           CONCAT44((float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar20 >> 0x20) +
                    fVar22 * (float)((ulong)uVar12 >> 0x20) + fVar25 * fVar19 +
                    (float)((ulong)uVar21 >> 0x20),
                    (float)uVar28 * (float)uVar20 + (float)uVar10 * (float)uVar16 +
                    (float)uVar24 * fVar19 + (float)uVar21);
      uVar23 = *(undefined4 *)(lVar4 + 0x58);
      uVar26 = NEON_fmadd(uVar9,*(undefined4 *)(param_1 + 4),fVar15 * *(float *)param_1);
      uVar27 = *(undefined4 *)(param_1 + 8);
      uVar17 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),uVar9,*(float *)(param_1 + 0x10) * fVar15)
      ;
      uVar30 = *(undefined4 *)(param_1 + 0x28);
      uVar9 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),uVar9,*(float *)(param_1 + 0x20) * fVar15);
      uVar14 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(lVar4 + 0x5c) = 0;
      uVar26 = NEON_fmadd(uVar23,uVar27,uVar26);
      uVar14 = NEON_fmadd(uVar14,uVar23,uVar17);
      uVar9 = NEON_fmadd(uVar30,uVar23,uVar9);
      *(undefined4 *)(lVar4 + 0x50) = uVar26;
      *(undefined4 *)(lVar4 + 0x54) = uVar14;
      *(undefined4 *)(lVar4 + 0x58) = uVar9;
      lVar4 = FUN_00f424e4(plVar1,pfVar6);
      if (lVar4 != 0) {
        iVar3 = *(int *)(this + 0x4c8);
        if (iVar3 < 0) {
          lVar4 = *plVar1;
        }
        else {
          while ((iVar3 != 0 && (*(long *)(lVar4 + 0x20) != 0))) {
            iVar3 = iVar3 + -1;
            lVar4 = *(long *)(lVar4 + 0x20);
          }
        }
      }
      pfVar6[3] = 0.0;
      *pfVar6 = fVar13 - fVar8;
      pfVar6[1] = fVar18 - fVar8;
      pfVar6[2] = fVar11 - fVar8;
      pfVar6[4] = fVar13 + fVar8;
      pfVar6[5] = fVar18 + fVar8;
      pfVar6[6] = fVar11 + fVar8;
      pfVar6[7] = 0.0;
      FUN_00f42680(plVar1,lVar4,pfVar6);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  updateNormals();
  puVar5 = *(undefined8 **)(this + 0x4b8);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x49c) = 0;
    *(undefined8 *)(this + 0x494) = 0;
    *(undefined8 *)(this + 0x4ac) = 0;
    *(undefined8 *)(this + 0x4a4) = 0;
  }
  else {
    fVar8 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    fVar13 = *(float *)(puVar5 + 1);
    uVar10 = *puVar5;
    *(undefined4 *)(this + 0x4a0) = 0;
    *(float *)(this + 0x49c) = fVar13 - fVar8;
    *(ulong *)(this + 0x494) =
         CONCAT44((float)((ulong)uVar10 >> 0x20) - fVar8,(float)uVar10 - fVar8);
    uVar10 = puVar5[2];
    fVar13 = *(float *)(puVar5 + 3);
    *(undefined4 *)(this + 0x4b0) = 0;
    *(ulong *)(this + 0x4a4) =
         CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar8,(float)uVar10 + fVar8);
    *(float *)(this + 0x4ac) = fVar13 + fVar8;
    if (*(long *)(this + 0xc0) != 0) {
      plVar1 = *(long **)(*(long *)(this + 0x348) + 0x20);
      (**(code **)(*plVar1 + 0x20))
                (plVar1,*(long *)(this + 0xc0),this + 0x494,this + 0x4a4,
                 *(undefined8 *)(*(long *)(this + 0x348) + 0x28));
    }
  }
  updateConstants();
  uVar10 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x620) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x618) = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x630) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x628) = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x640) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x638) = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x650) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x648) = uVar10;
  return;
}


