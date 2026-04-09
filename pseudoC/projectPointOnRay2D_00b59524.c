// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectPointOnRay2D
// Entry Point: 00b59524
// Size: 76 bytes
// Signature: undefined __cdecl projectPointOnRay2D(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3, Vector2 * param_4)


/* MathUtil::projectPointOnRay2D(Vector2 const&, Vector2 const&, Vector2 const&, Vector2&) */

void MathUtil::projectPointOnRay2D
               (Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  fVar6 = *(float *)param_3;
  fVar2 = *(float *)(param_3 + 4);
  fVar7 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  uVar1 = *(undefined8 *)param_1;
  uVar8 = *(undefined4 *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  *(undefined8 *)param_4 = uVar1;
  uVar8 = NEON_fmadd(uVar8,fVar6 - fVar7,(fVar2 - fVar3) * fVar4);
  uVar5 = NEON_fmadd(*(undefined4 *)param_2,uVar8,(int)uVar1);
  *(undefined4 *)param_4 = uVar5;
  uVar8 = NEON_fmadd(*(undefined4 *)(param_2 + 4),uVar8,(int)((ulong)uVar1 >> 0x20));
  *(undefined4 *)(param_4 + 4) = uVar8;
  return;
}


