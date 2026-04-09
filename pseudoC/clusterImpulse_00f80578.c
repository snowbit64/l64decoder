// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterImpulse
// Entry Point: 00f80578
// Size: 468 bytes
// Signature: undefined __cdecl clusterImpulse(Cluster * param_1, btVector3 * param_2, Impulse * param_3)


/* btSoftBody::clusterImpulse(btSoftBody::Cluster*, btVector3 const&, btSoftBody::Impulse const&) */

void btSoftBody::clusterImpulse(Cluster *param_1,btVector3 *param_2,Impulse *param_3)

{
  Impulse IVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  IVar1 = param_3[0x20];
  if (((byte)IVar1 & 1) != 0) {
    fVar2 = *(float *)param_3;
    fVar5 = *(float *)(param_3 + 4);
    fVar8 = *(float *)(param_3 + 8);
    fVar7 = *(float *)(param_1 + 0xa4);
    fVar9 = (float)NEON_fnmsub(*(float *)(param_2 + 4),fVar8,*(float *)(param_2 + 8) * fVar5);
    uVar4 = NEON_fnmsub(*(float *)(param_2 + 8),fVar2,*(float *)param_2 * fVar8);
    uVar3 = NEON_fnmsub(*(float *)param_2,fVar5,*(float *)(param_2 + 4) * fVar2);
    *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x118) + fVar7 * fVar2;
    uVar11 = NEON_fmadd(uVar4,*(undefined4 *)(param_1 + 0xdc),fVar9 * *(float *)(param_1 + 0xd8));
    uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0xec),uVar4,*(float *)(param_1 + 0xe8) * fVar9);
    uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0xfc),uVar4,*(float *)(param_1 + 0xf8) * fVar9);
    *(float *)(param_1 + 0x120) = *(float *)(param_1 + 0x120) + fVar8 * fVar7;
    *(float *)(param_1 + 0x11c) = *(float *)(param_1 + 0x11c) + fVar5 * fVar7;
    fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xe0),uVar3,uVar11);
    fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),uVar3,uVar4);
    *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) + fVar7 * fVar2;
    *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x168) + fVar8 * fVar7;
    fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xf0),uVar3,uVar13);
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
    *(float *)(param_1 + 0x164) = *(float *)(param_1 + 0x164) + fVar5 * fVar7;
    *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x128) + fVar6;
    *(float *)(param_1 + 300) = *(float *)(param_1 + 300) + fVar2;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + fVar6;
    *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) + fVar9;
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) + fVar2;
    *(float *)(param_1 + 0x178) = *(float *)(param_1 + 0x178) + fVar9;
    IVar1 = param_3[0x20];
  }
  if (((byte)IVar1 >> 1 & 1) != 0) {
    fVar6 = *(float *)(param_3 + 0x18);
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    fVar10 = (float)NEON_fnmsub(*(float *)(param_2 + 4),fVar6,*(float *)(param_2 + 8) * fVar9);
    fVar2 = (float)*(undefined8 *)(param_3 + 0x10);
    fVar12 = -(*(float *)param_2 * fVar6) + *(float *)(param_2 + 8) * fVar2;
    fVar8 = -(*(float *)(param_2 + 4) * fVar2) + *(float *)param_2 * fVar9;
    fVar7 = *(float *)(param_1 + 0xa4);
    uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0xfc),fVar12,*(float *)(param_1 + 0xf8) * fVar10);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x100),fVar8,uVar4);
    uVar4 = NEON_fmadd(fVar6,fVar7,*(undefined4 *)(param_1 + 0x140));
    *(ulong *)(param_1 + 0x138) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) + fVar9 * fVar7,
                  (float)*(undefined8 *)(param_1 + 0x138) + fVar2 * fVar7);
    *(undefined4 *)(param_1 + 0x140) = uVar4;
    *(ulong *)(param_1 + 0x148) =
         CONCAT44(*(float *)(param_1 + 0xe8) * fVar10 + *(float *)(param_1 + 0xec) * fVar12 +
                  *(float *)(param_1 + 0xf0) * fVar8 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20),
                  *(float *)(param_1 + 0xd8) * fVar10 + *(float *)(param_1 + 0xdc) * fVar12 +
                  *(float *)(param_1 + 0xe0) * fVar8 + (float)*(undefined8 *)(param_1 + 0x148));
    *(float *)(param_1 + 0x150) = fVar5 + *(float *)(param_1 + 0x150);
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    return;
  }
  return;
}


