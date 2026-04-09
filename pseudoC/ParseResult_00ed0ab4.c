// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ParseResult
// Entry Point: 00ed0ab4
// Size: 232 bytes
// Signature: undefined __thiscall ~ParseResult(ParseResult * this)


/* Luau::ParseResult::~ParseResult() */

void __thiscall Luau::ParseResult::~ParseResult(ParseResult *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  puVar5 = *(undefined8 **)(this + 0x20);
  if (puVar5 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(this + 0x28);
    puVar2 = puVar5;
    if (puVar3 != puVar5) {
      do {
        puVar3 = puVar3 + -6;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar5);
      puVar2 = *(undefined8 **)(this + 0x20);
    }
    *(undefined8 **)(this + 0x28) = puVar5;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar4 = *(void **)(this + 0x10);
  if (*(void **)(this + 0x10) != pvVar1) {
    do {
      pvVar6 = (void *)((long)pvVar4 + -0x30);
      if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -8));
      }
      pvVar4 = pvVar6;
    } while (pvVar6 != pvVar1);
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(*(void **)(this + 8));
    return;
  }
  *(void **)(this + 0x10) = pvVar1;
  operator_delete(pvVar1);
  return;
}


