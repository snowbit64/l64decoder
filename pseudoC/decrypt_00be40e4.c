// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decrypt
// Entry Point: 00be40e4
// Size: 4 bytes
// Signature: undefined __thiscall decrypt(CustomStreamCipher * this, uchar * param_1, uint param_2, uchar * param_3)


/* CustomStreamCipher::decrypt(unsigned char const*, unsigned int, unsigned char*) */

void __thiscall
CustomStreamCipher::decrypt(CustomStreamCipher *this,uchar *param_1,uint param_2,uchar *param_3)

{
  encrypt(this,param_1,param_2,param_3);
  return;
}


