// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetNextIV
// Entry Point: 00c78618
// Size: 64 bytes
// Signature: undefined __thiscall GetNextIV(SimpleKeyingInterface * this, RandomNumberGenerator * param_1, uchar * param_2)


/* CryptoPP::SimpleKeyingInterface::GetNextIV(CryptoPP::RandomNumberGenerator&, unsigned char*) */

void __thiscall
CryptoPP::SimpleKeyingInterface::GetNextIV
          (SimpleKeyingInterface *this,RandomNumberGenerator *param_1,uchar *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00c78654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x50))(param_1,param_2,uVar1);
  return;
}


