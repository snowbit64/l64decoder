// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a6d180
// Size: 672 bytes
// Signature: undefined __thiscall init(FullScreenRenderController * this, IRenderDevice * param_1)


/* FullScreenRenderController::init(IRenderDevice*) */

void __thiscall
FullScreenRenderController::init(FullScreenRenderController *this,IRenderDevice *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined local_218 [4];
  undefined4 local_214;
  undefined8 *local_210;
  undefined8 local_208;
  char *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  uint local_1e0;
  undefined local_1dc;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_210 = &local_a0;
  uStack_78 = 0;
  local_80 = 0x3f80000000000000;
  uStack_68 = 0x3f80000000000000;
  uStack_70 = 0xbf80000040400000;
  local_208 = 0x100000048;
  uStack_98 = 0x3f80000000000000;
  local_a0 = 0x40400000bf800000;
  uStack_88 = 0xbf800000bf800000;
  uStack_90 = 0x4000000000000000;
  local_60 = 0x40000000;
  local_200 = "FullScreenRenderController static vertex buffer";
  uVar2 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar2 = (**(code **)(*(long *)param_1 + 0x108))(param_1,uVar2,&local_210);
  *(undefined8 *)this = uVar2;
  local_210 = (undefined8 *)0x0;
  local_200 = "FullScreenRenderController dynamic vertex buffer";
  local_208 = 0x800000060;
  uVar2 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar2 = (**(code **)(*(long *)param_1 + 0x108))(param_1,uVar2,&local_210);
  *(undefined8 *)(this + 8) = uVar2;
  local_a8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  local_f8 = 4;
  local_110 = 1;
  uStack_100 = 0;
  local_108 = 0;
  local_e8 = 0x200000000;
  uVar2 = (**(code **)(*(long *)param_1 + 0x128))(param_1,&local_110);
  *(undefined8 *)(this + 0x10) = uVar2;
  local_118 = 0;
  local_180 = 1;
  uStack_160 = 0;
  uStack_150 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_170 = 0;
  local_178 = 0;
  local_168 = 2;
  local_158 = 0x200000000;
  uVar2 = (**(code **)(*(long *)param_1 + 0x128))(param_1,&local_180);
  *(undefined8 *)(this + 0x18) = uVar2;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0x1000101;
  local_1dc = 0;
  local_1f8 = 0x100000001;
  local_1d8 = 0;
  uVar2 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_1f8);
  *(undefined8 *)(this + 0x28) = uVar2;
  local_1e0 = local_1e0 & 0xffffff;
  uVar2 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_1f8);
  *(undefined8 *)(this + 0x20) = uVar2;
  local_218[0] = 0;
  local_214 = 1;
  uVar2 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_218);
  *(undefined8 *)(this + 0x30) = uVar2;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0x100000001;
  uStack_1b8 = 0x100000001;
  local_1a0 = 0x100000001;
  uStack_198 = 0x100000001;
  local_1b0 = 0;
  uStack_1a8 = 0;
  uStack_188 = 0x101010101010101;
  local_190 = 0x101010101010101;
  uVar2 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_1d0);
  *(undefined8 *)(this + 0x38) = uVar2;
  local_1d0 = CONCAT44(local_1d0._4_4_,7);
  local_1c0 = CONCAT44(local_1c0._4_4_,9);
  local_1b0 = CONCAT44(local_1b0._4_4_,7);
  local_1a0 = CONCAT44(local_1a0._4_4_,9);
  uVar2 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_1d0);
  *(undefined8 *)(this + 0x40) = uVar2;
  compileShaders(this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


