// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelMessageSeriesEnd
// Entry Point: 00d0d080
// Size: 452 bytes
// Signature: undefined __thiscall ChannelMessageSeriesEnd(EqualityComparisonFilter * this, basic_string * param_1, int param_2, bool param_3)


/* CryptoPP::EqualityComparisonFilter::ChannelMessageSeriesEnd(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, bool) */

void __thiscall
CryptoPP::EqualityComparisonFilter::ChannelMessageSeriesEnd
          (EqualityComparisonFilter *this,basic_string *param_1,int param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  MismatchDetected *this_00;
  uchar *puVar7;
  long *plVar8;
  uchar local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = MapChannel(this,param_1);
  if (uVar3 == 2) {
    Filter::OutputMessageSeriesEnd((Filter *)this,4,param_2,param_3,param_1);
    bVar2 = false;
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00d0d128;
  }
  else if (this[0x2d] == (EqualityComparisonFilter)0x0) {
    plVar8 = (long *)(this + (ulong)(1 - uVar3) * 0xc0 + 0x60);
    uVar5 = (**(code **)(*plVar8 + 0xa0))(plVar8);
    if (((uVar5 & 1) == 0) && (uVar5 = (**(code **)(*plVar8 + 0xe0))(plVar8), (uVar5 & 1) == 0)) {
      iVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
      if (iVar4 == 0) {
        (**(code **)(*(long *)(this + (ulong)uVar3 * 0xc0 + 0x60) + 0x80))
                  (this + (ulong)uVar3 * 0xc0 + 0x60,0xffffffff,1);
        bVar2 = false;
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto LAB_00d0d128;
      }
      puVar7 = "\x01";
      iVar4 = 2;
    }
    else {
      this[0x2d] = (EqualityComparisonFilter)0x1;
      if (this[0x2c] != (EqualityComparisonFilter)0x0) {
        this_00 = (MismatchDetected *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d0d228 to 00d0d22b has its CatchHandler @ 00d0d244 */
        MismatchDetected::MismatchDetected(this_00);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,&MismatchDetected::typeinfo,Exception::~Exception);
      }
      local_5c[0] = '\0';
      puVar7 = local_5c;
      iVar4 = 1;
    }
    lVar6 = Filter::Output((Filter *)this,iVar4,puVar7,1,0,param_3,(basic_string *)&DEFAULT_CHANNEL)
    ;
    bVar2 = lVar6 != 0;
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00d0d128;
  }
  else {
    bVar2 = false;
    if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_00d0d128:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
  }
  return;
}


