// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginOverlay
// Entry Point: 006f47cc
// Size: 1108 bytes
// Signature: undefined __thiscall beginOverlay(OverlayRenderManager * this, uint param_1, uint param_2, IRenderDevice * param_3, IDisplay * param_4)


/* OverlayRenderManager::beginOverlay(unsigned int, unsigned int, IRenderDevice*, IDisplay*) */

uint __thiscall
OverlayRenderManager::beginOverlay
          (OverlayRenderManager *this,uint param_1,uint param_2,IRenderDevice *param_3,
          IDisplay *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_164;
  undefined8 local_160;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = initializeShadersForDisplay(this,param_3,param_4,0);
  if ((uVar2 & 1) == 0) goto LAB_006f49f0;
  if (*(long *)(this + 0x4020) == 0) {
    uStack_158 = 0;
    uStack_156 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0x101;
    local_144 = local_144 & 0xffffff00;
    uStack_140 = 0;
    local_160 = (undefined4 *)0x200000001;
    uVar4 = (**(code **)(*(long *)param_3 + 0xe8))(param_3,&local_160);
    *(undefined8 *)(this + 0x4020) = uVar4;
    if (*(long *)(this + 0x4028) != 0) goto LAB_006f4830;
LAB_006f4a64:
    uVar3 = (uint)local_160;
    local_160 = (undefined4 *)CONCAT44(1,uVar3 & 0xffffff00);
    uVar4 = (**(code **)(*(long *)param_3 + 0xe0))(param_3,&local_160);
    *(undefined8 *)(this + 0x4028) = uVar4;
    if (*(long *)(this + 0x4030) != 0) goto LAB_006f4838;
LAB_006f4a90:
    local_160 = (undefined4 *)0x0;
    uStack_158 = 0;
    uStack_156 = 0;
    uStack_154 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_150 = 1;
    uStack_14c = 1;
    uStack_148 = 1;
    local_144 = 1;
    local_130 = 1;
    uStack_12c = 1;
    uStack_128 = 1;
    local_124 = 1;
    uStack_118 = 0x1010101;
    local_114 = 0x1010101;
    uStack_120 = 0x1010101;
    uStack_11c = 0x1010101;
    uVar4 = (**(code **)(*(long *)param_3 + 0xf0))(param_3,&local_160);
    *(undefined8 *)(this + 0x4030) = uVar4;
    lVar6 = *(long *)(this + 0x4010);
  }
  else {
    if (*(long *)(this + 0x4028) == 0) goto LAB_006f4a64;
LAB_006f4830:
    if (*(long *)(this + 0x4030) == 0) goto LAB_006f4a90;
LAB_006f4838:
    lVar6 = *(long *)(this + 0x4010);
  }
  if (lVar6 == 0) {
    uStack_148 = uStack_148 & 0xffffff00;
    uStack_150 = 2;
    uStack_14c = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_158 = 2;
    uStack_156 = 0;
    uStack_154 = 2;
    local_160 = (undefined4 *)0x200000001;
    uVar4 = (**(code **)(*(long *)param_3 + 0xf8))(param_3,&local_160);
    *(undefined8 *)(this + 0x4010) = uVar4;
  }
  if (*(long *)this == 0) {
    uStack_154 = 0;
    uStack_150 = 0xffffffff;
    local_160 = &local_164;
    local_164 = 0xff000000;
    uStack_134 = 5;
    uStack_13c = 0;
    uStack_138 = 0;
    local_144 = 1;
    uStack_140 = 1;
    uStack_158 = 0;
    local_130 = local_130 & 0xffffff00;
    local_110 = 0x4ec73e;
    uStack_10c = 0;
    uStack_12c = 1;
    uStack_128 = 1;
    uStack_11c = 0;
    uStack_118 = 0x3f800000;
    local_124 = 0;
    uStack_120 = 0;
    local_114 = 0;
    uStack_14c = 1;
    uStack_148 = 1;
    uVar4 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
    uVar4 = (**(code **)(*(long *)param_3 + 0x100))(param_3,uVar4,&local_160);
    *(undefined8 *)this = uVar4;
    if (*(long *)(this + 0x4018) != 0) goto LAB_006f4854;
LAB_006f4b90:
    uStack_158 = 0;
    uStack_156 = 0;
    uStack_154 = 0;
    local_160 = (undefined4 *)CONCAT44(local_160._4_4_,0x20);
    uStack_150 = 8;
    uVar4 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
    uVar4 = (**(code **)(*(long *)param_3 + 0x118))(param_3,uVar4,&local_160);
    *(undefined8 *)(this + 0x4018) = uVar4;
    lVar6 = *(long *)(this + 0x4038);
  }
  else {
    if (*(long *)(this + 0x4018) == 0) goto LAB_006f4b90;
LAB_006f4854:
    lVar6 = *(long *)(this + 0x4038);
  }
  if (lVar6 == 0) {
    uStack_158 = 0;
    uStack_156 = 0;
    uStack_154 = 0;
    local_160._4_4_ = (undefined4)((ulong)local_160 >> 0x20);
    local_160 = (undefined4 *)CONCAT44(local_160._4_4_,4);
    uStack_150 = 8;
    uVar4 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
    uVar4 = (**(code **)(*(long *)param_3 + 0x118))(param_3,uVar4,&local_160);
    *(undefined8 *)(this + 0x4038) = uVar4;
  }
  if (*(long **)(this + 0x4008) == (long *)0x0) {
LAB_006f48a8:
    uStack_158 = 0;
    uStack_11c = 0;
    uStack_118 = 0x3f800000;
    local_124 = 0;
    uStack_120 = 0;
    uStack_12c = 0x10;
    uStack_128 = 1;
    uStack_154 = 0;
    uStack_150 = 0xffffffff;
    uStack_13c = 0;
    local_130 = CONCAT31(local_130._1_3_,1);
    local_144 = 1;
    uStack_140 = 1;
    local_114 = 0;
    local_110 = 0x4e9d64;
    uStack_10c = 0;
    local_160 = (undefined4 *)0x0;
    uStack_138 = 0;
    uStack_134 = 5;
    uStack_14c = param_1;
    uStack_148 = param_2;
    uVar4 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
    uVar4 = (**(code **)(*(long *)param_3 + 0x100))(param_3,uVar4,&local_160);
    *(undefined8 *)(this + 0x4008) = uVar4;
  }
  else {
    uVar3 = (**(code **)(**(long **)(this + 0x4008) + 0x20))();
    if ((uVar3 != param_1) ||
       (uVar3 = (**(code **)(**(long **)(this + 0x4008) + 0x28))(), uVar3 != param_2)) {
      if (*(long **)(this + 0x4008) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x4008) + 8))();
      }
      goto LAB_006f48a8;
    }
  }
  plVar5 = (long *)(**(code **)(*(long *)param_3 + 0x138))(param_3);
  uStack_148 = 0;
  local_144 = 0;
  uStack_12c = uStack_12c & 0xffffff00;
  local_130 = 3;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  local_114 = 0;
  uStack_128 = 0;
  local_124 = 0;
  local_70 = "OverlayRenderManager";
  uVar4 = *(undefined8 *)(this + 0x4008);
  local_110 = 0;
  uStack_104 = 0x300000003;
  uStack_10c = 2;
  uStack_108 = 1;
  local_fc = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = 0;
  local_e0 = 0;
  uStack_d4 = 0x300000003;
  local_dc = 0x100000002;
  local_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  uStack_a4 = 0x300000003;
  local_ac = 0x100000002;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x300000003;
  local_88 = 0x100000002;
  local_78 = 0;
  local_160 = (undefined4 *)CONCAT44(local_160._4_4_,1);
  uStack_158 = (undefined2)uVar4;
  uStack_156 = (undefined2)((ulong)uVar4 >> 0x10);
  uStack_154 = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_140 = 0;
  uStack_13c = 1;
  uStack_138 = 1;
  uStack_134 = 0;
  (**(code **)(*plVar5 + 0x38))(plVar5,&local_160,0,1,0,0,param_1,param_2);
  this[0x4040] = (OverlayRenderManager)0x1;
LAB_006f49f0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


