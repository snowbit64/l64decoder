// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recoverFromSubAllocationFailure
// Entry Point: 00a6a684
// Size: 268 bytes
// Signature: undefined __thiscall recoverFromSubAllocationFailure(FoliageTransformGroup * this, IRenderDevice * param_1)


/* FoliageTransformGroup::recoverFromSubAllocationFailure(IRenderDevice*) */

void __thiscall
FoliageTransformGroup::recoverFromSubAllocationFailure
          (FoliageTransformGroup *this,IRenderDevice *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  BuddyAllocator *pBVar5;
  undefined8 local_68;
  undefined4 local_60;
  int iStack_5c;
  undefined4 local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pBVar5 = *(BuddyAllocator **)(this + 0x268);
  uVar1 = *(uint *)(pBVar5 + 0x14);
  uVar2 = *(int *)(pBVar5 + 0x1c) * uVar1;
  BuddyAllocator::~BuddyAllocator(pBVar5);
  operator_delete(pBVar5);
  pBVar5 = (BuddyAllocator *)operator_new(0x20);
                    /* try { // try from 00a6a6e0 to 00a6a6ef has its CatchHandler @ 00a6a790 */
  BuddyAllocator::BuddyAllocator(pBVar5,uVar1,uVar2 + (uVar2 >> 4),6);
  *(BuddyAllocator **)(this + 0x268) = pBVar5;
  if (*(long **)(this + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x250) + 8))();
    pBVar5 = *(BuddyAllocator **)(this + 0x268);
  }
  local_68 = 0;
  local_50 = "Foliage instances";
  iStack_5c = *(int *)(pBVar5 + 0x1c) * *(int *)(pBVar5 + 0x14);
  local_58 = 0x1004;
  local_60 = 8;
  uVar4 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar4 = (**(code **)(*(long *)param_1 + 0x120))(param_1,uVar4,&local_68);
  *(undefined8 *)(this + 0x250) = uVar4;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


