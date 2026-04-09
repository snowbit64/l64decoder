// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportAmbiguousCallError
// Entry Point: 00ef5770
// Size: 16 bytes
// Signature: undefined reportAmbiguousCallError(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::reportAmbiguousCallError() */

void Luau::Parser::reportAmbiguousCallError(void)

{
  Location *in_x0;
  
  report(in_x0,(char *)(in_x0 + 0x2c),
         "Ambiguous syntax: this looks like an argument list for a function call, but could also be a start of new statement; use \';\' to separate statements"
        );
  return;
}


