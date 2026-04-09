// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setITextureObject
// Entry Point: 00962be8
// Size: 232 bytes
// Signature: undefined __thiscall setITextureObject(Texture * this, ITextureObject * param_1, bool param_2)


/* Texture::setITextureObject(ITextureObject*, bool) */

void __thiscall Texture::setITextureObject(Texture *this,ITextureObject *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (param_1 == (ITextureObject *)0x0) {
    uVar5 = *(ushort *)(this + 0x48);
    uVar4 = uVar5 >> 2;
  }
  else {
    uVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    uVar4 = (ushort)(byte)PixelFormatUtil::s_pixelFormats[(uVar3 & 0xffffffff) * 0x18 + 0xc];
    uVar5 = *(ushort *)(this + 0x48);
  }
  if (((uVar5 & 1) != 0) && (*(long **)(this + 0x68) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
    uVar5 = *(ushort *)(this + 0x48);
  }
  *(ITextureObject **)(this + 0x68) = param_1;
  *(ushort *)(this + 0x48) = uVar5 & 0xfffe | param_2 & 1;
  if (param_1 != (ITextureObject *)0x0) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    *(undefined4 *)(this + 0x4c) = uVar1;
    *(undefined4 *)(this + 0x50) = uVar2;
    uVar5 = 4;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) & 0xfffb | uVar5;
    *(undefined4 *)(this + 0x18) = 3;
  }
  return;
}


