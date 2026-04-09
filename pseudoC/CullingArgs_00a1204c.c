// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CullingArgs
// Entry Point: 00a1204c
// Size: 16 bytes
// Signature: undefined __thiscall ~CullingArgs(CullingArgs * this)


/* CullingArgs::~CullingArgs() */

void __thiscall CullingArgs::~CullingArgs(CullingArgs *this)

{
  std::__ndk1::
  __tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>::
  destroy((__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
           *)(this + 0x3c8),*(__tree_node **)(this + 0x3d0));
  return;
}


