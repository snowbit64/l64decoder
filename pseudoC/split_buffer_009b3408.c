// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 009b3408
// Size: 56 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>&> * this)


/* std::__ndk1::__split_buffer<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>&>
::~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>&>
                  *this)

{
  FUN_009b3440(this,*(undefined8 *)(this + 8));
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


