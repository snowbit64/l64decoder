// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedFlush
// Entry Point: 00cd79ac
// Size: 364 bytes
// Signature: undefined __thiscall IsolatedFlush(FilterWithBufferedInput * this, bool param_1, bool param_2)


/* CryptoPP::FilterWithBufferedInput::IsolatedFlush(bool, bool) */

undefined8 __thiscall
CryptoPP::FilterWithBufferedInput::IsolatedFlush
          (FilterWithBufferedInput *this,bool param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  BlockingInputOnly *this_00;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (!param_2) {
    this_00 = (BlockingInputOnly *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd7ad8 to 00cd7ae7 has its CatchHandler @ 00cd7b40 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               abStack_50,"FilterWithBufferedInput");
                    /* try { // try from 00cd7aec to 00cd7b13 has its CatchHandler @ 00cd7b18 */
    BufferedTransformation::BlockingInputOnly::BlockingInputOnly(this_00,abStack_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&BufferedTransformation::BlockingInputOnly::typeinfo,Exception::~Exception);
  }
  if ((param_1) && (this[0x48] != (FilterWithBufferedInput)0x0)) {
    uVar4 = *(ulong *)(this + 0x38);
    if (uVar4 < 2) {
      while (uVar4 = *(ulong *)(this + 0x80), uVar4 != 0) {
        lVar1 = *(long *)(this + 0x68) + *(long *)(this + 0x60);
        uVar6 = lVar1 - *(long *)(this + 0x88);
        uVar5 = uVar4;
        if (uVar6 <= uVar4) {
          uVar5 = uVar6;
        }
        lVar3 = *(long *)(this + 0x88) + uVar5;
        *(ulong *)(this + 0x80) = uVar4 - uVar5;
        *(long *)(this + 0x88) = lVar3;
        if (uVar4 - uVar5 == 0 || lVar3 == lVar1) {
          *(long *)(this + 0x88) = *(long *)(this + 0x68);
        }
        (**(code **)(*(long *)this + 0x1e0))(this);
      }
    }
    else {
      uVar5 = *(ulong *)(this + 0x80);
      while (uVar4 <= uVar5) {
        uVar4 = *(ulong *)(this + 0x70);
        if (uVar5 < uVar4) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(this + 0x88);
          lVar1 = *(long *)(this + 0x68);
          if (lVar3 + uVar4 != *(long *)(this + 0x68) + *(long *)(this + 0x60)) {
            lVar1 = lVar3 + uVar4;
          }
          *(ulong *)(this + 0x80) = uVar5 - uVar4;
          *(long *)(this + 0x88) = lVar1;
        }
        (**(code **)(*(long *)this + 0x1e0))(this,lVar3);
        uVar5 = *(ulong *)(this + 0x80);
        uVar4 = *(ulong *)(this + 0x38);
      }
    }
  }
  (**(code **)(*(long *)this + 0x1f0))(this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


