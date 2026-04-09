// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HandleMismatchDetected
// Entry Point: 00d0cfc8
// Size: 164 bytes
// Signature: undefined __thiscall HandleMismatchDetected(EqualityComparisonFilter * this, bool param_1)


/* CryptoPP::EqualityComparisonFilter::HandleMismatchDetected(bool) */

void __thiscall
CryptoPP::EqualityComparisonFilter::HandleMismatchDetected
          (EqualityComparisonFilter *this,bool param_1)

{
  long lVar1;
  long lVar2;
  MismatchDetected *this_00;
  uchar local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this[0x2d] = (EqualityComparisonFilter)0x1;
  if (this[0x2c] != (EqualityComparisonFilter)0x0) {
    this_00 = (MismatchDetected *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0d04c to 00d0d04f has its CatchHandler @ 00d0d06c */
    MismatchDetected::MismatchDetected(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&MismatchDetected::typeinfo,Exception::~Exception);
  }
  local_2c[0] = '\0';
  lVar2 = Filter::Output((Filter *)this,1,local_2c,1,0,param_1,(basic_string *)&DEFAULT_CHANNEL);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 != 0);
}


