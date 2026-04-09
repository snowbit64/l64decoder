// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectPointOnRay3D
// Entry Point: 00b59594
// Size: 112 bytes
// Signature: undefined __cdecl projectPointOnRay3D(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4)


/* MathUtil::projectPointOnRay3D(Vector3 const&, Vector3 const&, Vector3 const&, Vector3&) */

void MathUtil::projectPointOnRay3D
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 8);
  fVar3 = *(float *)(param_3 + 8);
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(float *)param_3 - *(float *)param_1,
                     (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_2 + 4));
  uVar4 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_1;
  *(undefined4 *)(param_4 + 8) = uVar2;
  uVar2 = NEON_fmadd(uVar4,fVar3 - fVar5,uVar1);
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,uVar2,*(undefined4 *)param_4);
  *(undefined4 *)param_4 = uVar1;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 4),uVar2,*(undefined4 *)(param_4 + 4));
  *(undefined4 *)(param_4 + 4) = uVar1;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 8),uVar2,*(undefined4 *)(param_4 + 8));
  *(undefined4 *)(param_4 + 8) = uVar2;
  return;
}


