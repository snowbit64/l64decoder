// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Filter
// Entry Point: 00cd66f0
// Size: 68 bytes
// Signature: undefined __thiscall Filter(Filter * this, BufferedTransformation * param_1)


/* CryptoPP::Filter::Filter(CryptoPP::BufferedTransformation*) */

void __thiscall CryptoPP::Filter::Filter(Filter *this,BufferedTransformation *param_1)

{
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BufferedTransformation **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  return;
}


