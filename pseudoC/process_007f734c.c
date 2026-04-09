// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 007f734c
// Size: 360 bytes
// Signature: undefined __thiscall process(SetDensityProcessor<BitVector,true> * this, HelperSource * param_1)


/* DensityMapOperations::SetDensityProcessor<BitVector,
   true>::process(DensityMapAccessUtil::HelperSource<BitVector>&) */

void __thiscall
DensityMapOperations::SetDensityProcessor<BitVector,true>::process
          (SetDensityProcessor<BitVector,true> *this,HelperSource *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  SetDensityProcessor<BitVector,true> SVar6;
  bool bVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar4 = *(uint *)(this + 0x1c);
  uVar1 = *(uint *)(this + 0x28) & uVar3;
  uVar2 = uVar3 >> (ulong)(uVar4 & 0x1f) & *(uint *)(this + 0x24);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(uint *)(this + 0x48) = uVar2;
  *(uint *)(this + 0x4c) = uVar1;
  if ((*(int *)(this + 0x2c) == 2) ||
     ((*(int *)(this + 0x2c) == 0) != (*(uint *)(this + 0x30) != uVar1))) {
    bVar7 = true;
    uVar8 = uVar2;
  }
  else {
    bVar7 = false;
    uVar8 = 0;
  }
  if ((int)uVar8 < *(int *)(this + 0x34)) {
    SVar6 = this[0x3c];
  }
  else {
    SVar6 = this[0x3c];
    if ((int)uVar8 <= *(int *)(this + 0x38)) {
      if (SVar6 != (SetDensityProcessor<BitVector,true>)0x0) {
        return;
      }
      goto LAB_007f73e4;
    }
  }
  if (SVar6 == (SetDensityProcessor<BitVector,true>)0x0) {
    return;
  }
LAB_007f73e4:
  if ((*(uint *)(this + 0x40) == 0) || ((*(uint *)(this + 0x40) & uVar8) != 0)) {
    if (bVar7) {
      *(uint *)this =
           (*(int *)(this + 0x14) + uVar2 &
           ((int)(*(int *)(this + 0x14) + uVar2) >> 0x1f ^ 0xffffffffU)) + *(int *)this;
    }
    uVar8 = *(uint *)(this + 0xc);
    uVar5 = *(uint *)(this + 0x10);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    if (uVar5 == 0xffffffff) {
      if (uVar2 != uVar8) {
        uVar2 = *(uint *)(this + 0x68);
        this[100] = (SetDensityProcessor<BitVector,true>)0x1;
        *(uint *)(param_1 + 0x20) = uVar8 << (ulong)(uVar4 & 0x1f) | *(uint *)(this + 0x5c) & uVar3;
        *(uint *)(this + 0x68) = 1 << (ulong)(uVar1 - 1 & 0x1f) | uVar2;
        return;
      }
    }
    else {
      uVar2 = *(uint *)(this + 0x58) & uVar3 | uVar5 | uVar8 << (ulong)(uVar4 & 0x1f);
      if (uVar2 != uVar3) {
        uVar3 = *(uint *)(this + 0x68);
        *(uint *)(param_1 + 0x20) = uVar2;
        *(undefined2 *)(this + 100) = 0x101;
        *(uint *)(this + 0x68) =
             uVar3 | 1 << (ulong)(uVar5 - 1 & 0x1f) | 1 << (ulong)(uVar1 - 1 & 0x1f);
        return;
      }
    }
  }
  return;
}


