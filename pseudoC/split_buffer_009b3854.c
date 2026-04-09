// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 009b3854
// Size: 88 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>&> * this)


/* std::__ndk1::__split_buffer<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>&>::~__split_buffer()
    */

void __thiscall
std::__ndk1::
__split_buffer<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>&>
::~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(long *)(this + 0x10) = lVar2 + -0xb0;
    FUN_009b213c(*(undefined8 *)(this + 0x20));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


