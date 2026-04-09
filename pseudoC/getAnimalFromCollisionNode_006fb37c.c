// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimalFromCollisionNode
// Entry Point: 006fb37c
// Size: 100 bytes
// Signature: undefined __cdecl getAnimalFromCollisionNode(uint param_1, uint * param_2, uint * param_3)


/* AnimalHusbandry::getAnimalFromCollisionNode(unsigned int, unsigned int&, unsigned int&) */

void AnimalHusbandry::getAnimalFromCollisionNode(uint param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (DAT_01052b18 != (undefined8 *)0x0) {
    puVar2 = &DAT_01052b18;
    puVar3 = DAT_01052b18;
    do {
      bVar1 = *(uint *)((long)puVar3 + 0x1c) < param_1;
      if (!bVar1) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[bVar1];
    } while (puVar3 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_01052b18) && (*(uint *)((long)puVar2 + 0x1c) <= param_1)) {
      *param_2 = *(uint *)(puVar2 + 4);
      *param_3 = *(uint *)((long)puVar2 + 0x24);
      return;
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}


