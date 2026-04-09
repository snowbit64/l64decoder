// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Sign
// Entry Point: 00c7b6b4
// Size: 72 bytes
// Signature: undefined __cdecl Sign(RandomNumberGenerator * param_1, PK_MessageAccumulator * param_2, uchar * param_3)


/* CryptoPP::PK_Signer::Sign(CryptoPP::RandomNumberGenerator&, CryptoPP::PK_MessageAccumulator*,
   unsigned char*) const */

undefined8
CryptoPP::PK_Signer::Sign
          (RandomNumberGenerator *param_1,PK_MessageAccumulator *param_2,uchar *param_3)

{
  undefined8 uVar1;
  
                    /* try { // try from 00c7b6cc to 00c7b6d3 has its CatchHandler @ 00c7b6fc */
  uVar1 = (**(code **)(*(long *)param_1 + 0x68))();
  if (param_3 != (uchar *)0x0) {
    (**(code **)(*(long *)param_3 + 8))(param_3);
  }
  return uVar1;
}


