// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bac8
// Entry Point: 00f0bac8
// Size: 196 bytes
// Signature: undefined FUN_00f0bac8(void)


void FUN_00f0bac8(long param_1,ulong param_2)

{
  undefined uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x60);
  lVar4 = *plVar8;
  lVar7 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (uVar6 = *(ulong *)(lVar4 + 8), param_2 <= uVar6)) {
    do {
      lVar5 = lVar4;
      if (uVar6 == param_2) {
        return;
      }
      lVar4 = *(long *)(lVar5 + 0x20);
    } while ((lVar4 != 0) && (uVar6 = *(ulong *)(lVar4 + 8), param_2 <= uVar6));
    plVar8 = (long *)(lVar5 + 0x20);
  }
  puVar3 = (undefined *)FUN_00f10278(param_1,0x28,*(undefined *)(param_1 + 4));
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined *)(param_1 + 4);
  *(ulong *)(puVar3 + 8) = param_2;
  puVar3[3] = 0;
  bVar2 = *(byte *)(lVar4 + 0x20);
  *puVar3 = 0xb;
  lVar4 = *plVar8;
  puVar3[2] = uVar1;
  *(long *)(puVar3 + 0x20) = lVar4;
  *plVar8 = (long)puVar3;
  *(long *)(puVar3 + 0x10) = lVar7 + 0xa78;
  puVar3[1] = bVar2 & 3;
  lVar4 = *(long *)(lVar7 + 0xa90);
  *(long *)(puVar3 + 0x18) = lVar4;
  *(undefined **)(lVar4 + 0x10) = puVar3;
  *(undefined **)(lVar7 + 0xa90) = puVar3;
  return;
}


