// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Randomize
// Entry Point: 00ce2ecc
// Size: 252 bytes
// Signature: undefined __thiscall Randomize(PolynomialMod2 * this, RandomNumberGenerator * param_1, ulong param_2)


/* CryptoPP::PolynomialMod2::Randomize(CryptoPP::RandomNumberGenerator&, unsigned long) */

void __thiscall
CryptoPP::PolynomialMod2::Randomize
          (PolynomialMod2 *this,RandomNumberGenerator *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  StringStore aSStack_80 [56];
  long local_48;
  
  lVar2 = tpidr_el0;
  uVar1 = (param_2 >> 3) + 1;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)UnalignedAllocate(uVar1);
                    /* try { // try from 00ce2f24 to 00ce2f6f has its CatchHandler @ 00ce2fcc */
  (**(code **)(*(long *)param_1 + 0x50))(param_1,pbVar3,uVar1);
  *pbVar3 = *pbVar3 & ((byte)(-1 << (param_2 & 7)) ^ 0xff);
  StringStore::StringStore(aSStack_80,pbVar3,uVar1);
  Decode(this,(BufferedTransformation *)aSStack_80,uVar1);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    pbVar3[uVar1 - 1] = 0;
  }
                    /* try { // try from 00ce2f94 to 00ce2f9b has its CatchHandler @ 00ce2fc8 */
  UnalignedDeallocate(pbVar3);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


