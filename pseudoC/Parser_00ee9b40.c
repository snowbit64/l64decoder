// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Parser
// Entry Point: 00ee9b40
// Size: 588 bytes
// Signature: undefined __thiscall ~Parser(Parser * this)


/* Luau::Parser::~Parser() */

void __thiscall Luau::Parser::~Parser(Parser *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  if (((byte)this[0x310] & 1) != 0) {
    operator_delete(*(void **)(this + 800));
  }
  pvVar1 = *(void **)(this + 0x2f8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x300) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2e0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2e8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2c8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2d0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2b0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2b8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x298);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2a0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x280);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x288) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x268);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x270) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x250);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 600) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x238);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x240) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x220);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x228) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x208);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x210) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1f8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1d8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1e0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1c0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1c8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1a8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1b0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 400);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x198) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x178);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x160);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x168) = pvVar1;
    operator_delete(pvVar1);
  }
  puVar5 = *(undefined8 **)(this + 0x148);
  if (puVar5 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(this + 0x150);
    puVar2 = puVar5;
    if (puVar3 != puVar5) {
      do {
        puVar3 = puVar3 + -6;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar5);
      puVar2 = *(undefined8 **)(this + 0x148);
    }
    *(undefined8 **)(this + 0x150) = puVar5;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(this + 0x130);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x138) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(void **)(this + 0x108) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x108));
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x110) = 0;
  }
  pvVar1 = *(void **)(this + 0xf0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xa0);
  if (pvVar1 != (void *)0x0) {
    pvVar6 = pvVar1;
    pvVar4 = *(void **)(this + 0xa8);
    if (*(void **)(this + 0xa8) != pvVar1) {
      do {
        pvVar6 = (void *)((long)pvVar4 + -0x30);
        if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -8));
        }
        pvVar4 = pvVar6;
      } while (pvVar6 != pvVar1);
      pvVar6 = *(void **)(this + 0xa0);
    }
    *(void **)(this + 0xa8) = pvVar1;
    operator_delete(pvVar6);
  }
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x70) = pvVar1;
  operator_delete(pvVar1);
  return;
}


