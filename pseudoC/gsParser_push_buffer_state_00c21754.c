// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_push_buffer_state
// Entry Point: 00c21754
// Size: 180 bytes
// Signature: undefined __cdecl gsParser_push_buffer_state(yy_buffer_state * param_1, void * param_2)


/* gsParser_push_buffer_state(yy_buffer_state*, void*) */

void gsParser_push_buffer_state(yy_buffer_state *param_1,void *param_2)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  if (param_1 != (yy_buffer_state *)0x0) {
    FUN_00c209fc(param_2);
    lVar4 = *(long *)((long)param_2 + 0x18);
    lVar2 = *(long *)((long)param_2 + 0x28);
    if (*(long *)(lVar2 + lVar4 * 8) != 0) {
      **(undefined **)((long)param_2 + 0x40) = *(undefined *)((long)param_2 + 0x30);
      lVar2 = *(long *)((long)param_2 + 0x28);
      lVar5 = *(long *)((long)param_2 + 0x18) * 8;
      lVar4 = *(long *)((long)param_2 + 0x18) + 1;
      lVar6 = *(long *)(lVar2 + lVar5);
      *(long *)((long)param_2 + 0x18) = lVar4;
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)((long)param_2 + 0x40);
      *(undefined4 *)(*(long *)(lVar2 + lVar5) + 0x1c) = *(undefined4 *)((long)param_2 + 0x34);
    }
    lVar4 = lVar4 * 8;
    *(yy_buffer_state **)(lVar2 + lVar4) = param_1;
    lVar2 = *(long *)(*(long *)((long)param_2 + 0x28) + lVar4);
    puVar7 = *(undefined **)(lVar2 + 0x10);
    *(undefined **)((long)param_2 + 0x40) = puVar7;
    *(undefined **)((long)param_2 + 0x80) = puVar7;
    uVar3 = **(undefined8 **)(*(long *)((long)param_2 + 0x28) + lVar4);
    *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(lVar2 + 0x1c);
    *(undefined8 *)((long)param_2 + 8) = uVar3;
    uVar1 = *puVar7;
    *(undefined4 *)((long)param_2 + 0x50) = 1;
    *(undefined *)((long)param_2 + 0x30) = uVar1;
  }
  return;
}


