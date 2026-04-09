// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_huff_decoder
// Entry Point: 00d7850c
// Size: 224 bytes
// Signature: undefined jinit_huff_decoder(void)


void jinit_huff_decoder(long param_1)

{
  char cVar1;
  code **ppcVar2;
  undefined8 *puVar3;
  int iVar4;
  
  ppcVar2 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0x178);
  cVar1 = *(char *)(param_1 + 0x129);
  *(code ***)(param_1 + 0x250) = ppcVar2;
  *ppcVar2 = FUN_00d785ec;
  ppcVar2[2] = FUN_00d78bb0;
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)
             (***(code ***)(param_1 + 8))(param_1,1,(long)*(int *)(param_1 + 0x38) << 8);
    *(undefined8 **)(param_1 + 0xb0) = puVar3;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar4 = 0;
      do {
        puVar3[0x1d] = 0xffffffffffffffff;
        puVar3[0x1c] = 0xffffffffffffffff;
        puVar3[0x1f] = 0xffffffffffffffff;
        puVar3[0x1e] = 0xffffffffffffffff;
        iVar4 = iVar4 + 1;
        puVar3[0x19] = 0xffffffffffffffff;
        puVar3[0x18] = 0xffffffffffffffff;
        puVar3[0x1b] = 0xffffffffffffffff;
        puVar3[0x1a] = 0xffffffffffffffff;
        puVar3[0x15] = 0xffffffffffffffff;
        puVar3[0x14] = 0xffffffffffffffff;
        puVar3[0x17] = 0xffffffffffffffff;
        puVar3[0x16] = 0xffffffffffffffff;
        puVar3[0x11] = 0xffffffffffffffff;
        puVar3[0x10] = 0xffffffffffffffff;
        puVar3[0x13] = 0xffffffffffffffff;
        puVar3[0x12] = 0xffffffffffffffff;
        puVar3[0xd] = 0xffffffffffffffff;
        puVar3[0xc] = 0xffffffffffffffff;
        puVar3[0xf] = 0xffffffffffffffff;
        puVar3[0xe] = 0xffffffffffffffff;
        puVar3[9] = 0xffffffffffffffff;
        puVar3[8] = 0xffffffffffffffff;
        puVar3[0xb] = 0xffffffffffffffff;
        puVar3[10] = 0xffffffffffffffff;
        puVar3[5] = 0xffffffffffffffff;
        puVar3[4] = 0xffffffffffffffff;
        puVar3[7] = 0xffffffffffffffff;
        puVar3[6] = 0xffffffffffffffff;
        puVar3[1] = 0xffffffffffffffff;
        *puVar3 = 0xffffffffffffffff;
        puVar3[3] = 0xffffffffffffffff;
        puVar3[2] = 0xffffffffffffffff;
        puVar3 = puVar3 + 0x20;
      } while (iVar4 < *(int *)(param_1 + 0x38));
    }
    ppcVar2[0xc] = (code *)0x0;
    ppcVar2[0xb] = (code *)0x0;
    ppcVar2[10] = (code *)0x0;
    ppcVar2[9] = (code *)0x0;
    return;
  }
  ppcVar2[0x13] = (code *)0x0;
  ppcVar2[0x12] = (code *)0x0;
  ppcVar2[0x15] = (code *)0x0;
  ppcVar2[0x14] = (code *)0x0;
  ppcVar2[0xf] = (code *)0x0;
  ppcVar2[0xe] = (code *)0x0;
  ppcVar2[0x11] = (code *)0x0;
  ppcVar2[0x10] = (code *)0x0;
  return;
}


