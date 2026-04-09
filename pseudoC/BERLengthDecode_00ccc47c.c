// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERLengthDecode
// Entry Point: 00ccc47c
// Size: 152 bytes
// Signature: undefined __cdecl BERLengthDecode(BufferedTransformation * param_1, ulong * param_2)


/* CryptoPP::BERLengthDecode(CryptoPP::BufferedTransformation&, unsigned long&) */

void CryptoPP::BERLengthDecode(BufferedTransformation *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  BERDecodeErr *this;
  bool local_34 [4];
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_34[0] = false;
  uVar2 = BERLengthDecode(param_1,&local_30,local_34);
  if ((uVar2 & 1) == 0) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc4f4 to 00ccc4f7 has its CatchHandler @ 00ccc514 */
    BERDecodeErr::BERDecodeErr(this);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  *param_2 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_34[0] != false);
}


