// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7614c
// Entry Point: 00d7614c
// Size: 484 bytes
// Signature: undefined FUN_00d7614c(void)


ulong FUN_00d7614c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  iVar2 = *(int *)(param_1 + 400);
  lVar5 = *(long *)(param_1 + 0x230);
  while ((*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa4) ||
         ((*(int *)(param_1 + 0x9c) == *(int *)(param_1 + 0xa4) &&
          (*(uint *)(param_1 + 0xa0) <= *(uint *)(param_1 + 0xa8)))))) {
    uVar6 = (***(code ***)(param_1 + 0x240))(param_1);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar13 = 0;
    lVar7 = *(long *)(param_1 + 0x120);
    do {
      if (*(char *)(lVar7 + 0x34) != '\0') {
        lVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                          (param_1,*(undefined8 *)(lVar5 + lVar13 * 8 + 0x88),
                           *(int *)(lVar7 + 0xc) * *(int *)(param_1 + 0xa8),*(int *)(lVar7 + 0xc),0)
        ;
        if (*(uint *)(param_1 + 0xa8) < iVar2 - 1U) {
          uVar1 = *(uint *)(lVar7 + 0xc);
        }
        else {
          uVar1 = *(uint *)(lVar7 + 0xc);
          uVar4 = 0;
          if (uVar1 != 0) {
            uVar4 = *(uint *)(lVar7 + 0x20) / uVar1;
          }
          uVar4 = *(uint *)(lVar7 + 0x20) - uVar4 * uVar1;
          if (uVar4 != 0) {
            uVar1 = uVar4;
          }
        }
        if ((0 < (int)uVar1) && (*(int *)(lVar7 + 0x1c) != 0)) {
          uVar6 = 0;
          uVar4 = 1;
          lVar9 = *(long *)(param_2 + lVar13 * 8);
          pcVar12 = *(code **)(*(long *)(param_1 + 600) + lVar13 * 8 + 8);
          do {
            if (uVar4 != 0) {
              iVar10 = 0;
              uVar8 = 0;
              lVar11 = *(long *)(lVar3 + uVar6 * 8);
              do {
                (*pcVar12)(param_1,lVar7,lVar11,lVar9,iVar10);
                lVar11 = lVar11 + 0x80;
                uVar4 = *(uint *)(lVar7 + 0x1c);
                uVar8 = uVar8 + 1;
                iVar10 = *(int *)(lVar7 + 0x24) + iVar10;
              } while (uVar8 < uVar4);
            }
            uVar6 = uVar6 + 1;
            lVar9 = lVar9 + (long)*(int *)(lVar7 + 0x28) * 8;
          } while (uVar6 != uVar1);
        }
      }
      lVar13 = lVar13 + 1;
      lVar7 = lVar7 + 0x60;
    } while (lVar13 < *(int *)(param_1 + 0x38));
  }
  uVar1 = *(int *)(param_1 + 0xa8) + 1;
  uVar4 = 3;
  if (*(uint *)(param_1 + 400) <= uVar1) {
    uVar4 = 4;
  }
  *(uint *)(param_1 + 0xa8) = uVar1;
  return (ulong)uVar4;
}


