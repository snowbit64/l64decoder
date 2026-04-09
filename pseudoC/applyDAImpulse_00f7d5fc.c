// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyDAImpulse
// Entry Point: 00f7d5fc
// Size: 256 bytes
// Signature: undefined __thiscall applyDAImpulse(Body * this, btVector3 * param_1)


/* btSoftBody::Body::applyDAImpulse(btVector3 const&) const */

void __thiscall btSoftBody::Body::applyDAImpulse(Body *this,btVector3 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  lVar1 = *(long *)(this + 8);
  if (lVar1 != 0) {
    fVar3 = (float)*(undefined8 *)param_1;
    fVar5 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    uVar2 = NEON_rev64(CONCAT44(*(float *)(lVar1 + 0x150) * fVar5,*(float *)(lVar1 + 0x15c) * fVar3)
                       ,4);
    fVar6 = *(float *)(param_1 + 8);
    uVar4 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar6,
                       *(float *)(lVar1 + 0x16c) * fVar3 + *(float *)(lVar1 + 0x170) * fVar5);
    uVar7 = *(undefined8 *)(lVar1 + 0x18c);
    uVar4 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar4,*(undefined4 *)(lVar1 + 0x194));
    *(undefined8 *)(lVar1 + 0x18c) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) +
                  ((float)((ulong)uVar2 >> 0x20) + fVar5 * *(float *)(lVar1 + 0x160) +
                  *(float *)(lVar1 + 0x164) * fVar6) *
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                  (float)uVar7 +
                  ((float)uVar2 + fVar3 * *(float *)(lVar1 + 0x14c) +
                  *(float *)(lVar1 + 0x154) * fVar6) * (float)*(undefined8 *)(lVar1 + 0x278));
    *(undefined4 *)(lVar1 + 0x194) = uVar4;
  }
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    fVar3 = (float)*(undefined8 *)param_1;
    fVar8 = *(float *)(param_1 + 8);
    fVar6 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    uVar2 = NEON_rev64(CONCAT44(*(float *)(lVar1 + 0xdc) * fVar6,*(float *)(lVar1 + 0xe8) * fVar3),4
                      );
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x100),fVar8,
                              *(float *)(lVar1 + 0xf8) * fVar3 + *(float *)(lVar1 + 0xfc) * fVar6);
    *(int *)(lVar1 + 0x15c) = *(int *)(lVar1 + 0x15c) + 1;
    *(float *)(lVar1 + 0x150) = fVar5 + *(float *)(lVar1 + 0x150);
    *(ulong *)(lVar1 + 0x148) =
         CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar6 * *(float *)(lVar1 + 0xec) +
                  *(float *)(lVar1 + 0xf0) * fVar8 +
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x148) >> 0x20),
                  (float)uVar2 + fVar3 * *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0xe0) * fVar8
                  + (float)*(undefined8 *)(lVar1 + 0x148));
  }
  return;
}


