// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbca4
// Entry Point: 007bbca4
// Size: 148 bytes
// Signature: undefined FUN_007bbca4(void)


void FUN_007bbca4(AnimalCompanionManager *param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = AnimalCompanionManager::getNumAnimals();
  if (uVar1 != 0) {
    pvVar2 = operator_new__((ulong)uVar1 << 2);
    uVar4 = 0;
    do {
      lVar3 = AnimalCompanionManager::getAnimalNode(param_1,(uint)uVar4);
      *(undefined4 *)((long)pvVar2 + uVar4 * 4) = *(undefined4 *)(lVar3 + 0x18);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    *(void **)(param_2 + 0x100) = pvVar2;
    *(undefined4 *)(param_2 + 0x108) = 0xb;
    *(char *)(param_2 + 0x10e) = (char)(uVar1 >> 0xf);
    *(ushort *)(param_2 + 0x10c) = (ushort)(uVar1 << 1) | 1;
  }
  return;
}


