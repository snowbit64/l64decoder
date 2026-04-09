// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 0080372c
// Size: 388 bytes
// Signature: undefined __thiscall process(AddDensityProcessor<ChunkedBitSquare,true> * this, HelperSource * param_1)


/* DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,
   true>::process(DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&) */

void __thiscall
DensityMapOperations::AddDensityProcessor<ChunkedBitSquare,true>::process
          (AddDensityProcessor<ChunkedBitSquare,true> *this,HelperSource *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  AddDensityProcessor<ChunkedBitSquare,true> AVar9;
  bool bVar10;
  uint uVar11;
  
  uVar5 = *(uint *)(this + 0x2c);
  uVar7 = *(uint *)(param_1 + 0x20);
  uVar8 = *(uint *)(this + 0x24);
  uVar2 = *(uint *)(this + 0x30) & uVar7;
  uVar3 = uVar7 >> (ulong)(uVar8 & 0x1f) & uVar5;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(uint *)(this + 0x50) = uVar3;
  *(uint *)(this + 0x54) = uVar2;
  if ((*(int *)(this + 0x34) == 2) ||
     ((*(int *)(this + 0x34) == 0) != (*(uint *)(this + 0x38) != uVar2))) {
    bVar10 = true;
    uVar11 = uVar3;
  }
  else {
    bVar10 = false;
    uVar11 = 0;
  }
  if ((int)uVar11 < *(int *)(this + 0x3c)) {
    AVar9 = this[0x44];
  }
  else {
    AVar9 = this[0x44];
    if ((int)uVar11 <= *(int *)(this + 0x40)) {
      if (AVar9 != (AddDensityProcessor<ChunkedBitSquare,true>)0x0) {
        return;
      }
      goto LAB_008037c4;
    }
  }
  if (AVar9 == (AddDensityProcessor<ChunkedBitSquare,true>)0x0) {
    return;
  }
LAB_008037c4:
  if ((*(uint *)(this + 0x48) == 0) || ((*(uint *)(this + 0x48) & uVar11) != 0)) {
    if (bVar10) {
      *(uint *)this =
           (*(int *)(this + 0x18) + uVar3 &
           ((int)(*(int *)(this + 0x18) + uVar3) >> 0x1f ^ 0xffffffffU)) + *(int *)this;
    }
    uVar6 = *(uint *)(this + 0x14);
    uVar1 = *(int *)(this + 0x10) + uVar11;
    if ((int)uVar1 <= (int)uVar5) {
      uVar5 = uVar1;
    }
    uVar4 = 0;
    if (-1 < (int)uVar1) {
      uVar4 = uVar5;
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    *(uint *)(this + 0xc) = (*(int *)(this + 0xc) - uVar11) + uVar4;
    if (uVar6 == 0xffffffff) {
      if (uVar3 != uVar4) {
        uVar3 = *(uint *)(this + 0x70);
        this[0x6c] = (AddDensityProcessor<ChunkedBitSquare,true>)0x1;
        *(uint *)(param_1 + 0x20) = uVar4 << (ulong)(uVar8 & 0x1f) | *(uint *)(this + 100) & uVar7;
        *(uint *)(this + 0x70) = 1 << (ulong)(uVar2 - 1 & 0x1f) | uVar3;
        return;
      }
    }
    else {
      uVar3 = *(uint *)(this + 0x60) & uVar7 | uVar6 | uVar4 << (ulong)(uVar8 & 0x1f);
      if (uVar3 != uVar7) {
        uVar5 = *(uint *)(this + 0x70);
        *(uint *)(param_1 + 0x20) = uVar3;
        *(undefined2 *)(this + 0x6c) = 0x101;
        *(uint *)(this + 0x70) =
             uVar5 | 1 << (ulong)(uVar6 - 1 & 0x1f) | 1 << (ulong)(uVar2 - 1 & 0x1f);
        return;
      }
    }
  }
  return;
}


