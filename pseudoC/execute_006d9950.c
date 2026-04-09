// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: execute
// Entry Point: 006d9950
// Size: 144 bytes
// Signature: undefined __cdecl execute(vector * param_1)


/* ConsoleCommand::execute(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&) */

void ConsoleCommand::execute(vector *param_1)

{
  undefined4 uVar1;
  vector *in_x1;
  basic_string *in_x8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined2 *)in_x8 = 0;
  switch(uVar1) {
  case 0:
                    /* try { // try from 006d9988 to 006d99d3 has its CatchHandler @ 006d99e0 */
    executeBoolVarPtr((ConsoleCommand *)param_1,in_x1,in_x8);
    break;
  case 1:
    executeMaskedBitVarPtr((ConsoleCommand *)param_1,in_x1,in_x8);
    break;
  case 2:
    executeIntVarPtr((ConsoleCommand *)param_1,in_x1,in_x8);
    break;
  case 3:
    executeFloatVarPtr((ConsoleCommand *)param_1,in_x1,in_x8);
    break;
  case 4:
    executeVector3Ptr((ConsoleCommand *)param_1,in_x1,in_x8);
    break;
  case 5:
    (**(code **)(param_1 + 0x60))();
  }
  return;
}


