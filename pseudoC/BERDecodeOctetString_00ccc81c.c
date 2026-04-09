// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeOctetString
// Entry Point: 00ccc81c
// Size: 408 bytes
// Signature: undefined __cdecl BERDecodeOctetString(BufferedTransformation * param_1, SecBlock * param_2)


/* CryptoPP::BERDecodeOctetString(CryptoPP::BufferedTransformation&, CryptoPP::SecBlock<unsigned
   char, CryptoPP::AllocatorWithCleanup<unsigned char, false> >&) */

ulong CryptoPP::BERDecodeOctetString(BufferedTransformation *param_1,SecBlock *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
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
                    /* try { // try from 00ccc944 to 00ccc947 has its CatchHandler @ 00ccc9c4 */
    BERDecodeErr::BERDecodeErr(this);
  }
  else {
    local_40 = 0;
    local_44[0] = false;
    uVar4 = BERLengthDecode(param_1,&local_40,local_44);
    uVar2 = local_40;
    if ((uVar4 & 1) == 0) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc958 to 00ccc95b has its CatchHandler @ 00ccc9c0 */
      BERDecodeErr::BERDecodeErr(this);
    }
    else if (local_44[0] == false) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc96c to 00ccc96f has its CatchHandler @ 00ccc9bc */
      BERDecodeErr::BERDecodeErr(this);
    }
    else {
      uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
      if (uVar4 < uVar2) {
        this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc980 to 00ccc983 has its CatchHandler @ 00ccc9b8 */
        BERDecodeErr::BERDecodeErr(this);
      }
      else {
        uVar4 = *(ulong *)(param_2 + 0x10);
        pvVar5 = *(void **)(param_2 + 0x18);
        if (uVar4 != uVar2) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined *)((long)pvVar5 + (uVar4 - 1)) = 0;
          }
          UnalignedDeallocate(pvVar5);
          if (uVar2 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            pvVar5 = (void *)UnalignedAllocate(uVar2);
          }
        }
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(void **)(param_2 + 0x18) = pvVar5;
        *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
        uVar4 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,pvVar5,uVar2);
        if (uVar2 == uVar4) {
          if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar2;
        }
        this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccc994 to 00ccc997 has its CatchHandler @ 00ccc9b4 */
        BERDecodeErr::BERDecodeErr(this);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
}


