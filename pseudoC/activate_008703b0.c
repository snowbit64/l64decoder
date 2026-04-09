// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008703b0
// Size: 232 bytes
// Signature: undefined __thiscall activate(DensityMapVisualizationOverlay * this, IRenderDevice * param_1)


/* DensityMapVisualizationOverlay::activate(IRenderDevice*) */

void __thiscall
DensityMapVisualizationOverlay::activate
          (DensityMapVisualizationOverlay *this,IRenderDevice *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x293d8) == 0) {
    local_88 = 0;
    local_5c = 0x100008004;
    local_64 = 5;
    uStack_6c = 0;
    local_74 = 0x100000001;
    uStack_4c = 0x3f80000000000000;
    local_54 = 0;
    local_84 = 0xffffffff00000000;
    local_7c = *(undefined8 *)(this + 0x293d0);
    local_60 = 0;
    local_40 = "DensityMapVisualizationOverlay";
    local_44 = 0;
    local_90 = 0;
    uVar2 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
    uVar2 = (**(code **)(*(long *)param_1 + 0x100))(param_1,uVar2,&local_90);
    *(undefined8 *)(this + 0x293d8) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


