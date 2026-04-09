// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00a5e1b8
// Size: 152 bytes
// Signature: undefined generate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageLayerGraphics::Layer::generate() */

void FoliageLayerGraphics::Layer::generate(void)

{
  uint uVar1;
  long in_x0;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(in_x0 + 0x28);
  pvVar2 = operator_new__((ulong)(uVar1 + 1) << 3);
  uVar3 = 0;
  *(void **)(in_x0 + 0x48) = pvVar2;
  do {
    if (uVar3 == 0) {
LAB_00a5e1f8:
      lVar4 = 0;
    }
    else {
      uVar7 = (*(long *)(in_x0 + 0x38) - *(long *)(in_x0 + 0x30) >> 3) * 0x2e8ba2e8ba2e8ba3;
      uVar6 = (ulong)(uVar3 - 1);
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) goto LAB_00a5e1f8;
      lVar5 = *(long *)(in_x0 + 0x30) + uVar6 * 0x58;
      lVar4 = 0;
      if (*(long *)(lVar5 + 0x40) != *(long *)(lVar5 + 0x38)) {
        lVar4 = lVar5;
      }
    }
    *(long *)(*(long *)(in_x0 + 0x48) + (ulong)uVar3 * 8) = lVar4;
    uVar3 = uVar3 + 1;
    if (uVar1 < uVar3) {
      return;
    }
  } while( true );
}


