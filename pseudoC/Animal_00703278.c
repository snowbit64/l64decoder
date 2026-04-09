// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Animal
// Entry Point: 00703278
// Size: 36 bytes
// Signature: undefined __thiscall ~Animal(Animal * this)


/* Animal::~Animal() */

void __thiscall Animal::~Animal(Animal *this)

{
  ~Animal(this);
  operator_delete(this);
  return;
}


