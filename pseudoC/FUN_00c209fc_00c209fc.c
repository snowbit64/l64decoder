// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c209fc
// Entry Point: 00c209fc
// Size: 148 bytes
// Signature: undefined FUN_00c209fc(void)


void FUN_00c209fc(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (*(void **)(param_1 + 0x28) == (void *)0x0) {
    puVar3 = (undefined8 *)malloc(8);
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
LAB_00c20a84:
                    /* WARNING: Subroutine does not return */
      FUN_00c21450("out of dynamic memory in yyensure_buffer_stack()");
    }
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x20) = 1;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (*(long *)(param_1 + 0x20) - 1U <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = *(long *)(param_1 + 0x20) + 8;
    pvVar2 = realloc(*(void **)(param_1 + 0x28),(ulong)(uint)((int)uVar1 << 3));
    *(void **)(param_1 + 0x28) = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00c20a84;
    puVar3 = (undefined8 *)((long)pvVar2 + *(long *)(param_1 + 0x20) * 8);
    *(ulong *)(param_1 + 0x20) = uVar1 & 0xffffffff;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
  }
  return;
}


