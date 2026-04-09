// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: add
// Entry Point: 00be4218
// Size: 8 bytes
// Signature: undefined __thiscall add(MD5Hash * this, uchar * param_1, uint param_2)


/* MD5Hash::add(unsigned char const*, unsigned int) */

void __thiscall MD5Hash::add(MD5Hash *this,uchar *param_1,uint param_2)

{
  CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
            ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)this,param_1,
             (ulong)param_2);
  return;
}


