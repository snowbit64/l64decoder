// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Init
// Entry Point: 00cce5c8
// Size: 236 bytes
// Signature: undefined __thiscall Init(BERGeneralDecoder * this, uchar param_1)


/* CryptoPP::BERGeneralDecoder::Init(unsigned char) */

void __thiscall CryptoPP::BERGeneralDecoder::Init(BERGeneralDecoder *this,uchar param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  BERDecodeErr *this_00;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(**(long **)(this + 0x20) + 0xa8))(*(long **)(this + 0x20),local_3c);
  if (lVar2 == 0 || local_3c[0] != param_1) {
    this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cce66c to 00cce66f has its CatchHandler @ 00cce6bc */
    BERDecodeErr::BERDecodeErr(this_00);
  }
  else {
    uVar3 = BERLengthDecode(*(BufferedTransformation **)(this + 0x20),(ulong *)(this + 0x28),
                            (bool *)(this + 0x31));
    if ((uVar3 & 1) == 0) {
      this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cce680 to 00cce683 has its CatchHandler @ 00cce6b8 */
      BERDecodeErr::BERDecodeErr(this_00);
    }
    else {
      if (((byte)this[0x31] | param_1 & 0x20) != 0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      this_00 = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cce694 to 00cce697 has its CatchHandler @ 00cce6b4 */
      BERDecodeErr::BERDecodeErr(this_00);
    }
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&BERDecodeErr::typeinfo,Exception::~Exception);
}


