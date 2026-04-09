// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyDImpulse
// Entry Point: 00f7be54
// Size: 404 bytes
// Signature: undefined __thiscall applyDImpulse(Body * this, btVector3 * param_1, btVector3 * param_2)


/* btSoftBody::Body::applyDImpulse(btVector3 const&, btVector3 const&) const */

void __thiscall btSoftBody::Body::applyDImpulse(Body *this,btVector3 *param_1,btVector3 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *(long *)(this + 8);
  if ((lVar1 != 0) && (fVar2 = *(float *)(lVar1 + 0x19c), fVar2 != 0.0)) {
    fVar7 = (float)*(undefined8 *)(lVar1 + 0x1a0);
    fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1a0) >> 0x20);
    uVar3 = NEON_fmadd(*(float *)(param_1 + 8) * fVar2,*(float *)(lVar1 + 0x1a8),
                       *(undefined4 *)(lVar1 + 0x184));
    *(ulong *)(lVar1 + 0x17c) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x17c) >> 0x20) +
                  fVar4 * (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar2,
                  (float)*(undefined8 *)(lVar1 + 0x17c) +
                  fVar7 * (float)*(undefined8 *)param_1 * fVar2);
    *(undefined4 *)(lVar1 + 0x184) = uVar3;
    fVar4 = *(float *)(param_1 + 4) * fVar4;
    fVar2 = *(float *)(lVar1 + 0x1a8) * *(float *)(param_1 + 8);
    fVar7 = *(float *)param_1 * fVar7;
    fVar6 = (float)NEON_fnmsub(*(float *)(param_2 + 8),fVar7,*(float *)param_2 * fVar2);
    fVar5 = (float)NEON_fnmsub(fVar2,*(float *)(param_2 + 4),*(float *)(param_2 + 8) * fVar4);
    fVar2 = (float)NEON_fnmsub(*(float *)param_2,fVar4,*(float *)(param_2 + 4) * fVar7);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x170),fVar6,*(float *)(lVar1 + 0x16c) * fVar5);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar2,uVar3);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar3,*(undefined4 *)(lVar1 + 0x194));
    *(ulong *)(lVar1 + 0x18c) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x18c) >> 0x20) +
                  (*(float *)(lVar1 + 0x15c) * fVar5 + *(float *)(lVar1 + 0x160) * fVar6 +
                  *(float *)(lVar1 + 0x164) * fVar2) *
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                  (float)*(undefined8 *)(lVar1 + 0x18c) +
                  ((float)*(undefined8 *)(lVar1 + 0x14c) * fVar5 +
                   (float)*(undefined8 *)(lVar1 + 0x150) * fVar6 +
                  (float)*(undefined8 *)(lVar1 + 0x154) * fVar2) *
                  (float)*(undefined8 *)(lVar1 + 0x278));
    *(undefined4 *)(lVar1 + 0x194) = uVar3;
  }
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    fVar6 = *(float *)(param_1 + 8);
    fVar4 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar9 = (float)NEON_fnmsub(*(float *)(param_2 + 4),fVar6,*(float *)(param_2 + 8) * fVar4);
    fVar2 = (float)*(undefined8 *)param_1;
    fVar10 = -(*(float *)param_2 * fVar6) + *(float *)(param_2 + 8) * fVar2;
    fVar8 = -(*(float *)(param_2 + 4) * fVar2) + *(float *)param_2 * fVar4;
    fVar7 = *(float *)(lVar1 + 0xa4);
    uVar3 = NEON_fmadd(*(undefined4 *)(lVar1 + 0xfc),fVar10,*(float *)(lVar1 + 0xf8) * fVar9);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x100),fVar8,uVar3);
    uVar3 = NEON_fmadd(fVar6,fVar7,*(undefined4 *)(lVar1 + 0x140));
    *(ulong *)(lVar1 + 0x138) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x138) >> 0x20) + fVar4 * fVar7,
                  (float)*(undefined8 *)(lVar1 + 0x138) + fVar2 * fVar7);
    *(undefined4 *)(lVar1 + 0x140) = uVar3;
    *(ulong *)(lVar1 + 0x148) =
         CONCAT44(*(float *)(lVar1 + 0xe8) * fVar9 + *(float *)(lVar1 + 0xec) * fVar10 +
                  *(float *)(lVar1 + 0xf0) * fVar8 +
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x148) >> 0x20),
                  *(float *)(lVar1 + 0xd8) * fVar9 + *(float *)(lVar1 + 0xdc) * fVar10 +
                  *(float *)(lVar1 + 0xe0) * fVar8 + (float)*(undefined8 *)(lVar1 + 0x148));
    *(float *)(lVar1 + 0x150) = fVar5 + *(float *)(lVar1 + 0x150);
    *(int *)(lVar1 + 0x15c) = *(int *)(lVar1 + 0x15c) + 1;
  }
  return;
}


