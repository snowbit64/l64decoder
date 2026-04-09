// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_as_unknown
// Entry Point: 00da98cc
// Size: 84 bytes
// Signature: undefined png_handle_as_unknown(void)


undefined png_handle_as_unknown(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (*(int *)(param_1 + 0x3fc) != 0)) {
    piVar2 = (int *)((long)*(int **)(param_1 + 0x400) + (ulong)(uint)(*(int *)(param_1 + 0x3fc) * 5)
                    );
    do {
      piVar1 = (int *)((long)piVar2 + -5);
      if (*param_2 == *piVar1) {
        return *(undefined *)((long)piVar2 + -1);
      }
      piVar2 = piVar1;
    } while (*(int **)(param_1 + 0x400) < piVar1);
  }
  return 0;
}


