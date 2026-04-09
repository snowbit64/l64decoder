// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireRangeBufferForThreadIx
// Entry Point: 00a09b68
// Size: 272 bytes
// Signature: undefined __thiscall acquireRangeBufferForThreadIx(RenderController * this, uint param_1, uint param_2)


/* RenderController::acquireRangeBufferForThreadIx(unsigned int, unsigned int) */

long * __thiscall
RenderController::acquireRangeBufferForThreadIx(RenderController *this,uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar5 = (ulong)(param_1 + 1);
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(*(long *)(this + 0x1c8) + uVar5 * 8);
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (param_2 <= uVar2) goto LAB_00a09c48;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  uStack_5c = param_2 + 0xf & 0xfffffff0;
  local_68 = 0;
  local_60 = 0x10;
  local_50 = "Range Buffer";
  local_58 = 8;
  plVar4 = **(long ***)(this + 8);
  if (param_1 == 0xffffffff) {
    uVar3 = (**(code **)(**(long **)this + 0x138))();
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(this + 0x198) + uVar5 * 8);
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x120))(plVar4,uVar3,&local_68);
  *(long **)(*(long *)(this + 0x1c8) + uVar5 * 8) = plVar4;
LAB_00a09c48:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


