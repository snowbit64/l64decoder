// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessRecoverableMessage
// Entry Point: 00cecc08
// Size: 12 bytes
// Signature: undefined __cdecl ProcessRecoverableMessage(HashTransformation * param_1, uchar * param_2, ulong param_3, uchar * param_4, ulong param_5, SecBlock * param_6)


/* CryptoPP::PK_SignatureMessageEncodingMethod::ProcessRecoverableMessage(CryptoPP::HashTransformation&,
   unsigned char const*, unsigned long, unsigned char const*, unsigned long,
   CryptoPP::SecBlock<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char, false> >&) const
    */

void CryptoPP::PK_SignatureMessageEncodingMethod::ProcessRecoverableMessage
               (HashTransformation *param_1,uchar *param_2,ulong param_3,uchar *param_4,
               ulong param_5,SecBlock *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00cecc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))();
  return;
}


