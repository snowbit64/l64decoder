// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toBtVector
// Entry Point: 00fa2928
// Size: 132 bytes
// Signature: undefined __thiscall toBtVector(btConvexHullInternal * this, Point32 * param_1)


/* btConvexHullInternal::toBtVector(btConvexHullInternal::Point32 const&) */

undefined  [16] __thiscall
btConvexHullInternal::toBtVector(btConvexHullInternal *this,Point32 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  lVar3 = tpidr_el0;
  local_18 = *(long *)(lVar3 + 0x28);
  iVar6 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(this + 0xb0);
  iVar2 = *(int *)(this + 0xa4);
  *(float *)((long)&local_28 + (long)*(int *)(this + 0xa8) * 4) = (float)*(int *)param_1;
  uVar4 = *(undefined8 *)this;
  *(float *)((long)&local_28 + (long)iVar1 * 4) = (float)iVar6;
  uVar7 = *(undefined4 *)(this + 8);
  *(float *)((long)&local_28 + (long)iVar2 * 4) = (float)iVar8;
  if (*(long *)(lVar3 + 0x28) == local_18) {
    auVar5._0_4_ = (float)uVar4 * (float)local_28;
    auVar5._4_4_ = (float)((ulong)uVar4 >> 0x20) * (float)((ulong)local_28 >> 0x20);
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,uVar7,local_20);
}


