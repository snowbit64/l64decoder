// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PeekByte
// Entry Point: 00cce840
// Size: 128 bytes
// Signature: undefined PeekByte(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BERGeneralDecoder::PeekByte() const */

void CryptoPP::BERGeneralDecoder::PeekByte(void)

{
  long lVar1;
  long *in_x0;
  long lVar2;
  BERDecodeErr *this;
  undefined local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*in_x0 + 0xb8))(in_x0,local_2c);
  if (lVar2 == 0) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cce8a0 to 00cce8a3 has its CatchHandler @ 00cce8c0 */
    BERDecodeErr::BERDecodeErr(this);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c[0]);
}


