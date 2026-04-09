// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Texture
// Entry Point: 00961ec8
// Size: 156 bytes
// Signature: undefined __thiscall Texture(Texture * this, char * param_1, uint param_2, PIXEL_FORMAT param_3, bool param_4, TEX_TYPE param_5)


/* Texture::Texture(char const*, unsigned int, PixelFormat::PIXEL_FORMAT, bool,
   ITextureObject::TEX_TYPE) */

void __thiscall
Texture::Texture(Texture *this,char *param_1,uint param_2,PIXEL_FORMAT param_3,bool param_4,
                TEX_TYPE param_5)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  
  Resource::Resource((Resource *)this,param_1,param_2);
  uVar2 = 4;
  if (!param_4) {
    uVar2 = 0;
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined2 *)(this + 0x48) = uVar2;
  *(PIXEL_FORMAT *)(this + 0x4c) = param_3;
  *(TEX_TYPE *)(this + 0x50) = param_5;
  *(undefined4 *)(this + 0x18) = 3;
  *(undefined ***)(this + 0x10) = &PTR__Texture_00fe06d8;
  *(undefined ***)this = &PTR__Texture_00fe0690;
  this[0x20] = (Texture)0x1;
                    /* try { // try from 00961f30 to 00961f53 has its CatchHandler @ 00961f64 */
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR_reload_00fe0640;
  Resource::setCustomResourceReloader((Resource *)this,(CustomResourceReloader *)puVar1);
  return;
}


