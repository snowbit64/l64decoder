// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Texture
// Entry Point: 00961dec
// Size: 200 bytes
// Signature: undefined __thiscall Texture(Texture * this, char * param_1, uint param_2, ITextureObject * param_3, bool param_4, bool param_5)


/* Texture::Texture(char const*, unsigned int, ITextureObject*, bool, bool) */

void __thiscall
Texture::Texture(Texture *this,char *param_1,uint param_2,ITextureObject *param_3,bool param_4,
                bool param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  Resource::Resource((Resource *)this,param_1,param_2);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(ITextureObject **)(this + 0x68) = param_3;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR__Texture_00fe0690;
  uVar1 = param_5 & 1 | 4;
  if (!param_4) {
    uVar1 = param_5 & 1;
  }
  *(undefined ***)(this + 0x10) = &PTR__Texture_00fe06d8;
  lVar4 = *(long *)param_3;
  *(ushort *)(this + 0x48) = uVar1;
                    /* try { // try from 00961e50 to 00961ea3 has its CatchHandler @ 00961eb4 */
  uVar2 = (**(code **)(lVar4 + 0x18))(param_3);
  lVar4 = *(long *)param_3;
  *(undefined4 *)(this + 0x4c) = uVar2;
  uVar2 = (**(code **)(lVar4 + 0x10))(param_3);
  *(undefined4 *)(this + 0x50) = uVar2;
  this[0x20] = (Texture)0x1;
  *(undefined4 *)(this + 0x18) = 3;
  puVar3 = (undefined8 *)operator_new(8);
  *puVar3 = &PTR_reload_00fe0640;
  Resource::setCustomResourceReloader((Resource *)this,(CustomResourceReloader *)puVar3);
  return;
}


