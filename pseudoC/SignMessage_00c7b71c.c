// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignMessage
// Entry Point: 00c7b71c
// Size: 152 bytes
// Signature: undefined __thiscall SignMessage(PK_Signer * this, RandomNumberGenerator * param_1, uchar * param_2, ulong param_3, uchar * param_4)


/* CryptoPP::PK_Signer::SignMessage(CryptoPP::RandomNumberGenerator&, unsigned char const*, unsigned
   long, unsigned char*) const */

undefined8 __thiscall
CryptoPP::PK_Signer::SignMessage
          (PK_Signer *this,RandomNumberGenerator *param_1,uchar *param_2,ulong param_3,
          uchar *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x50))();
                    /* try { // try from 00c7b75c to 00c7b787 has its CatchHandler @ 00c7b7b4 */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
  uVar2 = (**(code **)(*(long *)this + 0x68))(this,param_1,plVar1,param_4,0);
  (**(code **)(*plVar1 + 8))(plVar1);
  return uVar2;
}


