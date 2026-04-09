// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Square
// Entry Point: 00d03928
// Size: 148 bytes
// Signature: undefined __thiscall Square(MontgomeryRepresentation * this, Integer * param_1)


/* CryptoPP::MontgomeryRepresentation::Square(CryptoPP::Integer const&) const */

MontgomeryRepresentation * __thiscall
CryptoPP::MontgomeryRepresentation::Square(MontgomeryRepresentation *this,Integer *param_1)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  
  puVar2 = *(uint **)(this + 0xf0);
  uVar3 = *(ulong *)(this + 0x30);
  puVar4 = *(uint **)(this + 0x68);
  RecursiveSquare(puVar2,puVar2 + uVar3 * 2,*(uint **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18));
  uVar1 = uVar3 - *(long *)(param_1 + 0x18);
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    memset(puVar2 + *(long *)(param_1 + 0x18) * 2,0,uVar1 * 8);
  }
  MontgomeryReduce(puVar4,puVar2 + uVar3 * 2,puVar2,*(uint **)(this + 0x38),*(uint **)(this + 200),
                   uVar3);
  return this + 0x48;
}


