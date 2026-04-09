// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepopulate
// Entry Point: 00a36ca8
// Size: 272 bytes
// Signature: undefined prepopulate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderTextureController::prepopulate() */

void RenderTextureController::prepopulate(void)

{
  long lVar1;
  long **in_x0;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  ITextureObject *pIStack_98;
  ITextureObject *local_90;
  undefined2 local_88;
  undefined8 local_84;
  long *local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  RenderTextureController local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(in_x0 + 0xf) = 0;
  if (in_x0[5] == (long *)0x0) {
    local_7c = in_x0[1];
    plVar4 = *in_x0;
    local_88 = 0;
    local_5c = 0x100000090;
    local_60 = *(RenderTextureController *)((long)in_x0 + 0x1c);
    local_6c = 0;
    local_84 = 0xffffffff00000000;
    local_64 = *(undefined4 *)(in_x0 + 3);
    local_74 = 0x100000001;
    local_44 = 0;
    uStack_4c = 0x3f80000000000000;
    local_54 = 0;
    local_90 = (ITextureObject *)0x0;
    local_40 = "RefractionMap";
    uVar2 = (**(code **)(*plVar4 + 0x138))(plVar4);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x100))(plVar4,uVar2,&local_90);
    in_x0[5] = plVar4;
  }
  if (*(int *)((long)in_x0 + 0x14) != 0) {
    uVar3 = 0;
    do {
      getNextReflectionRenderTexture((RenderTextureController *)in_x0,&local_90,&pIStack_98);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((long)in_x0 + 0x14));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


