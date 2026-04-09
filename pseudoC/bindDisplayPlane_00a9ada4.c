// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindDisplayPlane
// Entry Point: 00a9ada4
// Size: 156 bytes
// Signature: undefined __thiscall bindDisplayPlane(DisplayMonitor * this, IRenderDevice * param_1, uint param_2, LOAD_ACTION param_3)


/* DisplayMonitor::bindDisplayPlane(IRenderDevice*, unsigned int, RenderTargetDesc::LOAD_ACTION) */

void __thiscall
DisplayMonitor::bindDisplayPlane
          (DisplayMonitor *this,IRenderDevice *param_1,uint param_2,LOAD_ACTION param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0x3f80000000000000;
  local_50 = 0;
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1,param_1,param_2);
  (**(code **)(*plVar2 + 0x28))
            (plVar2,param_3,&local_50,0,1,0,0,*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc))
  ;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


