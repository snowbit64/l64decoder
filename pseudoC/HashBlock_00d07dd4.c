// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashBlock
// Entry Point: 00d07dd4
// Size: 64 bytes
// Signature: undefined __thiscall HashBlock(IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> * this, uint * param_1)


/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::HashTransformation>::HashBlock(unsigned int
   const*) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::HashBlock
          (IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *this,uint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00d07e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb8))(this,param_1,uVar1);
  return;
}


