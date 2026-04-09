// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser__delete_buffer
// Entry Point: 00c2102c
// Size: 104 bytes
// Signature: undefined __cdecl gsParser__delete_buffer(yy_buffer_state * param_1, void * param_2)


/* gsParser__delete_buffer(yy_buffer_state*, void*) */

void gsParser__delete_buffer(yy_buffer_state *param_1,void *param_2)

{
  long lVar1;
  
  if (param_1 == (yy_buffer_state *)0x0) {
    return;
  }
  lVar1 = *(long *)((long)param_2 + 0x28);
  if (lVar1 == 0) {
    if (param_1 != (yy_buffer_state *)0x0) goto LAB_00c21060;
  }
  else if (*(yy_buffer_state **)(lVar1 + *(long *)((long)param_2 + 0x18) * 8) != param_1)
  goto LAB_00c21060;
  *(undefined8 *)(lVar1 + *(long *)((long)param_2 + 0x18) * 8) = 0;
LAB_00c21060:
  if (*(int *)(param_1 + 0x20) != 0) {
    free(*(void **)(param_1 + 8));
  }
  free(param_1);
  return;
}


