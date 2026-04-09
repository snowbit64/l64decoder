// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodeValue
// Entry Point: 00ccd888
// Size: 212 bytes
// Signature: undefined __cdecl DecodeValue(BufferedTransformation * param_1, uint * param_2)


/* CryptoPP::OID::DecodeValue(CryptoPP::BufferedTransformation&, unsigned int&) */

long CryptoPP::OID::DecodeValue(BufferedTransformation *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  BERDecodeErr *this;
  long lVar3;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = 0;
  *param_2 = 0;
  do {
    lVar2 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_3c);
    if (lVar2 == 0) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd928 to 00ccd92b has its CatchHandler @ 00ccd960 */
      BERDecodeErr::BERDecodeErr(this);
LAB_00ccd940:
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
    }
    if (*param_2 >> 0x19 != 0) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd93c to 00ccd93f has its CatchHandler @ 00ccd95c */
      BERDecodeErr::BERDecodeErr(this);
      goto LAB_00ccd940;
    }
    lVar3 = lVar3 + 1;
    *param_2 = local_3c[0] & 0x7f | *param_2 << 7;
    if (-1 < (char)local_3c[0]) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


