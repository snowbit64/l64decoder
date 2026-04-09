// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindDisplayPlane
// Entry Point: 00a9afa0
// Size: 280 bytes
// Signature: undefined __thiscall bindDisplayPlane(DisplayTexture * this, IRenderDevice * param_1, uint param_2, LOAD_ACTION param_3)


/* DisplayTexture::bindDisplayPlane(IRenderDevice*, unsigned int, RenderTargetDesc::LOAD_ACTION) */

void __thiscall
DisplayTexture::bindDisplayPlane
          (DisplayTexture *this,IRenderDevice *param_1,uint param_2,LOAD_ACTION param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_130 [2];
  undefined8 local_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined4 local_110;
  LOAD_ACTION local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_128 = *(undefined8 *)(this + 0x20);
  local_100 = 3;
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(this + 0xc);
  uStack_120 = 0;
  local_104 = 3;
  uStack_a4 = 0x300000003;
  local_ac = 0x100000002;
  uStack_74 = 0x300000003;
  local_7c = 0x100000002;
  uStack_50 = 0x300000003;
  local_58 = 0x100000002;
  local_fc = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_40 = "DisplayTexture::bindDisplayPlane";
  local_f8 = 0;
  local_e0 = 0;
  uStack_d4 = 0x300000003;
  local_dc = 0x100000002;
  local_cc = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  uStack_108 = 1;
  local_110 = 0;
  local_118 = (ulong)*(uint *)(this + 0x1c);
  local_130[0] = 1;
  local_10c = param_3;
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1,param_1,param_2);
  (**(code **)(*plVar4 + 0x38))(plVar4,local_130,0,1,0,0,uVar1,uVar2);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


