// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BtConnectivityProcessor
// Entry Point: 00ba9ea4
// Size: 36 bytes
// Signature: undefined __thiscall ~BtConnectivityProcessor(BtConnectivityProcessor * this)


/* BtConnectivityProcessor::~BtConnectivityProcessor() */

void __thiscall BtConnectivityProcessor::~BtConnectivityProcessor(BtConnectivityProcessor *this)

{
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)this);
  operator_delete(this);
  return;
}


