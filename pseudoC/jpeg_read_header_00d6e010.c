// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_read_header
// Entry Point: 00d6e010
// Size: 192 bytes
// Signature: undefined jpeg_read_header(void)


int jpeg_read_header(long *param_1,char param_2)

{
  int iVar1;
  code **ppcVar2;
  long lVar3;
  
  if ((*(uint *)((long)param_1 + 0x24) & 0xfffffffe) == 200) {
    iVar1 = jpeg_consume_input(param_1);
  }
  else {
    lVar3 = *param_1;
    *(uint *)(lVar3 + 0x2c) = *(uint *)((long)param_1 + 0x24);
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x15;
    (**ppcVar2)(param_1);
    iVar1 = jpeg_consume_input(param_1);
  }
  if (iVar1 != 2) {
    return iVar1;
  }
  if (param_2 != '\0') {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 0x35;
    (**ppcVar2)(param_1);
  }
  jpeg_abort(param_1);
  return 2;
}


