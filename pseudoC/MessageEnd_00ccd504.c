// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageEnd
// Entry Point: 00ccd504
// Size: 180 bytes
// Signature: undefined MessageEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BERGeneralDecoder::MessageEnd() */

void CryptoPP::BERGeneralDecoder::MessageEnd(void)

{
  long lVar1;
  long in_x0;
  BERDecodeErr *this;
  long lVar2;
  ushort local_2c [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined *)(in_x0 + 0x30) = 1;
  if (*(char *)(in_x0 + 0x31) == '\0') {
    lVar2 = BufferedTransformation::GetWord16(*(BufferedTransformation **)(in_x0 + 0x20),local_2c,1)
    ;
    if ((lVar2 == 2) && (local_2c[0] == 0)) goto LAB_00ccd56c;
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd598 to 00ccd59b has its CatchHandler @ 00ccd5b8 */
    BERDecodeErr::BERDecodeErr(this);
  }
  else {
    if (*(long *)(in_x0 + 0x28) == 0) {
LAB_00ccd56c:
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd544 to 00ccd547 has its CatchHandler @ 00ccd5bc */
    BERDecodeErr::BERDecodeErr(this);
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
}


