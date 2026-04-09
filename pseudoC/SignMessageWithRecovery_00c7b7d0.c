// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignMessageWithRecovery
// Entry Point: 00c7b7d0
// Size: 200 bytes
// Signature: undefined __thiscall SignMessageWithRecovery(PK_Signer * this, RandomNumberGenerator * param_1, uchar * param_2, ulong param_3, uchar * param_4, ulong param_5, uchar * param_6)


/* CryptoPP::PK_Signer::SignMessageWithRecovery(CryptoPP::RandomNumberGenerator&, unsigned char
   const*, unsigned long, unsigned char const*, unsigned long, unsigned char*) const */

undefined8 __thiscall
CryptoPP::PK_Signer::SignMessageWithRecovery
          (PK_Signer *this,RandomNumberGenerator *param_1,uchar *param_2,ulong param_3,
          uchar *param_4,ulong param_5,uchar *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x50))();
                    /* try { // try from 00c7b81c to 00c7b82f has its CatchHandler @ 00c7b898 */
  (**(code **)(*(long *)this + 0x58))(this,plVar1,param_2,param_3);
                    /* try { // try from 00c7b838 to 00c7b867 has its CatchHandler @ 00c7b8a4 */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_4,param_5);
  uVar2 = (**(code **)(*(long *)this + 0x68))(this,param_1,plVar1,param_6,0);
  (**(code **)(*plVar1 + 8))(plVar1);
  return uVar2;
}


