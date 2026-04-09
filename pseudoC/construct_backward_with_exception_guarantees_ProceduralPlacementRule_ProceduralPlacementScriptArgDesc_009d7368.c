// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_backward_with_exception_guarantees<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*>
// Entry Point: 009d7368
// Size: 144 bytes
// Signature: void __cdecl __construct_backward_with_exception_guarantees<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*>(allocator * param_1, ProceduralPlacementScriptArgDesc * param_2, ProceduralPlacementScriptArgDesc * param_3, ProceduralPlacementScriptArgDesc * * param_4)


/* void 
   std::__ndk1::allocator_traits<std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
   >::__construct_backward_with_exception_guarantees<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*>(std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>&,
   ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*,
   ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*,
   ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*&) */

void std::__ndk1::
     allocator_traits<std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
     ::
     __construct_backward_with_exception_guarantees<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*>
               (allocator *param_1,ProceduralPlacementScriptArgDesc *param_2,
               ProceduralPlacementScriptArgDesc *param_3,ProceduralPlacementScriptArgDesc **param_4)

{
  ProceduralPlacementScriptArgDesc *pPVar1;
  
  if (param_3 != param_2) {
    pPVar1 = *param_4;
    do {
      param_3 = param_3 + -0x48;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(pPVar1 + -0x48));
                    /* try { // try from 009d73b4 to 009d73bb has its CatchHandler @ 009d7428 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(pPVar1 + -0x30));
                    /* try { // try from 009d73c4 to 009d73c7 has its CatchHandler @ 009d73f8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(pPVar1 + -0x18));
      pPVar1 = *param_4 + -0x48;
      *param_4 = pPVar1;
    } while (param_3 != param_2);
  }
  return;
}


