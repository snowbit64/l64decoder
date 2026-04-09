// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_pop_buffer_state
// Entry Point: 00c21808
// Size: 164 bytes
// Signature: undefined __cdecl gsParser_pop_buffer_state(void * param_1)


/* gsParser_pop_buffer_state(void*) */

void gsParser_pop_buffer_state(void *param_1)

{
  int iVar1;
  undefined uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  void *__ptr;
  
  lVar3 = *(long *)((long)param_1 + 0x28);
  if (lVar3 != 0) {
    __ptr = *(void **)(lVar3 + *(long *)((long)param_1 + 0x18) * 8);
    if (__ptr != (void *)0x0) {
      iVar1 = *(int *)((long)__ptr + 0x20);
      *(undefined8 *)(lVar3 + *(long *)((long)param_1 + 0x18) * 8) = 0;
      if (iVar1 != 0) {
        free(*(void **)((long)__ptr + 8));
      }
      free(__ptr);
      lVar3 = *(long *)((long)param_1 + 0x18);
      *(undefined8 *)(*(long *)((long)param_1 + 0x28) + lVar3 * 8) = 0;
      if (lVar3 != 0) {
        lVar3 = lVar3 + -1;
        *(long *)((long)param_1 + 0x18) = lVar3;
      }
      lVar5 = *(long *)((long)param_1 + 0x28);
      if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + lVar3 * 8), lVar6 != 0)) {
        puVar7 = *(undefined **)(lVar6 + 0x10);
        *(undefined **)((long)param_1 + 0x40) = puVar7;
        *(undefined **)((long)param_1 + 0x80) = puVar7;
        uVar4 = **(undefined8 **)(lVar5 + lVar3 * 8);
        *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(lVar6 + 0x1c);
        *(undefined8 *)((long)param_1 + 8) = uVar4;
        uVar2 = *puVar7;
        *(undefined4 *)((long)param_1 + 0x50) = 1;
        *(undefined *)((long)param_1 + 0x30) = uVar2;
      }
    }
  }
  return;
}


