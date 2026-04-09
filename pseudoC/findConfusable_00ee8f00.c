// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findConfusable
// Entry Point: 00ee8f00
// Size: 108 bytes
// Signature: undefined __cdecl findConfusable(uint param_1)


/* Luau::findConfusable(unsigned int) */

undefined * Luau::findConfusable(uint param_1)

{
  uint3 *puVar1;
  ulong uVar2;
  uint3 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0x6fa;
  puVar3 = (uint3 *)&UNK_0056baa8;
  do {
    uVar6 = uVar5 >> 1;
    uVar2 = uVar5 & 0xfffffffffffffffe;
    puVar1 = puVar3 + uVar2 + 2;
    uVar5 = uVar5 + ~uVar6;
    if (param_1 <= puVar3[uVar2]) {
      puVar1 = puVar3;
      uVar5 = uVar6;
    }
    puVar3 = puVar1;
  } while (uVar5 != 0);
  if (puVar1 == (uint3 *)&switchD_00eeaf48::switchdataD_0056f278) {
    return (undefined *)0x0;
  }
  puVar4 = (undefined *)((long)puVar1 + 3);
  if (*puVar1 != param_1) {
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}


