// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bits2int
// Entry Point: 00c8cac8
// Size: 92 bytes
// Signature: undefined __cdecl bits2int(SecBlock * param_1, ulong param_2)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA512>::bits2int(CryptoPP::SecBlock<unsigned char,
   CryptoPP::AllocatorWithCleanup<unsigned char, false> > const&, unsigned long) const */

void CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512>::bits2int
               (SecBlock *param_1,ulong param_2)

{
  ulong uVar1;
  ulong in_x2;
  Integer *in_x8;
  ulong uVar2;
  
  Integer::Integer(in_x8,*(uchar **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10),0,1);
  uVar2 = *(long *)(param_2 + 0x10) * 8;
  uVar1 = uVar2 - in_x2;
  if (in_x2 <= uVar2 && uVar1 != 0) {
                    /* try { // try from 00c8cb0c to 00c8cb13 has its CatchHandler @ 00c8cb24 */
    Integer::operator>>=(in_x8,uVar1);
  }
  return;
}


