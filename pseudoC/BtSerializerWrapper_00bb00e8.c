// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BtSerializerWrapper
// Entry Point: 00bb00e8
// Size: 36 bytes
// Signature: undefined __thiscall ~BtSerializerWrapper(BtSerializerWrapper * this)


/* Bt2PhysicsSerialization::BtSerializerWrapper::~BtSerializerWrapper() */

void __thiscall
Bt2PhysicsSerialization::BtSerializerWrapper::~BtSerializerWrapper(BtSerializerWrapper *this)

{
  ~BtSerializerWrapper(this);
  operator_delete(this);
  return;
}


