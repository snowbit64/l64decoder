// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShadowMapRenderTexture
// Entry Point: 00a077a0
// Size: 664 bytes
// Signature: undefined __thiscall createShadowMapRenderTexture(RenderController * this, uint param_1, uint param_2, float param_3, PIXEL_FORMAT param_4)


/* RenderController::createShadowMapRenderTexture(unsigned int, unsigned int, float,
   PixelFormat::PIXEL_FORMAT) */

void __thiscall
RenderController::createShadowMapRenderTexture
          (RenderController *this,uint param_1,uint param_2,float param_3,PIXEL_FORMAT param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  undefined local_120;
  undefined8 local_118;
  bool local_10c [4];
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  float local_64;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long **)(this + 0x20) == (long *)0x0) {
LAB_00a07828:
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    plVar3 = *(long **)(this + 0x30);
    if ((plVar3 != (long *)0x0) && (plVar3 != *(long **)(this + 0x20))) {
      (**(code **)(*plVar3 + 8))();
    }
    local_84 = 3;
    local_dc = 3;
    local_b0 = 0;
    local_a8 = 0;
    local_80 = 0;
    uStack_9c = 0x20000000200;
    local_a4 = 0xffffffffffffffff;
    uStack_8c = 0;
    local_94 = 0x100000001;
    local_7c = 0x100000001;
    uStack_6c = 0x3f80000000000000;
    local_74 = 0;
    local_64 = 0.0;
    local_60 = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f4 = 0x20000000200;
    local_fc = 0xffffffffffffffff;
    uStack_e4 = 0;
    local_ec = 0x100000001;
    local_d8 = 0;
    local_d4 = 0x100000001;
    uStack_c4 = 0x3f80000000000000;
    local_cc = 0;
    local_bc = 0;
    local_b8 = 0;
    RenderDeviceUtil::buildRenderTargetDesc
              (param_1,param_2,1,(float *)0x0,param_4,false,0,false,0x140,"Shadow RenderTarget",
               (TextureObjectDesc *)&local_b0);
    local_64 = param_3;
    RenderDeviceUtil::buildResolvedRenderTargetDescs
              (0x40,false,"Shadow ResolveTarget",*(IRenderDevice **)this,
               (TextureObjectDesc *)&local_b0,(TextureObjectDesc *)&local_108,local_10c);
    plVar3 = *(long **)this;
    uVar4 = (**(code **)(*plVar3 + 0x138))(plVar3);
    uVar4 = (**(code **)(*plVar3 + 0x100))(plVar3,uVar4,&local_b0);
    *(undefined8 *)(this + 0x20) = uVar4;
    if (local_10c[0] != false) {
      plVar3 = *(long **)this;
      uVar4 = (**(code **)(*plVar3 + 0x138))(plVar3);
      uVar4 = (**(code **)(*plVar3 + 0x100))(plVar3,uVar4,&local_108);
    }
    *(undefined8 *)(this + 0x30) = uVar4;
    local_124 = 0;
    local_118 = 0;
    local_138 = 1;
    local_120 = 1;
    uStack_12c = 0x200000000;
    local_134 = 0;
    uVar4 = (**(code **)(**(long **)this + 0xf8))(*(long **)this,&local_138);
    *(undefined8 *)(this + 0x28) = uVar4;
    if (*(long *)(this + 0x20) == 0) {
      if (*(long **)(this + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x30) + 8))();
      }
      uVar4 = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      goto LAB_00a07a04;
    }
  }
  else {
    uVar2 = (**(code **)(**(long **)(this + 0x20) + 0x20))();
    if ((uVar2 != param_1) ||
       (uVar2 = (**(code **)(**(long **)(this + 0x20) + 0x28))(), uVar2 != param_2)) {
      if (*(long **)(this + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x20) + 8))();
      }
      goto LAB_00a07828;
    }
  }
  uVar4 = 1;
LAB_00a07a04:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


