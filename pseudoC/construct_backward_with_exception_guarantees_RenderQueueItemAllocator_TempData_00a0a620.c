// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_backward_with_exception_guarantees<RenderQueueItemAllocator::TempData*>
// Entry Point: 00a0a620
// Size: 260 bytes
// Signature: void __cdecl __construct_backward_with_exception_guarantees<RenderQueueItemAllocator::TempData*>(allocator * param_1, TempData * param_2, TempData * param_3, TempData * * param_4)


/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<RenderQueueItemAllocator::TempData>
   >::__construct_backward_with_exception_guarantees<RenderQueueItemAllocator::TempData*>(std::__ndk1::allocator<RenderQueueItemAllocator::TempData>&,
   RenderQueueItemAllocator::TempData*, RenderQueueItemAllocator::TempData*,
   RenderQueueItemAllocator::TempData*&) */

void std::__ndk1::allocator_traits<std::__ndk1::allocator<RenderQueueItemAllocator::TempData>>::
     __construct_backward_with_exception_guarantees<RenderQueueItemAllocator::TempData*>
               (allocator *param_1,TempData *param_2,TempData *param_3,TempData **param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  TempData *pTVar3;
  
  if (param_3 != param_2) {
    pTVar3 = *param_4;
    do {
      *(undefined8 *)(pTVar3 + -0xa8) = 0;
      *(undefined8 *)(pTVar3 + -0xa0) = 0;
      *(undefined8 *)(pTVar3 + -0x98) = 0;
      puVar2 = (undefined8 *)((long)param_3 + -0xa8);
      uVar1 = *(undefined8 *)((long)param_3 + -0xa0);
      *(undefined8 *)(pTVar3 + -0xa8) = *puVar2;
      *(undefined8 *)(pTVar3 + -0xa0) = uVar1;
      *(undefined8 *)(pTVar3 + -0x98) = *(undefined8 *)((long)param_3 + -0x98);
      *puVar2 = 0;
      *(undefined8 *)((long)param_3 + -0xa0) = 0;
      *(undefined8 *)((long)param_3 + -0x98) = 0;
      *(undefined8 *)(pTVar3 + -0x90) = 0;
      *(undefined8 *)(pTVar3 + -0x88) = 0;
      *(undefined8 *)(pTVar3 + -0x80) = 0;
      uVar1 = *(undefined8 *)((long)param_3 + -0x88);
      *(undefined8 *)(pTVar3 + -0x90) = *(undefined8 *)((long)param_3 + -0x90);
      *(undefined8 *)(pTVar3 + -0x88) = uVar1;
      *(undefined8 *)(pTVar3 + -0x80) = *(undefined8 *)((long)param_3 + -0x80);
      *(undefined8 *)((long)param_3 + -0x90) = 0;
      *(undefined8 *)((long)param_3 + -0x88) = 0;
      *(undefined8 *)((long)param_3 + -0x80) = 0;
      *(undefined8 *)(pTVar3 + -0x78) = 0;
      *(undefined8 *)(pTVar3 + -0x70) = 0;
      *(undefined8 *)(pTVar3 + -0x68) = 0;
      uVar1 = *(undefined8 *)((long)param_3 + -0x70);
      *(undefined8 *)(pTVar3 + -0x78) = *(undefined8 *)((long)param_3 + -0x78);
      *(undefined8 *)(pTVar3 + -0x70) = uVar1;
      *(undefined8 *)(pTVar3 + -0x68) = *(undefined8 *)((long)param_3 + -0x68);
      *(undefined8 *)((long)param_3 + -0x78) = 0;
      *(undefined8 *)((long)param_3 + -0x70) = 0;
      *(undefined8 *)((long)param_3 + -0x68) = 0;
      *(undefined8 *)(pTVar3 + -0x60) = 0;
      *(undefined8 *)(pTVar3 + -0x58) = 0;
      *(undefined8 *)(pTVar3 + -0x50) = 0;
      uVar1 = *(undefined8 *)((long)param_3 + -0x58);
      *(undefined8 *)(pTVar3 + -0x60) = *(undefined8 *)((long)param_3 + -0x60);
      *(undefined8 *)(pTVar3 + -0x58) = uVar1;
      *(undefined8 *)(pTVar3 + -0x50) = *(undefined8 *)((long)param_3 + -0x50);
      *(undefined8 *)((long)param_3 + -0x60) = 0;
      *(undefined8 *)((long)param_3 + -0x58) = 0;
      *(undefined8 *)((long)param_3 + -0x50) = 0;
      *(undefined8 *)(pTVar3 + -0x48) = 0;
      *(undefined8 *)(pTVar3 + -0x40) = 0;
      *(undefined8 *)(pTVar3 + -0x38) = 0;
      uVar1 = *(undefined8 *)((long)param_3 + -0x40);
      *(undefined8 *)(pTVar3 + -0x48) = *(undefined8 *)((long)param_3 + -0x48);
      *(undefined8 *)(pTVar3 + -0x40) = uVar1;
      *(undefined8 *)(pTVar3 + -0x38) = *(undefined8 *)((long)param_3 + -0x38);
      *(undefined8 *)((long)param_3 + -0x48) = 0;
      *(undefined8 *)((long)param_3 + -0x40) = 0;
      *(undefined8 *)((long)param_3 + -0x38) = 0;
      *(undefined8 *)(pTVar3 + -0x30) = 0;
      *(undefined8 *)(pTVar3 + -0x28) = 0;
      *(undefined8 *)(pTVar3 + -0x20) = 0;
      uVar1 = *(undefined8 *)((long)param_3 + -0x28);
      *(undefined8 *)(pTVar3 + -0x30) = *(undefined8 *)((long)param_3 + -0x30);
      *(undefined8 *)(pTVar3 + -0x28) = uVar1;
      *(undefined8 *)(pTVar3 + -0x20) = *(undefined8 *)((long)param_3 + -0x20);
      *(undefined8 *)((long)param_3 + -0x30) = 0;
      *(undefined8 *)((long)param_3 + -0x28) = 0;
      *(undefined8 *)((long)param_3 + -0x20) = 0;
      *(undefined8 *)(pTVar3 + -0x18) = 0;
      *(undefined8 *)(pTVar3 + -0x10) = 0;
      *(undefined8 *)(pTVar3 + -8) = 0;
      uVar1 = *(undefined8 *)((long)param_3 + -0x10);
      *(undefined8 *)(pTVar3 + -0x18) = *(undefined8 *)((long)param_3 + -0x18);
      *(undefined8 *)(pTVar3 + -0x10) = uVar1;
      *(undefined8 *)(pTVar3 + -8) = *(undefined8 *)((long)param_3 + -8);
      *(undefined8 *)((long)param_3 + -0x18) = 0;
      *(undefined8 *)((long)param_3 + -0x10) = 0;
      *(undefined8 *)((long)param_3 + -8) = 0;
      pTVar3 = *param_4 + -0xa8;
      *param_4 = pTVar3;
      param_3 = (TempData *)puVar2;
    } while (puVar2 != (undefined8 *)param_2);
  }
  return;
}


