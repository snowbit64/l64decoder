// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movePivotToFront
// Entry Point: 00b62408
// Size: 128 bytes
// Signature: undefined __thiscall movePivotToFront(BoundingVolumeFactory * this, Vector3F32 * param_1)


/* BoundingVolumeFactory::movePivotToFront(BoundingVolumeFactory::Vector3F32 const&) */

void __thiscall
BoundingVolumeFactory::movePivotToFront(BoundingVolumeFactory *this,Vector3F32 *param_1)

{
  long **pplVar1;
  BoundingVolumeFactory **ppBVar2;
  BoundingVolumeFactory *pBVar3;
  BoundingVolumeFactory **ppBVar4;
  long lVar5;
  
  ppBVar2 = (BoundingVolumeFactory **)operator_new(0x20);
  pBVar3 = *(BoundingVolumeFactory **)param_1;
  *(undefined4 *)(ppBVar2 + 3) = *(undefined4 *)(param_1 + 8);
  pplVar1 = *(long ***)(this + 0xf8);
  lVar5 = *(long *)(this + 0x100);
  ppBVar2[2] = pBVar3;
  *ppBVar2 = this + 0xf0;
  *pplVar1 = (long *)ppBVar2;
  ppBVar4 = *(BoundingVolumeFactory ***)(this + 0xe8);
  ppBVar2[1] = (BoundingVolumeFactory *)pplVar1;
  *(BoundingVolumeFactory ***)(this + 0xf8) = ppBVar2;
  *(long *)(this + 0x100) = lVar5 + 1;
  if (ppBVar2 != ppBVar4) {
    lVar5 = 5;
    do {
      ppBVar2 = (BoundingVolumeFactory **)ppBVar2[1];
      lVar5 = lVar5 + -1;
    } while (ppBVar2 != ppBVar4);
    if (lVar5 == 0) {
      *(BoundingVolumeFactory **)(this + 0xe8) = *ppBVar4;
    }
  }
  return;
}


