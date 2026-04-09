// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPut2
// Entry Point: 00d0cc70
// Size: 792 bytes
// Signature: undefined __thiscall ChannelPut2(EqualityComparisonFilter * this, basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::EqualityComparisonFilter::ChannelPut2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char const*,
   unsigned long, int, bool) */

void __thiscall
CryptoPP::EqualityComparisonFilter::ChannelPut2
          (EqualityComparisonFilter *this,basic_string *param_1,uchar *param_2,ulong param_3,
          int param_4,bool param_5)

{
  size_t __n;
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  void *__s2;
  long lVar5;
  BlockingInputOnly *this_00;
  MismatchDetected *this_01;
  long *plVar6;
  long *plVar7;
  ulong local_80 [3];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (!param_5) {
    this_00 = (BlockingInputOnly *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0cf24 to 00d0cf33 has its CatchHandler @ 00d0cfb4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_80,"EqualityComparisonFilter");
                    /* try { // try from 00d0cf38 to 00d0cf5f has its CatchHandler @ 00d0cf8c */
    BufferedTransformation::BlockingInputOnly::BlockingInputOnly(this_00,(basic_string *)local_80);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&BufferedTransformation::BlockingInputOnly::typeinfo,Exception::~Exception);
  }
  uVar2 = MapChannel(this,param_1);
  if (uVar2 == 2) {
    uVar4 = Filter::Output((Filter *)this,3,param_2,param_3,param_4,true,param_1);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
    goto LAB_00d0cd2c;
  }
  if (this[0x2d] == (EqualityComparisonFilter)0x0) {
    plVar6 = (long *)(this + (ulong)(1 - uVar2) * 0xc0 + 0x60);
    uVar4 = (**(code **)(*plVar6 + 0xe0))(plVar6);
    if (((uVar4 & 1) == 0) || (uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6), param_3 <= uVar4)) {
      if (param_3 != 0) {
        do {
          uVar4 = (**(code **)(*plVar6 + 0xa0))(plVar6);
          if ((uVar4 & 1) == 0) break;
          local_80[0] = param_3;
          __s2 = (void *)ByteQueue::Spy((ByteQueue *)(this + (ulong)(1 - uVar2) * 0xc0 + 0x78),
                                        local_80);
          uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
          if (local_80[0] <= uVar4) {
            uVar4 = local_80[0];
          }
          __n = param_3;
          if (uVar4 <= param_3) {
            __n = uVar4;
          }
          local_80[0] = __n;
          iVar3 = memcmp(param_2,__s2,__n);
          if (iVar3 != 0) goto LAB_00d0ce8c;
          param_2 = param_2 + __n;
          param_3 = param_3 - __n;
          (**(code **)(*plVar6 + 200))(plVar6,__n);
        } while (param_3 != 0);
      }
      plVar7 = (long *)(this + (ulong)uVar2 * 0xc0 + 0x60);
      (**(code **)(*plVar7 + 0x38))(plVar7,param_2,param_3,0,1);
      if (param_4 == 0) goto LAB_00d0cd18;
      uVar4 = (**(code **)(*plVar6 + 0xa0))(plVar6);
      if ((uVar4 & 1) == 0) {
        uVar4 = (**(code **)(*plVar6 + 0xe0))(plVar6);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar6 + 0xe8))(plVar6);
          goto LAB_00d0cd18;
        }
        iVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,0,0,0xffffffff,1);
          uVar4 = 0;
          if (*(long *)(lVar1 + 0x28) == local_68) {
            return;
          }
          goto LAB_00d0cd2c;
        }
      }
    }
LAB_00d0ce8c:
    this[0x2d] = (EqualityComparisonFilter)0x1;
    if (this[0x2c] != (EqualityComparisonFilter)0x0) {
      this_01 = (MismatchDetected *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0cf6c to 00d0cf6f has its CatchHandler @ 00d0cf88 */
      MismatchDetected::MismatchDetected(this_01);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_01,&MismatchDetected::typeinfo,Exception::~Exception);
    }
    local_80[0] = local_80[0] & 0xffffffffffffff00;
    lVar5 = Filter::Output((Filter *)this,1,(uchar *)local_80,1,0,true,
                           (basic_string *)&DEFAULT_CHANNEL);
    uVar4 = (ulong)(lVar5 != 0);
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_00d0cd2c;
  }
  else {
LAB_00d0cd18:
    uVar4 = 0;
    if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_00d0cd2c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
  }
  return;
}


