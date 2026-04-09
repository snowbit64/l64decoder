// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDirtyRegion
// Entry Point: 009da16c
// Size: 228 bytes
// Signature: undefined updateDirtyRegion(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementMask::updateDirtyRegion() */

void ProceduralPlacementMask::updateDirtyRegion(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *in_x0;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uStack_38 = 0x7fffffff;
  local_40 = 0x7fffffff;
  (**(code **)(*in_x0 + 0x88))(in_x0,&local_40);
  if ((((int)local_40 < local_40._4_4_) && ((int)uStack_38 < uStack_38._4_4_)) ||
     (in_x0[0x12] == in_x0[0x11])) {
    (**(code **)(*in_x0 + 0x90))();
    lVar5 = ProceduralPlacementManager::getInstance();
    iVar3 = (int)local_40;
    if (*(int *)(lVar5 + 0x130) <= (int)local_40) {
      iVar3 = *(int *)(lVar5 + 0x130);
    }
    iVar1 = (int)uStack_38;
    if (*(int *)(lVar5 + 0x138) <= (int)uStack_38) {
      iVar1 = *(int *)(lVar5 + 0x138);
    }
    iVar2 = local_40._4_4_;
    if (local_40._4_4_ <= *(int *)(lVar5 + 0x134)) {
      iVar2 = *(int *)(lVar5 + 0x134);
    }
    *(int *)(lVar5 + 0x130) = iVar3;
    iVar3 = uStack_38._4_4_;
    if (uStack_38._4_4_ <= *(int *)(lVar5 + 0x13c)) {
      iVar3 = *(int *)(lVar5 + 0x13c);
    }
    *(int *)(lVar5 + 0x138) = iVar1;
    *(int *)(lVar5 + 0x134) = iVar2;
    *(int *)(lVar5 + 0x13c) = iVar3;
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


