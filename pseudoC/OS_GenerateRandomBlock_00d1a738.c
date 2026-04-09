// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OS_GenerateRandomBlock
// Entry Point: 00d1a738
// Size: 184 bytes
// Signature: undefined __cdecl OS_GenerateRandomBlock(bool param_1, uchar * param_2, ulong param_3)


/* CryptoPP::OS_GenerateRandomBlock(bool, unsigned char*, unsigned long) */

void CryptoPP::OS_GenerateRandomBlock(bool param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  undefined **local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    BlockingRng::BlockingRng((BlockingRng *)&local_48);
                    /* try { // try from 00d1a76c to 00d1a77b has its CatchHandler @ 00d1a81c */
    BlockingRng::GenerateBlock((BlockingRng *)&local_48,param_2,param_3);
    local_48 = &PTR__BlockingRng_0100eae0;
                    /* try { // try from 00d1a790 to 00d1a793 has its CatchHandler @ 00d1a818 */
    iVar2 = close(local_40);
  }
  else {
    NonblockingRng::NonblockingRng((NonblockingRng *)&local_48);
                    /* try { // try from 00d1a7a0 to 00d1a7af has its CatchHandler @ 00d1a7f4 */
    NonblockingRng::GenerateBlock((NonblockingRng *)&local_48,param_2,param_3);
    local_48 = &PTR__NonblockingRng_0100ea50;
                    /* try { // try from 00d1a7c4 to 00d1a7c7 has its CatchHandler @ 00d1a7f0 */
    iVar2 = close(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


