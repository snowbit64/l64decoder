// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d32490
// Entry Point: 00d32490
// Size: 344 bytes
// Signature: undefined FUN_00d32490(void)


long * FUN_00d32490(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x2a0);
  plVar6 = (long *)(lVar8 + 0xb8);
  local_60 = param_3;
  if (*plVar6 != 0) goto LAB_00d324ec;
  do {
    cVar2 = FUN_00d328e8(lVar8 + 0xa0);
    if (cVar2 == '\0') goto LAB_00d325b0;
LAB_00d324ec:
    uVar3 = (**(code **)(param_2 + 0x70))
                      (param_2,&local_60,param_4,plVar6,*(undefined8 *)(lVar8 + 0xb0));
  } while (1 < uVar3);
  if (*(long *)(lVar8 + 0xc0) != 0) {
    puVar5 = *(undefined **)(lVar8 + 0xb8);
    if (puVar5 == *(undefined **)(lVar8 + 0xb0)) {
      cVar2 = FUN_00d328e8(lVar8 + 0xa0);
      if (cVar2 == '\0') goto LAB_00d325b0;
      puVar5 = (undefined *)*plVar6;
      *(undefined **)(lVar8 + 0xb8) = puVar5 + 1;
      *puVar5 = 0;
      lVar7 = *(long *)(lVar8 + 0xc0);
    }
    else {
      *(undefined **)(lVar8 + 0xb8) = puVar5 + 1;
      *puVar5 = 0;
      lVar7 = *(long *)(lVar8 + 0xc0);
    }
    if (lVar7 != 0) {
      plVar6 = (long *)FUN_00d31dd4(param_1,lVar8 + 0x28,lVar7,0x28);
      if (plVar6 == (long *)0x0) goto LAB_00d325b4;
      if (*plVar6 != lVar7) {
        *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(lVar8 + 0xc0);
        goto LAB_00d325b4;
      }
      *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(lVar8 + 0xb8);
      iVar4 = FUN_00d369d0(param_1,plVar6);
      if (iVar4 != 0) goto LAB_00d325b4;
    }
  }
LAB_00d325b0:
  plVar6 = (long *)0x0;
LAB_00d325b4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


