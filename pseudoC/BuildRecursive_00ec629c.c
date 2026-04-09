// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BuildRecursive
// Entry Point: 00ec629c
// Size: 372 bytes
// Signature: undefined __thiscall BuildRecursive(AABBTreeImpl * this, uint param_1, uint * param_2, uint param_3)


/* aabbtree::AABBTreeImpl::BuildRecursive(unsigned int, unsigned int*, unsigned int) */

void __thiscall
aabbtree::AABBTreeImpl::BuildRecursive(AABBTreeImpl *this,uint param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long *this_00;
  ulong uVar7;
  
  uVar7 = (ulong)param_1;
  this_00 = (long *)(this + 0x48);
  lVar3 = *this_00;
  uVar4 = *(long *)(this + 0x50) - lVar3 >> 6;
  if (uVar4 <= uVar7) {
    uVar5 = (uint)((float)(unkuint9)uVar4 * 1.5);
    if (uVar5 < 0x201) {
      uVar5 = 0x200;
    }
    uVar6 = (ulong)uVar5;
    if (uVar4 < uVar6) {
      std::__ndk1::
      vector<aabbtree::AABBTreeImpl::Node,std::__ndk1::allocator<aabbtree::AABBTreeImpl::Node>>::
      __append((vector<aabbtree::AABBTreeImpl::Node,std::__ndk1::allocator<aabbtree::AABBTreeImpl::Node>>
                *)this_00,uVar6 - uVar4);
      lVar3 = *this_00;
    }
    else if (uVar6 < uVar4) {
      *(ulong *)(this + 0x50) = lVar3 + uVar6 * 0x40;
    }
  }
  uVar5 = *(uint *)(this + 0x78);
  puVar1 = (uint *)(lVar3 + uVar7 * 0x40);
  if (uVar5 < DAT_02123394 + 1) {
    uVar5 = DAT_02123394 + 1;
  }
  DAT_02123394 = DAT_02123394 + 1;
  *(uint *)(this + 0x78) = uVar5;
  CalculateFaceBounds(this,param_2,param_3,puVar1 + 4,puVar1 + 10);
  if (param_3 < 7) {
    *puVar1 = param_3;
    iVar2 = *(int *)(this + 0x80);
    *(uint **)(puVar1 + 2) = param_2;
    *(int *)(this + 0x80) = iVar2 + 1;
  }
  else {
    *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
    uVar5 = PartitionMedian(this,(Node *)puVar1,param_2,param_3);
    lVar3 = uVar7 * 0x40;
    *(undefined4 *)(*(long *)(this + 0x48) + lVar3) = *(undefined4 *)(this + 8);
    *(int *)(this + 8) = *(int *)(this + 8) + 2;
    BuildRecursive(this,*(uint *)(*(long *)(this + 0x48) + lVar3),param_2,uVar5);
    BuildRecursive(this,*(int *)(*(long *)(this + 0x48) + lVar3) + 1,param_2 + uVar5,param_3 - uVar5
                  );
  }
  DAT_02123394 = DAT_02123394 - 1;
  return;
}


