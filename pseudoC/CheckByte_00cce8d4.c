// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CheckByte
// Entry Point: 00cce8d4
// Size: 140 bytes
// Signature: undefined __thiscall CheckByte(BERGeneralDecoder * this, uchar param_1)


/* CryptoPP::BERGeneralDecoder::CheckByte(unsigned char) */

void __thiscall CryptoPP::BERGeneralDecoder::CheckByte(BERGeneralDecoder *this,uchar param_1)

{
  long lVar1;
  long lVar2;
  BERDecodeErr *this_00;
  uchar local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)this + 0xa8))(this,local_2c);
  if ((lVar2 != 0) && (local_2c[0] == param_1)) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cce940 to 00cce943 has its CatchHandler @ 00cce960 */
  BERDecodeErr::BERDecodeErr(this_00);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
}


