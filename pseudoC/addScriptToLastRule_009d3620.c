// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScriptToLastRule
// Entry Point: 009d3620
// Size: 12 bytes
// Signature: undefined __cdecl addScriptToLastRule(basic_string * param_1)


/* ProceduralPlacementManager::addScriptToLastRule(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void ProceduralPlacementManager::addScriptToLastRule(basic_string *param_1)

{
  ProceduralPlacementRule::addScript(*(basic_string **)(*(long *)(param_1 + 0x30) + -8));
  return;
}


