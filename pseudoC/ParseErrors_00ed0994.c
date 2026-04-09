// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ParseErrors
// Entry Point: 00ed0994
// Size: 148 bytes
// Signature: undefined __thiscall ~ParseErrors(ParseErrors * this)


/* Luau::ParseErrors::~ParseErrors() */

void __thiscall Luau::ParseErrors::~ParseErrors(ParseErrors *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR__ParseErrors_01016938;
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(this + 0x10);
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -6;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = *(undefined8 **)(this + 8);
    }
    *(undefined8 **)(this + 0x10) = puVar3;
    operator_delete(puVar1);
  }
  std::exception::~exception((exception *)this);
  return;
}


