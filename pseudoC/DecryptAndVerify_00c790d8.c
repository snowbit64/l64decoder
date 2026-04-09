// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecryptAndVerify
// Entry Point: 00c790d8
// Size: 200 bytes
// Signature: undefined __thiscall DecryptAndVerify(AuthenticatedSymmetricCipher * this, uchar * param_1, uchar * param_2, ulong param_3, uchar * param_4, int param_5, uchar * param_6, ulong param_7, uchar * param_8, ulong param_9)


/* CryptoPP::AuthenticatedSymmetricCipher::DecryptAndVerify(unsigned char*, unsigned char const*,
   unsigned long, unsigned char const*, int, unsigned char const*, unsigned long, unsigned char
   const*, unsigned long) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipher::DecryptAndVerify
          (AuthenticatedSymmetricCipher *this,uchar *param_1,uchar *param_2,ulong param_3,
          uchar *param_4,int param_5,uchar *param_6,ulong param_7,uchar *param_8,ulong param_9)

{
  long *plVar1;
  
  (**(code **)(*(long *)this + 0x60))(this,param_4,param_5);
  SpecifyDataLengths(this,param_7,param_9,0);
  plVar1 = (long *)(this + 8);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_6,param_7);
  (**(code **)(*(long *)(this + 0x10) + 0x48))(this + 0x10,param_1,param_8,param_9);
                    /* WARNING: Could not recover jumptable at 0x00c7919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))(plVar1,param_2,param_3);
  return;
}


