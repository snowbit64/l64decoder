// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyVAImpulse
// Entry Point: 00f7d6fc
// Size: 292 bytes
// Signature: undefined __thiscall applyVAImpulse(Body * this, btVector3 * param_1)


/* btSoftBody::Body::applyVAImpulse(btVector3 const&) const */

void __thiscall btSoftBody::Body::applyVAImpulse(Body *this,btVector3 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    fVar5 = (float)*(undefined8 *)param_1;
    fVar6 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    uVar2 = NEON_rev64(CONCAT44(*(float *)(lVar1 + 0x150) * fVar6,*(float *)(lVar1 + 0x15c) * fVar5)
                       ,4);
    fVar4 = *(float *)(param_1 + 8);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar4,
                       *(float *)(lVar1 + 0x16c) * fVar5 + *(float *)(lVar1 + 0x170) * fVar6);
    uVar7 = *(undefined8 *)(lVar1 + 0x18c);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar3,*(undefined4 *)(lVar1 + 0x194));
    *(undefined8 *)(lVar1 + 0x18c) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) +
                  ((float)((ulong)uVar2 >> 0x20) + fVar6 * *(float *)(lVar1 + 0x160) +
                  *(float *)(lVar1 + 0x164) * fVar4) *
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                  (float)uVar7 +
                  ((float)uVar2 + fVar5 * *(float *)(lVar1 + 0x14c) +
                  *(float *)(lVar1 + 0x154) * fVar4) * (float)*(undefined8 *)(lVar1 + 0x278));
    *(undefined4 *)(lVar1 + 0x194) = uVar3;
  }
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    fVar5 = *(float *)param_1;
    uVar10 = *(undefined4 *)(param_1 + 4);
    uVar9 = *(undefined4 *)(param_1 + 8);
    uVar3 = NEON_fmadd(uVar10,*(undefined4 *)(lVar1 + 0xdc),fVar5 * *(float *)(lVar1 + 0xd8));
    uVar8 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xec),uVar10,*(float *)(lVar1 + 0xe8) * fVar5);
    uVar10 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xfc),uVar10,*(float *)(lVar1 + 0xf8) * fVar5);
    *(int *)(lVar1 + 0x158) = *(int *)(lVar1 + 0x158) + 1;
    fVar5 = (float)NEON_fmadd(uVar9,*(undefined4 *)(lVar1 + 0xe0),uVar3);
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0xf0),uVar9,uVar8);
    fVar6 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x100),uVar9,uVar10);
    *(float *)(lVar1 + 0x128) = *(float *)(lVar1 + 0x128) + fVar5;
    *(float *)(lVar1 + 300) = *(float *)(lVar1 + 300) + fVar4;
    *(float *)(lVar1 + 0x130) = *(float *)(lVar1 + 0x130) + fVar6;
    *(float *)(lVar1 + 0x170) = *(float *)(lVar1 + 0x170) + fVar5;
    *(float *)(lVar1 + 0x174) = *(float *)(lVar1 + 0x174) + fVar4;
    *(float *)(lVar1 + 0x178) = *(float *)(lVar1 + 0x178) + fVar6;
  }
  return;
}


