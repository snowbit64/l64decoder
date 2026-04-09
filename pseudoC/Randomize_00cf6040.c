// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Randomize
// Entry Point: 00cf6040
// Size: 256 bytes
// Signature: undefined __thiscall Randomize(Integer * this, RandomNumberGenerator * param_1, ulong param_2)


/* CryptoPP::Integer::Randomize(CryptoPP::RandomNumberGenerator&, unsigned long) */

void __thiscall
CryptoPP::Integer::Randomize(Integer *this,RandomNumberGenerator *param_1,ulong param_2)

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
                    /* try { // try from 00cf6098 to 00cf60e7 has its CatchHandler @ 00cf6144 */
  (**(code **)(*(long *)param_1 + 0x50))(param_1,pbVar3,uVar1);
  *pbVar3 = *pbVar3 & ((byte)(-1 << (param_2 & 7)) ^ 0xff);
  StringStore::StringStore(aSStack_80,pbVar3,uVar1);
  Decode(this,(BufferedTransformation *)aSStack_80,uVar1,0);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    pbVar3[uVar1 - 1] = 0;
  }
                    /* try { // try from 00cf610c to 00cf6113 has its CatchHandler @ 00cf6140 */
  UnalignedDeallocate(pbVar3);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


