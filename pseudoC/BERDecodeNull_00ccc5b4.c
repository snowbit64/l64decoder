// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeNull
// Entry Point: 00ccc5b4
// Size: 224 bytes
// Signature: undefined __cdecl BERDecodeNull(BufferedTransformation * param_1)


/* CryptoPP::BERDecodeNull(CryptoPP::BufferedTransformation&) */

void CryptoPP::BERDecodeNull(BufferedTransformation *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  BERDecodeErr *this;
  char local_38 [4];
  bool local_34 [4];
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_38);
  if (lVar2 == 0 || local_38[0] != '\x05') {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc64c to 00ccc64f has its CatchHandler @ 00ccc69c */
    BERDecodeErr::BERDecodeErr(this);
  }
  else {
    local_30 = 0;
    local_34[0] = false;
    uVar3 = BERLengthDecode(param_1,&local_30,local_34);
    if ((uVar3 & 1) == 0) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc660 to 00ccc663 has its CatchHandler @ 00ccc698 */
      BERDecodeErr::BERDecodeErr(this);
    }
    else {
      if ((local_34[0] != false) && (local_30 == 0)) {
        if (*(long *)(lVar1 + 0x28) == local_28) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc674 to 00ccc677 has its CatchHandler @ 00ccc694 */
      BERDecodeErr::BERDecodeErr(this);
    }
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
}


