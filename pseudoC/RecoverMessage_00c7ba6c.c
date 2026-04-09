// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverMessage
// Entry Point: 00c7ba6c
// Size: 196 bytes
// Signature: undefined __thiscall RecoverMessage(PK_Verifier * this, uchar * param_1, uchar * param_2, ulong param_3, uchar * param_4, ulong param_5)


/* CryptoPP::PK_Verifier::RecoverMessage(unsigned char*, unsigned char const*, unsigned long,
   unsigned char const*, unsigned long) const */

undefined  [16] __thiscall
CryptoPP::PK_Verifier::RecoverMessage
          (PK_Verifier *this,uchar *param_1,uchar *param_2,ulong param_3,uchar *param_4,
          ulong param_5)

{
  long *plVar1;
  undefined auVar2 [16];
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x50))();
                    /* try { // try from 00c7bab4 to 00c7bac7 has its CatchHandler @ 00c7bb30 */
  (**(code **)(*(long *)this + 0x58))(this,plVar1,param_4,param_5);
                    /* try { // try from 00c7bad0 to 00c7baf7 has its CatchHandler @ 00c7bb3c */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
  auVar2 = (**(code **)(*(long *)this + 0x80))(this,param_1,plVar1);
  (**(code **)(*plVar1 + 8))(plVar1);
  return auVar2;
}


