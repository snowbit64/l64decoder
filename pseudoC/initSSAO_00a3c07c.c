// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initSSAO
// Entry Point: 00a3c07c
// Size: 988 bytes
// Signature: undefined __thiscall initSSAO(ScreenSpaceProcessor * this, IRenderDevice * param_1, bool param_2, float param_3)


/* ScreenSpaceProcessor::initSSAO(IRenderDevice*, bool, float) */

void __thiscall
ScreenSpaceProcessor::initSSAO
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,bool param_2,float param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  int local_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined8 uStack_184;
  undefined8 local_17c;
  uint local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_9c;
  int iStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  if (*(long **)(this + 0x1948) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1948) + 8))();
  }
  if (*(long **)(this + 0x1950) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1950) + 8))();
  }
  if (*(long **)(this + 0x1958) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1958) + 8))();
  }
  if (*(long **)(this + 0x1960) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1960) + 8))();
  }
  *(undefined8 *)(this + 0x1950) = 0;
  *(undefined8 *)(this + 0x1948) = 0;
  *(undefined8 *)(this + 0x1960) = 0;
  *(undefined8 *)(this + 0x1958) = 0;
  if (param_2) {
    uVar6 = NEON_ucvtf(*(undefined8 *)(this + 0x1868),4);
    local_84 = 0x18;
    local_b0 = 0;
    local_7c = 0x10;
    uStack_78 = 1;
    uStack_a4 = 0;
    uStack_a0 = 0xffffffff;
    uStack_8c = 0;
    uStack_88 = 0;
    local_94 = 1;
    uStack_90 = 1;
    uStack_a8 = 0;
    local_80 = local_80 & 0xffffff00;
    local_64 = 0;
    local_9c = (int)(float)(int)((float)uVar6 * param_3);
    iStack_98 = (int)(float)(int)((float)((ulong)uVar6 >> 0x20) * param_3);
    uVar7 = CONCAT44(iStack_98,local_9c);
    uStack_6c = 0;
    uStack_68 = 0x3f800000;
    local_74 = 0;
    uStack_70 = 0;
    local_60 = "SSAO Render Target 0";
    uVar6 = 0;
    lVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_b0);
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    local_174 = local_174 & 0xffffff00;
    local_17c = 0x300000003;
    *(long *)(this + 0x1948) = lVar4;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    local_15c = 0;
    uStack_14c = 0x300000003;
    uStack_154 = 2;
    uStack_150 = 1;
    uStack_11c = 0x300000003;
    local_124 = 0x100000002;
    uStack_ec = 0x300000003;
    local_f4 = 0x100000002;
    uStack_c8 = 0x300000003;
    local_d0 = 0x100000002;
    uStack_170 = 0;
    uStack_16c = 0;
    local_158 = 0;
    local_144 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_140 = 0;
    local_128 = 0;
    local_114 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_e4 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_c0 = 0;
    local_b8 = "clear SSAO read target";
    local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,1);
    local_1a0 = (undefined2)lVar4;
    uStack_19e = (undefined2)((ulong)lVar4 >> 0x10);
    uStack_19c = (undefined4)((ulong)lVar4 >> 0x20);
    uStack_198 = 0;
    local_194 = 0;
    uStack_184 = 0x100000001;
    (**(code **)(*plVar3 + 0x38))
              (plVar3,&local_1a8,0,1,0,0,uVar7 & 0xffffffff,(int)(uVar7 >> 0x20),uVar7,uVar6);
    (**(code **)(*plVar3 + 0x40))(plVar3);
    (**(code **)(*plVar3 + 0x120))(plVar3,1,this + 0x1948,0,0,0,1);
    local_60 = "SSAO Render Target 1";
    lVar5 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_b0);
    *(long *)(this + 0x1950) = lVar5;
    bVar2 = lVar4 != 0 && lVar5 != 0;
    if (param_3 != 1.0) {
      local_1e0 = CONCAT44(uStack_8c,uStack_90);
      uStack_1c8 = CONCAT44(local_74,uStack_78);
      uStack_1d0 = CONCAT44(local_7c,local_80);
      local_1b0 = "SSAO Render Target 2";
      uStack_1f8 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,uStack_a8));
      uStack_1d8 = CONCAT44(1,uStack_88);
      uStack_1b8 = CONCAT44(local_64,uStack_68);
      local_1c0 = CONCAT44(uStack_6c,uStack_70);
      local_200 = local_b0;
      iStack_1e8 = iStack_98;
      uStack_1e4 = local_94;
      uStack_1f0 = uStack_a0;
      local_1ec = local_9c;
      lVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_200);
      *(long *)(this + 0x1958) = lVar4;
      bVar2 = bVar2 && lVar4 != 0;
    }
    local_1e0 = CONCAT44(uStack_8c,uStack_90);
    uStack_1c8 = CONCAT44(local_74,uStack_78);
    uStack_1d0 = CONCAT44(local_7c,local_80);
    local_1b0 = "SSAO Final Render Target";
    uStack_1f8 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,uStack_a8));
    uStack_1d8 = CONCAT44(1,uStack_88);
    uStack_1b8 = CONCAT44(local_64,uStack_68);
    local_1c0 = CONCAT44(uStack_6c,uStack_70);
    local_200 = local_b0;
    uStack_1e4 = local_94;
    uStack_1f0 = uStack_a0;
    local_1ec = (int)*(undefined8 *)(this + 0x1868);
    iStack_1e8 = (int)((ulong)*(undefined8 *)(this + 0x1868) >> 0x20);
    lVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_200);
    bVar2 = (bool)(bVar2 & lVar4 != 0);
  }
  else {
    local_b0 = CONCAT71(local_b0._1_7_,0xff);
    local_1a8 = &local_b0;
    local_1a0 = 0;
    uStack_19c = 0;
    uStack_198 = 0xffffffff;
    uStack_184 = 0;
    uStack_18c = 1;
    uStack_188 = 1;
    local_17c._4_4_ = local_17c._4_4_ & 0xffffff00;
    local_17c = CONCAT44(local_17c._4_4_,1);
    uStack_164 = 0;
    uStack_160 = 0x3f800000;
    uStack_16c = 0;
    uStack_168 = 0;
    local_15c = 0;
    local_158 = 0x4cf6fd;
    uStack_154 = 0;
    local_174 = 1;
    uStack_170 = 1;
    local_194 = 1;
    uStack_190 = 1;
    lVar4 = (**(code **)(*(long *)param_1 + 0x100))(param_1,plVar3,&local_1a8);
    bVar2 = lVar4 != 0;
  }
  *(long *)(this + 0x1960) = lVar4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


