// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PlaneLineIntersection
// Entry Point: 00f9b16c
// Size: 188 bytes
// Signature: undefined __cdecl PlaneLineIntersection(btPlane * param_1, btVector3 * param_2, btVector3 * param_3)


/* PlaneLineIntersection(btPlane const&, btVector3 const&, btVector3 const&) */

undefined4 PlaneLineIntersection(btPlane *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_02125d38 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_02125d38);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_02125d38);
    }
  }
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  uVar4 = NEON_fmadd(fVar2,*(float *)param_1,*(undefined4 *)(param_1 + 0x10));
  fVar7 = *(float *)(param_2 + 8);
  fVar5 = (float)NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 4),uVar4);
  uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 4),*(float *)(param_3 + 4) - fVar3,
                     *(float *)param_1 * (*(float *)param_3 - fVar2));
  fVar5 = (float)NEON_fnmadd(fVar7,*(undefined4 *)(param_1 + 8),-fVar5);
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(float *)(param_3 + 8) - fVar7,uVar4);
  fVar5 = fVar5 / fVar6;
  uVar4 = NEON_fmadd(fVar5,*(float *)param_3 - fVar2,fVar2);
  NEON_fmadd(fVar5,*(float *)(param_3 + 4) - fVar3,fVar3);
  NEON_fmadd(fVar5,*(float *)(param_3 + 8) - fVar7,fVar7);
  return uVar4;
}


