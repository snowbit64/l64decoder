// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWorldTransform
// Entry Point: 009b1958
// Size: 496 bytes
// Signature: undefined __thiscall setWorldTransform(DynamicMotionState * this, btTransform * param_1)


/* Bt2ScenegraphPhysicsContext::DynamicMotionState::setWorldTransform(btTransform const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::DynamicMotionState::setWorldTransform
          (DynamicMotionState *this,btTransform *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  
  uVar6 = *(undefined4 *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(this + 0x68);
  fVar9 = *(float *)(this + 0x6c);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x14);
  uVar21 = *(undefined4 *)(param_1 + 0x20);
  fVar23 = *(float *)(param_1 + 0x24);
  uVar15 = *(undefined4 *)(this + 0x58);
  uVar18 = *(undefined4 *)(this + 0x5c);
  fVar10 = *(float *)(this + 0x70);
  uVar17 = NEON_fmadd(uVar18,uVar6,fVar7 * fVar9);
  uVar28 = *(undefined4 *)(this + 0x60);
  uVar25 = NEON_fmadd(uVar18,uVar11,fVar9 * fVar12);
  uVar18 = NEON_fmadd(uVar18,uVar21,fVar9 * fVar23);
  uVar19 = *(undefined4 *)(this + 0x88);
  fVar9 = *(float *)(this + 0x8c);
  uVar13 = NEON_fmadd(uVar15,uVar6,fVar8 * fVar7);
  uVar22 = NEON_fmadd(uVar15,uVar11,fVar8 * fVar12);
  uVar26 = *(undefined4 *)(this + 0x78);
  uVar27 = *(undefined4 *)(this + 0x7c);
  uVar15 = NEON_fmadd(uVar15,uVar21,fVar8 * fVar23);
  uVar24 = *(undefined4 *)(param_1 + 8);
  uVar29 = *(undefined4 *)(param_1 + 0x18);
  uVar16 = NEON_fmadd(uVar28,uVar11,fVar10 * fVar12);
  uVar30 = *(undefined4 *)(param_1 + 0x28);
  uVar20 = NEON_fmadd(uVar28,uVar6,fVar7 * fVar10);
  uVar14 = NEON_fmadd(uVar26,uVar24,uVar13);
  uVar6 = NEON_fmadd(uVar19,uVar6,fVar7 * fVar9);
  uVar13 = NEON_fmadd(uVar19,uVar11,fVar12 * fVar9);
  uVar19 = NEON_fmadd(uVar19,uVar21,fVar23 * fVar9);
  uVar22 = NEON_fmadd(uVar26,uVar29,uVar22);
  uVar15 = NEON_fmadd(uVar26,uVar30,uVar15);
  uVar26 = *(undefined4 *)(this + 0x90);
  uVar17 = NEON_fmadd(uVar27,uVar24,uVar17);
  uVar25 = NEON_fmadd(uVar27,uVar29,uVar25);
  uVar18 = NEON_fmadd(uVar27,uVar30,uVar18);
  uVar11 = NEON_fmadd(uVar28,uVar21,fVar10 * fVar23);
  fVar12 = *(float *)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x34);
  fVar7 = (float)NEON_fmadd(uVar26,uVar24,uVar6);
  fVar9 = (float)NEON_fmadd(uVar26,uVar29,uVar13);
  fVar10 = (float)NEON_fmadd(uVar26,uVar30,uVar19);
  uVar6 = *(undefined4 *)(this + 0x80);
  fVar23 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x38) = uVar15;
  *(undefined4 *)(this + 0x3c) = uVar18;
  *(undefined4 *)(this + 0x18) = uVar14;
  *(undefined4 *)(this + 0x1c) = uVar17;
  uVar18 = NEON_fmadd(uVar6,uVar24,uVar20);
  uVar15 = NEON_fmadd(uVar6,uVar29,uVar16);
  uVar6 = NEON_fmadd(uVar6,uVar30,uVar11);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = uVar18;
  *(undefined4 *)(this + 0x28) = uVar22;
  *(undefined4 *)(this + 0x2c) = uVar25;
  *(undefined4 *)(this + 0x30) = uVar15;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = uVar6;
  *(undefined4 *)(this + 0x44) = 0;
  *(float *)(this + 0x48) = fVar12 + fVar7;
  *(float *)(this + 0x4c) = fVar9 + fVar8;
  *(float *)(this + 0x50) = fVar10 + fVar23;
  *(undefined4 *)(this + 0x54) = 0;
  if ((*(uint *)(this + 0x98) & 1) == 0) {
    lVar5 = *(long *)(this + 0x10);
    *(uint *)(this + 0x98) = *(uint *)(this + 0x98) | 1;
    uVar3 = *(uint *)(lVar5 + 4);
    if (uVar3 == *(uint *)(lVar5 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = btAlignedAllocInternal
                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
          uVar3 = *(uint *)(lVar5 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(lVar5 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 * 8 - lVar4 != 0);
        }
        if ((*(void **)(lVar5 + 0x10) != (void *)0x0) && (*(char *)(lVar5 + 0x18) != '\0')) {
          btAlignedFreeInternal(*(void **)(lVar5 + 0x10));
          uVar3 = *(uint *)(lVar5 + 4);
        }
        *(long *)(lVar5 + 0x10) = lVar2;
        *(uint *)(lVar5 + 8) = uVar1;
        *(undefined *)(lVar5 + 0x18) = 1;
      }
    }
    *(DynamicMotionState **)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 8) = this;
    *(uint *)(lVar5 + 4) = uVar3 + 1;
  }
  return;
}


