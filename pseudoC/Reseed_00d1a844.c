// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reseed
// Entry Point: 00d1a844
// Size: 204 bytes
// Signature: undefined __thiscall Reseed(AutoSeededRandomPool * this, bool param_1, uint param_2)


/* CryptoPP::AutoSeededRandomPool::Reseed(bool, unsigned int) */

void __thiscall
CryptoPP::AutoSeededRandomPool::Reseed(AutoSeededRandomPool *this,bool param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar5 = (ulong)param_2;
  if (param_2 == 0) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = (uchar *)UnalignedAllocate(uVar5);
  }
                    /* try { // try from 00d1a89c to 00d1a8c3 has its CatchHandler @ 00d1a914 */
  OS_GenerateRandomBlock(param_1,puVar3,uVar5);
  (**(code **)(*(long *)this + 0x28))(this,puVar3,uVar5);
  if (param_2 != 0) {
    do {
      uVar1 = uVar5 - 1;
      puVar3[uVar5 - 1] = '\0';
      uVar5 = uVar1;
    } while (uVar1 != 0);
  }
                    /* try { // try from 00d1a8dc to 00d1a8e3 has its CatchHandler @ 00d1a910 */
  UnalignedDeallocate(puVar3);
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


