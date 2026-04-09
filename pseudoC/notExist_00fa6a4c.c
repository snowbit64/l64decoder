// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notExist
// Entry Point: 00fa6a4c
// Size: 164 bytes
// Signature: undefined __cdecl notExist(btVector3 * param_1, btAlignedObjectArray * param_2)


/* notExist(btVector3 const&, btAlignedObjectArray<btVector3> const&) */

bool notExist(btVector3 *param_1,btAlignedObjectArray *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = (ulong)*(uint *)(param_2 + 4);
  if ((int)*(uint *)(param_2 + 4) < 1) {
    return true;
  }
  pfVar4 = *(float **)(param_2 + 0x10);
  uVar5 = NEON_fmadd(pfVar4[1],*(undefined4 *)(param_1 + 4),*pfVar4 * *(float *)param_1);
  fVar6 = (float)NEON_fmadd(pfVar4[2],*(undefined4 *)(param_1 + 8),uVar5);
  if (0.999 < fVar6) {
    return false;
  }
  uVar2 = 0;
  pfVar4 = pfVar4 + 6;
  do {
    uVar3 = uVar1;
    if (uVar1 - 1 == uVar2) break;
    uVar3 = uVar2 + 1;
    uVar5 = NEON_fmadd(pfVar4[-1],*(undefined4 *)(param_1 + 4),pfVar4[-2] * *(float *)param_1);
    fVar6 = (float)NEON_fmadd(*pfVar4,*(undefined4 *)(param_1 + 8),uVar5);
    uVar2 = uVar3;
    pfVar4 = pfVar4 + 4;
  } while (fVar6 <= 0.999);
  return uVar1 <= uVar3;
}


