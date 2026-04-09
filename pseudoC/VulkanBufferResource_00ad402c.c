// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanBufferResource
// Entry Point: 00ad402c
// Size: 152 bytes
// Signature: undefined __thiscall ~VulkanBufferResource(VulkanBufferResource * this)


/* VulkanBufferResource::~VulkanBufferResource() */

void __thiscall VulkanBufferResource::~VulkanBufferResource(VulkanBufferResource *this)

{
  long lVar1;
  Buffer *pBVar2;
  
  *(undefined ***)this = &PTR__VulkanBufferResource_00fe6900;
  if (*(long *)(this + 0x68) != 0) {
                    /* try { // try from 00ad4064 to 00ad407b has its CatchHandler @ 00ad40dc */
    lVar1 = (**(code **)(**(long **)(this + 0x20) + 0x138))();
    pBVar2 = *(Buffer **)(this + 0x68);
    Mutex::enterCriticalSection();
                    /* try { // try from 00ad4088 to 00ad408f has its CatchHandler @ 00ad40c8 */
    VulkanResourceAllocator::releaseBuffer
              (*(VulkanResourceAllocator **)(*(long *)(lVar1 + 0x98) + 0x370),pBVar2,
               *(FenceStatus **)(lVar1 + 0x550));
                    /* try { // try from 00ad4090 to 00ad4097 has its CatchHandler @ 00ad40c4 */
    Mutex::leaveCriticalSection();
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


