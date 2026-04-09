// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextReflectionRenderTexture
// Entry Point: 00a36ea0
// Size: 432 bytes
// Signature: undefined __thiscall getNextReflectionRenderTexture(RenderTextureController * this, ITextureObject * * param_1, ITextureObject * * param_2)


/* RenderTextureController::getNextReflectionRenderTexture(ITextureObject*&, ITextureObject*&) */

void __thiscall
RenderTextureController::getNextReflectionRenderTexture
          (RenderTextureController *this,ITextureObject **param_1,ITextureObject **param_2)

{
  long lVar1;
  ITextureObject *pIVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  RenderTextureController local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(uint *)(this + 0x78);
  if (uVar3 == 8) {
    *param_1 = (ITextureObject *)0x0;
    *param_2 = (ITextureObject *)0x0;
  }
  else {
    pIVar2 = *(ITextureObject **)(this + (ulong)uVar3 * 8 + 0x38);
    if (pIVar2 == (ITextureObject *)0x0) {
      uVar6 = NEON_ucvtf(*(undefined8 *)(this + 8),4);
      plVar5 = *(long **)this;
      local_6c = 0x100000010;
      local_74 = *(undefined4 *)(this + 0x18);
      local_94 = 0xffffffff00000000;
      local_70 = this[0x1c];
      local_98 = 0;
      local_7c = 0;
      local_54 = 0;
      local_84 = 0x100000001;
      local_a0 = 0;
      local_50 = "ReflectionMap";
      local_8c = NEON_umax(CONCAT44((int)((float)((ulong)uVar6 >> 0x20) * *(float *)(this + 0x10)),
                                    (int)((float)uVar6 * *(float *)(this + 0x10))) &
                           0xffffffe0ffffffe0,0x2000000020,4);
      uStack_5c = 0x3f80000000000000;
      local_64 = 0;
      uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5);
      pIVar2 = (ITextureObject *)(**(code **)(*plVar5 + 0x100))(plVar5,uVar6,&local_a0);
      uVar3 = *(uint *)(this + 0x78);
      lVar4 = *(long *)(this + 0x30);
      *(ITextureObject **)(this + (ulong)uVar3 * 8 + 0x38) = pIVar2;
      if (lVar4 == 0) {
        local_74 = *(undefined4 *)(this + 0x20);
        plVar5 = *(long **)this;
        local_70 = (RenderTextureController)0x0;
        local_6c = CONCAT44(local_6c._4_4_,0x30);
        local_50 = "ReflectionDepthBuffer";
        uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5);
        uVar6 = (**(code **)(*plVar5 + 0x100))(plVar5,uVar6,&local_a0);
        uVar3 = *(uint *)(this + 0x78);
        *(undefined8 *)(this + 0x30) = uVar6;
        pIVar2 = *(ITextureObject **)(this + (ulong)uVar3 * 8 + 0x38);
      }
    }
    *param_1 = pIVar2;
    *param_2 = *(ITextureObject **)(this + 0x30);
    *(uint *)(this + 0x78) = uVar3 + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


