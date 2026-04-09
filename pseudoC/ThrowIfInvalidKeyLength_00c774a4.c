// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThrowIfInvalidKeyLength
// Entry Point: 00c774a4
// Size: 192 bytes
// Signature: undefined __thiscall ThrowIfInvalidKeyLength(SimpleKeyingInterface * this, ulong param_1)


/* CryptoPP::SimpleKeyingInterface::ThrowIfInvalidKeyLength(unsigned long) */

void __thiscall
CryptoPP::SimpleKeyingInterface::ThrowIfInvalidKeyLength(SimpleKeyingInterface *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  InvalidKeyLength *this_00;
  long *plVar3;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x30))();
  if ((uVar2 & 1) == 0) {
    this_00 = (InvalidKeyLength *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c77518 to 00c7752f has its CatchHandler @ 00c7758c */
    plVar3 = (long *)(**(code **)(*(long *)this + 0x70))(this);
    (**(code **)(*plVar3 + 0x18))(abStack_50);
                    /* try { // try from 00c77534 to 00c7755f has its CatchHandler @ 00c77564 */
    InvalidKeyLength::InvalidKeyLength(this_00,abStack_50,param_1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidKeyLength::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


