// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseBlock
// Entry Point: 00eea944
// Size: 72 bytes
// Signature: undefined parseBlock(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseBlock() */

undefined8 Luau::Parser::parseBlock(void)

{
  long lVar1;
  long lVar2;
  Parser *in_x0;
  undefined8 uVar3;
  
  lVar1 = *(long *)(in_x0 + 0x130);
  lVar2 = *(long *)(in_x0 + 0x138);
  uVar3 = parseBlockNoScope();
  restoreLocals(in_x0,(uint)((ulong)(lVar2 - lVar1) >> 3));
  return uVar3;
}


