// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeBitString
// Entry Point: 00cccfdc
// Size: 560 bytes
// Signature: undefined __cdecl BERDecodeBitString(BufferedTransformation * param_1, SecBlock * param_2, uint * param_3)


/* CryptoPP::BERDecodeBitString(CryptoPP::BufferedTransformation&, CryptoPP::SecBlock<unsigned char,
   CryptoPP::AllocatorWithCleanup<unsigned char, false> >&, unsigned int&) */

ulong CryptoPP::BERDecodeBitString(BufferedTransformation *param_1,SecBlock *param_2,uint *param_3)

{
  size_t __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *__dest;
  BERDecodeErr *this;
  ulong uVar4;
  void *__src;
  char local_68 [4];
  bool local_64 [4];
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_68);
  if (lVar2 == 0 || local_68[0] != '\x03') {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd174 to 00ccd177 has its CatchHandler @ 00ccd224 */
    BERDecodeErr::BERDecodeErr(this);
  }
  else {
    local_60 = 0;
    local_64[0] = false;
    uVar3 = BERLengthDecode(param_1,&local_60,local_64);
    uVar4 = local_60;
    if ((uVar3 & 1) == 0) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd188 to 00ccd18b has its CatchHandler @ 00ccd220 */
      BERDecodeErr::BERDecodeErr(this);
    }
    else if (local_64[0] == false) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd19c to 00ccd19f has its CatchHandler @ 00ccd21c */
      BERDecodeErr::BERDecodeErr(this);
    }
    else if (local_60 == 0) {
      this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd1b0 to 00ccd1b3 has its CatchHandler @ 00ccd218 */
      BERDecodeErr::BERDecodeErr(this);
    }
    else {
      uVar3 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
      if (uVar3 < uVar4) {
        this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd1c4 to 00ccd1c7 has its CatchHandler @ 00ccd214 */
        BERDecodeErr::BERDecodeErr(this);
      }
      else {
        lVar2 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,&local_60);
        if (lVar2 != 0) {
          if ((byte)local_60 < 8) {
            *param_3 = (uint)(byte)local_60;
            uVar4 = uVar4 - 1;
            uVar3 = *(ulong *)(param_2 + 0x10);
            __src = *(void **)(param_2 + 0x18);
            if (uVar3 != uVar4) {
              if (uVar4 == 0) {
                __dest = (void *)0x0;
              }
              else {
                __dest = (void *)UnalignedAllocate(uVar4);
                if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
                  __n = uVar4;
                  if (uVar3 <= uVar4) {
                    __n = uVar3;
                  }
                  memcpy(__dest,__src,__n);
                }
              }
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(undefined *)((long)__src + (uVar3 - 1)) = 0;
              }
              UnalignedDeallocate(__src);
              __src = __dest;
            }
            *(ulong *)(param_2 + 0x10) = uVar4;
            *(void **)(param_2 + 0x18) = __src;
            *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
            uVar3 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,__src,uVar4);
            if (uVar4 == uVar3) {
              if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return uVar4;
            }
            this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd1ec to 00ccd1ef has its CatchHandler @ 00ccd20c */
            BERDecodeErr::BERDecodeErr(this);
            goto LAB_00ccd1f0;
          }
        }
        this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd1d8 to 00ccd1db has its CatchHandler @ 00ccd210 */
        BERDecodeErr::BERDecodeErr(this);
      }
    }
  }
LAB_00ccd1f0:
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
}


