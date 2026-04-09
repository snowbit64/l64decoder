// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setITextureObject
// Entry Point: 00962cd0
// Size: 172 bytes
// Signature: undefined __thiscall setITextureObject(Texture * this, ITextureObject * param_1, bool param_2, bool param_3)


/* Texture::setITextureObject(ITextureObject*, bool, bool) */

void __thiscall
Texture::setITextureObject(Texture *this,ITextureObject *param_1,bool param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(this + 0x48);
  if (((uVar3 & 1) != 0) && (*(long **)(this + 0x68) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
    uVar3 = *(ushort *)(this + 0x48);
  }
  *(ITextureObject **)(this + 0x68) = param_1;
  *(ushort *)(this + 0x48) = uVar3 & 0xfffe | param_2 & 1;
  if (param_1 != (ITextureObject *)0x0) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    *(undefined4 *)(this + 0x4c) = uVar1;
    *(undefined4 *)(this + 0x50) = uVar2;
    uVar3 = 4;
    if (!param_3) {
      uVar3 = 0;
    }
    *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) & 0xfffb | uVar3;
    *(undefined4 *)(this + 0x18) = 3;
  }
  return;
}


