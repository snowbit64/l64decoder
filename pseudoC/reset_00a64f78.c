// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a64f78
// Size: 224 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageSystemDesc::State::reset() */

void FoliageSystemDesc::State::reset(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined2 *in_x0;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  
  if ((*(byte *)in_x0 & 1) == 0) {
    *in_x0 = 0;
    bVar2 = *(byte *)(in_x0 + 0xc);
  }
  else {
    **(undefined **)(in_x0 + 8) = 0;
    *(undefined8 *)(in_x0 + 4) = 0;
    bVar2 = *(byte *)(in_x0 + 0xc);
  }
  if ((bVar2 & 1) == 0) {
    in_x0[0xc] = 0;
  }
  else {
    **(undefined **)(in_x0 + 0x14) = 0;
    *(undefined8 *)(in_x0 + 0x10) = 0;
  }
  lVar1 = *(long *)(in_x0 + 0x28);
  *(undefined8 *)(in_x0 + 0x18) = 0;
  *(undefined8 *)(in_x0 + 0x1c) = 0;
  *(undefined4 *)(in_x0 + 0x24) = 0;
  *(undefined8 *)(in_x0 + 0x20) = 0;
  lVar4 = *(long *)(in_x0 + 0x2c);
  while (lVar3 = lVar4, lVar3 != lVar1) {
    pvVar6 = *(void **)(lVar3 + -0x18);
    lVar4 = lVar3 + -0x20;
    if (pvVar6 != (void *)0x0) {
      pvVar7 = pvVar6;
      pvVar5 = *(void **)(lVar3 + -0x10);
      if (*(void **)(lVar3 + -0x10) != pvVar6) {
        do {
          pvVar7 = (void *)((long)pvVar5 + -0x40);
          if ((*(byte *)((long)pvVar5 + -0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + -0x28));
          }
          pvVar5 = pvVar7;
        } while (pvVar7 != pvVar6);
        pvVar7 = *(void **)(lVar3 + -0x18);
      }
      *(void **)(lVar3 + -0x10) = pvVar6;
      operator_delete(pvVar7);
    }
  }
  *(long *)(in_x0 + 0x2c) = lVar1;
  return;
}


