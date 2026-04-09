// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_quant_params_clear
// Entry Point: 00df37cc
// Size: 384 bytes
// Signature: undefined oc_quant_params_clear(void)


void oc_quant_params_clear(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = 0;
  uVar9 = 5;
  uVar4 = 6;
  do {
    uVar1 = uVar4 - 1;
    uVar6 = (ulong)uVar1 / 3;
    if ((int)lVar8 == -0x78) {
      uVar5 = (ulong)((int)uVar9 -
                     (uVar1 / 3 + ((uint)((ulong)uVar1 * 0xaaaaaaab >> 0x20) & 0xfffffffe)));
    }
    else {
      uVar2 = uVar4 - 2;
      uVar6 = (ulong)uVar2 / 3;
      uVar7 = (ulong)(uVar2 - (uVar2 / 3 + ((uint)((ulong)uVar2 * 0xaaaaaaab >> 0x20) & 0xfffffffe))
                     );
      lVar10 = param_1 + lVar8;
      if (*(long *)(lVar10 + 0x1c0) == *(long *)(param_1 + uVar6 * 0x48 + uVar7 * 0x18 + 0x148)) {
        *(undefined8 *)(lVar10 + 0x1c0) = 0;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar5 = uVar9 - (uVar9 / 3 +
                      (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe));
      if (*(long *)(lVar10 + 0x1c8) == *(long *)(param_1 + uVar6 * 0x48 + uVar7 * 0x18 + 0x150)) {
        *(undefined8 *)(lVar10 + 0x1c8) = 0;
      }
      uVar6 = (ulong)(uVar1 / 3);
      if (3 < uVar4) {
        uVar6 = (ulong)(uVar1 / 3);
        lVar10 = param_1 + (uVar9 / 3) * -0x48 + lVar8;
        if (*(long *)(lVar10 + 0x208) == *(long *)(lVar10 + 0x1c0)) {
          *(undefined8 *)(lVar10 + 0x208) = 0;
          if (*(long *)(lVar10 + 0x210) == *(long *)(lVar10 + 0x1c8)) goto LAB_00df3928;
        }
        else if (*(long *)(lVar10 + 0x210) == *(long *)(lVar10 + 0x1c8)) {
LAB_00df3928:
          *(undefined8 *)(lVar10 + 0x210) = 0;
        }
      }
    }
    lVar10 = param_1 + uVar6 * 0x48 + uVar5 * 0x18;
    free(*(void **)(lVar10 + 0x148));
    free(*(void **)(lVar10 + 0x150));
    uVar9 = uVar9 - 1;
    lVar8 = lVar8 + -0x18;
    uVar4 = uVar1;
    if ((int)lVar8 == -0x90) {
      return;
    }
  } while( true );
}


