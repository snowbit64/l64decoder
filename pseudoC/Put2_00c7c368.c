// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00c7c368
// Size: 524 bytes
// Signature: undefined __thiscall Put2(PK_DefaultEncryptionFilter * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::PK_DefaultEncryptionFilter::Put2(unsigned char const*, unsigned long, int, bool) */

ulong __thiscall
CryptoPP::PK_DefaultEncryptionFilter::Put2
          (PK_DefaultEncryptionFilter *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uchar *puVar4;
  void *__dest;
  long lVar5;
  long lVar6;
  long *this_00;
  void *__src;
  undefined auVar7 [16];
  
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = this;
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x28);
  if (*(int *)(this + 0x28) == 1) {
LAB_00c7c4f0:
    auVar7 = Filter::Output((Filter *)this,1,*(uchar **)(this + 0xa8),*(ulong *)(this + 0xa0),
                            param_3,param_4,(basic_string *)&DEFAULT_CHANNEL);
    if (auVar7._0_8_ != 0) {
      uVar2 = *(long *)(this + 0xa0) - *(long *)(this + 0x20);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      lVar6 = *(long *)(lVar6 + 0x28);
      goto joined_r0x00c7c534;
    }
  }
  else if (*(int *)(this + 0x28) == 0) {
    this_00 = (long *)(this + 0x48);
    *(undefined8 *)(this + 0x20) = 0;
    auVar7 = (**(code **)(*this_00 + 0x38))(this_00,param_1,param_2,0,1);
    if (param_3 != 0) {
      uVar2 = ByteQueue::CurrentSize();
      uVar3 = (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),uVar2);
      if (uVar2 == 0) {
        puVar4 = (uchar *)0x0;
      }
      else {
        puVar4 = (uchar *)UnalignedAllocate(uVar2);
      }
                    /* try { // try from 00c7c41c to 00c7c44b has its CatchHandler @ 00c7c578 */
      ByteQueue::Get((ByteQueue *)this_00,puVar4,uVar2);
      uVar1 = *(ulong *)(this + 0xa0);
      __src = *(void **)(this + 0xa8);
      if (uVar1 != uVar3) {
        if (uVar3 == 0) {
          __dest = (void *)0x0;
        }
        else {
          __dest = (void *)UnalignedAllocate(uVar3);
          if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
            __n = uVar3;
            if (uVar1 <= uVar3) {
              __n = uVar1;
            }
            memcpy(__dest,__src,__n);
          }
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined *)((long)__src + (uVar1 - 1)) = 0;
        }
                    /* try { // try from 00c7c48c to 00c7c4c3 has its CatchHandler @ 00c7c578 */
        UnalignedDeallocate(__src);
        __src = __dest;
      }
      *(ulong *)(this + 0xa0) = uVar3;
      *(void **)(this + 0xa8) = __src;
      *(undefined8 *)(this + 0x98) = 0xffffffffffffffff;
      (**(code **)(**(long **)(this + 0x38) + 0x38))
                (*(long **)(this + 0x38),*(undefined8 *)(this + 0x30),puVar4,uVar2,__src,
                 *(undefined8 *)(this + 0x40));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        puVar4[uVar2 - 1] = '\0';
      }
                    /* try { // try from 00c7c4e8 to 00c7c4ef has its CatchHandler @ 00c7c574 */
      UnalignedDeallocate(puVar4);
      goto LAB_00c7c4f0;
    }
  }
  uVar2 = 0;
  lVar6 = *(long *)(lVar6 + 0x28);
joined_r0x00c7c534:
  if (lVar6 != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auVar7._0_8_,auVar7._8_8_);
  }
  return uVar2;
}


