// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunk
// Entry Point: 00bb0374
// Size: 12 bytes
// Signature: undefined __thiscall getChunk(BtSerializerWrapper * this, int param_1)


/* Bt2PhysicsSerialization::BtSerializerWrapper::getChunk(int) const */

undefined8 __thiscall
Bt2PhysicsSerialization::BtSerializerWrapper::getChunk(BtSerializerWrapper *this,int param_1)

{
  return *(undefined8 *)(*(long *)(this + 8) + (long)param_1 * 8);
}


