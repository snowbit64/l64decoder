// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointLimitsSpring
// Entry Point: 009a4f94
// Size: 316 bytes
// Signature: undefined __thiscall setJointLimitsSpring(Bt2ScenegraphPhysicsContext * this, uint param_1, SetJointLimitSpring * param_2)


/* Bt2ScenegraphPhysicsContext::setJointLimitsSpring(unsigned int,
   Bt2ScenegraphPhysicsContext::SetJointLimitSpring const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setJointLimitsSpring
          (Bt2ScenegraphPhysicsContext *this,uint param_1,SetJointLimitSpring *param_2)

{
  uint uVar1;
  Bt2ScenegraphPhysicsContext *pBVar2;
  long lVar3;
  uint uVar4;
  Bt2ScenegraphPhysicsContext *pBVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pBVar5 = *(Bt2ScenegraphPhysicsContext **)(this + 0x1c8);
  if (pBVar5 == (Bt2ScenegraphPhysicsContext *)0x0) {
    return;
  }
  pBVar2 = this + 0x1c8;
  do {
    if (*(uint *)(pBVar5 + 0x20) >= param_1) {
      pBVar2 = pBVar5;
    }
    pBVar5 = *(Bt2ScenegraphPhysicsContext **)
              (pBVar5 + (ulong)(*(uint *)(pBVar5 + 0x20) < param_1) * 8);
  } while (pBVar5 != (Bt2ScenegraphPhysicsContext *)0x0);
  if (pBVar2 == this + 0x1c8) {
    return;
  }
  if (param_1 < *(uint *)(pBVar2 + 0x20)) {
    return;
  }
  lVar7 = *(long *)(pBVar2 + 0x30);
  uVar1 = *(uint *)(param_2 + 4);
  fVar8 = *(float *)(*(long *)(this + 0x30) + 0x9c);
  fVar9 = *(float *)(param_2 + 8);
  if (*param_2 == (SetJointLimitSpring)0x0) {
    uVar4 = *(uint *)(lVar7 + 0x36c);
    uVar6 = 3 << (ulong)(uVar1 * 2 + 6 & 0x1f);
    if (0.0 < fVar9) {
      fVar10 = (float)NEON_fmadd(fVar8,fVar9,*(undefined4 *)(param_2 + 0xc));
      lVar3 = lVar7 + (ulong)uVar1 * 0x44;
      *(uint *)(lVar7 + 0x36c) = uVar6 | uVar4;
      fVar10 = 1.0 / (fVar8 * fVar10);
      *(float *)(lVar3 + 0x1d4) = fVar10;
      *(float *)(lVar3 + 0x1d0) = fVar8 * fVar8 * fVar9 * fVar10;
      goto LAB_009a50b0;
    }
  }
  else {
    uVar4 = *(uint *)(lVar7 + 0x36c);
    uVar6 = 3 << (ulong)(uVar1 * 2 & 0x1f);
    if (0.0 < fVar9) {
      lVar3 = lVar7 + (ulong)uVar1 * 4;
      fVar10 = (float)NEON_fmadd(fVar8,fVar9,*(undefined4 *)(param_2 + 0xc));
      *(uint *)(lVar7 + 0x36c) = uVar6 | uVar4;
      fVar10 = 1.0 / (fVar8 * fVar10);
      *(float *)(lVar3 + 0x11c) = fVar10;
      *(float *)(lVar3 + 0x10c) = fVar8 * fVar8 * fVar9 * fVar10;
      goto LAB_009a50b0;
    }
  }
  *(uint *)(lVar7 + 0x36c) = uVar4 & (uVar6 ^ 0xffffffff);
LAB_009a50b0:
  btCollisionObject::activate(*(btCollisionObject **)(lVar7 + 0x28),false);
  btCollisionObject::activate(*(btCollisionObject **)(lVar7 + 0x30),false);
  return;
}


