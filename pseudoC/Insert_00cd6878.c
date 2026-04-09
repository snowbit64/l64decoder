// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Insert
// Entry Point: 00cd6878
// Size: 96 bytes
// Signature: undefined __thiscall Insert(Filter * this, Filter * param_1)


/* CryptoPP::Filter::Insert(CryptoPP::Filter*) */

void __thiscall CryptoPP::Filter::Insert(Filter *this,Filter *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(Filter **)(this + 0x18) = param_1;
  return;
}


