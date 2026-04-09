// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser__switch_to_buffer
// Entry Point: 00c215f8
// Size: 180 bytes
// Signature: undefined __cdecl gsParser__switch_to_buffer(yy_buffer_state * param_1, void * param_2)


/* gsParser__switch_to_buffer(yy_buffer_state*, void*) */

void gsParser__switch_to_buffer(yy_buffer_state *param_1,void *param_2)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  yy_buffer_state *pyVar5;
  undefined *puVar6;
  
  FUN_00c209fc(param_2);
  lVar2 = *(long *)((long)param_2 + 0x28);
  if (lVar2 != 0) {
    lVar4 = *(long *)((long)param_2 + 0x18);
    pyVar5 = *(yy_buffer_state **)(lVar2 + lVar4 * 8);
    if (pyVar5 != param_1) {
      if (pyVar5 != (yy_buffer_state *)0x0) {
        **(undefined **)((long)param_2 + 0x40) = *(undefined *)((long)param_2 + 0x30);
        lVar4 = *(long *)((long)param_2 + 0x18);
        lVar2 = *(long *)((long)param_2 + 0x28);
        *(undefined8 *)(*(long *)(lVar2 + lVar4 * 8) + 0x10) = *(undefined8 *)((long)param_2 + 0x40)
        ;
        *(undefined4 *)(*(long *)(lVar2 + lVar4 * 8) + 0x1c) = *(undefined4 *)((long)param_2 + 0x34)
        ;
      }
      lVar4 = lVar4 * 8;
      *(yy_buffer_state **)(lVar2 + lVar4) = param_1;
      lVar2 = *(long *)(*(long *)((long)param_2 + 0x28) + lVar4);
      puVar6 = *(undefined **)(lVar2 + 0x10);
      *(undefined **)((long)param_2 + 0x40) = puVar6;
      *(undefined **)((long)param_2 + 0x80) = puVar6;
      uVar3 = **(undefined8 **)(*(long *)((long)param_2 + 0x28) + lVar4);
      *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(lVar2 + 0x1c);
      *(undefined8 *)((long)param_2 + 8) = uVar3;
      uVar1 = *puVar6;
      *(undefined4 *)((long)param_2 + 0x50) = 1;
      *(undefined *)((long)param_2 + 0x30) = uVar1;
    }
  }
  return;
}


