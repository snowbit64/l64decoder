// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeOctetString
// Entry Point: 00ccc9d8
// Size: 320 bytes
// Signature: undefined __cdecl BERDecodeOctetString(BufferedTransformation * param_1, BufferedTransformation * param_2)


/* CryptoPP::BERDecodeOctetString(CryptoPP::BufferedTransformation&,
   CryptoPP::BufferedTransformation&) */

ulong CryptoPP::BERDecodeOctetString
                (BufferedTransformation *param_1,BufferedTransformation *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  BERDecodeErr *this;
  char local_48 [4];
  bool local_44 [4];
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_48);
  if (lVar3 == 0 || local_48[0] != '\x04') {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccabc to 00cccabf has its CatchHandler @ 00cccb24 */
    BERDecodeErr::BERDecodeErr(this);
  }
  else {
    local_40 = 0;
    local_44[0] = false;
    uVar4 = BERLengthDecode(param_1,&local_40,local_44);
    uVar2 = local_40;
    if ((uVar4 & 1) == 0) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccad0 to 00cccad3 has its CatchHandler @ 00cccb20 */
      BERDecodeErr::BERDecodeErr(this);
    }
    else if (local_44[0] == false) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccae4 to 00cccae7 has its CatchHandler @ 00cccb1c */
      BERDecodeErr::BERDecodeErr(this);
    }
    else {
      uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
      if (uVar2 <= uVar4) {
        local_40 = uVar2;
        (**(code **)(*(long *)param_1 + 0x118))(param_1,param_2,&local_40,&DEFAULT_CHANNEL,1);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccaf8 to 00cccafb has its CatchHandler @ 00cccb18 */
      BERDecodeErr::BERDecodeErr(this);
    }
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
}


