// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Terminate
// Entry Point: 00f7d3ec
// Size: 520 bytes
// Signature: undefined __cdecl Terminate(float param_1)


/* btSoftBody::AJoint::Terminate(float) */

void btSoftBody::AJoint::Terminate(float param_1)

{
  long in_x0;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  if (0.0 < *(float *)(in_x0 + 0x60)) {
    fVar4 = *(float *)(in_x0 + 0x7c);
    lVar1 = *(long *)(in_x0 + 0x10);
    fVar3 = (float)*(undefined8 *)(in_x0 + 0x74);
    fVar7 = -fVar3;
    fVar5 = (float)((ulong)*(undefined8 *)(in_x0 + 0x74) >> 0x20);
    fVar8 = -fVar5;
    fVar2 = -fVar4;
    if (lVar1 != 0) {
      dVar9 = (double)NEON_rev64(CONCAT44(*(float *)(lVar1 + 0x150) * fVar8,
                                          *(float *)(lVar1 + 0x15c) * fVar7),4);
      dVar9 = dVar9 - (double)CONCAT44(*(float *)(lVar1 + 0x160) * fVar5,
                                       *(float *)(lVar1 + 0x14c) * fVar3);
      uVar10 = NEON_fmsub(fVar4,*(undefined4 *)(lVar1 + 0x174),
                          *(float *)(lVar1 + 0x16c) * fVar7 + *(float *)(lVar1 + 0x170) * fVar8);
      uVar11 = *(undefined8 *)(lVar1 + 0x18c);
      uVar10 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar10,*(undefined4 *)(lVar1 + 0x194));
      *(undefined8 *)(lVar1 + 0x18c) =
           CONCAT44((float)((ulong)uVar11 >> 0x20) +
                    ((float)((ulong)dVar9 >> 0x20) + *(float *)(lVar1 + 0x164) * fVar2) *
                    (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                    (float)uVar11 +
                    (SUB84(dVar9,0) + *(float *)(lVar1 + 0x154) * fVar2) *
                    (float)*(undefined8 *)(lVar1 + 0x278));
      *(undefined4 *)(lVar1 + 0x194) = uVar10;
    }
    lVar1 = *(long *)(in_x0 + 8);
    if (lVar1 != 0) {
      dVar9 = (double)NEON_rev64(CONCAT44(*(float *)(lVar1 + 0xdc) * fVar8,
                                          *(float *)(lVar1 + 0xe8) * fVar7),4);
      dVar9 = dVar9 - (double)CONCAT44(*(float *)(lVar1 + 0xec) * fVar5,
                                       *(float *)(lVar1 + 0xd8) * fVar3);
      fVar3 = (float)NEON_fmsub(fVar4,*(undefined4 *)(lVar1 + 0x100),
                                *(float *)(lVar1 + 0xf8) * fVar7 + *(float *)(lVar1 + 0xfc) * fVar8)
      ;
      *(int *)(lVar1 + 0x15c) = *(int *)(lVar1 + 0x15c) + 1;
      *(float *)(lVar1 + 0x150) = fVar3 + *(float *)(lVar1 + 0x150);
      *(ulong *)(lVar1 + 0x148) =
           CONCAT44((float)((ulong)dVar9 >> 0x20) + *(float *)(lVar1 + 0xf0) * fVar2 +
                    (float)((ulong)*(undefined8 *)(lVar1 + 0x148) >> 0x20),
                    SUB84(dVar9,0) + *(float *)(lVar1 + 0xe0) * fVar2 +
                    (float)*(undefined8 *)(lVar1 + 0x148));
    }
    lVar1 = *(long *)(in_x0 + 0x28);
    if (lVar1 != 0) {
      fVar2 = (float)*(undefined8 *)(in_x0 + 0x74);
      fVar3 = (float)((ulong)*(undefined8 *)(in_x0 + 0x74) >> 0x20);
      uVar11 = NEON_rev64(CONCAT44(*(float *)(lVar1 + 0x150) * fVar3,
                                   *(float *)(lVar1 + 0x15c) * fVar2),4);
      fVar5 = *(float *)(in_x0 + 0x7c);
      uVar10 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x174),fVar5,
                          *(float *)(lVar1 + 0x16c) * fVar2 + *(float *)(lVar1 + 0x170) * fVar3);
      uVar6 = *(undefined8 *)(lVar1 + 0x18c);
      uVar10 = NEON_fmadd(*(undefined4 *)(lVar1 + 0x280),uVar10,*(undefined4 *)(lVar1 + 0x194));
      *(undefined8 *)(lVar1 + 0x18c) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) +
                    ((float)((ulong)uVar11 >> 0x20) + fVar3 * *(float *)(lVar1 + 0x160) +
                    *(float *)(lVar1 + 0x164) * fVar5) *
                    (float)((ulong)*(undefined8 *)(lVar1 + 0x278) >> 0x20),
                    (float)uVar6 +
                    ((float)uVar11 + fVar2 * *(float *)(lVar1 + 0x14c) +
                    *(float *)(lVar1 + 0x154) * fVar5) * (float)*(undefined8 *)(lVar1 + 0x278));
      *(undefined4 *)(lVar1 + 0x194) = uVar10;
    }
    lVar1 = *(long *)(in_x0 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)*(undefined8 *)(in_x0 + 0x74);
      fVar4 = *(float *)(in_x0 + 0x7c);
      fVar5 = (float)((ulong)*(undefined8 *)(in_x0 + 0x74) >> 0x20);
      uVar11 = NEON_rev64(CONCAT44(*(float *)(lVar1 + 0xdc) * fVar5,*(float *)(lVar1 + 0xe8) * fVar2
                                  ),4);
      fVar3 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x100),fVar4,
                                *(float *)(lVar1 + 0xf8) * fVar2 + *(float *)(lVar1 + 0xfc) * fVar5)
      ;
      *(int *)(lVar1 + 0x15c) = *(int *)(lVar1 + 0x15c) + 1;
      *(float *)(lVar1 + 0x150) = fVar3 + *(float *)(lVar1 + 0x150);
      *(ulong *)(lVar1 + 0x148) =
           CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar5 * *(float *)(lVar1 + 0xec) +
                    *(float *)(lVar1 + 0xf0) * fVar4 +
                    (float)((ulong)*(undefined8 *)(lVar1 + 0x148) >> 0x20),
                    (float)uVar11 + fVar2 * *(float *)(lVar1 + 0xd8) +
                    *(float *)(lVar1 + 0xe0) * fVar4 + (float)*(undefined8 *)(lVar1 + 0x148));
    }
  }
  return;
}


