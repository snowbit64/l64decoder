// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: moveToFrontMB
// Entry Point: 00b622ac
// Size: 264 bytes
// Signature: undefined __thiscall moveToFrontMB(BoundingVolumeFactory * this, __list_iterator param_1)


/* BoundingVolumeFactory::moveToFrontMB(std::__ndk1::__list_iterator<BoundingVolumeFactory::Vector3F32,
   void*>) */

void __thiscall
BoundingVolumeFactory::moveToFrontMB(BoundingVolumeFactory *this,__list_iterator param_1)

{
  ulong uVar1;
  float *pfVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  ppuVar5 = *(ulong ***)(this + 0xf8);
  *(ulong ***)(this + 0xe8) = ppuVar5;
  if (*(int *)(this + 0xdc) != 4 && ppuVar5 != (ulong **)(ulong)param_1) {
    do {
      pfVar2 = *(float **)(this + 0xd0);
      ppuVar6 = (ulong **)ppuVar5[1];
      fVar7 = *(float *)(ppuVar5 + 2) - *pfVar2;
      fVar9 = *(float *)((long)ppuVar5 + 0x14) - pfVar2[1];
      uVar8 = NEON_fnmsub(fVar7,fVar7,*(undefined4 *)(this + 0xd8));
      uVar8 = NEON_fmadd(fVar9,fVar9,uVar8);
      fVar7 = (float)NEON_fmadd(*(float *)(ppuVar5 + 3) - pfVar2[2],
                                *(float *)(ppuVar5 + 3) - pfVar2[2],uVar8);
      if ((0.0 < fVar7) &&
         (uVar1 = EnclosingSphere::push((EnclosingSphere *)this,(Vector3F32 *)(ppuVar5 + 2)),
         (uVar1 & 1) != 0)) {
        moveToFrontMB(this,(__list_iterator)ppuVar5);
        *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + -1;
        if (*(ulong ***)(this + 0xe8) == ppuVar5) {
          *(ulong **)(this + 0xe8) = ppuVar5[1];
        }
        ppuVar3 = *(ulong ***)(this + 0xf8);
        if ((ppuVar3 != ppuVar5) && ((ulong **)ppuVar5[1] != ppuVar3)) {
          puVar4 = *ppuVar5;
          puVar4[1] = (ulong)ppuVar5[1];
          *ppuVar5[1] = (ulong)puVar4;
          puVar4 = *ppuVar3;
          puVar4[1] = (ulong)ppuVar5;
          *ppuVar5 = puVar4;
          *ppuVar3 = (ulong *)ppuVar5;
          ppuVar5[1] = (ulong *)ppuVar3;
        }
      }
      ppuVar5 = ppuVar6;
    } while (ppuVar6 != (ulong **)(ulong)param_1);
  }
  return;
}


