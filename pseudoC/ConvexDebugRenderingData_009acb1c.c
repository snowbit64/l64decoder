// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConvexDebugRenderingData
// Entry Point: 009acb1c
// Size: 64 bytes
// Signature: undefined __thiscall ~ConvexDebugRenderingData(ConvexDebugRenderingData * this)


/* Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData::~ConvexDebugRenderingData() */

void __thiscall
Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData::~ConvexDebugRenderingData
          (ConvexDebugRenderingData *this)

{
  if ((*(void **)(this + 0x18) != (void *)0x0) && (this[0x20] != (ConvexDebugRenderingData)0x0)) {
                    /* try { // try from 009acb3c to 009acb3f has its CatchHandler @ 009acb5c */
    btAlignedFreeInternal(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x20] = (ConvexDebugRenderingData)0x1;
  return;
}


