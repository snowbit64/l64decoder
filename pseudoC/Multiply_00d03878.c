// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Multiply
// Entry Point: 00d03878
// Size: 176 bytes
// Signature: undefined __thiscall Multiply(MontgomeryRepresentation * this, Integer * param_1, Integer * param_2)


/* CryptoPP::MontgomeryRepresentation::Multiply(CryptoPP::Integer const&, CryptoPP::Integer const&)
   const */

MontgomeryRepresentation * __thiscall
CryptoPP::MontgomeryRepresentation::Multiply
          (MontgomeryRepresentation *this,Integer *param_1,Integer *param_2)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  
  puVar2 = *(uint **)(this + 0xf0);
  uVar3 = *(ulong *)(this + 0x30);
  puVar4 = *(uint **)(this + 0x68);
  AsymmetricMultiply(puVar2,puVar2 + uVar3 * 2,*(uint **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18)
                     ,*(uint **)(param_2 + 0x20),*(ulong *)(param_2 + 0x18));
  lVar1 = uVar3 * 2 - (*(long *)(param_1 + 0x18) + *(long *)(param_2 + 0x18));
  if (lVar1 != 0) {
    memset(puVar2 + *(long *)(param_1 + 0x18) + *(long *)(param_2 + 0x18),0,lVar1 * 4);
  }
  MontgomeryReduce(puVar4,puVar2 + uVar3 * 2,puVar2,*(uint **)(this + 0x38),*(uint **)(this + 200),
                   uVar3);
  return this + 0x48;
}


