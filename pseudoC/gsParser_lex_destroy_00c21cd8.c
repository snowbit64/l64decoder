// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_lex_destroy
// Entry Point: 00c21cd8
// Size: 280 bytes
// Signature: undefined __cdecl gsParser_lex_destroy(void * param_1)


/* gsParser_lex_destroy(void*) */

undefined8 gsParser_lex_destroy(void *param_1)

{
  void **ppvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined uVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  __ptr = *(void **)((long)param_1 + 0x28);
  if (__ptr != (void *)0x0) {
    ppvVar1 = (void **)((long)__ptr + *(long *)((long)param_1 + 0x18) * 8);
    pvVar9 = *ppvVar1;
    while (pvVar9 != (void *)0x0) {
      iVar2 = *(int *)((long)pvVar9 + 0x20);
      *ppvVar1 = (void *)0x0;
      if (iVar2 != 0) {
        free(*(void **)((long)pvVar9 + 8));
      }
      free(pvVar9);
      lVar5 = *(long *)((long)param_1 + 0x18);
      *(undefined8 *)(*(long *)((long)param_1 + 0x28) + lVar5 * 8) = 0;
      __ptr = *(void **)((long)param_1 + 0x28);
      if (__ptr == (void *)0x0) break;
      pvVar9 = *(void **)((long)__ptr + lVar5 * 8);
      if (pvVar9 != (void *)0x0) {
        iVar2 = *(int *)((long)pvVar9 + 0x20);
        *(undefined8 *)((long)__ptr + lVar5 * 8) = 0;
        if (iVar2 != 0) {
          free(*(void **)((long)pvVar9 + 8));
        }
        free(pvVar9);
        lVar5 = *(long *)((long)param_1 + 0x18);
        *(undefined8 *)(*(long *)((long)param_1 + 0x28) + lVar5 * 8) = 0;
        if (lVar5 != 0) {
          lVar5 = lVar5 + -1;
          *(long *)((long)param_1 + 0x18) = lVar5;
        }
        __ptr = *(void **)((long)param_1 + 0x28);
        if (__ptr == (void *)0x0) break;
        lVar6 = *(long *)((long)__ptr + lVar5 * 8);
        if (lVar6 != 0) {
          puVar7 = *(undefined **)(lVar6 + 0x10);
          uVar3 = *(undefined4 *)(lVar6 + 0x1c);
          *(undefined **)((long)param_1 + 0x40) = puVar7;
          *(undefined **)((long)param_1 + 0x80) = puVar7;
          puVar8 = *(undefined8 **)((long)__ptr + lVar5 * 8);
          *(undefined4 *)((long)param_1 + 0x34) = uVar3;
          *(undefined8 *)((long)param_1 + 8) = *puVar8;
          uVar4 = *puVar7;
          *(undefined4 *)((long)param_1 + 0x50) = 1;
          *(undefined *)((long)param_1 + 0x30) = uVar4;
        }
      }
      ppvVar1 = (void **)((long)__ptr + lVar5 * 8);
      pvVar9 = *ppvVar1;
    }
  }
  free(__ptr);
  *(undefined8 *)((long)param_1 + 0x28) = 0;
  free(*(void **)((long)param_1 + 0x60));
  free(param_1);
  return 0;
}


