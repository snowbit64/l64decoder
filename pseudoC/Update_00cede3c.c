// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00cede3c
// Size: 160 bytes
// Signature: undefined __thiscall Update(HMAC_Base * this, uchar * param_1, ulong param_2)


/* CryptoPP::HMAC_Base::Update(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::HMAC_Base::Update(HMAC_Base *this,uchar *param_1,ulong param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (this[0x30] == (HMAC_Base)0x0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0xa8))(this);
    uVar3 = *(undefined8 *)(this + 0x28);
    uVar1 = (**(code **)(*plVar2 + 0x50))();
    (**(code **)(*plVar2 + 0x28))(plVar2,uVar3,uVar1);
    this[0x30] = (HMAC_Base)0x1;
  }
  plVar2 = (long *)(**(code **)(*(long *)this + 0xa8))(this);
                    /* WARNING: Could not recover jumptable at 0x00ceded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
  return;
}


