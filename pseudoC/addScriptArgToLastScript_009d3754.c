// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScriptArgToLastScript
// Entry Point: 009d3754
// Size: 12 bytes
// Signature: undefined __cdecl addScriptArgToLastScript(basic_string * param_1, basic_string * param_2, basic_string * param_3)


/* ProceduralPlacementManager::addScriptArgToLastScript(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void ProceduralPlacementManager::addScriptArgToLastScript
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  ProceduralPlacementRule::addScriptArgToLastScript
            (*(basic_string **)(*(long *)(param_1 + 0x30) + -8),param_2,param_3);
  return;
}


