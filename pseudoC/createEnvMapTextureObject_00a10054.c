// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createEnvMapTextureObject
// Entry Point: 00a10054
// Size: 236 bytes
// Signature: undefined __thiscall createEnvMapTextureObject(EnvMapBlender * this, ImageDesc * param_1, char * param_2)


/* EnvMapBlender::createEnvMapTextureObject(ImageDesc const&, char const*) */

void __thiscall
EnvMapBlender::createEnvMapTextureObject(EnvMapBlender *this,ImageDesc *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_90;
  ImageDesc local_88;
  undefined local_87;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
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
  local_64 = PixelFormatUtil::getPixelFormat
                       (*(uint *)(param_1 + 0x14),*(FORMAT *)(param_1 + 0x40),
                        *(TYPE *)(param_1 + 0x18),true,param_2);
  local_90 = *(undefined8 *)(param_1 + 0x28);
  local_87 = 0;
  local_74 = 0x100000001;
  local_5c = 0x100000001;
  local_88 = param_1[0x48];
  local_6c = 0x200000000;
  local_44 = 0;
  uStack_4c = 0x3f80000000000000;
  local_54 = 0;
  local_7c = *(undefined8 *)param_1;
  local_84 = *(undefined4 *)(param_1 + 0x10);
  plVar3 = *(long **)(this + 0x548);
  local_60 = 0;
  uStack_80 = 0xffffffff;
  local_40 = param_2;
  uVar2 = (**(code **)(*plVar3 + 0x138))(plVar3);
  (**(code **)(*plVar3 + 0x100))(plVar3,uVar2,&local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


