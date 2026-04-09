// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindFinalRt
// Entry Point: 00a40b64
// Size: 356 bytes
// Signature: undefined __thiscall bindFinalRt(ScreenSpaceProcessor * this, IRenderDevice * param_1)


/* ScreenSpaceProcessor::bindFinalRt(IRenderDevice*) */

undefined4 __thiscall
ScreenSpaceProcessor::bindFinalRt(ScreenSpaceProcessor *this,IRenderDevice *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 local_140 [2];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(this + 0x1858);
  if ((plVar5 == (long *)0x0) ||
     (iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,*(undefined4 *)(this + 0x1860)), iVar2 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    local_128 = 0;
    local_50 = "ScreenSpaceProcessor::bindFinalRt";
    local_120 = 0;
    uStack_b4 = 0x300000003;
    local_bc = 0x100000002;
    uStack_84 = 0x300000003;
    local_8c = 0x100000002;
    uStack_60 = 0x300000003;
    local_68 = 0x100000002;
    local_138 = *(undefined8 *)(this + 0x1930);
    local_10c = 0;
    local_100 = 0;
    uStack_f8 = 0;
    uStack_130 = 0;
    local_108 = 0;
    uStack_114 = 0x300000003;
    local_11c = 0x100000002;
    local_f0 = 0;
    uStack_e4 = 0x300000003;
    local_ec = 0x100000002;
    local_dc = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_ac = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_90 = 0;
    local_98 = 0;
    local_7c = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    local_140[0] = 1;
    plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
    uVar3 = (**(code **)(**(long **)(this + 0x1930) + 0x20))();
    uVar4 = (**(code **)(**(long **)(this + 0x1930) + 0x28))();
    (**(code **)(*plVar5 + 0x38))(plVar5,local_140,0,1,0,0,uVar3,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


