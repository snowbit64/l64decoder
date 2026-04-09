// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 0083f328
// Size: 352 bytes
// Signature: undefined __thiscall process(SetOrAddDensityProcessor<BitVector,false> * this, HelperSource * param_1)


/* DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false>::process(DensityMapAccessUtil::HelperSource<BitVector>&) */

void __thiscall
DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>::process
          (SetOrAddDensityProcessor<BitVector,false> *this,HelperSource *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  SetOrAddDensityProcessor<BitVector,false> SVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(this + 0x24);
  uVar7 = *(uint *)(this + 0x2c);
  uVar2 = *(uint *)(this + 0x30) & uVar4;
  uVar3 = uVar4 >> (ulong)(uVar5 & 0x1f) & uVar7;
  *(uint *)(this + 0x50) = uVar3;
  *(uint *)(this + 0x54) = uVar2;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  if ((int)uVar3 < *(int *)(this + 0x3c)) {
    SVar6 = this[0x44];
  }
  else {
    SVar6 = this[0x44];
    if ((int)uVar3 <= *(int *)(this + 0x40)) {
      if (SVar6 != (SetOrAddDensityProcessor<BitVector,false>)0x0) {
        return;
      }
      goto LAB_0083f384;
    }
  }
  if (SVar6 == (SetOrAddDensityProcessor<BitVector,false>)0x0) {
    return;
  }
LAB_0083f384:
  if ((*(uint *)(this + 0x48) == 0) || ((*(uint *)(this + 0x48) & uVar3) != 0)) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    *(uint *)this =
         (*(int *)(this + 0x1c) + uVar3 &
         ((int)(*(int *)(this + 0x1c) + uVar3) >> 0x1f ^ 0xffffffffU)) + *(int *)this;
    if (*(int *)(this + 0x10) == 0) {
      uVar7 = *(uint *)(this + 0x14);
    }
    else {
      uVar1 = *(int *)(this + 0x10) + uVar3;
      if ((int)uVar1 < 0) {
        uVar7 = 0;
      }
      else if ((int)uVar1 <= (int)uVar7) {
        uVar7 = uVar1;
      }
    }
    uVar1 = *(uint *)(this + 0x18);
    *(uint *)(this + 0xc) = (uVar7 - uVar3) + *(int *)(this + 0xc);
    if (uVar1 == 0xffffffff) {
      if (uVar7 != uVar3) {
        uVar3 = *(uint *)(this + 0x70);
        this[0x6c] = (SetOrAddDensityProcessor<BitVector,false>)0x1;
        *(uint *)(param_1 + 0x20) = uVar7 << (ulong)(uVar5 & 0x1f) | *(uint *)(this + 100) & uVar4;
        *(uint *)(this + 0x70) = 1 << (ulong)(uVar2 - 1 & 0x1f) | uVar3;
        return;
      }
    }
    else {
      uVar3 = *(uint *)(this + 0x60) & uVar4 | uVar1 | uVar7 << (ulong)(uVar5 & 0x1f);
      if (uVar3 != uVar4) {
        uVar7 = *(uint *)(this + 0x70);
        *(uint *)(param_1 + 0x20) = uVar3;
        *(undefined2 *)(this + 0x6c) = 0x101;
        *(uint *)(this + 0x70) =
             uVar7 | 1 << (ulong)(uVar1 - 1 & 0x1f) | 1 << (ulong)(uVar2 - 1 & 0x1f);
        return;
      }
    }
  }
  return;
}


