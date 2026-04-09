// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetBuffer
// Entry Point: 00d2e720
// Size: 668 bytes
// Signature: undefined XML_GetBuffer(void)


void * XML_GetBuffer(long param_1,uint param_2)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((int)param_2 < 0) goto LAB_00d2e8dc;
  if (*(int *)(param_1 + 0x388) == 2) {
    *(undefined4 *)(param_1 + 0x218) = 0x24;
    return (void *)0x0;
  }
  if (*(int *)(param_1 + 0x388) == 3) {
    *(undefined4 *)(param_1 + 0x218) = 0x21;
    return (void *)0x0;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    __dest = *(void **)(param_1 + 0x38);
    if ((ulong)param_2 == 0) {
      return __dest;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      lVar5 = lVar2 - lVar5;
    }
    __dest = *(void **)(param_1 + 0x38);
    if ((long)(ulong)param_2 <= lVar5) {
      return __dest;
    }
  }
  if (__dest == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x30);
    if (uVar4 != 0) {
      uVar4 = (ulong)(uint)((int)__dest - (int)uVar4);
    }
  }
  iVar6 = (int)uVar4 + param_2;
  if (iVar6 < 0) goto LAB_00d2e8dc;
  lVar5 = *(long *)(param_1 + 0x30);
  if ((lVar5 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)lVar5 - (int)*(long *)(param_1 + 0x10);
    if (0x3ff < iVar8) {
      iVar8 = 0x400;
    }
  }
  iVar6 = iVar8 + iVar6;
  if (lVar2 == 0) {
    if (0 < iVar6) {
LAB_00d2e84c:
      uVar4 = 0x400;
      goto LAB_00d2e850;
    }
LAB_00d2e8f8:
    if (lVar5 == 0) {
      if (-1 < iVar8) goto LAB_00d2e9a0;
      lVar5 = 0;
      iVar6 = 0;
      pvVar3 = *(void **)(param_1 + 0x10);
    }
    else {
      pvVar3 = *(void **)(param_1 + 0x10);
      lVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        lVar2 = lVar5 - (long)pvVar3;
      }
      if (lVar2 <= iVar8) goto LAB_00d2e9a0;
      iVar6 = 0;
      if (pvVar3 != (void *)0x0) {
        iVar6 = (int)(lVar5 - (long)pvVar3);
      }
    }
    lVar2 = (long)iVar6 - (long)iVar8;
    memmove(pvVar3,(void *)((long)pvVar3 + lVar2),(long)__dest + (iVar8 - lVar5));
    __dest = (void *)(*(long *)(param_1 + 0x38) - lVar2);
    pvVar3 = (void *)(*(long *)(param_1 + 0x30) - lVar2);
LAB_00d2e998:
    *(void **)(param_1 + 0x38) = __dest;
  }
  else {
    lVar7 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar7 = lVar2 - *(long *)(param_1 + 0x10);
    }
    if (iVar6 <= lVar7) goto LAB_00d2e8f8;
    if ((lVar5 == 0) || (uVar1 = (int)lVar2 - (int)lVar5, uVar4 = (ulong)uVar1, uVar1 == 0))
    goto LAB_00d2e84c;
LAB_00d2e850:
    do {
      uVar1 = (int)uVar4 * 2;
      uVar4 = (ulong)uVar1;
      if (iVar6 <= (int)uVar1) break;
    } while (0 < (int)uVar1);
    if ((int)uVar1 < 1) {
LAB_00d2e8dc:
      *(undefined4 *)(param_1 + 0x218) = 1;
      return (void *)0x0;
    }
    __dest = (void *)(**(code **)(param_1 + 0x18))(uVar4);
    if (__dest == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x218) = 1;
      return (void *)0x0;
    }
    lVar2 = *(long *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x40) = (long)__dest + uVar4;
    if (lVar2 != 0) {
      lVar7 = (long)iVar8;
      lVar5 = 0;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar5 = *(long *)(param_1 + 0x38) - lVar2;
      }
      memcpy(__dest,(void *)(lVar2 - lVar7),lVar5 + lVar7);
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x10));
      lVar2 = *(long *)(param_1 + 0x38);
      *(void **)(param_1 + 0x10) = __dest;
      if (lVar2 != 0) {
        if (*(long *)(param_1 + 0x30) == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = lVar2 - *(long *)(param_1 + 0x30);
        }
      }
      pvVar3 = (void *)((long)__dest + lVar7);
      __dest = (void *)((long)__dest + lVar7 + lVar2);
      goto LAB_00d2e998;
    }
    *(void **)(param_1 + 0x38) = __dest;
    *(void **)(param_1 + 0x10) = __dest;
    pvVar3 = __dest;
  }
  *(void **)(param_1 + 0x30) = pvVar3;
LAB_00d2e9a0:
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  return __dest;
}


