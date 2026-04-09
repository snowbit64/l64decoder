// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmProvider
// Entry Point: 00cae2e4
// Size: 264 bytes
// Signature: undefined AlgorithmProvider(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::AlgorithmProvider() const */

void CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::AlgorithmProvider(void)

{
  long lVar1;
  ulong uVar2;
  undefined **appuStack_78 [3];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  ulong local_40;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)appuStack_78,true);
  local_60 = 0x3fffffffffffffff;
  uStack_58 = 0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_50 = (void *)0x0;
  appuStack_78[0] = &PTR__BlockCipherFinal_00feb8f0;
  local_40 = 0xffffffffffffffff;
                    /* try { // try from 00cae350 to 00cae35b has its CatchHandler @ 00cae3f4 */
  Rijndael::Base::AlgorithmProvider();
  appuStack_78[0] = &PTR__Base_0100ff48;
  uVar2 = local_40;
  if (local_38 <= local_40) {
    uVar2 = local_38;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_30 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00cae398 to 00cae39b has its CatchHandler @ 00cae3f0 */
  UnalignedDeallocate(local_30);
  uVar2 = local_60;
  if (uStack_58 <= local_60) {
    uVar2 = uStack_58;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)local_50 + uVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00cae3c4 to 00cae3c7 has its CatchHandler @ 00cae3ec */
  UnalignedDeallocate(local_50);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


