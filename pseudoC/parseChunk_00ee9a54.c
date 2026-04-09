// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseChunk
// Entry Point: 00ee9a54
// Size: 96 bytes
// Signature: undefined parseChunk(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseChunk() */

undefined8 Luau::Parser::parseChunk(void)

{
  long lVar1;
  long lVar2;
  Parser *in_x0;
  undefined8 uVar3;
  
  lVar1 = *(long *)(in_x0 + 0x130);
  lVar2 = *(long *)(in_x0 + 0x138);
  uVar3 = parseBlockNoScope();
  restoreLocals(in_x0,(uint)((ulong)(lVar2 - lVar1) >> 3));
  if (*(int *)(in_x0 + 0x28) != 0) {
    expectAndConsumeFail(in_x0,0,(char *)0x0);
  }
  return uVar3;
}


