// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_huff_encoder
// Entry Point: 00d618d0
// Size: 96 bytes
// Signature: undefined jinit_huff_encoder(void)


void jinit_huff_encoder(long param_1)

{
  char cVar1;
  code **ppcVar2;
  
  ppcVar2 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0xf8);
  *(code ***)(param_1 + 0x220) = ppcVar2;
  ppcVar2[9] = (code *)0x0;
  ppcVar2[8] = (code *)0x0;
  ppcVar2[0xb] = (code *)0x0;
  ppcVar2[10] = (code *)0x0;
  ppcVar2[0xd] = (code *)0x0;
  ppcVar2[0xc] = (code *)0x0;
  ppcVar2[0xf] = (code *)0x0;
  ppcVar2[0xe] = (code *)0x0;
  ppcVar2[0x11] = (code *)0x0;
  ppcVar2[0x10] = (code *)0x0;
  ppcVar2[0x13] = (code *)0x0;
  ppcVar2[0x12] = (code *)0x0;
  ppcVar2[0x15] = (code *)0x0;
  ppcVar2[0x14] = (code *)0x0;
  ppcVar2[0x17] = (code *)0x0;
  ppcVar2[0x16] = (code *)0x0;
  cVar1 = *(char *)(param_1 + 0x14c);
  *ppcVar2 = FUN_00d61930;
  if (cVar1 != '\0') {
    ppcVar2[0x1e] = (code *)0x0;
  }
  return;
}


