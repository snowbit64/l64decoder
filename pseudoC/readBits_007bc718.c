// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readBits
// Entry Point: 007bc718
// Size: 372 bytes
// Signature: undefined __thiscall readBits(ChunkedBitSquare * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* ChunkedBitSquare::readBits(unsigned int, unsigned int, unsigned int, unsigned int) const */

ulong __thiscall
ChunkedBitSquare::readBits
          (ChunkedBitSquare *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code **ppcVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar9 = *(uint *)(this + (ulong)param_3 * 4 + 0x68);
  uVar3 = *(uint *)(this + (ulong)((param_4 + param_3) - 1) * 4 + 0x68);
  iVar6 = (((param_2 >> 5) << (ulong)(*(uint *)this & 0x1f)) + (param_1 >> 5)) *
          *(int *)(this + 0x34);
  uVar2 = param_1 & 0x1f | (param_2 & 0x1f) << 5;
  ppcVar7 = *(code ***)(*(long *)(this + 0x28) + (ulong)(iVar6 + uVar9) * 8);
  uVar4 = param_3 - *(int *)(this + (ulong)uVar9 * 8 + 0x38);
  if (uVar9 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x007bc7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**ppcVar7)(ppcVar7,uVar2,uVar4,~(-1 << (ulong)(param_4 & 0x1f)));
    return uVar8;
  }
  uVar4 = (**ppcVar7)(ppcVar7,uVar2,uVar4,
                      *(uint *)(this + (ulong)uVar9 * 8 + 0x3c) >> (ulong)(uVar4 & 0x1f));
  uVar9 = uVar9 + 1;
  if (uVar9 < uVar3) {
    puVar10 = (undefined4 *)(this + (ulong)uVar9 * 8 + 0x3c);
    do {
      ppcVar7 = *(code ***)(*(long *)(this + 0x28) + (ulong)(iVar6 + uVar9) * 8);
      iVar5 = (**ppcVar7)(ppcVar7,uVar2,0,*puVar10);
      piVar1 = puVar10 + -1;
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 2;
      uVar4 = iVar5 << (ulong)(*piVar1 - param_3 & 0x1f) | uVar4;
    } while (uVar9 < uVar3);
  }
  ppcVar7 = *(code ***)(*(long *)(this + 0x28) + (ulong)(iVar6 + uVar3) * 8);
  iVar6 = (**ppcVar7)(ppcVar7,uVar2,0,
                      ~(-1 << (ulong)((param_4 + param_3) - *(int *)(this + (ulong)uVar3 * 8 + 0x38)
                                     & 0x1f)));
  return (ulong)(iVar6 << (ulong)(*(int *)(this + (ulong)uVar3 * 8 + 0x38) - param_3 & 0x1f) | uVar4
                );
}


