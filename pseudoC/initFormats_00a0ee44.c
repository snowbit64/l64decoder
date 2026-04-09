// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initFormats
// Entry Point: 00a0ee44
// Size: 92 bytes
// Signature: undefined __thiscall initFormats(EnvMapBlender * this, ImageDesc * param_1)


/* EnvMapBlender::initFormats(ImageDesc const&) */

void __thiscall EnvMapBlender::initFormats(EnvMapBlender *this,ImageDesc *param_1)

{
  uint uVar1;
  TYPE TVar2;
  FORMAT FVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (this[0x530] == (EnvMapBlender)0x0) {
    FVar3 = *(FORMAT *)(param_1 + 0x40);
    uVar1 = *(uint *)(param_1 + 0x14);
    TVar2 = *(TYPE *)(param_1 + 0x18);
    this[0x530] = (EnvMapBlender)0x1;
    uVar5 = PixelFormatUtil::getPixelFormat(uVar1,FVar3,TVar2,true,"EnvBlendOuput");
    uVar4 = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x534) = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x538) = uVar4;
    *(undefined4 *)(this + 0x53c) = uVar5;
  }
  return;
}


