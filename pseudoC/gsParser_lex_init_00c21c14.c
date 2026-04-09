// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_lex_init
// Entry Point: 00c21c14
// Size: 88 bytes
// Signature: undefined __cdecl gsParser_lex_init(void * * param_1)


/* gsParser_lex_init(void**) */

undefined8 gsParser_lex_init(void **param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (void **)0x0) {
    uVar3 = 0x16;
  }
  else {
    pvVar1 = calloc(1,0x98);
    *param_1 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      return 0;
    }
    uVar3 = 0xc;
  }
  puVar2 = (undefined4 *)__errno();
  *puVar2 = uVar3;
  return 1;
}


