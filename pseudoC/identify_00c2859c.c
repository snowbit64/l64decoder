// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: identify
// Entry Point: 00c2859c
// Size: 108 bytes
// Signature: undefined __cdecl identify(GsTSymbolTable * param_1)


/* GsTBuiltIns::identify(GsTSymbolTable&) */

void GsTBuiltIns::identify(GsTSymbolTable *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (((&GISLParserUtil::s_operatorFlags)[lVar1] & 0x30) != 0) {
      GsTSymbolTableLevel::relateToOperator
                (**(GsTSymbolTableLevel ***)param_1,(&GISLParserUtil::s_operatorName)[lVar1],
                 (GsTOperator)lVar1);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xbe);
  return;
}


