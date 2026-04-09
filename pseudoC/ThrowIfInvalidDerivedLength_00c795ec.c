// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfInvalidDerivedLength
// Entry Point: 00c795ec
// Size: 192 bytes
// Signature: undefined __thiscall ThrowIfInvalidDerivedLength(KeyDerivationFunction * this, ulong param_1)


/* CryptoPP::KeyDerivationFunction::ThrowIfInvalidDerivedLength(unsigned long) const */

void __thiscall
CryptoPP::KeyDerivationFunction::ThrowIfInvalidDerivedLength
          (KeyDerivationFunction *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  InvalidDerivedLength *this_00;
  long *plVar3;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x40))();
  if ((uVar2 & 1) == 0) {
    this_00 = (InvalidDerivedLength *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c79660 to 00c79677 has its CatchHandler @ 00c796d4 */
    plVar3 = (long *)(**(code **)(*(long *)this + 0x58))(this);
    (**(code **)(*plVar3 + 0x18))(abStack_50);
                    /* try { // try from 00c7967c to 00c796a7 has its CatchHandler @ 00c796ac */
    InvalidDerivedLength::InvalidDerivedLength(this_00,abStack_50,param_1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidDerivedLength::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


