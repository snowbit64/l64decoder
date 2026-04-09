// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConstType
// Entry Point: 00c29210
// Size: 20 bytes
// Signature: undefined __thiscall getConstType(IR_Function * this, uint param_1)


/* IR_Function::getConstType(unsigned int) const */

undefined8 __thiscall IR_Function::getConstType(IR_Function *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x80) + (ulong)param_1 * 0x18 + 0x10);
}


