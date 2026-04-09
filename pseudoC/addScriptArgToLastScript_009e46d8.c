// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScriptArgToLastScript
// Entry Point: 009e46d8
// Size: 232 bytes
// Signature: undefined __cdecl addScriptArgToLastScript(basic_string * param_1, basic_string * param_2, basic_string * param_3)


/* ProceduralPlacementRule::addScriptArgToLastScript(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void ProceduralPlacementRule::addScriptArgToLastScript
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  long lVar1;
  long lVar2;
  byte local_90;
  void *local_80;
  byte local_78;
  void *local_68;
  byte local_60;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x16);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_90);
                    /* try { // try from 009e4718 to 009e471f has its CatchHandler @ 009e4804 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_78);
                    /* try { // try from 009e4724 to 009e472b has its CatchHandler @ 009e47d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_60);
  if (*(ulong *)(lVar2 + -0x10) < *(ulong *)(lVar2 + -8)) {
                    /* try { // try from 009e473c to 009e474f has its CatchHandler @ 009e47c0 */
    std::__ndk1::
    vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
    ::__construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
              ((ProceduralPlacementScriptArgDesc *)(lVar2 + -0x18));
  }
  else {
    std::__ndk1::
    vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
    ::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
              ((ProceduralPlacementScriptArgDesc *)(lVar2 + -0x18));
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


