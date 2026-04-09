// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inline_heap_free
// Entry Point: 00d5b0b0
// Size: 388 bytes
// Signature: undefined __thiscall inline_heap_free(MyHeapManager * this, void * param_1)


/* HACD::MyHeapManager::inline_heap_free(void*) */

void __thiscall HACD::MyHeapManager::inline_heap_free(MyHeapManager *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  void **ppvVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  void **ppvVar11;
  char *pcVar12;
  long *plVar13;
  
  lVar4 = *(long *)(this + 0x10);
  pvVar5 = *(void **)(lVar4 + 0x838);
  if ((param_1 < pvVar5 || *(void **)(lVar4 + 0x840) < param_1) ||
      param_1 >= pvVar5 && *(void **)(lVar4 + 0x840) == param_1) {
    uVar9 = *(uint *)(lVar4 + 0x84c);
    uVar6 = (ulong)uVar9;
    if (uVar9 != 0) {
      ppvVar7 = *(void ***)(lVar4 + 0x850);
      if ((ppvVar7 == (void **)0x0) ||
         ((param_1 < *ppvVar7 || ppvVar7[1] < param_1) ||
          param_1 >= *ppvVar7 && ppvVar7[1] == param_1)) {
        ppvVar7 = *(void ***)(lVar4 + 0x858);
        if (uVar9 < 4) {
          uVar10 = 0;
          ppvVar11 = ppvVar7;
          do {
            if ((param_1 >= *ppvVar11 && param_1 <= ppvVar11[1]) &&
                (param_1 < *ppvVar11 || ppvVar11[1] != param_1)) {
              *(void ***)(lVar4 + 0x850) = ppvVar11;
              pcVar12 = (char *)ppvVar7[(uVar10 & 0xffffffff) * 4 + 2];
              goto joined_r0x00d5b220;
            }
            uVar10 = uVar10 + 1;
            ppvVar11 = ppvVar11 + 4;
          } while (uVar6 != uVar10);
        }
        else {
          uVar9 = 0;
          do {
            uVar1 = uVar9 + ((uint)uVar6 - uVar9 >> 1);
            ppvVar11 = ppvVar7 + (ulong)uVar1 * 4;
            pvVar5 = ppvVar11[1];
            if ((param_1 >= *ppvVar11 && param_1 <= pvVar5) &&
                (param_1 < *ppvVar11 || pvVar5 != param_1)) {
              *(void ***)(lVar4 + 0x850) = ppvVar11;
              pcVar12 = (char *)ppvVar7[(ulong)uVar1 * 4 + 2];
              goto joined_r0x00d5b220;
            }
            uVar2 = (uint)uVar6;
            if (param_1 <= pvVar5) {
              uVar2 = uVar1;
            }
            uVar6 = (ulong)uVar2;
            if (param_1 > pvVar5) {
              uVar9 = uVar1 + 1;
            }
          } while (uVar2 != uVar9);
        }
      }
      else {
        pcVar12 = (char *)ppvVar7[2];
joined_r0x00d5b220:
        if (pcVar12 != (char *)0x0) goto LAB_00d5b19c;
      }
    }
    free(param_1);
    return;
  }
  uVar9 = 0;
  if (*(uint *)(lVar4 + 0x830) != 0) {
    uVar9 = (uint)((int)param_1 - (int)pvVar5) / *(uint *)(lVar4 + 0x830);
  }
  pcVar12 = (char *)(lVar4 + (ulong)uVar9 * 0x630 + 0x890);
LAB_00d5b19c:
  iVar3 = *(int *)(pcVar12 + 0x18);
  uVar8 = *(undefined8 *)(pcVar12 + 0x20);
  *(void **)(pcVar12 + 0x20) = param_1;
  plVar13 = *(long **)(lVar4 + 0x10);
  *(undefined8 *)param_1 = uVar8;
  *(int *)(pcVar12 + 0x18) = iVar3 + -1;
  if ((iVar3 + -1 == 0) && (*pcVar12 != '\0')) {
    (**(code **)(*(long *)(lVar4 + 8) + 8))((long *)(lVar4 + 8),pcVar12);
    (**(code **)(*plVar13 + 8))(plVar13,*(undefined8 *)(pcVar12 + 8));
    *pcVar12 = '\0';
    *(undefined8 *)(pcVar12 + 0x20) = 0;
    *(undefined8 *)(pcVar12 + 8) = 0;
    *(undefined8 *)(pcVar12 + 0x10) = 0;
    return;
  }
  return;
}


