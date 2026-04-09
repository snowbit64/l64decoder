// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PositiveCompare
// Entry Point: 00cfffd0
// Size: 144 bytes
// Signature: undefined __thiscall PositiveCompare(Integer * this, Integer * param_1)


/* CryptoPP::Integer::PositiveCompare(CryptoPP::Integer const&) const */

undefined4 __thiscall CryptoPP::Integer::PositiveCompare(Integer *this,Integer *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(ulong *)(this + 0x18);
  do {
    uVar5 = uVar4;
    if (uVar5 == 0) break;
    uVar4 = uVar5 - 1;
  } while (*(int *)(*(long *)(this + 0x20) + -4 + uVar5 * 4) == 0);
  lVar6 = *(long *)(param_1 + 0x18);
  do {
    lVar7 = lVar6;
    if (lVar7 == 0) break;
    lVar6 = lVar7 + -1;
  } while (*(int *)(*(long *)(param_1 + 0x20) + -4 + lVar7 * 4) == 0);
  if ((uint)uVar5 != (uint)lVar7) {
    uVar1 = 0xffffffff;
    if ((uint)lVar7 < (uint)uVar5) {
      uVar1 = 1;
    }
    return uVar1;
  }
  lVar6 = (uVar5 & 0xffffffff) << 2;
  while( true ) {
    if (lVar6 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(*(long *)(this + 0x20) + -4 + lVar6);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + -4 + lVar6);
    if (uVar3 < uVar2) break;
    lVar6 = lVar6 + -4;
    if (uVar2 < uVar3) {
      return 0xffffffff;
    }
  }
  return 1;
}


