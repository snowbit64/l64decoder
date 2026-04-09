// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InverseMod
// Entry Point: 00d017c8
// Size: 136 bytes
// Signature: undefined __thiscall InverseMod(Integer * this, uint param_1)


/* CryptoPP::Integer::InverseMod(unsigned int) const */

uint __thiscall CryptoPP::Integer::InverseMod(Integer *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = Modulo(this,param_1);
  iVar5 = 0;
  uVar3 = 1;
  uVar1 = param_1;
  while( true ) {
    uVar4 = uVar2;
    if ((uVar2 == 0) || (uVar4 = uVar3, uVar2 == 1)) {
      return uVar4;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar1 / uVar2;
    }
    uVar1 = uVar1 - uVar4 * uVar2;
    if (uVar1 == 0) break;
    iVar5 = iVar5 + uVar4 * uVar3;
    if (uVar1 == 1) {
      return param_1 - iVar5;
    }
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
    uVar3 = uVar3 + uVar4 * iVar5;
  }
  return 0;
}


