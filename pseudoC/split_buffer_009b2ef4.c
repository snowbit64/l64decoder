// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 009b2ef4
// Size: 140 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>&> * this)


/* std::__ndk1::__split_buffer<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>&>::~__split_buffer()
    */

void __thiscall
std::__ndk1::
__split_buffer<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>&>
::~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>&>
                  *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    lVar4 = lVar2 + -0x40;
    pvVar3 = *(void **)(lVar2 + -0x28);
    *(long *)(this + 0x10) = lVar4;
    if ((pvVar3 != (void *)0x0) && (*(char *)(lVar2 + -0x20) != '\0')) {
                    /* try { // try from 009b2f4c to 009b2f4f has its CatchHandler @ 009b2f80 */
      btAlignedFreeInternal(pvVar3);
      lVar4 = *(long *)(this + 0x10);
    }
    *(undefined *)(lVar2 + -0x20) = 1;
    *(undefined8 *)(lVar2 + -0x28) = 0;
    *(undefined8 *)(lVar2 + -0x34) = 0;
    lVar2 = lVar4;
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


