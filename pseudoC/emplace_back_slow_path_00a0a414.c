// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<>
// Entry Point: 00a0a414
// Size: 420 bytes
// Signature: void __emplace_back_slow_path<>(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__ndk1::vector<RenderQueueItemAllocator::TempData,
   std::__ndk1::allocator<RenderQueueItemAllocator::TempData> >::__emplace_back_slow_path<>() */

void std::__ndk1::
     vector<RenderQueueItemAllocator::TempData,std::__ndk1::allocator<RenderQueueItemAllocator::TempData>>
     ::__emplace_back_slow_path<>(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  TempData *pTVar3;
  undefined8 *puVar4;
  long lVar5;
  TempData **in_x0;
  void *pvVar6;
  long lVar7;
  TempData *pTVar8;
  long lVar9;
  ulong uVar10;
  TempData **ppTVar11;
  undefined8 *local_78;
  undefined8 *puStack_70;
  TempData *local_68;
  TempData **local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pTVar8 = *in_x0;
  pTVar3 = in_x0[1];
  lVar7 = (long)pTVar3 - (long)pTVar8 >> 3;
  uVar1 = lVar7 * -0x30c30c30c30c30c3 + 1;
  if (0x186186186186186 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  ppTVar11 = in_x0 + 2;
  lVar9 = (long)*ppTVar11 - (long)pTVar8 >> 3;
  uVar10 = lVar9 * -0x6186186186186186;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0xc30c30c30c30c2 < (ulong)(lVar9 * -0x30c30c30c30c30c3)) {
    uVar1 = 0x186186186186186;
  }
  local_60 = ppTVar11;
  if (uVar1 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    if (0x186186186186186 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar6 = operator_new(uVar1 * 0xa8);
  }
  local_78 = (undefined8 *)((long)pvVar6 + lVar7 * 8);
  local_68 = (TempData *)((long)pvVar6 + uVar1 * 0xa8);
  puStack_70 = local_78 + 0x15;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x14] = 0;
                    /* try { // try from 00a0a514 to 00a0a523 has its CatchHandler @ 00a0a5b8 */
  allocator_traits<std::__ndk1::allocator<RenderQueueItemAllocator::TempData>>::
  __construct_backward_with_exception_guarantees<RenderQueueItemAllocator::TempData*>
            ((allocator *)ppTVar11,pTVar8,pTVar3,(TempData **)&local_78);
  puVar2 = (undefined8 *)*in_x0;
  puVar4 = (undefined8 *)in_x0[1];
  pTVar8 = in_x0[2];
  in_x0[1] = (TempData *)puStack_70;
  *in_x0 = (TempData *)local_78;
  in_x0[2] = local_68;
  local_78 = puVar2;
  puStack_70 = puVar4;
  local_68 = pTVar8;
  while (puStack_70 != puVar2) {
    puStack_70 = puStack_70 + -0x15;
    RenderQueueItemAllocator::TempData::~TempData((TempData *)puStack_70);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


