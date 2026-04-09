// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullRenderDevice
// Entry Point: 00aaad2c
// Size: 60 bytes
// Signature: undefined __thiscall ~NullRenderDevice(NullRenderDevice * this)


/* NullRenderDevice::~NullRenderDevice() */

void __thiscall NullRenderDevice::~NullRenderDevice(NullRenderDevice *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__NullRenderDevice_00fe5538;
  NullCommandBuffer::~NullCommandBuffer((NullCommandBuffer *)(this + 0x28));
  operator_delete(this);
  return;
}


