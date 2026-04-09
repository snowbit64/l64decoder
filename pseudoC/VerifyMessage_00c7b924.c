// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyMessage
// Entry Point: 00c7b924
// Size: 172 bytes
// Signature: undefined __thiscall VerifyMessage(PK_Verifier * this, uchar * param_1, ulong param_2, uchar * param_3, ulong param_4)


/* CryptoPP::PK_Verifier::VerifyMessage(unsigned char const*, unsigned long, unsigned char const*,
   unsigned long) const */

uint __thiscall
CryptoPP::PK_Verifier::VerifyMessage
          (PK_Verifier *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*(long *)this + 0x50))();
                    /* try { // try from 00c7b964 to 00c7b977 has its CatchHandler @ 00c7b9d0 */
  (**(code **)(*(long *)this + 0x58))(this,plVar2,param_3,param_4);
                    /* try { // try from 00c7b980 to 00c7b9a3 has its CatchHandler @ 00c7b9dc */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
  uVar1 = (**(code **)(*(long *)this + 0x68))(this,plVar2);
  (**(code **)(*plVar2 + 8))(plVar2);
  return uVar1 & 1;
}


