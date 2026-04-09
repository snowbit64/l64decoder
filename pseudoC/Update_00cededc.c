// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00cededc
// Size: 160 bytes
// Signature: undefined __thiscall Update(HMAC_Base * this, uchar * param_1, ulong param_2)


/* non-virtual thunk to CryptoPP::HMAC_Base::Update(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::HMAC_Base::Update(HMAC_Base *this,uchar *param_1,ulong param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(this + -8);
  if (this[0x28] == (HMAC_Base)0x0) {
    plVar2 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3);
    uVar4 = *(undefined8 *)(this + 0x20);
    uVar1 = (**(code **)(*plVar2 + 0x50))();
    (**(code **)(*plVar2 + 0x28))(plVar2,uVar4,uVar1);
    this[0x28] = (HMAC_Base)0x1;
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00cedf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1,param_2);
  return;
}


