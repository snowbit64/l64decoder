// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertOut
// Entry Point: 00d03228
// Size: 180 bytes
// Signature: undefined __cdecl ConvertOut(Integer * param_1)


/* CryptoPP::MontgomeryRepresentation::ConvertOut(CryptoPP::Integer const&) const */

void CryptoPP::MontgomeryRepresentation::ConvertOut(Integer *param_1)

{
  long in_x1;
  Integer *in_x8;
  long lVar1;
  uint *__dest;
  ulong uVar2;
  uint *puVar3;
  
  __dest = *(uint **)(param_1 + 0xf0);
  puVar3 = *(uint **)(param_1 + 0x68);
  uVar2 = *(ulong *)(param_1 + 0x30);
  if (__dest != *(uint **)(in_x1 + 0x20)) {
    memcpy(__dest,*(uint **)(in_x1 + 0x20),*(long *)(in_x1 + 0x18) << 2);
  }
  lVar1 = *(long *)(in_x1 + 0x18);
  if (uVar2 * 2 - lVar1 != 0) {
    memset(__dest + lVar1,0,uVar2 * 8 + lVar1 * -4);
  }
  MontgomeryReduce(puVar3,__dest + uVar2 * 2,__dest,*(uint **)(param_1 + 0x38),
                   *(uint **)(param_1 + 200),uVar2);
  Integer::Integer(in_x8,param_1 + 0x48);
  return;
}


