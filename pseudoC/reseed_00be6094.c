// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reseed
// Entry Point: 00be6094
// Size: 212 bytes
// Signature: undefined reseed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGenerator::reseed() */

void SecureRandomGenerator::reseed(void)

{
  ulong uVar1;
  long lVar2;
  RandomPool *in_x0;
  uchar auStack_79 [34];
  undefined local_57;
  ulong local_50;
  ulong uStack_48;
  uchar *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = auStack_79 + 1;
  uStack_48 = 0x20;
  local_50 = 0xffffffffffffffff;
  local_57 = 1;
                    /* try { // try from 00be60dc to 00be6103 has its CatchHandler @ 00be6168 */
  SecureRandomGeneratorManager::getNextKey
            (*(SecureRandomGeneratorManager **)(in_x0 + 0x2a0),auStack_79 + 1,0x20,
             (uint *)(in_x0 + 0x29c));
  CryptoPP::RandomPool::IncorporateEntropy(in_x0,local_40,uStack_48);
  CryptoPP::RandomNumberGenerator::GenerateBlock
            ((RandomNumberGenerator *)in_x0,(uchar *)(in_x0 + 0x98),0x200);
  *(undefined4 *)(in_x0 + 0x298) = 0;
  uVar1 = local_50;
  if (uStack_48 <= local_50) {
    uVar1 = uStack_48;
  }
  if (auStack_79 + 1 == local_40) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      auStack_79[uVar1] = '\0';
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


