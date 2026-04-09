// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: areVerticesBehindPlane
// Entry Point: 00fa69b8
// Size: 148 bytes
// Signature: undefined __cdecl areVerticesBehindPlane(btVector3 * param_1, btAlignedObjectArray * param_2, float param_3)


/* btGeometryUtil::areVerticesBehindPlane(btVector3 const&, btAlignedObjectArray<btVector3> const&,
   float) */

bool btGeometryUtil::areVerticesBehindPlane
               (btVector3 *param_1,btAlignedObjectArray *param_2,float param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = (ulong)*(uint *)(param_2 + 4);
  if ((int)*(uint *)(param_2 + 4) < 1) {
    return true;
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  uVar5 = NEON_fnmsub(*puVar4,*(undefined4 *)param_1,param_3);
  uVar5 = NEON_fmadd(puVar4[1],*(undefined4 *)(param_1 + 4),uVar5);
  fVar6 = (float)NEON_fmadd(puVar4[2],*(undefined4 *)(param_1 + 8),uVar5);
  if (0.0 < fVar6 + *(float *)(param_1 + 0xc)) {
    return false;
  }
  uVar2 = 0;
  puVar4 = puVar4 + 6;
  do {
    uVar3 = uVar1;
    if (uVar1 - 1 == uVar2) break;
    uVar3 = uVar2 + 1;
    uVar5 = NEON_fnmsub(puVar4[-2],*(undefined4 *)param_1,param_3);
    uVar5 = NEON_fmadd(puVar4[-1],*(undefined4 *)(param_1 + 4),uVar5);
    fVar6 = (float)NEON_fmadd(*puVar4,*(undefined4 *)(param_1 + 8),uVar5);
    uVar2 = uVar3;
    puVar4 = puVar4 + 4;
  } while (fVar6 + *(float *)(param_1 + 0xc) <= 0.0);
  return uVar1 <= uVar3;
}


