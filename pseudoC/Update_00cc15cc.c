// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00cc15cc
// Size: 104 bytes
// Signature: undefined __thiscall Update(PK_MessageAccumulatorBase * this, uchar * param_1, ulong param_2)


/* CryptoPP::PK_MessageAccumulatorBase::Update(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::PK_MessageAccumulatorBase::Update
          (PK_MessageAccumulatorBase *this,uchar *param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0xa0))();
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2);
  this[0xe8] = (PK_MessageAccumulatorBase)
               (param_2 == 0 && this[0xe8] != (PK_MessageAccumulatorBase)0x0);
  return;
}


