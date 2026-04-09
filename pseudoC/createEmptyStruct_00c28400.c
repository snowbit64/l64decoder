// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createEmptyStruct
// Entry Point: 00c28400
// Size: 56 bytes
// Signature: undefined createEmptyStruct(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GISLParserContext::createEmptyStruct() */

IR_Struct * GISLParserContext::createEmptyStruct(void)

{
  IR_Struct *this;
  
  this = (IR_Struct *)operator_new(0x70);
                    /* try { // try from 00c28418 to 00c28427 has its CatchHandler @ 00c28438 */
  IR_Struct::IR_Struct(this,"",0);
  return this;
}


