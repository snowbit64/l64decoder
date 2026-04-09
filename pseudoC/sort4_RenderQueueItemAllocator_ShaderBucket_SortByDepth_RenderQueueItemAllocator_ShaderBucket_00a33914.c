// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
// Entry Point: 00a33914
// Size: 364 bytes
// Signature: uint __cdecl __sort4<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>(ShaderBucket * param_1, ShaderBucket * param_2, ShaderBucket * param_3, ShaderBucket * param_4, SortByDepth * param_5)


/* unsigned int std::__ndk1::__sort4<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,
   RenderQueueItemAllocator::ShaderBucket*>(RenderQueueItemAllocator::ShaderBucket*,
   RenderQueueItemAllocator::ShaderBucket*, RenderQueueItemAllocator::ShaderBucket*,
   RenderQueueItemAllocator::ShaderBucket*, RenderQueueItemAllocator::ShaderBucket::SortByDepth&) */

uint std::__ndk1::
     __sort4<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
               (ShaderBucket *param_1,ShaderBucket *param_2,ShaderBucket *param_3,
               ShaderBucket *param_4,SortByDepth *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  dVar4 = *(double *)(param_2 + 0x18);
  if (*(double *)(param_1 + 0x18) <= dVar4) {
    if (dVar4 <= *(double *)(param_3 + 0x18)) {
      uVar2 = 0;
      goto LAB_00a339e4;
    }
    uVar5 = *(undefined8 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)param_2;
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_2 + 0x18) = uVar7;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_3 + 8) = uVar9;
    *(undefined8 *)param_3 = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar11;
    *(undefined8 *)(param_3 + 0x10) = uVar10;
    if (*(double *)(param_2 + 0x18) < *(double *)(param_1 + 0x18)) {
      uVar5 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = 2;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(undefined8 *)(param_2 + 8) = uVar9;
      *(undefined8 *)param_2 = uVar8;
      *(undefined8 *)(param_2 + 0x18) = uVar11;
      *(undefined8 *)(param_2 + 0x10) = uVar10;
      goto LAB_00a339e4;
    }
LAB_00a339e0:
    uVar2 = 1;
  }
  else {
    if (dVar4 <= *(double *)(param_3 + 0x18)) {
      uVar5 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(undefined8 *)(param_2 + 8) = uVar9;
      *(undefined8 *)param_2 = uVar8;
      *(undefined8 *)(param_2 + 0x18) = uVar11;
      *(undefined8 *)(param_2 + 0x10) = uVar10;
      if (*(double *)(param_2 + 0x18) <= *(double *)(param_3 + 0x18)) goto LAB_00a339e0;
      uVar5 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar2 = 2;
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)param_2;
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar5;
      *(undefined8 *)(param_2 + 0x18) = uVar7;
      *(undefined8 *)(param_2 + 0x10) = uVar6;
    }
    else {
      uVar5 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar2 = 1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
    }
    *(undefined8 *)(param_3 + 8) = uVar9;
    *(undefined8 *)param_3 = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar11;
    *(undefined8 *)(param_3 + 0x10) = uVar10;
  }
LAB_00a339e4:
  if (*(double *)(param_4 + 0x18) < *(double *)(param_3 + 0x18)) {
    uVar5 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    uVar9 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)param_3;
    uVar11 = *(undefined8 *)(param_3 + 0x18);
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar5;
    *(undefined8 *)(param_3 + 0x18) = uVar7;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    *(undefined8 *)(param_4 + 8) = uVar9;
    *(undefined8 *)param_4 = uVar8;
    *(undefined8 *)(param_4 + 0x18) = uVar11;
    *(undefined8 *)(param_4 + 0x10) = uVar10;
    if (*(double *)(param_2 + 0x18) <= *(double *)(param_3 + 0x18)) {
      uVar2 = uVar2 + 1;
    }
    else {
      uVar5 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)param_2;
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar5;
      *(undefined8 *)(param_2 + 0x18) = uVar7;
      *(undefined8 *)(param_2 + 0x10) = uVar6;
      *(undefined8 *)(param_3 + 8) = uVar9;
      *(undefined8 *)param_3 = uVar8;
      *(undefined8 *)(param_3 + 0x18) = uVar11;
      *(undefined8 *)(param_3 + 0x10) = uVar10;
      if (*(double *)(param_1 + 0x18) <= *(double *)(param_2 + 0x18)) {
        uVar2 = uVar2 + 2;
      }
      else {
        uVar5 = *(undefined8 *)param_2;
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar2 = uVar2 + 3;
        uVar9 = *(undefined8 *)(param_1 + 8);
        uVar8 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar5;
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        *(undefined8 *)(param_2 + 8) = uVar9;
        *(undefined8 *)param_2 = uVar8;
        *(undefined8 *)(param_2 + 0x18) = uVar11;
        *(undefined8 *)(param_2 + 0x10) = uVar10;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


