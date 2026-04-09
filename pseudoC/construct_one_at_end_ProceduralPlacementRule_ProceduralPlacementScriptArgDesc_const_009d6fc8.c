// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>
// Entry Point: 009d6fc8
// Size: 88 bytes
// Signature: void __cdecl __construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>(ProceduralPlacementScriptArgDesc * param_1)


/* void std::__ndk1::vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,
   std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
   >::__construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc
   const&>(ProceduralPlacementRule::ProceduralPlacementScriptArgDesc const&) */

void std::__ndk1::
     vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
     ::__construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>
               (ProceduralPlacementScriptArgDesc *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_1 + 8);
                    /* try { // try from 009d6fe4 to 009d6feb has its CatchHandler @ 009d7050 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1);
                    /* try { // try from 009d6ff4 to 009d6ffb has its CatchHandler @ 009d7038 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1 + 6);
                    /* try { // try from 009d7004 to 009d7007 has its CatchHandler @ 009d7020 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1 + 0xc);
  *(basic_string **)(param_1 + 8) = pbVar1 + 0x12;
  return;
}


