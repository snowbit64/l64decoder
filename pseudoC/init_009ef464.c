// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 009ef464
// Size: 860 bytes
// Signature: undefined __thiscall init(AtmosphereRenderControllerShared * this, IRenderDevice * param_1, ICommandBuffer * param_2)


/* AtmosphereRenderControllerShared::init(IRenderDevice*, ICommandBuffer*) */

undefined4 __thiscall
AtmosphereRenderControllerShared::init
          (AtmosphereRenderControllerShared *this,IRenderDevice *param_1,ICommandBuffer *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined local_230 [4];
  undefined4 local_22c;
  undefined4 local_228 [2];
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined local_1dc;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined4 local_184;
  char *local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_150;
  undefined local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  char *local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined4 local_d4;
  char *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (this[0x2c1] == (AtmosphereRenderControllerShared)0x0) {
    uVar2 = loadTextures((IRenderDevice *)this);
    if (((uVar2 & 1) == 0) || (uVar2 = compileShaders(this,param_1), (uVar2 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      if (*(long **)(this + 0x58) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x58) + 8))();
      }
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1e0 = 0x101;
      local_1dc = 0;
      local_1d8 = 0;
      local_1f8 = 0x200000001;
      uVar3 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_1f8);
      *(undefined8 *)(this + 0x58) = uVar3;
      if (*(long **)(this + 0x60) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x60) + 8))();
      }
      local_230[0] = 0;
      local_22c = 1;
      uVar3 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_230);
      *(undefined8 *)(this + 0x60) = uVar3;
      if (*(long **)(this + 0x68) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x68) + 8))();
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0x100000001;
      uStack_b0 = 0x100000001;
      local_98 = 0x100000001;
      uStack_90 = 0x100000001;
      uStack_80 = 0x101010101010101;
      local_88 = 0x101010101010101;
      uVar3 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_c8);
      *(undefined8 *)(this + 0x68) = uVar3;
      if (*(long **)(this + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x30) + 8))();
      }
      local_210[0] = 0x50;
      local_208 = 0;
      local_200 = 8;
      uVar3 = (**(code **)(*(long *)param_1 + 0x118))(param_1,param_2,local_210);
      *(undefined8 *)(this + 0x30) = uVar3;
      if (*(long **)(this + 0x38) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x38) + 8))();
      }
      local_220 = 0;
      local_228[0] = 0xc;
      local_218 = 8;
      uVar3 = (**(code **)(*(long *)param_1 + 0x118))(param_1,param_2,local_228);
      *(undefined8 *)(this + 0x38) = uVar3;
      local_ec = 0x100000210;
      uStack_dc = 0x3f80000000000000;
      local_e4 = 0;
      local_d0 = "atmDensityPrecomputation";
      local_118 = 0;
      local_fc = 0;
      local_d4 = 0;
      local_104 = 0x100000001;
      local_10c = 0x40000000400;
      local_120 = 0;
      local_114 = 0xffffffff00000000;
      local_f8 = 0x1500000000;
      local_f0 = 0;
      uVar3 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_120);
      uVar4 = 1;
      *(undefined8 *)(this + 0x50) = uVar3;
      this[0x2c0] = (AtmosphereRenderControllerShared)0x1;
      local_128 = "cloud coverage";
      local_164 = 0x40000000400;
      local_170 = 0;
      local_15c = 0x100000001;
      local_154 = 0;
      uStack_134 = 0x3f80000000000000;
      local_13c = 0;
      local_12c = 0;
      local_178 = 0;
      local_144 = 0x100002001;
      local_16c = 0xffffffff00000000;
      local_150 = 0x100000000;
      local_148 = 0;
      uVar3 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_178);
      *(undefined8 *)(this + 0x48) = uVar3;
      local_1c8 = 0;
      local_1b4 = 0x100000001;
      local_1ac = 0;
      uStack_18c = 0x3f80000000000000;
      local_194 = 0;
      local_184 = 0;
      local_1bc = 0x8000000001;
      local_1d0 = 0;
      local_19c = 0x100002001;
      local_1c4 = 0xffffffff00000000;
      local_1a8 = 0x100000000;
      local_1a0 = 0;
      local_180 = "cloud type";
      uVar3 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,&local_1d0);
      this[0x2c1] = (AtmosphereRenderControllerShared)0x1;
      *(undefined8 *)(this + 0x40) = uVar3;
    }
  }
  else {
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


