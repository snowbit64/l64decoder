// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FilterWithBufferedInput
// Entry Point: 00cd7608
// Size: 100 bytes
// Signature: undefined __thiscall FilterWithBufferedInput(FilterWithBufferedInput * this, BufferedTransformation * param_1)


/* CryptoPP::FilterWithBufferedInput::FilterWithBufferedInput(CryptoPP::BufferedTransformation*) */

void __thiscall
CryptoPP::FilterWithBufferedInput::FilterWithBufferedInput
          (FilterWithBufferedInput *this,BufferedTransformation *param_1)

{
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BufferedTransformation **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  this[0x48] = (FilterWithBufferedInput)0x0;
  *(undefined ***)this = &PTR__FilterWithBufferedInput_01006138;
  *(undefined ***)(this + 8) = &PTR__FilterWithBufferedInput_01006348;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  return;
}


