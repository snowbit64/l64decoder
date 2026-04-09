// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unregisterTargetProvider
// Entry Point: 00880950
// Size: 88 bytes
// Signature: undefined __thiscall unregisterTargetProvider(AnimalSteering * this, uint param_1)


/* AnimalSteering::unregisterTargetProvider(unsigned int) */

void __thiscall AnimalSteering::unregisterTargetProvider(AnimalSteering *this,uint param_1)

{
  AnimalSteering **ppAVar1;
  AnimalSteering **ppAVar2;
  AnimalSteering **ppAVar3;
  
  ppAVar2 = (AnimalSteering **)(this + 200);
  ppAVar3 = (AnimalSteering **)*ppAVar2;
  ppAVar1 = ppAVar2;
  if (ppAVar3 != (AnimalSteering **)0x0) {
    do {
      if (*(uint *)(ppAVar3 + 4) >= param_1) {
        ppAVar1 = ppAVar3;
      }
      ppAVar3 = (AnimalSteering **)ppAVar3[*(uint *)(ppAVar3 + 4) < param_1];
    } while (ppAVar3 != (AnimalSteering **)0x0);
    if (((ppAVar1 != ppAVar2) && (*(uint *)(ppAVar1 + 4) <= param_1)) &&
       (*(AnimalSteering **)(this + 0xd8) == ppAVar1[5])) {
      *(undefined8 *)(this + 0xd8) = 0;
      return;
    }
  }
  return;
}


