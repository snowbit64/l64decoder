// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashBlock
// Entry Point: 00d08850
// Size: 64 bytes
// Signature: undefined __thiscall HashBlock(IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> * this, uint * param_1)


/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::MessageAuthenticationCode>::HashBlock(unsigned
   int const*) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::HashBlock
          (IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> *this,uint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)(this + 8) + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00d0888c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xd0))(this,param_1,uVar1);
  return;
}


