// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00c7c7f4
// Size: 640 bytes
// Signature: undefined __thiscall Put2(PK_DefaultDecryptionFilter * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::PK_DefaultDecryptionFilter::Put2(unsigned char const*, unsigned long, int, bool) */

void __thiscall
CryptoPP::PK_DefaultDecryptionFilter::Put2
          (PK_DefaultDecryptionFilter *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  undefined auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  uchar *puVar6;
  void *__dest;
  InvalidCiphertext *this_00;
  undefined8 *puVar7;
  uchar *extraout_x1;
  undefined8 uVar8;
  long *this_01;
  void *__src;
  undefined auVar9 [16];
  char acStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_80;
  ulong uStack_78;
  uchar *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x28) == 1) {
LAB_00c7c990:
    auVar9 = Filter::Output((Filter *)this,1,*(uchar **)(this + 0xa8),*(ulong *)(this + 0xb8),
                            param_3,param_4,(basic_string *)&DEFAULT_CHANNEL);
    uVar8 = auVar9._8_8_;
    if ((auVar9._0_8_ != 0) &&
       (auVar9._8_8_ = uVar8, auVar9._0_8_ = *(long *)(this + 0xb8) - *(long *)(this + 0x20),
       (ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0x20)) < 2)) {
      auVar9._0_8_ = 1;
    }
  }
  else {
    if (*(int *)(this + 0x28) == 0) {
      this_01 = (long *)(this + 0x48);
      *(undefined8 *)(this + 0x20) = 0;
      (**(code **)(*this_01 + 0x38))(this_01,param_1,param_2,0,1);
      param_1 = extraout_x1;
      if (param_3 != 0) {
        uVar4 = ByteQueue::CurrentSize();
        uVar5 = (**(code **)(**(long **)(this + 0x38) + 0x10))(*(long **)(this + 0x38),uVar4);
        local_80 = 0xffffffffffffffff;
        uStack_78 = uVar4;
        if (uVar4 == 0) {
          puVar6 = (uchar *)0x0;
        }
        else {
          puVar6 = (uchar *)UnalignedAllocate(uVar4);
        }
        local_70 = puVar6;
                    /* try { // try from 00c7c8b0 to 00c7c8df has its CatchHandler @ 00c7cad8 */
        ByteQueue::Get((ByteQueue *)this_01,puVar6,uVar4);
        uVar1 = *(ulong *)(this + 0xa0);
        __src = *(void **)(this + 0xa8);
        if (uVar1 != uVar5) {
          if (uVar5 == 0) {
            __dest = (void *)0x0;
          }
          else {
            __dest = (void *)UnalignedAllocate(uVar5);
            if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
              __n = uVar5;
              if (uVar1 <= uVar5) {
                __n = uVar1;
              }
              memcpy(__dest,__src,__n);
            }
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined *)((long)__src + (uVar1 - 1)) = 0;
          }
                    /* try { // try from 00c7c920 to 00c7c927 has its CatchHandler @ 00c7cad8 */
          UnalignedDeallocate(__src);
          puVar6 = local_70;
          __src = __dest;
        }
        *(ulong *)(this + 0xa0) = uVar5;
        *(void **)(this + 0xa8) = __src;
        *(undefined8 *)(this + 0x98) = 0xffffffffffffffff;
                    /* try { // try from 00c7c948 to 00c7c957 has its CatchHandler @ 00c7cad4 */
        auVar9 = (**(code **)(**(long **)(this + 0x38) + 0x38))
                           (*(long **)(this + 0x38),*(undefined8 *)(this + 0x30),puVar6,uVar4,__src,
                            *(undefined8 *)(this + 0x40));
        *(undefined (*) [16])(this + 0xb0) = auVar9;
        if ((auVar9 & (undefined  [16])0xff) == (undefined  [16])0x0) {
          this_00 = (InvalidCiphertext *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7ca14 to 00c7ca1b has its CatchHandler @ 00c7cac0 */
          (**(code **)(*(long *)(*(long *)(this + 0x38) + 8) + 0x18))(acStack_b8);
                    /* try { // try from 00c7ca1c to 00c7ca2b has its CatchHandler @ 00c7caa8 */
          puVar7 = (undefined8 *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append(acStack_b8);
          local_90 = puVar7[2];
          uStack_98 = puVar7[1];
          local_a0 = *puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 00c7ca48 to 00c7ca6f has its CatchHandler @ 00c7ca74 */
          InvalidCiphertext::InvalidCiphertext(this_00,(basic_string *)&local_a0);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this_00,&InvalidCiphertext::typeinfo,Exception::~Exception);
        }
        uVar4 = local_80;
        if (uStack_78 <= local_80) {
          uVar4 = uStack_78;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          puVar6[uVar4 - 1] = '\0';
        }
                    /* try { // try from 00c7c988 to 00c7c98f has its CatchHandler @ 00c7cad0 */
        UnalignedDeallocate(puVar6);
        goto LAB_00c7c990;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    auVar9 = auVar3 << 0x40;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar9._0_8_,auVar9._8_8_);
}


