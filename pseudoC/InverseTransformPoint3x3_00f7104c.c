// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InverseTransformPoint3x3
// Entry Point: 00f7104c
// Size: 72 bytes
// Signature: undefined __cdecl InverseTransformPoint3x3(btVector3 * param_1, btVector3 * param_2, btTransform * param_3)


/* InverseTransformPoint3x3(btVector3&, btVector3 const&, btTransform const&) */

void InverseTransformPoint3x3(btVector3 *param_1,btVector3 *param_2,btTransform *param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  
  fVar2 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  uVar1 = *(undefined8 *)param_3;
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  fVar7 = *(float *)(param_2 + 8);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_3 + 0x18),fVar5,*(float *)(param_3 + 8) * fVar2);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = NEON_fmadd(uVar6,fVar7,uVar3);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)uVar1 >> 0x20) * fVar2 + (float)((ulong)uVar8 >> 0x20) * fVar5 +
                (float)((ulong)uVar4 >> 0x20) * fVar7,
                (float)uVar1 * fVar2 + (float)uVar8 * fVar5 + (float)uVar4 * fVar7);
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}


