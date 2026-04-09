// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
// Entry Point: 009e754c
// Size: 88 bytes
// Signature: void __cdecl __construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>(ProceduralPlacementScriptArgDesc * param_1)


/* void std::__ndk1::vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,
   std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
   >::__construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>(ProceduralPlacementRule::ProceduralPlacementScriptArgDesc&&)
    */

void std::__ndk1::
     vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
     ::__construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
               (ProceduralPlacementScriptArgDesc *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_1 + 8);
                    /* try { // try from 009e7568 to 009e756f has its CatchHandler @ 009e75d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1);
                    /* try { // try from 009e7578 to 009e757f has its CatchHandler @ 009e75bc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1 + 6);
                    /* try { // try from 009e7588 to 009e758b has its CatchHandler @ 009e75a4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1 + 0xc);
  *(basic_string **)(param_1 + 8) = pbVar1 + 0x12;
  return;
}


