// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 009b29c4
// Size: 140 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>&> * this)


/* std::__ndk1::__split_buffer<Bt2ScenegraphPhysicsContext::RaycastShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>&>
::~__split_buffer(__split_buffer<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>&>
                  *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    lVar4 = lVar2 + -0x50;
    pvVar3 = *(void **)(lVar2 + -0x10);
    *(long *)(this + 0x10) = lVar4;
    if ((pvVar3 != (void *)0x0) && (*(char *)(lVar2 + -8) != '\0')) {
                    /* try { // try from 009b2a1c to 009b2a1f has its CatchHandler @ 009b2a50 */
      btAlignedFreeInternal(pvVar3);
      lVar4 = *(long *)(this + 0x10);
    }
    *(undefined *)(lVar2 + -8) = 1;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    *(undefined8 *)(lVar2 + -0x1c) = 0;
    lVar2 = lVar4;
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


