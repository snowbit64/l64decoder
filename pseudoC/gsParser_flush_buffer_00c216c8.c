// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser__flush_buffer
// Entry Point: 00c216c8
// Size: 140 bytes
// Signature: undefined __cdecl gsParser__flush_buffer(yy_buffer_state * param_1, void * param_2)


/* gsParser__flush_buffer(yy_buffer_state*, void*) */

void gsParser__flush_buffer(yy_buffer_state *param_1,void *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_1 != (yy_buffer_state *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    **(undefined **)(param_1 + 8) = 0;
    *(undefined *)(*(long *)(param_1 + 8) + 1) = 0;
    *(undefined4 *)(param_1 + 0x28) = 1;
    lVar1 = *(long *)((long)param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    if (lVar1 == 0) {
      if (param_1 == (yy_buffer_state *)0x0) goto LAB_00c2171c;
    }
    else if (*(yy_buffer_state **)(lVar1 + *(long *)((long)param_2 + 0x18) * 8) == param_1) {
LAB_00c2171c:
      lVar3 = *(long *)((long)param_2 + 0x18) * 8;
      lVar4 = *(long *)(lVar1 + lVar3);
      puVar5 = *(undefined **)(lVar4 + 0x10);
      *(undefined **)((long)param_2 + 0x40) = puVar5;
      *(undefined **)((long)param_2 + 0x80) = puVar5;
      uVar2 = **(undefined8 **)(lVar1 + lVar3);
      *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(lVar4 + 0x1c);
      *(undefined8 *)((long)param_2 + 8) = uVar2;
      *(undefined *)((long)param_2 + 0x30) = *puVar5;
      return;
    }
  }
  return;
}


