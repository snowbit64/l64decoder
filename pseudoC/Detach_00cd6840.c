// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Detach
// Entry Point: 00cd6840
// Size: 56 bytes
// Signature: undefined __thiscall Detach(Filter * this, BufferedTransformation * param_1)


/* CryptoPP::Filter::Detach(CryptoPP::BufferedTransformation*) */

void __thiscall CryptoPP::Filter::Detach(Filter *this,BufferedTransformation *param_1)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(BufferedTransformation **)(this + 0x18) = param_1;
  return;
}


