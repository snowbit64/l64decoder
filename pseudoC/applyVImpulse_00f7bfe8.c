// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyVImpulse
// Entry Point: 00f7bfe8
// Size: 508 bytes
// Signature: undefined __thiscall applyVImpulse(Body * this, btVector3 * param_1, btVector3 * param_2)


/* btSoftBody::Body::applyVImpulse(btVector3 const&, btVector3 const&) const */

void __thiscall btSoftBody::Body::applyVImpulse(Body *this,btVector3 *param_1,btVector3 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar1 = *(long *)(this + 8);
  if ((lVar1 != 0) && (fVar2 = *(float *)(lVar1 + 0x19c), fVar2 != 0.0)) {
    fVar8 = (float)*(undefined8 *)(lVar1 + 0x1a0);
    fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1a0) >> 0x20);
    uVar3 = NEON_fmadd(*(float *)(param_1 + 8) * fVar2,*(float *)(lVar1 + 0x1a8),
                       *(undefined4 *)(lVar1 + 0x184));
    *(ulong *)(lVar1 + 0x17c) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x17c) >> 0x20) +
                  fVar4 * (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar2,
                  (float)*(undefined8 *)(lVar1 + 0x17c) +
                  fVar8 * (float)*(undefined8 *)param_1 * fVar2);
    *(undefined4 *)(lVar1 + 0x184) = uVar3;
    fVar4 = *(float *)(param_1 + 4) * fVar4;
    fVar2 = *(float *)(lVar1 + 0x1a8) * *(float *)(param_1 + 8);
    fVar8 = *(float *)param_1 * fVar8;
    fVar7 = (float)NEON_fnmsub(*(float *)(param_2 + 8),fVar8,*(float *)param_2 * fVar2);
    fVar5 = (float)NEON_fnmsub(fVar2,*(float *)(param_2 + 4),*(float *)(param_2 + 8) * fVar4);
    fVar2 = (float)NEON_fnmsub(*(float *)param_2,fVar4,*(float *)(param_2 + 4) * fVar8);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x170),fVar7,*(float *)(lVar1 + 0x16c) * fVar5);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar2,uVar3);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar3,*(undefined4 *)(lVar1 + 0x194));
    *(ulong *)(lVar1 + 0x18c) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x18c) >> 0x20) +
                  (*(float *)(lVar1 + 0x15c) * fVar5 + *(float *)(lVar1 + 0x160) * fVar7 +
                  *(float *)(lVar1 + 0x164) * fVar2) *
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                  (float)*(undefined8 *)(lVar1 + 0x18c) +
                  ((float)*(undefined8 *)(lVar1 + 0x14c) * fVar5 +
                   (float)*(undefined8 *)(lVar1 + 0x150) * fVar7 +
                  (float)*(undefined8 *)(lVar1 + 0x154) * fVar2) *
                  (float)*(undefined8 *)(lVar1 + 0x278));
    *(undefined4 *)(lVar1 + 0x194) = uVar3;
  }
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    fVar2 = *(float *)param_1;
    fVar5 = *(float *)(param_1 + 4);
    fVar9 = *(float *)(param_1 + 8);
    fVar8 = *(float *)(lVar1 + 0xa4);
    fVar4 = (float)NEON_fnmsub(*(float *)(param_2 + 4),fVar9,*(float *)(param_2 + 8) * fVar5);
    uVar3 = NEON_fnmsub(*(float *)(param_2 + 8),fVar2,*(float *)param_2 * fVar9);
    uVar6 = NEON_fnmsub(*(float *)param_2,fVar5,*(float *)(param_2 + 4) * fVar2);
    *(float *)(lVar1 + 0x118) = *(float *)(lVar1 + 0x118) + fVar8 * fVar2;
    uVar10 = NEON_fmadd(uVar3,*(undefined4 *)(lVar1 + 0xdc),fVar4 * *(float *)(lVar1 + 0xd8));
    uVar11 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xec),uVar3,*(float *)(lVar1 + 0xe8) * fVar4);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xfc),uVar3,*(float *)(lVar1 + 0xf8) * fVar4);
    *(float *)(lVar1 + 0x120) = *(float *)(lVar1 + 0x120) + fVar9 * fVar8;
    *(float *)(lVar1 + 0x11c) = *(float *)(lVar1 + 0x11c) + fVar5 * fVar8;
    fVar7 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0xe0),uVar6,uVar10);
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x100),uVar6,uVar3);
    *(float *)(lVar1 + 0x160) = *(float *)(lVar1 + 0x160) + fVar8 * fVar2;
    *(float *)(lVar1 + 0x168) = *(float *)(lVar1 + 0x168) + fVar9 * fVar8;
    fVar2 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0xf0),uVar6,uVar11);
    *(int *)(lVar1 + 0x158) = *(int *)(lVar1 + 0x158) + 1;
    *(float *)(lVar1 + 0x164) = *(float *)(lVar1 + 0x164) + fVar5 * fVar8;
    *(float *)(lVar1 + 0x128) = *(float *)(lVar1 + 0x128) + fVar7;
    *(float *)(lVar1 + 300) = *(float *)(lVar1 + 300) + fVar2;
    *(float *)(lVar1 + 0x170) = *(float *)(lVar1 + 0x170) + fVar7;
    *(float *)(lVar1 + 0x130) = *(float *)(lVar1 + 0x130) + fVar4;
    *(float *)(lVar1 + 0x174) = *(float *)(lVar1 + 0x174) + fVar2;
    *(float *)(lVar1 + 0x178) = *(float *)(lVar1 + 0x178) + fVar4;
  }
  return;
}


