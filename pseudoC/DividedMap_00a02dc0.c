// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DividedMap
// Entry Point: 00a02dc0
// Size: 196 bytes
// Signature: undefined __thiscall DividedMap(DividedMap * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* PersistentShadowMap::DividedMap::DividedMap(unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
PersistentShadowMap::DividedMap::DividedMap
          (DividedMap *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_4;
  *(uint *)(this + 8) = param_5;
  *(uint *)(this + 0xc) = param_5 * param_4;
  pvVar2 = operator_new__((ulong)(param_5 * param_4) * 0x88);
  *(void **)(this + 0x10) = pvVar2;
  if (param_5 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    while( true ) {
      if (param_4 != 0) {
        uVar5 = (ulong)param_4;
        uVar1 = uVar3;
        uVar6 = param_2;
        do {
          puVar7 = (uint *)((long)pvVar2 + (ulong)uVar1 * 0x88);
          uVar1 = uVar1 + 1;
          uVar5 = uVar5 - 1;
          *puVar7 = uVar6;
          puVar7[1] = param_3 + uVar4 * param_1;
          uVar6 = uVar6 + param_1;
          puVar7[2] = param_1;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0;
        } while (uVar5 != 0);
      }
      uVar4 = uVar4 + 1;
      if (uVar4 == param_5) break;
      pvVar2 = *(void **)(this + 0x10);
      uVar3 = uVar3 + param_4;
    }
  }
  return;
}


