// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushArgument
// Entry Point: 00ac55e0
// Size: 196 bytes
// Signature: undefined __thiscall pushArgument(DxcCompiler3 * this, wchar_t * param_1, wchar_t * param_2)


/* DxcCompiler3::pushArgument(wchar_t const*, wchar_t const*) */

void __thiscall DxcCompiler3::pushArgument(DxcCompiler3 *this,wchar_t *param_1,wchar_t *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string<decltype(nullptr)>
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_50,param_1);
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 < *(undefined8 **)(this + 0x18)) {
    puVar1[2] = local_40;
    puVar1[1] = uStack_48;
    *puVar1 = CONCAT71(local_50._1_7_,local_50._0_1_);
    *(undefined8 **)(this + 0x10) = puVar1 + 3;
  }
  else {
                    /* try { // try from 00ac563c to 00ac5643 has its CatchHandler @ 00ac56a4 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>,std::__ndk1::allocator<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>
              ((vector<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>,std::__ndk1::allocator<std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>>>
                *)(this + 8),(basic_string *)&local_50);
    if (((byte)local_50._0_1_ & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (param_2 != (wchar_t *)0x0) {
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
              ((wchar_t *)(*(long *)(this + 0x10) + -0x18));
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
              ((wchar_t *)(*(long *)(this + 0x10) + -0x18));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


