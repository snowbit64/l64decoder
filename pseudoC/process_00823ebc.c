// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00823ebc
// Size: 240 bytes
// Signature: undefined __thiscall process(SetTypeProcessor<BitVector> * this, HelperSource * param_1)


/* DensityMapOperations::SetTypeProcessor<BitVector>::process(DensityMapAccessUtil::HelperSource<BitVector>&)
    */

void __thiscall
DensityMapOperations::SetTypeProcessor<BitVector>::process
          (SetTypeProcessor<BitVector> *this,HelperSource *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  SetTypeProcessor<BitVector> SVar5;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar1 = *(uint *)(this + 0x20) & uVar3;
  uVar2 = uVar3 >> (ulong)(*(uint *)(this + 0x14) & 0x1f) & *(uint *)(this + 0x1c);
  *(int *)this = *(int *)this + 1;
  *(uint *)(this + 0x40) = uVar2;
  *(uint *)(this + 0x44) = uVar1;
  if ((*(int *)(this + 0x24) != 2) &&
     ((*(int *)(this + 0x24) == 0) == (*(uint *)(this + 0x28) != uVar1))) {
    return;
  }
  if ((int)uVar2 < *(int *)(this + 0x2c)) {
    SVar5 = this[0x34];
  }
  else {
    SVar5 = this[0x34];
    if ((int)uVar2 <= *(int *)(this + 0x30)) {
      if (SVar5 != (SetTypeProcessor<BitVector>)0x0) {
        return;
      }
      goto LAB_00823f40;
    }
  }
  if (SVar5 == (SetTypeProcessor<BitVector>)0x0) {
    return;
  }
LAB_00823f40:
  if ((*(uint *)(this + 0x38) == 0) || ((*(uint *)(this + 0x38) & uVar2) != 0)) {
    uVar2 = *(uint *)(this + 8);
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    if ((uVar2 != 0xffffffff) && (uVar1 != uVar2)) {
      uVar4 = *(uint *)(this + 0x60);
      *(uint *)(param_1 + 0x20) = *(uint *)(this + 0x58) & uVar3 | uVar2;
      *(undefined2 *)(this + 0x5c) = 0x101;
      *(uint *)(this + 0x60) =
           1 << (ulong)(uVar1 - 1 & 0x1f) | 1 << (ulong)(uVar2 - 1 & 0x1f) | uVar4;
      return;
    }
  }
  return;
}


