// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~pair
// Entry Point: 009acad8
// Size: 64 bytes
// Signature: undefined __thiscall ~pair(pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> * this)


/* std::__ndk1::pair<unsigned long long,
   Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>::~pair() */

void __thiscall
std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>::~pair
          (pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData> *this)

{
  if ((*(void **)(this + 0x20) != (void *)0x0) &&
     (this[0x28] !=
      (pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>)0x0)) {
                    /* try { // try from 009acaf8 to 009acafb has its CatchHandler @ 009acb18 */
    btAlignedFreeInternal(*(void **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x28] = (pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>)0x1;
  return;
}


