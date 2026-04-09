// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryPartial
// Entry Point: 0089a910
// Size: 352 bytes
// Signature: undefined __thiscall queryPartial(PedestrianSpawnGrid * this, Vector3 * param_1, vector * param_2)


/* WARNING: Removing unreachable block (ram,0x0089a998) */
/* WARNING: Removing unreachable block (ram,0x0089a9a0) */
/* WARNING: Removing unreachable block (ram,0x0089a958) */
/* WARNING: Removing unreachable block (ram,0x0089a9ac) */
/* WARNING: Removing unreachable block (ram,0x0089aa5c) */
/* WARNING: Removing unreachable block (ram,0x0089a9c4) */
/* WARNING: Removing unreachable block (ram,0x0089a9d0) */
/* WARNING: Removing unreachable block (ram,0x0089a9dc) */
/* WARNING: Removing unreachable block (ram,0x0089a9fc) */
/* WARNING: Removing unreachable block (ram,0x0089a9e4) */
/* WARNING: Removing unreachable block (ram,0x0089aa64) */
/* WARNING: Removing unreachable block (ram,0x0089a9ec) */
/* WARNING: Removing unreachable block (ram,0x0089aa00) */
/* WARNING: Removing unreachable block (ram,0x0089aa10) */
/* WARNING: Removing unreachable block (ram,0x0089aa20) */
/* WARNING: Removing unreachable block (ram,0x0089aa30) */
/* PedestrianSpawnGrid::queryPartial(Vector3 const&, std::__ndk1::vector<PedestrianSpawnPoint*,
   std::__ndk1::allocator<PedestrianSpawnPoint*> >&) */

void __thiscall
PedestrianSpawnGrid::queryPartial(PedestrianSpawnGrid *this,Vector3 *param_1,vector *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  for (lVar1 = *(long *)this; lVar1 != *(long *)(this + 8); lVar1 = lVar1 + 0x28) {
    fVar2 = *(float *)(lVar1 + 0x10) - *(float *)param_1;
    fVar4 = *(float *)(lVar1 + 0x14) - *(float *)(param_1 + 4);
    uVar3 = NEON_fmadd(fVar4,fVar4,fVar2 * fVar2);
    fVar2 = *(float *)(lVar1 + 0x18) - *(float *)(param_1 + 8);
    NEON_fmadd(fVar2,fVar2,uVar3);
  }
  return;
}


